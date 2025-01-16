/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "bnf",

  extras: $ => [
    /[\f\t\r\v\u0020\u00a0\u1680\u2000-\u200a\u2028\u2029\u202f\u205f\u3000\ufeff]/,
  ],

  rules: {
    grammar: $ => repeat1($.rule),
    rule: $ => seq($.identifier, "::=", $._newline, repeat1(seq($.rule_entry, $._newline)), repeat1($._newline)),
    rule_entry: $ => repeat1($.rule_token),
    rule_token: $ => seq(choice($.string, $.regex, $.identifier, "ε", seq("{", $.rule_entry, "}")), optional($.modifier)),
    identifier: _ => /[a-zA-Z_][a-zA-Z_0-9]*/,
    _newline: _ => "\n",
    string: _ => /"([^\\"\n]|\\.)*"/,
    regex: _ => /\/([^\\\/\n]|\\.)*\//,
    modifier: _ => /[+?*]/
  }
});
