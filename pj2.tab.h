/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_PJ2_TAB_H_INCLUDED
# define YY_YY_PJ2_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AND = 258,
    ARRAY = 259,
    BEGIN_1 = 260,
    BY = 261,
    DIV = 262,
    DO = 263,
    ELSE = 264,
    ELSIF = 265,
    END = 266,
    EXIT = 267,
    FOR = 268,
    IF = 269,
    IN = 270,
    IS = 271,
    LOOP = 272,
    MOD = 273,
    NOT = 274,
    OF = 275,
    OR = 276,
    OUT = 277,
    PROCEDURE = 278,
    PROGRAM = 279,
    READ = 280,
    RECORD = 281,
    RETURN = 282,
    THEN = 283,
    TO = 284,
    TYPE = 285,
    VAR = 286,
    WHILE = 287,
    WRITE = 288,
    ID = 289,
    REAL = 290,
    STRING = 291,
    INTEGER = 292,
    COLON = 293,
    SEMICOLON = 294,
    COMMA = 295,
    DOT = 296,
    LB = 297,
    RB = 298,
    LSB = 299,
    RSB = 300,
    LCB = 301,
    RCB = 302,
    LAB = 303,
    RAB = 304,
    ASSIGN = 305,
    ADD = 306,
    SUB = 307,
    MULT = 308,
    DIVD = 309,
    LT = 310,
    LE = 311,
    GT = 312,
    GE = 313,
    EQ = 314,
    NEQ = 315,
    BADCHAR = 316,
    UNTERSTR = 317,
    UNTERCOM = 318,
    ORINT = 319,
    OLSTR = 320,
    TABSSTR = 321,
    TABSTR = 322,
    ORREAL = 323,
    OLID = 324,
    ASSIGNOP = 325
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef struct Node * YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PJ2_TAB_H_INCLUDED  */
