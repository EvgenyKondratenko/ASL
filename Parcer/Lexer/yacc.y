%{
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string>

typedef std::string string;


int yylex(void);
void yyerror(char *s);
%}


%union {
    int iValue;
    double dValue;
    char* sValue;
};


%token <iValue> INTEGER
%token <dValue> DOUBLE
%token <sValue> ASL_STRING
%token WHILE IF THEN
%token EOL END_OF_FILE 
%nonassoc ELSE

%token NOT EQ NEQ
%token MINUS PLUS DIVISION MULT

%token LBRACE RBRACE SEMICOLON DOT COMMA
%token GT GTE LT LTE
%token AND OR
%token LCURLYBRACE RCURLYBRACE
%token DEFUN
%token IDENTIFIER
%nonassoc UNMINUS




%%

program:
    stmt eol
    | program stmt { printf("Program\n"); }
    ;

stmt:
    semicolon                                 { printf("Empty statement\n"); }
    | expr semicolon                          { printf("Statement\n"); }
    | WHILE LBRACE expr RBRACE stmt           { printf("WHILE LOOP\n"); }
    | defun semicolon                         { printf("DEFUN statement\n"); } 
    | asl_string semicolon                    { printf("String statement\n"); } 
    | /* NULL */
    ;

defun:
    DEFUN identifier LBRACE identifier_list RBRACE LCURLYBRACE identifier_list RCURLYBRACE              { printf("defun\n"); }
    | DEFUN identifier LBRACE identifier_list RBRACE LCURLYBRACE identifier_list semicolon RCURLYBRACE  { printf("defun\n"); }

expr:
    integer              { printf("Expression\n"); }
    | double             { printf("Expression\n"); }
    | MINUS expr %prec UNMINUS
                         { printf("unminus extension\n"); }
    | expr PLUS expr     { printf("add extension\n"); }
    | expr MINUS expr    { printf("sub extension\n"); }
    | expr DIVISION expr { printf("div extension\n"); }
    | expr MULT expr     { printf("mul extension\n"); }
    | expr EQ expr       { printf("eq extension\n"); }
    | expr NEQ expr      { printf("neq extension\n"); }
    | NOT expr           { printf("not extension\n"); }
    | LBRACE expr RBRACE { printf("expr in brackets\n"); }
    | expr GT expr       { printf("gt extension\n"); }
    | expr GTE expr      { printf("gte extension\n"); }
    | expr LT expr       { printf("lt extension\n"); }
    | expr LTE expr      { printf("lte extension\n"); }
    | expr AND expr      { printf("and extension\n"); }
    | expr OR expr       { printf("or extension\n"); }
    ;

integer:
    INTEGER    { printf("Integer input\n"); }
    ;

double:
    DOUBLE     { printf("Double input\n"); }
    ;

identifier_list:
    identifier 
    | identifier_list COMMA identifier { printf("identifier list"); }

identifier:
    IDENTIFIER { printf("Identifier input\n"); }
    ;

eol:
    EOL        { printf("End of line input\n"); }
    ;

semicolon:
    SEMICOLON  { printf("Semicolon\n"); }
    ;

asl_string:
    ASL_STRING { printf("ASL String input\n"); }
    ;

%%

void yyerror(char *s) {
    fprintf(stdout, "%s\n", s);
}

int main(void) {
    yyparse();
    return 0;
}