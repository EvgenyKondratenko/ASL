%option 8bit

%{
    #include <stdlib.h>

    #include "y.tab.h"
    

    void yyerror(char *);
%}

digit [0-9]
identifier [_a-zA-Z][_a-zA-Z0-9]*
asl_string ["]([^\\"]|([\\].))*["]
eol \n|\t|\t\n|\n\t

%%


{digit}+   {
                yylval.iValue = atoi(yytext);
                return INTEGER;
           }

{digit}+"."{digit}* {
                yylval.dValue = atof(yytext);
                return DOUBLE;
           }


"("        {
                yylval.sValue = yytext;
                return LBRACE;
           }


")"        {
                yylval.sValue = yytext;
                return RBRACE;
           }

"{"        {
                yylval.sValue = yytext;
                return LCURLYBRACE;
           }


"}"        {
                yylval.sValue = yytext;
                return RCURLYBRACE;
           }


">"        {
                yylval.sValue = yytext;
                return GT;
           }


">="       {
                yylval.sValue = yytext;
                return GTE;
           }


"<"        {
                yylval.sValue = yytext;
                return LT;
           }


"<="        {
                yylval.sValue = yytext;
                return LTE;
           }

"+"        {
                yylval.sValue = yytext;
                return PLUS;
           }

"-"        {
                yylval.sValue = yytext;
                return MINUS;
           }

"/"        {
                yylval.sValue = yytext;
                return DIVISION;
           }

"*"        {
                yylval.sValue = yytext;
                return MULT;
           }


";"        {
                yylval.sValue = yytext;
                return SEMICOLON;
           }

","        {
                yylval.sValue = yytext;
                return COMMA;
           }

"."        {
                yylval.sValue = yytext;
                return DOT;
           }


"!"        {
                yylval.sValue = yytext;
                return NOT;
           }

"!="       {
                yylval.sValue = yytext;
                return NEQ;
           }

"=="       {
                yylval.sValue = yytext;
                return EQ;
           }

"&&"       {
                yylval.sValue = yytext;
                return AND;
           }

"||"       {
                yylval.sValue = yytext;
                return OR;
           }

"while"    {
                yylval.sValue = yytext;
                return WHILE;
           }

"defun"    {
                yylval.sValue = yytext;
		return DEFUN;
           }

{eol}      {
                yylval.sValue = yytext;
                return EOL;
           }

<<EOF>>    {
		yylval.sValue = yytext;
		return END_OF_FILE;
	   }

{identifier} {
                yylval.sValue = yytext;
		return IDENTIFIER;
	   }

{asl_string} {
                yylval.sValue = yytext;
		return ASL_STRING;
	   }

        
%%


int yywrap(void) {
    return 1;
}

