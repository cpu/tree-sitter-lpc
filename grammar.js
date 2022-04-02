// TODO(XXX): Better match to ld.
const PREC = {
  PAREN_DECLARATOR: -10,
  CONDITIONAL: -2,
  ASSIGNMENT: -1,
  DEFAULT: 0,
  LOGICAL_OR: 1,
  LOGICAL_AND: 2,
  INCLUSIVE_OR: 3,
  EXCLUSIVE_OR: 4,
  BITWISE_AND: 5,
  EQUAL: 6,
  RELATIONAL: 7,
  SHIFT: 8,
  ADD: 9,
  MULTIPLY: 10,
  CAST: 11,
  UNARY: 12,
  //CALL: 13 -- hacked CALL to be higher than FIELD... Need to revisit!
  CALL: 15,
  INLINE: 13,
  FIELD: 14,
  SUBSCRIPT: 15
};

module.exports = grammar({
  name: 'LPC',

  extras: $ => [
    /\s|\\\r?\n/,
    $.comment,
  ],

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.function_definition,
      $.global_var,
      $.struct_definition,
      $.inheritance,
      $.default_visibility,
    ),

    function_definition: $ => seq(
      field('async', optional($.async_modifier)),
      field('modifiers', repeat($.type_modifier)),
      field('type', optional($._basic_type)),
      field('name', $.identifier),
      field('arguments', $.parameter_list),
      field('body', $._function_body),
    ),

    // TODO: rename back to "argument" and friends to match LD grammar?
    parameter_list: $ => seq(
      '(',
      choice(
        commaSep($.parameter),
        "void"
      ),
      ')'
    ),

    parameter: $ => seq(
      optional("varargs"),
      field('arg_type', $.non_void_type),
      field('arg_name', $.identifier),
      field('arg_default', optional($.opt_default_value)),
    ),

    opt_default_value: $ => seq(
      '=',
      $._expression,
    ),

    struct_definition: $ => seq(
      field('modifiers', repeat($.type_modifier)),
      'struct',
      field('name', $.identifier),
      field('definition', optional($.struct_member_list)),
      ';'
    ),

    struct_member_list: $ => seq(
      field('base_struct', optional(seq(
        '(',
        $.identifier,
        ')'
      ))),
      '{',
      repeat($.struct_member),
      '}',
    ),

    struct_member: $ => seq(
      field('type', $.non_void_type),
      field('name', $.identifier),
      ';'
    ),

    inheritance: $ => seq(
      field('qualifier', choice(
        repeat($.scoped_inheritance_qualifier),
        repeat($.type_modifier),
      )),
      field('inheritance_modifiers', repeat($.inheritance_modifier)),
      'inherit',
      field('inherit_path', $.string_literal),
      ';',
    ),

    scoped_inheritance_qualifier: $ => seq(
      field('modifiers', repeat($.type_modifier)),
      field('scope', choice($.inheritance_scope)),
    ),

    inheritance_scope: $ => choice(
      'variables',
      'functions',
    ),

    inheritance_modifier: $ => choice(
      'virtual',
    ),

    default_visibility: $ => seq(
      'default',
      field('qualifier', choice(
        repeat($.scoped_inheritance_qualifier),
        repeat($.type_modifier),
      )),
      ';',
    ),

    // TODO: split into expr4 and expr0?
    _expression: $ => choice(
      $.conditional_expression,
      $.assignment_expression,
      $.binary_expression,
      $.unary_expression,
      $.update_expression,
      $.cast_expression,
      $.decl_cast_expression,
      $.lvalue_ref_expression,
      // lvalue ref + assign
      $._expr4,
    ),

    _expr4: $ => choice(
      $.function_call,
      $.inline_func,
      $.inline_closure,
      $.catch_expr,
      $.string_literal,
      $.concatenated_string,
      $.bytes_literal,
      $.concatenated_bytes_string,
      $.char_literal,
      $.number_literal,
      $.closure,
      $.symbol,
      prec(PREC.UNARY, seq( '(', $._comma_expr, ')')),
      $.array_literal,
      $.quoted_aggregate,
      $.empty_mapping_literal,
      $.mapping_literal,
      $.struct_literal,
      $.identifier,
      $.struct_member_lookup,
      prec(PREC.SUBSCRIPT, seq($._expr4, $.index_expr)),
      prec(PREC.SUBSCRIPT, seq($._expr4, $.index_range)),
      prec(PREC.SUBSCRIPT, seq(
        $._expr4, 
        '[',
        $._expression,
        ',',
        $._expression,
        ']'
      )),
    ),

    async_modifier: $ => seq(
      'async'
    ),

    inline_func: $ => prec(PREC.INLINE, seq(
      field('async', optional($.async_modifier)),
      'function',
      field('type', optional($._basic_type)),
      field('arguments', $.parameter_list),
      field('context', optional($.inline_context)),
      field('body', $._function_body),
    )),

    // TODO(XXX): Needed to handle a conflict here. Presently using right
    // associativity but unclear if this is wise/correct. I will revist later!
    inline_context: $ => prec.right(seq(
      ':',
      semicolonSep($.local_var),
      optional(';'),
    )),

    inline_closure: $ => prec(PREC.INLINE, seq(
      '(', ':',
      repeat($._statement),
      commaSep($._expression),
      ':', ')',
    )),

    catch_expr: $ => prec(PREC.INLINE, seq(
      'catch',
      '(',
      $._comma_expr,
      seq(';', semicolonSep($.catch_modifier)),
      ')',
    )),

    catch_modifier: $ => choice(
      'nolog',
      'publish',
      seq(
        'reserve',
        $._expression,
      ),
    ),

    function_call: $ => prec(PREC.CALL, choice(
      // Simple function call.
      seq(
        field('function', $._function_name),
        field('arguments', seq(
          '(',
          commaSep($._expression),
          optional('...'),
          ')',
        ))
      ),
      // Call-other.
      seq(
        field('target', $._expr4),
        $.member_operator,
        field('function', $._call_other_name),
        field('arguments', seq(
          '(',
          commaSep($._expression),
          optional('...'),
          ')',
        ))
      ),
      // TODO(XXX): Async function calls w/ yield.
    )),

    _function_name: $ => choice(
      $.identifier,
      seq('::', $.identifier),
      seq($.ancestor, '::', $.identifier),
    ),

    ancestor: $ => choice(
      $.identifier,
      $.string_literal,
      $.concatenated_string,
    ),

    member_operator: $ => choice(
      '->',
      '.',
    ),

    _call_other_name: $ => prec(PREC.CALL, choice(
      $.identifier,
      $.string_literal,
      $.concatenated_string,
      seq(
        '(',
        $._expression,
        ')',
      ),
    )),

    conditional_expression: $ => prec.right(PREC.CONDITIONAL, seq(
      field('condition', $._expression),
      '?',
      field('consequence', $._expression),
      ':',
      field('alternative', $._expression)
    )),

    assignment_operator: $ => choice(
        '=',
        '*=',
        '/=',
        '%=',
        '+=',
        '-=',
        '<<=',
        '>>=',
        '>>>=',
        '&=',
        '&&=',
        '^=',
        '|=',
        '||='
    ),

    assignment_expression: $ => prec.right(PREC.ASSIGNMENT, seq(
      field('left', $._lvalue),
      field('operator', $.assignment_operator),
      field('right', $._expression)
    )),

    // TODO(XXX): Consider 'in'.
    binary_expression: $ => {
      const table = [
        ['+', PREC.ADD],
        ['-', PREC.ADD],
        ['*', PREC.MULTIPLY],
        ['/', PREC.MULTIPLY],
        ['%', PREC.MULTIPLY],
        ['||', PREC.LOGICAL_OR],
        ['&&', PREC.LOGICAL_AND],
        ['|', PREC.INCLUSIVE_OR],
        ['^', PREC.EXCLUSIVE_OR],
        ['&', PREC.BITWISE_AND],
        ['==', PREC.EQUAL],
        ['!=', PREC.EQUAL],
        ['>', PREC.RELATIONAL],
        ['>=', PREC.RELATIONAL],
        ['<=', PREC.RELATIONAL],
        ['<', PREC.RELATIONAL],
        ['<<', PREC.SHIFT],
        ['>>', PREC.SHIFT],
        ['>>>', PREC.SHIFT],
      ];

      return choice(...table.map(([operator, precedence]) => {
        return prec.left(precedence, seq(
          field('left', $._expression),
          field('operator', operator),
          field('right', $._expression)
        ))
      }));
    },

    unary_expression: $ => prec.left(PREC.UNARY, seq(
      field('operator', choice('!', '~', '-')),
      field('argument', $._expression)
    )),

    update_expression: $ => {
      const argument = field('argument', $._expression);
      const operator = field('operator', choice('--', '++'));
      return prec.right(PREC.UNARY, choice(
        seq(operator, argument),
        seq(argument, operator),
      ));
    },

    cast_expression: $ => prec(PREC.CAST, seq(
      '(',
      field('type', $._basic_type),
      ')',
      field('value', $._expression)
    )),

    // TODO(XXX): split up leading tokens. Causes issues, ignoring for now :-/
    decl_cast_expression: $ => prec(PREC.CAST, seq(
      '({',
      $._basic_type,
      '}', ')',
      $._expression,
    )),

    lvalue_ref_expression: $ => choice(
      seq('&', $.identifier),
      seq('&', '(', $.identifier, ')'),
      seq('&', '(', $.function_call, ')'),
    ),

    char_literal: $ => seq(
      '\'',
      choice(
        $.escape_sequence,
        token.immediate(/[^\n']/)
      ),
      '\''
    ),

    concatenated_string: $ => prec(PREC.ADD, seq(
      $.string_literal,
      repeat1($.string_literal)
    )),

    string_literal: $ => seq(
      '"',
      repeat(choice(
        token.immediate(prec(1, /[^\\"\n]+/)),
        $.escape_sequence
      )),
      '"',
    ),

    concatenated_bytes_string: $ => prec(PREC.ADD, seq(
      $.bytes_literal,
      repeat1($.bytes_literal)
    )),

    bytes_literal: $ => seq(
      'b"',
      repeat(choice(
        token.immediate(prec(1, /[^\\"\n]+/)),
        $.escape_sequence
      )),
      '"',
    ),

    escape_sequence: $ => token(prec(1, seq(
      '\\',
      choice(
        /[^x]/,
        /\d{2,3}/,
        seq('0o', /[0-7]+/),
        seq('0b', /[01]+/),
        seq('0x', /[0-9a-fA-F]+/),
        seq('x', /[0-9a-fA-F]+/),
      )
    ))),

    // adapted heavily from tree-sitter-c grammar.js
    number_literal: $ => {
      const hex = /[0-9a-fA-F]/;
      const decimal = /[0-9]/;
      const octal = /[0-7]/;
      const hexDigits = seq(repeat1(hex), repeat(hex));
      const decimalDigits = seq(repeat1(decimal), repeat(decimal));
      const octalDigits = seq(repeat1(octal), repeat(octal));
      return token(seq(
        optional(/[-\+]/),
        optional(choice('0x', '0b', '0o')),
        choice(
          seq(
            choice(
              decimalDigits,
              seq('0b', optional(decimalDigits)),
              seq('0x', optional(hexDigits)),
              seq('0o', optional(octalDigits))
            ),
            optional(seq('.', optional(hexDigits)))
          ),
          seq('.', decimalDigits)
        ),
      ))
    },

    closure: $ => seq(
      '#', "'",
      optional(choice(
        'efun::',
        'sefun::',
        'lfun::',
        'var::')),
      $.identifier,
    ),

    // TODO(XXX): revisit this.
    symbol: $ => seq(
      '\'',
      $.identifier,
    ),

    // TODO(XXX): split up leading tokens. Causes issues, ignoring for now :-/
    array_literal: $ => prec(PREC.UNARY, seq(
      '({',
      // TODO(XXX) should be expr_list not _comma_expr?
      $._comma_expr,
      '}', ')'
    )),

    // TODO(XXX): split up leading tokens. Causes issues, ignoring for now :-/
    quoted_aggregate: $ => prec(PREC.UNARY, seq(
      "#'({",
      // TODO(XXX) should be expr_list not _comma_expr?
      $._comma_expr,
      '}', ')'
    )),

    empty_mapping_literal: $ => seq(
      '(', '[',
      ':',
      field('size', $._expression),
      ']', ')',
    ),

    mapping_literal: $ => seq(
      '(', '[',
      commaSep($.mapping_key_init),
      optional(','),
      ']', ')',
    ),

    mapping_key_init: $ => seq(
      field('key', $._expression),
      optional(seq(
        ':',
        field('values', semicolonSep1($._expression))
      )),
    ),

    struct_literal: $ => seq(
      '(', '<',
      field('type', $.identifier),
      '>', 
      choice(
        commaSep($.struct_field_init),
        commaSep($._expression),
      ),
      optional(','),
      ')',
    ),

    struct_field_init: $ => seq(
      field('name', $.identifier),
      ':',
      field('value', $._expression),
    ),

    struct_member_lookup: $ => prec(PREC.FIELD, seq(
      field('struct', $._expr4),
      $.member_operator,
      field('member_name', $._struct_member_name),
    )),

    _struct_member_name: $ => prec(PREC.FIELD, choice(
      $.identifier,
      $.string_literal,
      $.concatenated_string,
      seq('(', $._expression, ')'),
    )),

    index_expr: $ => seq(
      '[',
      optional('<'),
      optional('>'),
      $._expression, 
      ']',
    ),

    // TODO: Has trouble with '\d..\d' with no space.
    index_range: $ => choice(
      seq('[', '..', $._expression, ']'),
      seq('[', '..', '<', $._expression, ']'),
      seq('[', '..', '>', $._expression, ']'),
      seq('[', $._expression, '..', $._expression, ']'),
      seq('[', $._expression, '..', '<', $._expression, ']'),
      seq('[', '<', $._expression, '..', $._expression, ']'),
      seq('[', '<', $._expression, '..', '<', $._expression, ']'),
      seq('[', $._expression, '..', '>', $._expression, ']'),
      seq('[', '>', $._expression, '..', $._expression, ']'),
      seq('[', '<', $._expression, '..', '>', $._expression, ']'),
      seq('[', '>', $._expression, '..', '<', $._expression, ']'),
      seq('[', '>', $._expression, '..', '>', $._expression, ']'),
      seq('[', $._expression, '..', ']'),
      seq('[', '<', $._expression, '..', ']'),
      seq('[', '>', $._expression, '..', ']'),
    ),

    _lvalue: $ => choice(
      $.identifier,
      // expr4 index_expr
      // expr4 [ expr ',', expr0 ]
      // exp4 index_range
      // expr4 member_operator struct_member_name
    ),

    _function_body: $ => choice(
      $.block,
      ';'
    ),

    block: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    _statement: $ => choice(
      seq($._comma_expr, ';'),
      seq($.local_var, ';'),
      seq($.return_statement, ';'),
      $.if_statement,
      $.while_statement,
      $.do_statement,
      $.for_statement,
      $.foreach_statement,
      $.switch_statement,
      $.block,
      ';',
      seq($.break_statement, ';'),
      seq($.continue_statement, ';')
    ),

    break_statement: $ => seq('break'),

    continue_statement: $ => seq('continue'),

    _comma_expr: $ => choice(
      $._expression, 
      seq(
        $._expression,
        repeat1(seq(',', $._expression))
      ),
    ),

    return_statement: $ => seq(
      'return',
      optional($._comma_expr),
    ),

    if_statement: $ => prec.right(seq(
      'if',
      '(',
      field('condition', $._comma_expr),
      ')',
      field('consequence', $._statement),
      optional(seq(
        'else', 
        field('alternative', $._statement))
      ),
    )),

    while_statement: $ => seq(
      'while',
      '(',
      field('condition', $._comma_expr),
      ')',
      field('consequence', $._statement),
    ),

    do_statement: $ => seq(
      'do',
      field('consequence', $._statement),
      'while',
      '(',
      field('condition', $._comma_expr),
      ')',
      ';',
    ),

    for_statement: $ => seq(
      'for',
      '(',
        optional($.local_var),
        ';',
        field('condition', optional($._expression)), ';',
        field('update', optional($._comma_expr)),
      ')',
      $._statement
    ),

    foreach_statement: $ => seq(
      'foreach',
      '(',
      field('vars', $._foreach_vars),
      choice(':', 'in'),
      field('expression', $._foreach_expr),
      ')',
      $._statement
    ),

    _foreach_vars: $=> commaSep1(choice(
      $.identifier,
      seq(
        field('type', $._basic_type),
        field('name', $.identifier),
      ),
    )),

    _foreach_expr: $ => choice(
      $._expression,
      seq(
        $._expression,
        '..',
        $._expression,
      ),
    ),

    switch_statement: $ => seq(
      'switch',
      '(',
      $._comma_expr,
      ')',
      '{',
      repeat1($.switch_case),
      '}'
    ),

    switch_case: $ => seq(
      choice(
        'default',
        seq('case', $.case_label),
        seq('case', $.case_label, '..', $.case_label),
      ),
      ':',
      repeat($._statement),
    ),

    case_label: $ => choice(
      $.constant,
      $.case_string_label,
    ),

    constant: $=> prec.right(choice(
      seq($.constant, '|', $.constant),
      seq($.constant, '^', $.constant),
      seq($.constant, '&', $.constant),
      seq($.constant, '==', $.constant),
      seq($.constant, '!=', $.constant),
      seq($.constant, '>', $.constant),
      seq($.constant, '>=', $.constant),
      seq($.constant, '<', $.constant),
      seq($.constant, '>=', $.constant),
      seq($.constant, '<<', $.constant),
      seq($.constant, '>>', $.constant),
      seq($.constant, '>>>', $.constant),
      seq($.constant, '+', $.constant),
      seq($.constant, '-', $.constant),
      seq($.constant, '*', $.constant),
      seq($.constant, '%', $.constant),
      seq($.constant, '/', $.constant),
      seq('(', $.constant, ')'),
      seq('-', $.constant),
      seq('!', $.constant),
      seq('~', $.constant),
      $.number_literal,
    )),

    case_string_label: $ => choice(
      $.string_literal,
      $.concatenated_string,
      $.bytes_literal,
      $.concatenated_bytes_string,
    ),

    global_var: $ => seq(
      choice(
        // Global var, no assignment.
        seq(
          field('modifiers', repeat($.type_modifier)),
          field('type', $._basic_type),
          field('name', $.identifier),
        ),
        // Global var, assignment
        seq(
          field('modifiers', repeat($.type_modifier)),
          field('type', $._basic_type),
          $.assignment_expression,
        ),
        // Global name comma list, no assignment.
        seq(
          $.local_var,
          ',',
          repeat('*'),
          $.identifier,
        ),
        // Global name comma list, w/ assignment.
        seq(
          $.local_var,
          ',',
          repeat('*'),
          $.assignment_expression,
        ),
      ),
      ';',
    ),

    local_var: $ => choice(
      // Local var, no assignment.
      seq(
        field('type', $._basic_type),
        field('name', $.identifier),
      ),
      // Local name, w/ assignment.
      seq(
        field('type', $._basic_type),
        $.assignment_expression,
      ),
      // Local name comma list, no assignment.
      seq(
        $.local_var,
        ',',
        repeat('*'),
        $.identifier,
      ),
      // Local name comma list, w/ assignment.
      seq(
        $.local_var,
        ',',
        repeat('*'),
        $.assignment_expression,
      ),
    ),

    type_modifier: $ => choice(
      "nomask",
      "static",
      "private",
      "public",
      "varargs",
      "protected",
      "nosave",
      "deprecated",
      "visible",
    ),

    _basic_type: $ => choice(
      $.non_void_type,
      "void",
    ),

    // non_void_type is one or more single_non_void_types separated by a "|" to
    // support union types.
    non_void_type: $ => pipeSep1(
      $._single_non_void_type
    ),

    _single_non_void_type : $ => choice(
      "status",
      "int",
      "bytes",
      "string",
      "closure",
      "coroutine",
      "symbol",
      "float",
      "mapping",
      "mixed",
      "object",
      // TODO: handle object w/ optional simple_string_constant 
      "lwobject",
      // TODO: handle lwobject w/ optional simple_string_constant 
      seq(
        "struct",
        $.identifier
      ),
      seq(
        $._single_non_void_type,
        "*"
      ),
      seq(
        "<",
        $.non_void_type,
        ">",
      ),
    ),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => token(choice(
      seq('//', /(\\(.|\r?\n)|[^\\\n])*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),

    identifier: $ => /[a-zA-Z_$]\w*/,
  }
});

/*
 * Adopted from tree-sitter-c.
 * https://github.com/tree-sitter/tree-sitter-c/blob/master/grammar.js
 */
function sep(separator, rule) {
  return optional(sep1(separator, rule))
}

function sep1(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)))
}

function commaSep(rule) {
  return sep(',', rule)
}

function commaSep1(rule) {
  return sep1(',', rule)
}

function pipeSep (rule) {
  return sep('|', rule)
}

function pipeSep1 (rule) {
  return sep1('|', rule)
}

function semicolonSep(rule) {
  return sep(';', rule)
}

function semicolonSep1(rule) {
  return sep1(';', rule)
}
