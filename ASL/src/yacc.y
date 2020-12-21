%{
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string>
#include <vector>

#include "Thing.h"
#include "Atom.h"
#include "Undef.h"
#include "Atoms/QName.h"
#include "Atoms/Integer.h"
#include "Atoms/Double.h"
#include "Atoms/String.h"
#include "Atoms/Boolean.h"
#include "Attributon.h"
#include "Node.h"
#include "Interpreter.h"


typedef std::string string;
typedef std::vector<Node*> vNode;


Attributon* create_local_context() {
    Attributon* lc1 = new Attributon();
    Attributon* variables = new Attributon();
    Attributon* value = new Attributon();
    QName* VALUE= QName::getInstance("value");
    QName* VARIABLES = QName::getInstance("variables");
    lc1->setAttr(VALUE, value);
    lc1->setAttr(VARIABLES, variables);
    return lc1;
}


int yylex(void);
void yyerror(char *s);
%}


%union {
    char*    sValue;
    Integer* iValue;
    Double*  dValue;
    Boolean* bValue;
    Thing*   tValue;
    String*  aslsValue;
    Undef*   uValue;
    QName*   qValue;
    Node*    nValue;
};


%code {
    Attributon* lc1 = create_local_context();
}


%token <iValue> INTEGER
%token <dValue> DOUBLE
%token <aslsValue> ASL_STRING
%token <qValue> QNAME VARIABLE ATTRIBUTON_VARIABLE
%token <bValue> BOOLEAN
%token <uValue> UNDEF

%token WHILE
%token EOL END_OF_FILE 

%token NOT EQ NEQ 
%token GT GTE LT LTE
%token AND OR
%token MINUS PLUS DIVISION MULT
%token EQUAL

%token LBRACE RBRACE SEMICOLON DOT COMMA DOTDOT
%token LBRACE_PER RBRACE_PER LCURLY_PER RCURLY_PER
%token LSQUAREBRACE RSQUAREBRACE TWOSQUAREBRACES
%token LCURLYBRACE RCURLYBRACE BACKQUOTE
%token DEFUN IF THEN



%nonassoc THEN 
%nonassoc ELSE

%nonassoc WHILE
%nonassoc DEFUN


%right EQUAL
%left NOT EQ NEQ
%left GT GTE LT LTE
%left AND OR
%left MINUS PLUS DIVISION MULT
%nonassoc UNMINUS
%nonassoc SQUARE
%left DOT DOTDOT
%left LSQUAREBRACE



%type <nValue> var_list expr_list assignment_list expressions_comma expressions_block expressions_semicolon
%type <nValue> expressions_square_braces get_attr
%type <nValue> var variables
%type <nValue> seq conz
%type <nValue> ifx ife if while defun
%type <nValue> stmt expr



%%

program:
    | program stmt EOL { ; }
    ;


stmt:
    expr SEMICOLON { $$ = $1; Interpreter($$, lc1).run();}                        
    ;


defun:
    DEFUN QNAME LBRACE var_list RBRACE expressions_block %prec DEFUN { $$ = new Node("Defun", "", $4, $6); printf("defun\n"); }
    ;


while:
    WHILE LBRACE expr RBRACE expressions_block %prec WHILE { $$ = new Node("While", "", $3, $5); printf("WHILE LOOP\n"); }
    ;


if:
    ifx   { $$ = $1; }
    | ife { $$ = $1; }
    ;


ifx:
    IF LBRACE expr RBRACE THEN expr %prec THEN { Node* n = new Node("IfThen"); n->add_expr($3); n->add_expr($6); $$ = n; printf("if then\n"); }


ife:
    IF LBRACE expr RBRACE THEN expr ELSE expr %prec ELSE { Node* n = new Node("IfThenElse"); n->add_expr($3); n->add_expr($6); n->add_expr($8); $$ = n; printf("if then else\n"); }


