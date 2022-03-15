module.exports = grammar({
  name: 'LPC',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.function_definition
      // TODO: other kinds of definitions
    ),

    function_definition: $ => seq(
      repeat($.type_modifier),
      optional($.basic_type),
      $.identifier,
      $.parameter_list,
      $._function_body
    ),

    parameter_list: $ => seq(
      '(',
       // TODO: parameters
      ')'
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
      $._expression,
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

    basic_type: $ => choice(
      $.basic_non_void_type,
      "void",
    ),

    basic_non_void_type: $ => choice(
      $.single_basic_non_void_type,
      seq(
        $.basic_non_void_type,
        "|",
        $.single_basic_non_void_type,
      ),
    ),

    single_basic_non_void_type: $ => choice(
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
        $.single_basic_non_void_type,
        "*"
      ),
      seq(
        "<",
        $.basic_non_void_type,
        ">",
      ),
    ),

    multiple_basic_non_void_type: $ => seq(
      $.basic_non_void_type,
      "|",
      $.single_basic_non_void_type,
    ),

    _expression: $ => choice(
      $.identifier,
      $.number
      // TODO: other kinds of expressions
    ),

    identifier: $ => /[a-z]+/,

    number: $ => /\d+/
  }
});
