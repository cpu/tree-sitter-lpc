module.exports = grammar({
  name: 'LPC',

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.function_definition,
      $.global_definition,
      // TODO: other kinds of definitions
    ),

    global_definition: $ => seq(
      $._name_list,
      ';',
    ),

    _name_list: $ => choice(
      // simple variable definition.
      seq(
        field('modifiers', repeat($.type_modifier)),
        field('type', $._basic_type),
        field('name', $.identifier),
      ),
      // variable definition with initialization.
      seq(
        field('modifiers', repeat($.type_modifier)),
        field('type', $._basic_type),
        field('name', $.identifier),
        '=',
        field('initializer', $._expr4),
      ),
    ),

    function_definition: $ => seq(
      field('modifiers', repeat($.type_modifier)),
      field('type', optional($._basic_type)),
      field('name', $.identifier),
      field('arguments', $.parameter_list),
      field('body', $._function_body),
    ),

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
      $.non_void_type,
      $.identifier,
      optional($.opt_default_value),
    ),

    // TODO(XXX): Test this. Looks whack.
    opt_default_value: $ => seq(
      '=',
      $.expr0,
    ),

    expr0: $ => seq(
      $.lvalue,
      '=',
      $.expr0,
    ),

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
              seq('0b', decimalDigits),
              seq('0x', hexDigits),
              seq('0o', octalDigits)
            ),
            optional(seq('.', optional(hexDigits)))
          ),
          seq('.', decimalDigits)
        ),
      ))
    },

    _expr4: $ => choice(
      $.number_literal,
      // function call
      // inline func
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
    ),

    lvalue: $ => choice(
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
      $.return_statement
      // TODO: other kinds of statements
    ),

    return_statement: $ => seq(
      'return',
      optional($._expression),
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
      "lwobject",
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

    _expression: $ => choice(
      $.identifier,
      $.number_literal,
      // TODO: other kinds of expressions
    ),

    identifier: $ => /[a-zA-Z_$]\w*/,
  }
});

/*
 * Adopted from tree-sitter-c.
 * https://github.com/tree-sitter/tree-sitter-c/blob/master/grammar.js
 */
function commaSep (rule) {
  return optional(commaSep1(rule))
}

function commaSep1 (rule) {
  return seq(rule, repeat(seq(',', rule)))
}

// TODO(XXX): generalize w/ commaSep/commaSep1.
function pipeSep (rule) {
  return optional(pipeSep1(rule))
}

function pipeSep1 (rule) {
  return seq(rule, repeat(seq('|', rule)))
}
