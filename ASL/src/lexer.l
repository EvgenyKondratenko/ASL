%option 8bit

%{
    #include <stdlib.h>

    #include "Thing.h"
    #include "Atom.h"
    #include "Undef.h"
    #include "Atoms/QName.h"
    #include "Atoms/Integer.h"
    #include "Atoms/Double.h"
    #include "Atoms/String.h"
    #include "Atoms/Boolean.h"
    #include "Node.h"
    #include "Interpreter.h"

    #include "y.tab.h"

    typedef std::string string;

    void yyerror(char *);
%}

digit [0-9]
identifier [_a-zA-Z][_a-zA-Z0-9]*
asl_string ["]([^\\"]|([\\].))*["]
eol \n|\r|\r\n
white_space [ \t\f]
qname {identifier}([:]{identifier})*



%%

"while"    { yylval.sValue = yytext; return WHILE; }
"defun"    { yylval.sValue = yytext; return DEFUN; }
"if"       { yylval.sValue = yytext; return IF; }
"then"     { yylval.sValue = yytext; return THEN; }
"else"     { yylval.sValue = yytext; return ELSE; }

"undef"    { yylval.uValue = Undef::getInstance(); return UNDEF; }
"true"     { yylval.bValue = new Boolean(true); return BOOLEAN; }
"false"    { yylval.bValue = new Boolean(false); return BOOLEAN; }


0|[1-9]{digit}*        { yylval.iValue = Integer::getInstance(atoi(yytext)); return INTEGER; }
{digit}+"."{digit}*    { yylval.dValue = new Double(atof(yytext)); return DOUBLE; }
{asl_string}           { string val(yytext); yylval.aslsValue = new String(val.substr(1, val.size() - 2)); return ASL_STRING; }
{qname}                { yylval.qValue = QName::getInstance(yytext); return QNAME; }
"$"{qname}             { yylval.qValue = QName::getInstance(yytext + 1); return VARIABLE; }
"#"{qname}             { yylval.qValue = QName::getInstance(yytext + 1); return ATTRIBUTON_VARIABLE; }


"(%"       { yylval.sValue = yytext; return LBRACE_PER; }
"%)"       { yylval.sValue = yytext; return RBRACE_PER; }
"{%"       { yylval.sValue = yytext; return LCURLY_PER; }
"%}"       { yylval.sValue = yytext; return RCURLY_PER; }
"]["       { yylval.sValue = yytext; return TWOSQUAREBRACES; }


"("        { yylval.sValue = yytext; return LBRACE; }
")"        { yylval.sValue = yytext; return RBRACE; }
"{"        { yylval.sValue = yytext; return LCURLYBRACE; }
"}"        { yylval.sValue = yytext; return RCURLYBRACE; }
"["        { yylval.sValue = yytext; return LSQUAREBRACE; }
"]"        { yylval.sValue = yytext; return RSQUAREBRACE; }


">"        { yylval.sValue = yytext; return GT; }
">="       { yylval.sValue = yytext; return GTE; }
"<"        { yylval.sValue = yytext; return LT; }
"<="       { yylval.sValue = yytext; return LTE; }

"+"        { yylval.sValue = yytext; return PLUS; }
"-"        { yylval.sValue = yytext; return MINUS; }
"/"        { yylval.sValue = yytext; return DIVISION; }
"*"        { yylval.sValue = yytext; return MULT; }


";"        { yylval.sValue = yytext; return SEMICOLON; }
","        { yylval.sValue = yytext; return COMMA; }
".."       { yylval.sValue = yytext; return DOTDOT; }
"."        { yylval.sValue = yytext; return DOT; }


"!"        { yylval.sValue = yytext; return NOT; }
"!="       { yylval.sValue = yytext; return NEQ; }
"=="       { yylval.sValue = yytext; return EQ; }
"&&"       { yylval.sValue = yytext; return AND; }
"||"       { yylval.sValue = yytext; return OR; }


"`"        { yylval.sValue = yytext; return BACKQUOTE; }
"="        { yylval.sValue = yytext; return EQUAL; }


{eol}         { yylval.sValue = yytext; return EOL; }
<<EOF>>       { yylval.sValue = yytext; return END_OF_FILE; }
{white_space} { /* SKIP SPACES */ }


%%


int yywrap(void) {
    return 1;
}

