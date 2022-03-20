# LDMud 3.6.6 LPC Grammar

Extracted by hand from `src/prolang.y`. All mistakes should be assumed to be
mine. Doesn't include details from `src/lex.c`. Basically I just wanted a way to
refer to the grammar without scanning a long `.c` file that has to intermix
grammar and C code.

See [prolang.y][prolang.y] for more information.

[prolang.y]: https://github.com/ldmud/ldmud/blob/f597dee3c3a3dd09af27687163d88bb1dde6fa35/src/prolang.y#L8021-L106067

```

%right    L_ASSIGN
%right    '?'
%left     L_LOR
%left     L_LAND
%left     '|'
%left     '^'
%left     '&'
%left     L_EQ    L_NE  L_IDENTIFIER
%left     '<'     L_LE  '>' L_GE
%left     L_LSH   L_RSH L_RSHL
%left     '+'     '-'
%left     '*'     '/'   '%'
%right    '~'     L_NOT
%nonassoc L_INC   L_DEC
%left     '.'     L_ARROW '['
%%


all: program;


program:
      program def possible_semi_colon
    | /* empty */


possible_semi_colon:
      /* empty */
    | ';'


def:  function_def
    | coroutine_def
    | name_list ';' /* Variable definition */
    | struct_decl
    | inheritance
    | default_visibility


function_def:
      type L_IDENTIFIER  /* Function definition or prototype */
      '(' argument ')'
      function_body


function_body:
      block
    | ';'


coroutine_def:
      L_ASYNC
      function_def


inline_func:
      inline_opt_async L_FUNC inline_opt_type
      inline_opt_args
      inline_opt_context
      inline_block
    | L_BEGIN_INLINE
      statements inline_comma_expr
      L_END_INLINE


inline_opt_async:
      /* empty */
    | L_ASYNC


inline_opt_args:
      /* empty */
    | '(' argument ')'


inline_opt_type:
      /* empty */
    | basic_type


inline_opt_context:
      /* empty */
    |  ':' inline_context_list inline_semi


inline_semi:
      /* empty */
    | ';'


inline_context_list:
      /* empty */
    | context_decl
    | inline_context_list ';' context_decl


context_decl:
      local_name_list


inline_comma_expr:
      /* Empty: nothing to do */
    | comma_expr


inline_block:
      block
    | error


struct_decl:
      type_modifier_list L_STRUCT L_IDENTIFIER ';'
    | type_modifier_list L_STRUCT L_IDENTIFIER


opt_base_struct:
      /* empty */ { }
    | '(' L_IDENTIFIER ')'


opt_member_list:
      /* empty */
    | member_list


member_list:
      member
    | member_list member


member:
      member_name_list ';'


member_name_list:
      basic_non_void_type L_IDENTIFIER
    | member_name_list ',' optional_stars L_IDENTIFIER


inheritance:
      inheritance_qualifiers L_INHERIT string_constant ';'


inheritance_qualifiers:
      /* Inheritance can be qualified simple ("public inherit...")
       * or separate for code and variables.
       */

      inheritance_modifier_list
    | inheritance_qualifier inheritance_qualifiers


inheritance_modifier:
      L_VIRTUAL


inheritance_modifier_list:
      type_modifier_list
    | inheritance_modifier_list inheritance_modifier type_modifier_list


inheritance_qualifier:
      type L_IDENTIFIER


/* Default visibility.
 * We use the inheritance modifier notation to specify the default
 * visibility of functions and variables.
 */
default_visibility:
    L_DEFAULT inheritance_qualifiers ';'

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
/* Type specifications and casts
 *
 * The type rules are used to parse variable and function types, casts,
 * or just visibility e.g for inheritance.
 */

optional_stars:
      /* empty */
    | optional_stars '*'


type: type_modifier_list opt_basic_type


non_void_type: type_modifier_list opt_basic_non_void_type


type_modifier_list:
      /* empty */
    | type_modifier_list type_modifier


type_modifier:
      L_NO_MASK
    | L_STATIC
    | L_PRIVATE    { $$ = TYPE_MOD_PRIVATE; }
    | L_PUBLIC
    | L_VARARGS
    | L_PROTECTED
    | L_NOSAVE
    | L_DEPRECATED
    | L_VISIBLE


opt_basic_type:
      basic_type
    | /* empty */


opt_basic_non_void_type:
      basic_non_void_type
    | /* empty */


basic_non_void_type:
      single_basic_non_void_type
    | basic_non_void_type '|' single_basic_non_void_type


single_basic_non_void_type:
      L_STATUS
    | L_INT
    | L_BYTES_DECL
    | L_STRING_DECL
    | L_CLOSURE_DECL
    | L_COROUTINE
    | L_SYMBOL_DECL
    | L_FLOAT_DECL
    | L_MAPPING
    | L_MIXED
    | L_OBJECT
    | L_OBJECT simple_string_constant
    | L_LWOBJECT
    | L_LWOBJECT simple_string_constant
    | L_STRUCT identifier
    | single_basic_non_void_type '*'
    | '<' basic_non_void_type '>'


basic_type:
      basic_non_void_type
    | L_VOID


cast:
      '(' single_basic_non_void_type ')'


decl_cast:
      '(' '{' basic_type '}' ')'


identifier:
      L_IDENTIFIER

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

/* Argument and variable definitions
 */

argument:
      /* empty */
    | L_VOID
    | argument_list


argument_list:
      new_arg_name
    | argument_list ',' new_arg_name


new_arg_name:
      non_void_type L_IDENTIFIER opt_default_value


opt_default_value:
      /* empty */
    | L_ASSIGN expr0


name_list:
      /* Simple variable definition */
      type L_IDENTIFIER
      /* Variable definition with initialization */
    | type L_IDENTIFIER
      L_ASSIGN expr0
    | name_list ',' optional_stars L_IDENTIFIER
      /* Variable definition with initialization */
    | name_list ',' optional_stars L_IDENTIFIER
      L_ASSIGN expr0


/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
/* Blocks and simple statements.
 */

block:
    '{' statements_block '}'


statements_block:
      statements


statements:
      /* empty */
    | statements local_name_list ';'
    | statements statement


local_name_list:
      basic_type L_IDENTIFIER
    | basic_type L_IDENTIFIER
      L_ASSIGN expr0
    | local_name_list ',' optional_stars L_IDENTIFIER
    | local_name_list ',' optional_stars  L_IDENTIFIER
      L_ASSIGN expr0


statement:
      comma_expr ';'
    | error ';' /* Synchronisation point */
    | cond | while | do | for | foreach | switch
    | return ';'
    | block
    | /* empty */ ';'
    | L_BREAK ';'
    | L_CONTINUE ';'


return:
      L_RETURN
    | L_RETURN comma_expr


/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
/* The while() statement
 */

while:
      L_WHILE '(' comma_expr ')'
      statement


/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
/* The do-while() statement
 */

do:
      L_DO statement L_WHILE
      '(' comma_expr ')' ';'


/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
/* The for() statement.
 */

for:
      L_FOR '('
      for_init_expr ';'
      for_cond_expr ';'
      for_iter_expr ')'
      statement


/* Special rules for 'int <name> = <expr>' declarations in the first
 * for() expression.
 */
for_init_expr:
      /* EMPTY */
    | comma_expr_decl


comma_expr_decl:
      expr_decl
    | comma_expr_decl
      ',' expr_decl


expr_decl:
      expr0
    | local_name_lvalue L_ASSIGN expr0
    | local_name_lvalue


for_cond_expr:
      /* EMPTY */
    | comma_expr


for_iter_expr:
      /* EMPTY */
    | comma_expr


/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
/* The foreach() statement
 */

foreach:
      L_FOREACH '('
      foreach_vars foreach_in
      foreach_expr ')'
      statement


foreach_vars : 
      foreach_var_decl
    | foreach_vars ',' foreach_var_decl


foreach_var_decl:
      /* TODO: It is tempting to add an alternative "| lvalue",
       * TODO:: but then we get masses of reduce/reduce conflicts
       * TODO:: between lvalue and expr4. Dunno why.
       */
      foreach_var_lvalue


foreach_var_lvalue: 
      local_name_lvalue
    | name_var_lvalue


foreach_in:
      keyword_in
    | ':'


foreach_expr:
      expr0
    | expr0 L_RANGE expr0


keyword_in:
      /* The purpose of this rule is to avoid making "in" a reserved word.
       * Instead we require an identifier/local with the name "in".
       */
      L_IDENTIFIER


/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
/* The switch statement.
 *
 * switch.h explains how the bytecode looks like.
 *
 * Note that the actual switch rule is:
 *
 *   switch: L_SWITCH ( comma_expr ) '{' switch_block '}'
 *
 * and that case and default are explicitly parsed in the
 * switch_block rule. Each group of statements after a
 * label have their own scope, so that variable declarations
 * within the switch block may not cross case labels.
 *
 * That also means that in contrast to C the code
 *
 *    switch(x);
 * or switch(x) write("Foo");
 * or switch(x) {{ case "foo": break; }}
 *
 * is syntactically not ok.
 */
switch:
      L_SWITCH '(' comma_expr ')'
      '{'
      switch_block
      '}'


switch_block:
      switch_block switch_statements
    | switch_statements


switch_statements:
    switch_label statements_block


switch_label:
      case
    | default


case: L_CASE case_label ':'
    | L_CASE case_label L_RANGE case_label ':'


case_label:
      constant
    | case_string_label


case_string_label: string_constant | bytes_constant;


default:
      L_DEFAULT ':'


/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
/* The if()-statement.
 */

condStart:
      L_IF '(' comma_expr ')'


cond:
      condStart
      statement
      optional_else


optional_else:
      /* empty */ %prec LOWER_THAN_ELSE
    | L_ELSE
      statement


/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
/* Constants
 *
 * The rules here implement constant folding for numeric and string constants.
 */

constant:
      constant '|'   constant
    | constant '^'   constant
    | constant '&'   constant
    | constant L_EQ  constant
    | constant L_NE  constant
    | constant '>'   constant
    | constant L_GE  constant
    | constant '<'   constant
    | constant L_LE  constant
    | constant L_LSH constant
    | constant L_RSH constant
    | constant L_RSHL constant
    | constant '+'   constant
    | constant '-'   constant
    | constant '*'   constant
    | constant '%'   constant
    | constant '/'        constant
    | '(' constant ')'
    | '-'   constant %prec '~'
    | L_NOT constant
    | '~'   constant
    | L_NUMBER


/* The simple_string_constant is similar to string_constant, but
 * forbids the use of paranthesis to avoid shift/reduce conflicts,
 * for example between
 *    function object ("/i/room") () {}
 *    function object             () {}
 */
simple_string_constant:
      L_STRING
    | simple_string_constant '+' L_STRING
    | L_STRING L_STRING
      // { fatal("L_STRING LSTRING: presence of rule should prevent its reduction\n"); }
    | simple_string_constant '+' L_STRING L_STRING
      // { fatal("L_STRING LSTRING: presence of rule should prevent its reduction\n"); }


string_constant:
      L_STRING
    | string_constant '+' L_STRING
    | L_STRING L_STRING
      // { fatal("L_STRING LSTRING: presence of rule should prevent its reduction\n"); }
    | string_constant '+' L_STRING L_STRING
      // { fatal("L_STRING LSTRING: presence of rule should prevent its reduction\n"); }
    | '(' string_constant ')'


bytes_constant:
      L_BYTES
    | bytes_constant '+' L_BYTES
    | L_BYTES L_BYTES
      // { fatal("L_BYTES L_BYTES: presence of rule should prevent its reduction\n"); }
    | bytes_constant '+' L_BYTES L_BYTES
      // { fatal("L_BYTES L_BYTES: presence of rule should prevent its reduction\n"); }
    | '(' bytes_constant ')'


/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
/* Expressions
 *
 * expr0 (with the help of the precedence and assoc specifications) handles
 * most of the expressions, and returns full lrvalues.
 *
 * expr4 contains the expressions atoms (literal values), function calls
 * and expressions returning values which might be used as rvalues
 * as well as lvalues. It returns full lrvalues.
 *
 * lvalue contains expressions for unprotected lvalues and returns lvalues.
 *
 * name_var_lvalue is a special lvalue that ignores any lvalues in the variable
 * and is used the modify the direct content of the variable (normally
 * if a variable already contents an lvalue, then an lvalue of that variable
 * would use that lvalue; with name_var_lvalue this doesn't happen).
 * It currently is used by foreach().
 *
 * local_name_lvalue is to be used in contexts where new local variables
 * may be defined on the fly (for example "for(int i...").
 *
 * index_expr and index_range are used to parse and compile the two
 * forms of array indexing operations.
 *
 * comma_expr parsed a comma separated list of expr0 (at least one),
 * all of the results but the last one are discarded, returns
 * an rvalue for the whole block.
 *
 * opt_expr parses an optional expr0 which must start with a comma.
 * If no expression is given, F_CONST0 will be issued instead.
 * It returns an rvalue.
 */

comma_expr:
      expr0
    | comma_expr
      ',' expr0


opt_expr:
      /* Empty */
    | ',' expr0


expr0:
    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

      /* Normal assign:               ||= (&&= analog):
       */
      lvalue L_ASSIGN 
      expr0 %prec L_ASSIGN

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | error L_ASSIGN expr0  %prec L_ASSIGN

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr0 '?'
      expr0
      ':' expr0 %prec '?'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr0 L_LOR %prec L_LOR
      expr0

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr0 L_LAND %prec L_LAND
      expr0

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr0 '|' expr0

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr0 '^' expr0

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr0 '&' expr0

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr0 L_EQ expr0

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr0 L_NE expr0

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr0 keyword_in expr0 %prec L_EQ

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr0 '>'  expr0
    | expr0 L_GE  expr0
    | expr0 '<'  expr0
    | expr0 L_LE  expr0

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr0 L_LSH expr0

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr0 L_RSH expr0

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr0 L_RSHL expr0

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr0 '+'
      expr0

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr0 '-' expr0

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr0 '*' expr0

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr0 '%' expr0

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr0 '/' expr0

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | decl_cast expr0 %prec '~'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | cast expr0 %prec '~'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | pre_inc_dec lvalue %prec L_INC

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | L_NOT expr0

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | '~' expr0

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | '-' expr0 %prec '~'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | lvalue L_INC %prec L_INC

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | lvalue L_DEC %prec L_DEC

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | lvalue_reference %prec '~'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | lvalue_reference L_ASSIGN expr0 %prec L_ASSIGN

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr4


lvalue_reference:
    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
      '&' name_lvalue
    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | '&' '(' lvalue ')'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | '&' '(' function_call ')'


pre_inc_dec:
      L_INC
    | L_DEC


expr4:
      function_call  %prec '~'
    | inline_func    %prec '~'
    | catch          %prec '~'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | L_STRING

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | L_BYTES L_BYTES
    | L_BYTES

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | L_NUMBER

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | L_CLOSURE

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | L_SIMUL_EFUN_CLOSURE

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | L_SYMBOL

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | L_FLOAT

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | '(' note_start comma_expr ')'        %prec '~'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | '(' '{' note_start expr_list '}' ')' %prec '~'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | L_QUOTED_AGGREGATE note_start expr_list '}' ')' %prec '~'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | '(' '[' ':' note_start
      expr0 ']' ')'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | '(' '[' note_start m_expr_list ']' ')'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | '(' '<' note_start '>' ')'
    | '(' '<' note_start error ')'
    | '(' '<' identifier '>'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | L_IDENTIFIER

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr4 member_operator struct_member_name %prec L_ARROW

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr4 index_expr %prec '['

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr4 index_range %prec '['

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr4 '[' expr0 ',' expr0 ']' %prec '['


name_lvalue:
    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    L_IDENTIFIER


lvalue:
    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    name_lvalue

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr4 index_expr %prec '['

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr4 '[' expr0 ',' expr0 ']' %prec '['

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr4 index_range %prec '['

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr4 member_operator struct_member_name %prec L_ARROW

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | L_DUMMY
          /* This rule is there to distinguish the 'lvalue' rules
           * from the expr4 rules and thus to prevent conflicts
           * because of the LALR simplication process.
           * (Alternatively the canonical-lr parser could be used.)
           */


name_var_lvalue:
    name_lvalue


local_name_lvalue:
      basic_type L_IDENTIFIER

/* The following rules are used to parse and compile the various
 * forms of array indexing/ranging operations.
 * They used at various places in the rules of expr0, expr4 and lvalue.
 */


index_expr :
      '[' expr0 ']'
    | '[' '<' expr0 ']'
    | '[' '>' expr0 ']'


index_range :
      '['           L_RANGE     expr0 ']'
    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | '['           L_RANGE '<' expr0 ']'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | '['           L_RANGE '>' expr0 ']'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | '['     expr0 L_RANGE     expr0 ']'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | '['     expr0 L_RANGE '<' expr0 ']'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | '[' '<' expr0 L_RANGE     expr0 ']'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | '[' '<' expr0 L_RANGE '<' expr0 ']'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | '['     expr0 L_RANGE '>' expr0 ']'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | '[' '>' expr0 L_RANGE     expr0 ']'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | '[' '<' expr0 L_RANGE '>' expr0 ']'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | '[' '>' expr0 L_RANGE '<' expr0 ']'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | '[' '>' expr0 L_RANGE '>' expr0 ']'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | '['     expr0 L_RANGE           ']'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | '[' '<' expr0 L_RANGE           ']'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | '[' '>' expr0 L_RANGE           ']'


/* The following rules are used to construct array and
 * mapping literals in expr4, and argument lists in function calls.
 * Besides compiling the values, the rules count the number
 * of values generated and add the types to the arg_types[].
 */

expr_list:
      /* empty */
    | expr_list2
    | expr_list2 ',' /* Allow a terminating comma */


expr_list2:
      expr0
    | expr_list2 ',' expr0


/* Expression lists for function call arguments.
 * These can contain ellipsis ('arr..').
 */

arg_expr_list:
      /* empty */
    | arg_expr_list2


arg_expr_list2:
      arg_expr
    | arg_expr_list2 ',' arg_expr


arg_expr:
      expr0
    | expr0 L_ELLIPSIS


m_expr_list:
      /* empty */
    | m_expr_list2
    | m_expr_list2 ','  /* Allow a terminating comma */
    | expr_list2
    | expr_list2 ','


m_expr_list2:
      expr0  m_expr_values
    | m_expr_list2 ',' expr0 m_expr_values


m_expr_values:
      ':' expr0
    | m_expr_values ';' expr0


/* Rule used to parse a static or dynamic member name in lookups */

struct_member_name:
      identifier
    | L_STRING L_STRING
      /* { fatal("presence of rule should prevent its reduction"); } */
    | L_STRING
    |  '(' expr0 ')'



/* The following rules are used to parse struct literals in expressions */

opt_struct_init:
      /* empty */
    | opt_struct_init2  possible_comma
    | opt_struct_init2 ',' error
          /* Allow the parser to resynchronize */


possible_comma :
    | ','


opt_struct_init2:
      struct_init
    | opt_struct_init2 ',' struct_init


struct_init:
      identifier ':' expr0
    | expr0

/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
/* Function calls, coroutine calls and inline functions.
 */

function_call:

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
      function_name
      '(' arg_expr_list ')'

    /*- - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    | expr4 member_operator call_other_name %prec L_ARROW
    | coroutine_call


member_operator:
      L_ARROW
    | '.'


call_other_name:
      identifier
    | L_STRING L_STRING
    | L_STRING
    |  '(' expr0 ')'


function_name:
      L_IDENTIFIER
    | L_COLON_COLON L_IDENTIFIER
    | anchestor L_COLON_COLON L_IDENTIFIER


anchestor:
      L_IDENTIFIER
    | L_STRING L_STRING
      /* { fatal("presence of rule should prevent its reduction"); } */
    | L_STRING


coroutine_call:
      L_AWAIT '(' expr0 opt_expr ')'
    | L_YIELD '(' expr0 ',' expr0 ')'
    | L_YIELD '(' expr0 ')'
    | L_YIELD '(' ')'


/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
/* The catch()-statement
 */

catch:
      L_CATCH
      '(' comma_expr note_start opt_catch_mods ')'


opt_catch_mods :
      ';' opt_catch_mod_list
    | /* empty */


opt_catch_mod_list :
      opt_catch_mod_list ',' opt_catch_modifier
    | opt_catch_modifier


opt_catch_modifier :
      identifier
    | identifier expr0
```
