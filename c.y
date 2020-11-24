%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.c"
%}

%token CONSTANT STRING_LITERAL // Constant String_literal
%token IDENTIFIER // Idenfifier

%token LP RP LSB RSB LBP RBP // () [] {}
%token POINTER // ->
%token ADDRESS // &
%token NOT // !
%token POW // ^
%token TIMES DIVIDE MOD // * / %
%token PLUS MINUS // + -
%token GT LT GE LE // > < >= <=
%token EQ NE // == !=
%token AND // &&
%token OR // ||
%token ASSIGN // =

%token INT // int
%token COMMA SEMICOLON // , ;
%token IF ELSE // if else
%token WHILE DO FOR CONTINUE BREAK // while do for continue break
%token RETURN // return
%token STRUCT // struct

%start translate_unit
// sharp expression // #
// define expression // #define MAX 5; => sharp define NAME STRING_LITERAL;
// header expression // stdio.h
// include expression // #include <stdio.h>/"stack.h" => sharp include header
// statement expression // int item;
// function statement expression // int main(void);
// function expression // int main(void) {-- body --}
// function body expression // --int main(void){-- body --}--
// program expression // define, include, statement, assign ,main. // Finish analysis all file.
// formula_expression // 1+2*3%4;
// assgin expression // item = value/formula_expression;
// status expression // true/false (the expression in cpp) 1/0 in fact; // == > < >= <= !=
// while expression // while() {}
// for expression // for (init; status; operation) {}
// if expression // if (status) {} else if () {} else {}

%%

expression
    : orh_expression assign_expression
    ;

assign_expression
    : ASSIGN orh_expression assign_expression
    | /* epsilon */
    ;

orh_expression
    : andh_expression or_expression
    ;

or_expression
    : OR andh_expression or_expression
    | /* epsilon */
    ;

andh_expression
    : eneh_expression and_expression
    ;

and_expression
    : AND eneh_expression and_expression
    | /* epsilon */
    ;

eneh_expression
    : lgh_expression ene_expression
    ;

ene_expression
    : EQ lgh_expression ene_expression
    | NE lgh_expression ene_expression
    | /* epsilon */
    ;

lgh_expression
    : pmh_expression lg_expression
    ;

lg_expression
    : GT pmh_expression lg_expression
    | GE pmh_expression lg_expression
    | LT pmh_expression lg_expression
    | LE pmh_expression lg_expression
    | /* epsilon */
    ;

pmh_expression
    : mtdh_expression pm_expression
    ;

pm_expression
    : PLUS mtdh_expression pm_expression
    | MINUS mtdh_expression pm_expression
    | /* epsilon */
    ;

mtdh_expression
    : powh_expression mtd_expression
    ;

mtd_expression
    : MOD powh_expression mtd_expression
    | TIMES powh_expression mtd_expression
    | DIVIDE powh_expression mtd_expression
    | /* epsilon */
    ;

powh_expression
    : noth_expression pow_expression
    ;

pow_expression
    : POW noth_expression pow_expression
    | /* epsilon */
    ;

noth_expression
    : pid_expression not_expression
    ;

not_expression
    : NOT pid_expression not_expression
    | /* epsilon */
    ;

pid_expression
    : LP value_expression RP
    | IDENTIFIER
    ;

type_defination
    : INT
    | STRUCT IDENTIFIER
    ;

do_expression
    : DO statement_block WHILE LP expression RP SEMICOLON
    ;

while_expression
    : WHILE LP expression RP statement_block
    ;

for_init_expression
    : declaration
    | expression for_more_condition_expression
    | /* epsilon */
    ;

for_condition_expression
    : expression for_more_condition_expression
    | /* epsilon */
    ;

for_more_condition_expression
    : COMMA expression for_more_condition_expression
    | / * epsilon */
    ;
    
for_action_expression
    : expression more_action_expression
    | /* epsilon */
    ;

for_more_action_expression
    : COMMA expression
    | /* epsilon */
    ;

for_expression
    : FOR LP for_init_expression SEMICOLON for_condition_expression SEMICOLON for_action_expression RP statement_block
    ;

%%