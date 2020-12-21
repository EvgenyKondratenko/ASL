
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INTEGER = 258,
     DOUBLE = 259,
     ASL_STRING = 260,
     QNAME = 261,
     VARIABLE = 262,
     ATTRIBUTON_VARIABLE = 263,
     BOOLEAN = 264,
     UNDEF = 265,
     WHILE = 266,
     EOL = 267,
     END_OF_FILE = 268,
     NOT = 269,
     EQ = 270,
     NEQ = 271,
     GT = 272,
     GTE = 273,
     LT = 274,
     LTE = 275,
     AND = 276,
     OR = 277,
     MINUS = 278,
     PLUS = 279,
     DIVISION = 280,
     MULT = 281,
     EQUAL = 282,
     LBRACE = 283,
     RBRACE = 284,
     SEMICOLON = 285,
     DOT = 286,
     COMMA = 287,
     DOTDOT = 288,
     LBRACE_PER = 289,
     RBRACE_PER = 290,
     LCURLY_PER = 291,
     RCURLY_PER = 292,
     LSQUAREBRACE = 293,
     RSQUAREBRACE = 294,
     TWOSQUAREBRACES = 295,
     LCURLYBRACE = 296,
     RCURLYBRACE = 297,
     BACKQUOTE = 298,
     DEFUN = 299,
     IF = 300,
     THEN = 301,
     ELSE = 302,
     UNMINUS = 303,
     SQUARE = 304
   };
#endif
/* Tokens.  */
#define INTEGER 258
#define DOUBLE 259
#define ASL_STRING 260
#define QNAME 261
#define VARIABLE 262
#define ATTRIBUTON_VARIABLE 263
#define BOOLEAN 264
#define UNDEF 265
#define WHILE 266
#define EOL 267
#define END_OF_FILE 268
#define NOT 269
#define EQ 270
#define NEQ 271
#define GT 272
#define GTE 273
#define LT 274
#define LTE 275
#define AND 276
#define OR 277
#define MINUS 278
#define PLUS 279
#define DIVISION 280
#define MULT 281
#define EQUAL 282
#define LBRACE 283
#define RBRACE 284
#define SEMICOLON 285
#define DOT 286
#define COMMA 287
#define DOTDOT 288
#define LBRACE_PER 289
#define RBRACE_PER 290
#define LCURLY_PER 291
#define RCURLY_PER 292
#define LSQUAREBRACE 293
#define RSQUAREBRACE 294
#define TWOSQUAREBRACES 295
#define LCURLYBRACE 296
#define RCURLYBRACE 297
#define BACKQUOTE 298
#define DEFUN 299
#define IF 300
#define THEN 301
#define ELSE 302
#define UNMINUS 303
#define SQUARE 304




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 42 "yacc.y"

    char*    sValue;
    Integer* iValue;
    Double*  dValue;
    Boolean* bValue;
    Thing*   tValue;
    String*  aslsValue;
    Undef*   uValue;
    QName*   qValue;
    Node*    nValue;



/* Line 1676 of yacc.c  */
#line 164 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


