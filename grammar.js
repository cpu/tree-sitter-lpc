// TODO(XXX): Better match to ld.
const PREC = {
  PAREN_DECLARATOR: -10,
  ASSIGNMENT: -1,
  CONDITIONAL: -2,
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
  CALL: 13,
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
      // TODO: other kinds of definitions
    ),

    function_definition: $ => seq(
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

      // catch
      // L_STRING
      // L_BYTES L_BYTEs
      // L_BYTES
      // L_NUMBER
      // L_CLOSURE
      // L_SIMUL_EFUN_CLOSURE
      // L_SYMBOL
      // L_FLOAT
      // weird stuff... 13139...
      //   { comma_expr }
      //   ({ expr_list }) array
      //   L_QUOTED_AGGREGATE expr_list }}
      //   ([ : expr0 ]) empty mapping
      //   ([ m_expr_list ]) mapping 
      //   (< identifier > opt_struct_init ) // sturct
      // L_IDENTIFIER
      // expr4 member_operator struct_member_name
      // expr4 index_expr
      // expr4 index_range
      // expr4 [ expr0 , expr0 ]
    _expression: $ => choice(
      $.conditional_expression,
      $.assignment_expression,
      $.function_call,
      $.inline_func,
      $.identifier,
      $.number_literal,
      $.string_literal,
      $.concatenated_string,
      $.bytes_literal,
      $.concatenated_bytes_string,
      $.char_literal,
    ),

    // TODO(XXX): consider async
    inline_func: $ => prec(PREC.INLINE, seq(
      'function',
      field('type', optional($._basic_type)),
      field('arguments', $.parameter_list),
      field('body', $._function_body),
    )),

    // TODO: Consider :: syntax for inherited functions.
    function_call: $ => prec(PREC.CALL, choice(
      // Simple function call.
      seq(
        field('function', $._expression),
        field('arguments', seq(
          '(',
          commaSep($._expression),
          optional('...'),
          ')',
        ))
      ),
      // Call-other.
      seq(
        field('target', $._expression),
        $.member_operator,
        field('function', $._call_other_name),
        field('arguments', seq(
          '(',
          commaSep($._expression),
          optional('...'),
          ')',
        ))
      ),
    )),

    member_operator: $ => choice(
      '->',
      '.',
    ),

    _call_other_name: $ => choice(
      $.identifier,
      $.string_literal,
      $.concatenated_string,
      seq(
        '(',
        $._expression,
        ')',
      ),
    ),

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

    // TODO: Need to think about comma operator somewhere...
    assignment_expression: $ => prec.right(PREC.ASSIGNMENT, seq(
      field('left', $._lvalue),
      field('operator', $.assignment_operator),
      field('right', $._expression)
    )),

    char_literal: $ => seq(
      '\'',
      choice(
        $.escape_sequence,
        token.immediate(/[^\n']/)
      ),
      '\''
    ),

    concatenated_string: $ => seq(
      $.string_literal,
      repeat1($.string_literal)
    ),

    string_literal: $ => seq(
      '"',
      repeat(choice(
        token.immediate(prec(1, /[^\\"\n]+/)),
        $.escape_sequence
      )),
      '"',
    ),

    concatenated_bytes_string: $ => seq(
      $.bytes_literal,
      repeat1($.bytes_literal)
    ),

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

   _lvalue: $ => choice(
      $.identifier,
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
      // cond | while | do | for | foreach | switch
      seq($.local_var, ';'),
      seq($.return_statement, ';'),
      $.block,
      ';',
      // break, continue
    ),

    _comma_expr: $ => choice(
      $._expression, 
      seq(
        $._expression,
        repeat1(seq(',', $._expression))
      ),
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
          field('name', $.identifier),
          field('operator', $.assignment_operator),
          field('initial_val', $._expression),
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
          $.identifier,
          field('operator', $.assignment_operator),
          $._expression,
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
        field('name', $.identifier),
        field('operator', $.assignment_operator),
        field('initial_val', $._expression),
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
        $.identifier,
        field('operator', $.assignment_operator),
        $._expression,
      ),
    ),

    return_statement: $ => seq(
      'return',
      optional($._comma_expr),
    ),

    assignment_statement: $=> seq(
      $.identifier,
      $.assignment_expression,
      ';'
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
      "struct",
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