expr:
    QNAME LBRACE expr_list RBRACE     { $$ = new Node("FunctionCallByname", $1, $3);  printf("FunctionCallByname\n"); }

    | get_attr                        { $$ = $1; printf("Get attr: aref"); }
    | get_attr EQUAL expr             { $$ = new Node("AttributeAssignment", "", $1, $3); printf("Get attr: aset"); }

    | conz                            { $$ = $1; printf("conz expression"); }
    | seq                             { $$ = $1; printf("seq expression"); }

    | while                           { $$ = $1; printf("while expression\n"); }
    | defun                           { $$ = $1; printf("defun expression\n"); }
    | if                              { $$ = $1; printf("if expression\n"); }
    | expressions_block               { $$ = $1; printf("block expression\n"); }

    | INTEGER                         { string node_type("Atom"); $$ = new Node(node_type, $1); /*printf("int constant Expression\n");*/ }
    | DOUBLE                          { string node_type("Atom"); $$ = new Node(node_type, $1); /*printf("double constant Expression\n"); */ }
    | BOOLEAN                         { string node_type("Atom"); $$ = new Node(node_type, $1); /*printf("Boolean expression\n");*/ } 
    | ASL_STRING                      { string node_type("Atom"); $$ = new Node(node_type, $1); /*printf("String constant expression\n");*/ }
    | QNAME                           { string node_type("Atom"); $$ = new Node(node_type, $1); /*printf("String constant expression\n");*/ }    

    | UNDEF                           { string node_type("Undef"); $$ = new Node(node_type, $1); printf("Undef expression\n"); }
    
    | var                             { $$ = $1; /*printf("Var expression\n");*/ }
    | var EQUAL expr                  { $$ = new Node("VariableAssignment", "", $1, $3); /*printf("Var assgnee expression\n");*/} 

    | MINUS expr %prec UNMINUS        { string node_type("FunctionCall"); string function_name("unmin"); $$ = new Node(node_type, function_name, $2, nullptr); printf("unminus extension\n"); }
    | NOT expr                        { string node_type("FunctionCall"); string function_name("not"); $$ = new Node(node_type, function_name, $2, nullptr); printf("not extension\n"); }

    | expr PLUS expr                  { string node_type("FunctionCall"); string function_name("add"); $$ = new Node(node_type, function_name, $1, $3); /*printf("add extension\n");*/ }
    | expr MINUS expr                 { string node_type("FunctionCall"); string function_name("sub"); $$ = new Node(node_type, function_name, $1, $3); printf("sub extension\n"); }
    | expr DIVISION expr              { string node_type("FunctionCall"); string function_name("div"); $$ = new Node(node_type, function_name, $1, $3); printf("div extension\n"); }
    | expr MULT expr                  { string node_type("FunctionCall"); string function_name("mul"); $$ = new Node(node_type, function_name, $1, $3); printf("mul extension\n"); }
    | expr EQ expr                    { string node_type("FunctionCall"); string function_name("eq"); $$ = new Node(node_type, function_name, $1, $3); printf("eq extension\n"); }
    | expr NEQ expr                   { string node_type("FunctionCall"); string function_name("neq"); $$ = new Node(node_type, function_name, $1, $3); printf("neq extension\n"); }
    | expr GT expr                    { string node_type("FunctionCall"); string function_name("gt"); $$ = new Node(node_type, function_name, $1, $3); printf("gt extension\n"); }
    | expr GTE expr                   { string node_type("FunctionCall"); string function_name("gte"); $$ = new Node(node_type, function_name, $1, $3); printf("gte extension\n"); }
    | expr LT expr                    { string node_type("FunctionCall"); string function_name("lt"); $$ = new Node(node_type, function_name, $1, $3); printf("lt extension\n"); }
    | expr LTE expr                   { string node_type("FunctionCall"); string function_name("lte"); $$ = new Node(node_type, function_name, $1, $3); printf("lte extension\n"); }
    | expr AND expr                   { string node_type("FunctionCall"); string function_name("and"); $$ = new Node(node_type, function_name, $1, $3); printf("and extension\n"); }
    | expr OR expr                    { string node_type("FunctionCall"); string function_name("or"); $$ = new Node(node_type, function_name, $1, $3); printf("or extension\n"); }

    | LBRACE expr RBRACE              { $$ = $2; printf("expr in brackets\n"); }
    ;


