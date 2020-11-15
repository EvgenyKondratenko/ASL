Parcer for ASL language.

flex lexer.l && bison -dy yacc.y && gcc lex.yy.c y.tab.c -o parser.exe