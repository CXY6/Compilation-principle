/* A Bison parser, made by GNU Bison 3.7.3.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SRC_MAIN_TAB_H_INCLUDED
# define YY_YY_SRC_MAIN_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_CHAR = 258,                  /* T_CHAR  */
    T_INT = 259,                   /* T_INT  */
    T_STRING = 260,                /* T_STRING  */
    T_BOOL = 261,                  /* T_BOOL  */
    WHILE = 262,                   /* WHILE  */
    FOR = 263,                     /* FOR  */
    IF = 264,                      /* IF  */
    MAIN = 265,                    /* MAIN  */
    SCANF = 266,                   /* SCANF  */
    PRINTF = 267,                  /* PRINTF  */
    COMMA = 268,                   /* COMMA  */
    LEFT = 269,                    /* LEFT  */
    RIGHT = 270,                   /* RIGHT  */
    LEFT2 = 271,                   /* LEFT2  */
    RIGHT2 = 272,                  /* RIGHT2  */
    SEMICOLON = 273,               /* SEMICOLON  */
    REFERENCE = 274,               /* REFERENCE  */
    ASSIGNEQUAL = 275,             /* ASSIGNEQUAL  */
    ADDEQUAL = 276,                /* ADDEQUAL  */
    SUBEQUAL = 277,                /* SUBEQUAL  */
    MULEQUAL = 278,                /* MULEQUAL  */
    DIVEQUAL = 279,                /* DIVEQUAL  */
    OR = 280,                      /* OR  */
    AND = 281,                     /* AND  */
    NOT = 282,                     /* NOT  */
    EQUAL = 283,                   /* EQUAL  */
    NOTEQUAL = 284,                /* NOTEQUAL  */
    GREAT = 285,                   /* GREAT  */
    LESS = 286,                    /* LESS  */
    GREATEQUAL = 287,              /* GREATEQUAL  */
    LESSEQUAL = 288,               /* LESSEQUAL  */
    ADD = 289,                     /* ADD  */
    SUB = 290,                     /* SUB  */
    MUL = 291,                     /* MUL  */
    DIV = 292,                     /* DIV  */
    MOD = 293,                     /* MOD  */
    IDENTIFIER = 294,              /* IDENTIFIER  */
    INTEGER = 295,                 /* INTEGER  */
    CHAR = 296,                    /* CHAR  */
    BOOL = 297,                    /* BOOL  */
    STRING = 298,                  /* STRING  */
    UMINUS = 299,                  /* UMINUS  */
    UADD = 300,                    /* UADD  */
    SELFADD_R = 301,               /* SELFADD_R  */
    SELFSUB_R = 302,               /* SELFSUB_R  */
    SELFADD = 303,                 /* SELFADD  */
    SELFSUB = 304                  /* SELFSUB  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_MAIN_TAB_H_INCLUDED  */