conz:
    LCURLY_PER assignment_list RCURLY_PER                              { $$ = new Node("AttributonCreate", "", $2, nullptr); printf("conz"); }
    | ATTRIBUTON_VARIABLE EQUAL LCURLY_PER assignment_list RCURLY_PER  { Node* av = new Node("AttributonVariable", $1); $$ = new Node("AttributonAssign", "", av, $4); printf("conzExtra"); }
    ;


seq:
    LBRACE_PER expressions_comma RBRACE_PER                             { $$ = new Node("SeqCreate", "", $2, nullptr); printf("seqCreate"); }
    | ATTRIBUTON_VARIABLE EQUAL LBRACE_PER expressions_comma RBRACE_PER { Node* av = new Node("AttributonVariable", $1); $$ = new Node("SeqAssign", "", av, $4); printf("seqCreateExtra"); }
    ;


assignment_list:
    expr EQUAL expr                                     { Node* lhs = new Node("Expression"); lhs->add_expr($1); Node* rhs = new Node("Expression"); rhs->add_expr($3); $$ = new Node("AssignmentList", "", lhs, rhs); }
    | assignment_list COMMA expr EQUAL expr             { $1->add_assign($3, $5); $$ = $1; printf("Assignment list"); } 
    ;


get_attr:
    expr LSQUAREBRACE expressions_square_braces RSQUAREBRACE { $$ = new Node("GetAttr", "", $1, $3); printf("Get attribute square braces"); }
    ;


expressions_square_braces:
    expr { Node* v = new Node("ExpressionsSquareList"); v->add_expr($1); $$ = v; printf("Expressions square braces"); }
    | expressions_square_braces TWOSQUAREBRACES expr { $1->add_expr($3); $$ = $1; printf("Expressions square braces"); }
    ;


expressions_block:
    LCURLYBRACE RCURLYBRACE                                   { $$ = new Node("ExpressionsBlock", "Empty", nullptr, nullptr); printf("progn {}\n"); }
    | LCURLYBRACE expressions_semicolon RCURLYBRACE           { $$ = new Node("ExpressionsBlock", "Base", $2, nullptr); printf("progn\n"); }
    | LCURLYBRACE expressions_semicolon SEMICOLON RCURLYBRACE { $$ = new Node("ExpressionsBlock", "SemicolonInTheEnd", $2, nullptr); printf("progn;\n"); }
    ;


expressions_semicolon:
    expr                                   { Node* v = new Node("ExpressionsSemicolonList"); v->add_expr($1); $$ = v; printf("semicolon separated expressions\n"); }
    | expressions_semicolon SEMICOLON expr { $1->add_expr($3); $$ = $1; printf("semicolon separated expressions\n"); }
    ;


expr_list:
    expressions_comma { $$ = $1; printf("list of comma separated expressions\n"); }
    |                 { $$ = new Node("ExpressionsCommaList"); printf("empty expr list\n"); }
    ;


expressions_comma:
    expr                           { Node* v = new Node("ExpressionsCommaList"); v->add_expr($1); $$ = v; printf("comma separated expressions\n"); }
    | expressions_comma COMMA expr { $1->add_expr($3); $$ = $1; printf("comma separated expressions\n"); }
    ;


var_list:
    variables                { $$ = $1; printf("variable list\n"); }
    |                        { $$ = new Node("VariablesList"); printf("emptry var lsit\n"); }
    ;


variables:
    VARIABLE                   { string node_type("Variable"); Node* n = new Node(node_type, $1); Node* v = new Node("VariablesList"); v->add_var(n); $$ = v; printf("comma separated variables\n");}
    | variables COMMA VARIABLE { string node_type("Variable"); Node* n = new Node(node_type, $3); $1->add_var(n); $$ = $1; printf("comma separated variables\n"); }
    ;


var:
    VARIABLE                       { string node_type("Variable"); $$ = new Node(node_type, $1); /*printf("Variable\n");*/ }
    | ATTRIBUTON_VARIABLE          { string node_type("AttributonVariable"); $$ = new Node(node_type, $1); printf("attr variable\n"); }       
    ;

%%


void yyerror(char *s) {
    fprintf(stdout, "%s\n", s);
}


int main(void) {
    yyparse();
    return 0;
}