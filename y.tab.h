/* A Bison parser, made by GNU Bison 3.0.5.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    ARCH = 258,
    COMMA = 259,
    CONFIG = 260,
    CPU = 261,
    NOCPU = 262,
    DEVICE = 263,
    NODEVICE = 264,
    ENV = 265,
    EQUALS = 266,
    PLUSEQUALS = 267,
    HINTS = 268,
    IDENT = 269,
    MAXUSERS = 270,
    PROFILE = 271,
    OPTIONS = 272,
    NOOPTION = 273,
    MAKEOPTIONS = 274,
    NOMAKEOPTION = 275,
    SEMICOLON = 276,
    INCLUDE = 277,
    FILES = 278,
    ID = 279,
    NUMBER = 280,
    PATH = 281
  };
#endif
/* Tokens.  */
#define ARCH 258
#define COMMA 259
#define CONFIG 260
#define CPU 261
#define NOCPU 262
#define DEVICE 263
#define NODEVICE 264
#define ENV 265
#define EQUALS 266
#define PLUSEQUALS 267
#define HINTS 268
#define IDENT 269
#define MAXUSERS 270
#define PROFILE 271
#define OPTIONS 272
#define NOOPTION 273
#define MAKEOPTIONS 274
#define NOMAKEOPTION 275
#define SEMICOLON 276
#define INCLUDE 277
#define FILES 278
#define ID 279
#define NUMBER 280
#define PATH 281

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 1 "config.y" /* yacc.c:1910  */

	char	*str;
	int	val;
	struct	file_list *file;

#line 112 "y.tab.h" /* yacc.c:1910  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
