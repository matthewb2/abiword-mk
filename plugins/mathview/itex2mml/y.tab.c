/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30704

/* Bison version string.  */
#define YYBISON_VERSION "3.7.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         itex2MML_yyparse
#define yylex           itex2MML_yylex
#define yyerror         itex2MML_yyerror
#define yydebug         itex2MML_yydebug
#define yynerrs         itex2MML_yynerrs
#define yylval          itex2MML_yylval
#define yychar          itex2MML_yychar

/* First part of user prologue.  */
#line 7 "itex2MML.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "itex2MML.h"

#define YYSTYPE char *
#define YYPARSE_PARAM_TYPE char **
#define YYPARSE_PARAM ret_str

#define yytext itex2MML_yytext

 extern int yylex ();

 extern char * yytext;

 static void itex2MML_default_error (const char * msg)
   {
     if (msg)
       fprintf(stderr, "Line: %d Error: %s\n", itex2MML_lineno, msg);
   }

 void (*itex2MML_error) (const char * msg) = itex2MML_default_error;

 static void yyerror (char **ret_str, char * s)
   {
     char * msg = itex2MML_copy3 (s, " at token ", yytext);
     if (itex2MML_error)
       (*itex2MML_error) (msg);
     itex2MML_free_string (msg);
   }

 /* Note: If length is 0, then buffer is treated like a string; otherwise only length bytes are written.
  */
 static void itex2MML_default_write (const char * buffer, unsigned long length)
   {
     if (buffer)
       {
	 if (length)
	   fwrite (buffer, 1, length, stdout);
	 else
	   fputs (buffer, stdout);
       }
   }

 static void itex2MML_default_write_mathml (const char * mathml)
   {
     if (itex2MML_write)
       (*itex2MML_write) (mathml, 0);
   }

#ifdef itex2MML_CAPTURE
    static char * itex2MML_output_string = "" ;

    const char * itex2MML_output ()
    {
        char * copy = (char *) malloc((itex2MML_output_string ? strlen(itex2MML_output_string) : 0) + 1);
        if (copy)
          {
           if (itex2MML_output_string)
             {
               strcpy(copy, itex2MML_output_string);
               if (*itex2MML_output_string != '\0')
                   free(itex2MML_output_string);
             }
           else
             copy[0] = 0;
           itex2MML_output_string = "";
          }
        return copy;
    }

 static void itex2MML_capture (const char * buffer, unsigned long length)
    {
     if (buffer)
       {
         if (length)
           {
              unsigned long first_length = itex2MML_output_string ? strlen(itex2MML_output_string) : 0;
              char * copy  = (char *) malloc(first_length + length + 1);
              if (copy)
                {
                  if (itex2MML_output_string)
                    {
                       strcpy(copy, itex2MML_output_string);
                       if (*itex2MML_output_string != '\0')
                          free(itex2MML_output_string);
                    }
                  else
                     copy[0] = 0;
                  strncat(copy, buffer, length);
                  itex2MML_output_string = copy;
                 }
            }
         else
            {
              char * copy = itex2MML_copy2(itex2MML_output_string, buffer);
              if (*itex2MML_output_string != '\0')
                 free(itex2MML_output_string);
              itex2MML_output_string = copy;
            }
        }
    }

    static void itex2MML_capture_mathml (const char * buffer)
    {
       char * temp = itex2MML_copy2(itex2MML_output_string, buffer);
       if (*itex2MML_output_string != '\0')
         free(itex2MML_output_string);
       itex2MML_output_string = temp;
    }
    void (*itex2MML_write) (const char * buffer, unsigned long length) = itex2MML_capture;
    void (*itex2MML_write_mathml) (const char * mathml) = itex2MML_capture_mathml;
#else
    void (*itex2MML_write) (const char * buffer, unsigned long length) = itex2MML_default_write;
    void (*itex2MML_write_mathml) (const char * mathml) = itex2MML_default_write_mathml;
#endif

 char * itex2MML_empty_string = "";

 /* Create a copy of a string, adding space for extra chars
  */
 char * itex2MML_copy_string_extra (const char * str, unsigned extra)
   {
     char * copy = (char *) malloc(extra + (str ? strlen (str) : 0) + 1);
     if (copy)
       {
	 if (str)
	   strcpy(copy, str);
	 else
	   copy[0] = 0;
       }
     return copy ? copy : itex2MML_empty_string;
   }

 /* Create a copy of a string, appending two strings
  */
 char * itex2MML_copy3 (const char * first, const char * second, const char * third)
   {
     int  first_length =  first ? strlen( first) : 0;
     int second_length = second ? strlen(second) : 0;
     int  third_length =  third ? strlen( third) : 0;

     char * copy = (char *) malloc(first_length + second_length + third_length + 1);

     if (copy)
       {
	 if (first)
	   strcpy(copy, first);
	 else
	   copy[0] = 0;

	 if (second) strcat(copy, second);
	 if ( third) strcat(copy,  third);
       }
     return copy ? copy : itex2MML_empty_string;
   }

 /* Create a copy of a string, appending a second string
  */
 char * itex2MML_copy2 (const char * first, const char * second)
   {
     return itex2MML_copy3(first, second, 0);
   }

 /* Create a copy of a string
  */
 char * itex2MML_copy_string (const char * str)
   {
     return itex2MML_copy3(str, 0, 0);
   }

 /* Create a copy of a string, escaping unsafe characters for XML
  */
 char * itex2MML_copy_escaped (const char * str)
   {
     unsigned long length = 0;

     const char * ptr1 = str;

     char * ptr2 = 0;
     char * copy = 0;

     if ( str == 0) return itex2MML_empty_string;
     if (*str == 0) return itex2MML_empty_string;

     while (*ptr1)
       {
	 switch (*ptr1)
	   {
	   case '<':  /* &lt;   */
	   case '>':  /* &gt;   */
	     length += 4;
	     break;
	   case '&':  /* &amp;  */
	     length += 5;
	     break;
	   case '\'': /* &apos; */
	   case '"':  /* &quot; */
	   case '-':  /* &#x2d; */
	     length += 6;
	     break;
	   default:
	     length += 1;
	     break;
	   }
	 ++ptr1;
       }

     copy = (char *) malloc (length + 1);

     if (copy)
       {
	 ptr1 = str;
	 ptr2 = copy;

	 while (*ptr1)
	   {
	     switch (*ptr1)
	       {
	       case '<':
		 strcpy (ptr2, "&lt;");
		 ptr2 += 4;
		 break;
	       case '>':
		 strcpy (ptr2, "&gt;");
		 ptr2 += 4;
		 break;
	       case '&':  /* &amp;  */
		 strcpy (ptr2, "&amp;");
		 ptr2 += 5;
		 break;
	       case '\'': /* &apos; */
		 strcpy (ptr2, "&apos;");
		 ptr2 += 6;
		 break;
	       case '"':  /* &quot; */
		 strcpy (ptr2, "&quot;");
		 ptr2 += 6;
		 break;
	       case '-':  /* &#x2d; */
		 strcpy (ptr2, "&#x2d;");
		 ptr2 += 6;
		 break;
	       default:
		 *ptr2++ = *ptr1;
		 break;
	       }
	     ++ptr1;
	   }
	 *ptr2 = 0;
       }
     return copy ? copy : itex2MML_empty_string;
   }

 /* Create a hex character reference string corresponding to code
  */
 char * itex2MML_character_reference (unsigned long int code)
   {
#define ENTITY_LENGTH 10
     char * entity = (char *) malloc(ENTITY_LENGTH);
     sprintf(entity, "&#x%05lx;", code);
     return entity;
   }

 void itex2MML_free_string (char * str)
   {
     if (str && str != itex2MML_empty_string)
       free(str);
   }


#line 352 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_ITEX2MML_YY_Y_TAB_H_INCLUDED
# define YY_ITEX2MML_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int itex2MML_yydebug;
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
    TEXOVER = 258,                 /* TEXOVER  */
    TEXATOP = 259,                 /* TEXATOP  */
    CHAR = 260,                    /* CHAR  */
    STARTMATH = 261,               /* STARTMATH  */
    STARTDMATH = 262,              /* STARTDMATH  */
    ENDMATH = 263,                 /* ENDMATH  */
    MI = 264,                      /* MI  */
    MIB = 265,                     /* MIB  */
    MN = 266,                      /* MN  */
    MO = 267,                      /* MO  */
    SUP = 268,                     /* SUP  */
    SUB = 269,                     /* SUB  */
    MROWOPEN = 270,                /* MROWOPEN  */
    MROWCLOSE = 271,               /* MROWCLOSE  */
    LEFT = 272,                    /* LEFT  */
    RIGHT = 273,                   /* RIGHT  */
    BIG = 274,                     /* BIG  */
    BBIG = 275,                    /* BBIG  */
    BIGG = 276,                    /* BIGG  */
    BBIGG = 277,                   /* BBIGG  */
    BIGL = 278,                    /* BIGL  */
    BBIGL = 279,                   /* BBIGL  */
    BIGGL = 280,                   /* BIGGL  */
    BBIGGL = 281,                  /* BBIGGL  */
    FRAC = 282,                    /* FRAC  */
    TFRAC = 283,                   /* TFRAC  */
    OPERATORNAME = 284,            /* OPERATORNAME  */
    MATHOP = 285,                  /* MATHOP  */
    MATHBIN = 286,                 /* MATHBIN  */
    MATHREL = 287,                 /* MATHREL  */
    MOP = 288,                     /* MOP  */
    MOL = 289,                     /* MOL  */
    MOLL = 290,                    /* MOLL  */
    MOF = 291,                     /* MOF  */
    MOR = 292,                     /* MOR  */
    PERIODDELIM = 293,             /* PERIODDELIM  */
    OTHERDELIM = 294,              /* OTHERDELIM  */
    LEFTDELIM = 295,               /* LEFTDELIM  */
    RIGHTDELIM = 296,              /* RIGHTDELIM  */
    MOS = 297,                     /* MOS  */
    MOB = 298,                     /* MOB  */
    SQRT = 299,                    /* SQRT  */
    ROOT = 300,                    /* ROOT  */
    BINOM = 301,                   /* BINOM  */
    TBINOM = 302,                  /* TBINOM  */
    UNDER = 303,                   /* UNDER  */
    OVER = 304,                    /* OVER  */
    OVERBRACE = 305,               /* OVERBRACE  */
    UNDERLINE = 306,               /* UNDERLINE  */
    UNDERBRACE = 307,              /* UNDERBRACE  */
    UNDEROVER = 308,               /* UNDEROVER  */
    TENSOR = 309,                  /* TENSOR  */
    MULTI = 310,                   /* MULTI  */
    ARRAYALIGN = 311,              /* ARRAYALIGN  */
    COLUMNALIGN = 312,             /* COLUMNALIGN  */
    ARRAY = 313,                   /* ARRAY  */
    COLSEP = 314,                  /* COLSEP  */
    ROWSEP = 315,                  /* ROWSEP  */
    ARRAYOPTS = 316,               /* ARRAYOPTS  */
    COLLAYOUT = 317,               /* COLLAYOUT  */
    COLALIGN = 318,                /* COLALIGN  */
    ROWALIGN = 319,                /* ROWALIGN  */
    ALIGN = 320,                   /* ALIGN  */
    EQROWS = 321,                  /* EQROWS  */
    EQCOLS = 322,                  /* EQCOLS  */
    ROWLINES = 323,                /* ROWLINES  */
    COLLINES = 324,                /* COLLINES  */
    FRAME = 325,                   /* FRAME  */
    PADDING = 326,                 /* PADDING  */
    ATTRLIST = 327,                /* ATTRLIST  */
    ITALICS = 328,                 /* ITALICS  */
    BOLD = 329,                    /* BOLD  */
    BOXED = 330,                   /* BOXED  */
    SLASHED = 331,                 /* SLASHED  */
    RM = 332,                      /* RM  */
    BB = 333,                      /* BB  */
    ST = 334,                      /* ST  */
    END = 335,                     /* END  */
    BBLOWERCHAR = 336,             /* BBLOWERCHAR  */
    BBUPPERCHAR = 337,             /* BBUPPERCHAR  */
    BBDIGIT = 338,                 /* BBDIGIT  */
    CALCHAR = 339,                 /* CALCHAR  */
    FRAKCHAR = 340,                /* FRAKCHAR  */
    CAL = 341,                     /* CAL  */
    FRAK = 342,                    /* FRAK  */
    CLAP = 343,                    /* CLAP  */
    LLAP = 344,                    /* LLAP  */
    RLAP = 345,                    /* RLAP  */
    ROWOPTS = 346,                 /* ROWOPTS  */
    TEXTSIZE = 347,                /* TEXTSIZE  */
    SCSIZE = 348,                  /* SCSIZE  */
    SCSCSIZE = 349,                /* SCSCSIZE  */
    DISPLAY = 350,                 /* DISPLAY  */
    TEXTSTY = 351,                 /* TEXTSTY  */
    TEXTBOX = 352,                 /* TEXTBOX  */
    TEXTSTRING = 353,              /* TEXTSTRING  */
    XMLSTRING = 354,               /* XMLSTRING  */
    CELLOPTS = 355,                /* CELLOPTS  */
    ROWSPAN = 356,                 /* ROWSPAN  */
    COLSPAN = 357,                 /* COLSPAN  */
    THINSPACE = 358,               /* THINSPACE  */
    MEDSPACE = 359,                /* MEDSPACE  */
    THICKSPACE = 360,              /* THICKSPACE  */
    QUAD = 361,                    /* QUAD  */
    QQUAD = 362,                   /* QQUAD  */
    NEGSPACE = 363,                /* NEGSPACE  */
    PHANTOM = 364,                 /* PHANTOM  */
    HREF = 365,                    /* HREF  */
    UNKNOWNCHAR = 366,             /* UNKNOWNCHAR  */
    EMPTYMROW = 367,               /* EMPTYMROW  */
    STATLINE = 368,                /* STATLINE  */
    TOOLTIP = 369,                 /* TOOLTIP  */
    TOGGLE = 370,                  /* TOGGLE  */
    FGHIGHLIGHT = 371,             /* FGHIGHLIGHT  */
    BGHIGHLIGHT = 372,             /* BGHIGHLIGHT  */
    SPACE = 373,                   /* SPACE  */
    INTONE = 374,                  /* INTONE  */
    INTTWO = 375,                  /* INTTWO  */
    INTTHREE = 376,                /* INTTHREE  */
    BAR = 377,                     /* BAR  */
    WIDEBAR = 378,                 /* WIDEBAR  */
    VEC = 379,                     /* VEC  */
    WIDEVEC = 380,                 /* WIDEVEC  */
    HAT = 381,                     /* HAT  */
    WIDEHAT = 382,                 /* WIDEHAT  */
    CHECK = 383,                   /* CHECK  */
    WIDECHECK = 384,               /* WIDECHECK  */
    TILDE = 385,                   /* TILDE  */
    WIDETILDE = 386,               /* WIDETILDE  */
    DOT = 387,                     /* DOT  */
    DDOT = 388,                    /* DDOT  */
    DDDOT = 389,                   /* DDDOT  */
    DDDDOT = 390,                  /* DDDDOT  */
    UNARYMINUS = 391,              /* UNARYMINUS  */
    UNARYPLUS = 392,               /* UNARYPLUS  */
    BEGINENV = 393,                /* BEGINENV  */
    ENDENV = 394,                  /* ENDENV  */
    MATRIX = 395,                  /* MATRIX  */
    PMATRIX = 396,                 /* PMATRIX  */
    BMATRIX = 397,                 /* BMATRIX  */
    BBMATRIX = 398,                /* BBMATRIX  */
    VMATRIX = 399,                 /* VMATRIX  */
    VVMATRIX = 400,                /* VVMATRIX  */
    SVG = 401,                     /* SVG  */
    ENDSVG = 402,                  /* ENDSVG  */
    SMALLMATRIX = 403,             /* SMALLMATRIX  */
    CASES = 404,                   /* CASES  */
    ALIGNED = 405,                 /* ALIGNED  */
    GATHERED = 406,                /* GATHERED  */
    SUBSTACK = 407,                /* SUBSTACK  */
    PMOD = 408,                    /* PMOD  */
    RMCHAR = 409,                  /* RMCHAR  */
    COLOR = 410,                   /* COLOR  */
    BGCOLOR = 411,                 /* BGCOLOR  */
    XARROW = 412,                  /* XARROW  */
    OPTARGOPEN = 413,              /* OPTARGOPEN  */
    OPTARGCLOSE = 414,             /* OPTARGCLOSE  */
    ITEXNUM = 415,                 /* ITEXNUM  */
    RAISEBOX = 416,                /* RAISEBOX  */
    NEG = 417                      /* NEG  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define TEXOVER 258
#define TEXATOP 259
#define CHAR 260
#define STARTMATH 261
#define STARTDMATH 262
#define ENDMATH 263
#define MI 264
#define MIB 265
#define MN 266
#define MO 267
#define SUP 268
#define SUB 269
#define MROWOPEN 270
#define MROWCLOSE 271
#define LEFT 272
#define RIGHT 273
#define BIG 274
#define BBIG 275
#define BIGG 276
#define BBIGG 277
#define BIGL 278
#define BBIGL 279
#define BIGGL 280
#define BBIGGL 281
#define FRAC 282
#define TFRAC 283
#define OPERATORNAME 284
#define MATHOP 285
#define MATHBIN 286
#define MATHREL 287
#define MOP 288
#define MOL 289
#define MOLL 290
#define MOF 291
#define MOR 292
#define PERIODDELIM 293
#define OTHERDELIM 294
#define LEFTDELIM 295
#define RIGHTDELIM 296
#define MOS 297
#define MOB 298
#define SQRT 299
#define ROOT 300
#define BINOM 301
#define TBINOM 302
#define UNDER 303
#define OVER 304
#define OVERBRACE 305
#define UNDERLINE 306
#define UNDERBRACE 307
#define UNDEROVER 308
#define TENSOR 309
#define MULTI 310
#define ARRAYALIGN 311
#define COLUMNALIGN 312
#define ARRAY 313
#define COLSEP 314
#define ROWSEP 315
#define ARRAYOPTS 316
#define COLLAYOUT 317
#define COLALIGN 318
#define ROWALIGN 319
#define ALIGN 320
#define EQROWS 321
#define EQCOLS 322
#define ROWLINES 323
#define COLLINES 324
#define FRAME 325
#define PADDING 326
#define ATTRLIST 327
#define ITALICS 328
#define BOLD 329
#define BOXED 330
#define SLASHED 331
#define RM 332
#define BB 333
#define ST 334
#define END 335
#define BBLOWERCHAR 336
#define BBUPPERCHAR 337
#define BBDIGIT 338
#define CALCHAR 339
#define FRAKCHAR 340
#define CAL 341
#define FRAK 342
#define CLAP 343
#define LLAP 344
#define RLAP 345
#define ROWOPTS 346
#define TEXTSIZE 347
#define SCSIZE 348
#define SCSCSIZE 349
#define DISPLAY 350
#define TEXTSTY 351
#define TEXTBOX 352
#define TEXTSTRING 353
#define XMLSTRING 354
#define CELLOPTS 355
#define ROWSPAN 356
#define COLSPAN 357
#define THINSPACE 358
#define MEDSPACE 359
#define THICKSPACE 360
#define QUAD 361
#define QQUAD 362
#define NEGSPACE 363
#define PHANTOM 364
#define HREF 365
#define UNKNOWNCHAR 366
#define EMPTYMROW 367
#define STATLINE 368
#define TOOLTIP 369
#define TOGGLE 370
#define FGHIGHLIGHT 371
#define BGHIGHLIGHT 372
#define SPACE 373
#define INTONE 374
#define INTTWO 375
#define INTTHREE 376
#define BAR 377
#define WIDEBAR 378
#define VEC 379
#define WIDEVEC 380
#define HAT 381
#define WIDEHAT 382
#define CHECK 383
#define WIDECHECK 384
#define TILDE 385
#define WIDETILDE 386
#define DOT 387
#define DDOT 388
#define DDDOT 389
#define DDDDOT 390
#define UNARYMINUS 391
#define UNARYPLUS 392
#define BEGINENV 393
#define ENDENV 394
#define MATRIX 395
#define PMATRIX 396
#define BMATRIX 397
#define BBMATRIX 398
#define VMATRIX 399
#define VVMATRIX 400
#define SVG 401
#define ENDSVG 402
#define SMALLMATRIX 403
#define CASES 404
#define ALIGNED 405
#define GATHERED 406
#define SUBSTACK 407
#define PMOD 408
#define RMCHAR 409
#define COLOR 410
#define BGCOLOR 411
#define XARROW 412
#define OPTARGOPEN 413
#define OPTARGCLOSE 414
#define ITEXNUM 415
#define RAISEBOX 416
#define NEG 417

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE itex2MML_yylval;

int itex2MML_yyparse (char **ret_str);

#endif /* !YY_ITEX2MML_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TEXOVER = 3,                    /* TEXOVER  */
  YYSYMBOL_TEXATOP = 4,                    /* TEXATOP  */
  YYSYMBOL_CHAR = 5,                       /* CHAR  */
  YYSYMBOL_STARTMATH = 6,                  /* STARTMATH  */
  YYSYMBOL_STARTDMATH = 7,                 /* STARTDMATH  */
  YYSYMBOL_ENDMATH = 8,                    /* ENDMATH  */
  YYSYMBOL_MI = 9,                         /* MI  */
  YYSYMBOL_MIB = 10,                       /* MIB  */
  YYSYMBOL_MN = 11,                        /* MN  */
  YYSYMBOL_MO = 12,                        /* MO  */
  YYSYMBOL_SUP = 13,                       /* SUP  */
  YYSYMBOL_SUB = 14,                       /* SUB  */
  YYSYMBOL_MROWOPEN = 15,                  /* MROWOPEN  */
  YYSYMBOL_MROWCLOSE = 16,                 /* MROWCLOSE  */
  YYSYMBOL_LEFT = 17,                      /* LEFT  */
  YYSYMBOL_RIGHT = 18,                     /* RIGHT  */
  YYSYMBOL_BIG = 19,                       /* BIG  */
  YYSYMBOL_BBIG = 20,                      /* BBIG  */
  YYSYMBOL_BIGG = 21,                      /* BIGG  */
  YYSYMBOL_BBIGG = 22,                     /* BBIGG  */
  YYSYMBOL_BIGL = 23,                      /* BIGL  */
  YYSYMBOL_BBIGL = 24,                     /* BBIGL  */
  YYSYMBOL_BIGGL = 25,                     /* BIGGL  */
  YYSYMBOL_BBIGGL = 26,                    /* BBIGGL  */
  YYSYMBOL_FRAC = 27,                      /* FRAC  */
  YYSYMBOL_TFRAC = 28,                     /* TFRAC  */
  YYSYMBOL_OPERATORNAME = 29,              /* OPERATORNAME  */
  YYSYMBOL_MATHOP = 30,                    /* MATHOP  */
  YYSYMBOL_MATHBIN = 31,                   /* MATHBIN  */
  YYSYMBOL_MATHREL = 32,                   /* MATHREL  */
  YYSYMBOL_MOP = 33,                       /* MOP  */
  YYSYMBOL_MOL = 34,                       /* MOL  */
  YYSYMBOL_MOLL = 35,                      /* MOLL  */
  YYSYMBOL_MOF = 36,                       /* MOF  */
  YYSYMBOL_MOR = 37,                       /* MOR  */
  YYSYMBOL_PERIODDELIM = 38,               /* PERIODDELIM  */
  YYSYMBOL_OTHERDELIM = 39,                /* OTHERDELIM  */
  YYSYMBOL_LEFTDELIM = 40,                 /* LEFTDELIM  */
  YYSYMBOL_RIGHTDELIM = 41,                /* RIGHTDELIM  */
  YYSYMBOL_MOS = 42,                       /* MOS  */
  YYSYMBOL_MOB = 43,                       /* MOB  */
  YYSYMBOL_SQRT = 44,                      /* SQRT  */
  YYSYMBOL_ROOT = 45,                      /* ROOT  */
  YYSYMBOL_BINOM = 46,                     /* BINOM  */
  YYSYMBOL_TBINOM = 47,                    /* TBINOM  */
  YYSYMBOL_UNDER = 48,                     /* UNDER  */
  YYSYMBOL_OVER = 49,                      /* OVER  */
  YYSYMBOL_OVERBRACE = 50,                 /* OVERBRACE  */
  YYSYMBOL_UNDERLINE = 51,                 /* UNDERLINE  */
  YYSYMBOL_UNDERBRACE = 52,                /* UNDERBRACE  */
  YYSYMBOL_UNDEROVER = 53,                 /* UNDEROVER  */
  YYSYMBOL_TENSOR = 54,                    /* TENSOR  */
  YYSYMBOL_MULTI = 55,                     /* MULTI  */
  YYSYMBOL_ARRAYALIGN = 56,                /* ARRAYALIGN  */
  YYSYMBOL_COLUMNALIGN = 57,               /* COLUMNALIGN  */
  YYSYMBOL_ARRAY = 58,                     /* ARRAY  */
  YYSYMBOL_COLSEP = 59,                    /* COLSEP  */
  YYSYMBOL_ROWSEP = 60,                    /* ROWSEP  */
  YYSYMBOL_ARRAYOPTS = 61,                 /* ARRAYOPTS  */
  YYSYMBOL_COLLAYOUT = 62,                 /* COLLAYOUT  */
  YYSYMBOL_COLALIGN = 63,                  /* COLALIGN  */
  YYSYMBOL_ROWALIGN = 64,                  /* ROWALIGN  */
  YYSYMBOL_ALIGN = 65,                     /* ALIGN  */
  YYSYMBOL_EQROWS = 66,                    /* EQROWS  */
  YYSYMBOL_EQCOLS = 67,                    /* EQCOLS  */
  YYSYMBOL_ROWLINES = 68,                  /* ROWLINES  */
  YYSYMBOL_COLLINES = 69,                  /* COLLINES  */
  YYSYMBOL_FRAME = 70,                     /* FRAME  */
  YYSYMBOL_PADDING = 71,                   /* PADDING  */
  YYSYMBOL_ATTRLIST = 72,                  /* ATTRLIST  */
  YYSYMBOL_ITALICS = 73,                   /* ITALICS  */
  YYSYMBOL_BOLD = 74,                      /* BOLD  */
  YYSYMBOL_BOXED = 75,                     /* BOXED  */
  YYSYMBOL_SLASHED = 76,                   /* SLASHED  */
  YYSYMBOL_RM = 77,                        /* RM  */
  YYSYMBOL_BB = 78,                        /* BB  */
  YYSYMBOL_ST = 79,                        /* ST  */
  YYSYMBOL_END = 80,                       /* END  */
  YYSYMBOL_BBLOWERCHAR = 81,               /* BBLOWERCHAR  */
  YYSYMBOL_BBUPPERCHAR = 82,               /* BBUPPERCHAR  */
  YYSYMBOL_BBDIGIT = 83,                   /* BBDIGIT  */
  YYSYMBOL_CALCHAR = 84,                   /* CALCHAR  */
  YYSYMBOL_FRAKCHAR = 85,                  /* FRAKCHAR  */
  YYSYMBOL_CAL = 86,                       /* CAL  */
  YYSYMBOL_FRAK = 87,                      /* FRAK  */
  YYSYMBOL_CLAP = 88,                      /* CLAP  */
  YYSYMBOL_LLAP = 89,                      /* LLAP  */
  YYSYMBOL_RLAP = 90,                      /* RLAP  */
  YYSYMBOL_ROWOPTS = 91,                   /* ROWOPTS  */
  YYSYMBOL_TEXTSIZE = 92,                  /* TEXTSIZE  */
  YYSYMBOL_SCSIZE = 93,                    /* SCSIZE  */
  YYSYMBOL_SCSCSIZE = 94,                  /* SCSCSIZE  */
  YYSYMBOL_DISPLAY = 95,                   /* DISPLAY  */
  YYSYMBOL_TEXTSTY = 96,                   /* TEXTSTY  */
  YYSYMBOL_TEXTBOX = 97,                   /* TEXTBOX  */
  YYSYMBOL_TEXTSTRING = 98,                /* TEXTSTRING  */
  YYSYMBOL_XMLSTRING = 99,                 /* XMLSTRING  */
  YYSYMBOL_CELLOPTS = 100,                 /* CELLOPTS  */
  YYSYMBOL_ROWSPAN = 101,                  /* ROWSPAN  */
  YYSYMBOL_COLSPAN = 102,                  /* COLSPAN  */
  YYSYMBOL_THINSPACE = 103,                /* THINSPACE  */
  YYSYMBOL_MEDSPACE = 104,                 /* MEDSPACE  */
  YYSYMBOL_THICKSPACE = 105,               /* THICKSPACE  */
  YYSYMBOL_QUAD = 106,                     /* QUAD  */
  YYSYMBOL_QQUAD = 107,                    /* QQUAD  */
  YYSYMBOL_NEGSPACE = 108,                 /* NEGSPACE  */
  YYSYMBOL_PHANTOM = 109,                  /* PHANTOM  */
  YYSYMBOL_HREF = 110,                     /* HREF  */
  YYSYMBOL_UNKNOWNCHAR = 111,              /* UNKNOWNCHAR  */
  YYSYMBOL_EMPTYMROW = 112,                /* EMPTYMROW  */
  YYSYMBOL_STATLINE = 113,                 /* STATLINE  */
  YYSYMBOL_TOOLTIP = 114,                  /* TOOLTIP  */
  YYSYMBOL_TOGGLE = 115,                   /* TOGGLE  */
  YYSYMBOL_FGHIGHLIGHT = 116,              /* FGHIGHLIGHT  */
  YYSYMBOL_BGHIGHLIGHT = 117,              /* BGHIGHLIGHT  */
  YYSYMBOL_SPACE = 118,                    /* SPACE  */
  YYSYMBOL_INTONE = 119,                   /* INTONE  */
  YYSYMBOL_INTTWO = 120,                   /* INTTWO  */
  YYSYMBOL_INTTHREE = 121,                 /* INTTHREE  */
  YYSYMBOL_BAR = 122,                      /* BAR  */
  YYSYMBOL_WIDEBAR = 123,                  /* WIDEBAR  */
  YYSYMBOL_VEC = 124,                      /* VEC  */
  YYSYMBOL_WIDEVEC = 125,                  /* WIDEVEC  */
  YYSYMBOL_HAT = 126,                      /* HAT  */
  YYSYMBOL_WIDEHAT = 127,                  /* WIDEHAT  */
  YYSYMBOL_CHECK = 128,                    /* CHECK  */
  YYSYMBOL_WIDECHECK = 129,                /* WIDECHECK  */
  YYSYMBOL_TILDE = 130,                    /* TILDE  */
  YYSYMBOL_WIDETILDE = 131,                /* WIDETILDE  */
  YYSYMBOL_DOT = 132,                      /* DOT  */
  YYSYMBOL_DDOT = 133,                     /* DDOT  */
  YYSYMBOL_DDDOT = 134,                    /* DDDOT  */
  YYSYMBOL_DDDDOT = 135,                   /* DDDDOT  */
  YYSYMBOL_UNARYMINUS = 136,               /* UNARYMINUS  */
  YYSYMBOL_UNARYPLUS = 137,                /* UNARYPLUS  */
  YYSYMBOL_BEGINENV = 138,                 /* BEGINENV  */
  YYSYMBOL_ENDENV = 139,                   /* ENDENV  */
  YYSYMBOL_MATRIX = 140,                   /* MATRIX  */
  YYSYMBOL_PMATRIX = 141,                  /* PMATRIX  */
  YYSYMBOL_BMATRIX = 142,                  /* BMATRIX  */
  YYSYMBOL_BBMATRIX = 143,                 /* BBMATRIX  */
  YYSYMBOL_VMATRIX = 144,                  /* VMATRIX  */
  YYSYMBOL_VVMATRIX = 145,                 /* VVMATRIX  */
  YYSYMBOL_SVG = 146,                      /* SVG  */
  YYSYMBOL_ENDSVG = 147,                   /* ENDSVG  */
  YYSYMBOL_SMALLMATRIX = 148,              /* SMALLMATRIX  */
  YYSYMBOL_CASES = 149,                    /* CASES  */
  YYSYMBOL_ALIGNED = 150,                  /* ALIGNED  */
  YYSYMBOL_GATHERED = 151,                 /* GATHERED  */
  YYSYMBOL_SUBSTACK = 152,                 /* SUBSTACK  */
  YYSYMBOL_PMOD = 153,                     /* PMOD  */
  YYSYMBOL_RMCHAR = 154,                   /* RMCHAR  */
  YYSYMBOL_COLOR = 155,                    /* COLOR  */
  YYSYMBOL_BGCOLOR = 156,                  /* BGCOLOR  */
  YYSYMBOL_XARROW = 157,                   /* XARROW  */
  YYSYMBOL_OPTARGOPEN = 158,               /* OPTARGOPEN  */
  YYSYMBOL_OPTARGCLOSE = 159,              /* OPTARGCLOSE  */
  YYSYMBOL_ITEXNUM = 160,                  /* ITEXNUM  */
  YYSYMBOL_RAISEBOX = 161,                 /* RAISEBOX  */
  YYSYMBOL_NEG = 162,                      /* NEG  */
  YYSYMBOL_YYACCEPT = 163,                 /* $accept  */
  YYSYMBOL_doc = 164,                      /* doc  */
  YYSYMBOL_xmlmmlTermList = 165,           /* xmlmmlTermList  */
  YYSYMBOL_char = 166,                     /* char  */
  YYSYMBOL_expression = 167,               /* expression  */
  YYSYMBOL_compoundTermList = 168,         /* compoundTermList  */
  YYSYMBOL_compoundTerm = 169,             /* compoundTerm  */
  YYSYMBOL_closedTerm = 170,               /* closedTerm  */
  YYSYMBOL_left = 171,                     /* left  */
  YYSYMBOL_right = 172,                    /* right  */
  YYSYMBOL_bigdelim = 173,                 /* bigdelim  */
  YYSYMBOL_unrecognized = 174,             /* unrecognized  */
  YYSYMBOL_unaryminus = 175,               /* unaryminus  */
  YYSYMBOL_unaryplus = 176,                /* unaryplus  */
  YYSYMBOL_mi = 177,                       /* mi  */
  YYSYMBOL_mib = 178,                      /* mib  */
  YYSYMBOL_mn = 179,                       /* mn  */
  YYSYMBOL_mob = 180,                      /* mob  */
  YYSYMBOL_mo = 181,                       /* mo  */
  YYSYMBOL_space = 182,                    /* space  */
  YYSYMBOL_statusline = 183,               /* statusline  */
  YYSYMBOL_tooltip = 184,                  /* tooltip  */
  YYSYMBOL_toggle = 185,                   /* toggle  */
  YYSYMBOL_fghighlight = 186,              /* fghighlight  */
  YYSYMBOL_bghighlight = 187,              /* bghighlight  */
  YYSYMBOL_color = 188,                    /* color  */
  YYSYMBOL_mathrlap = 189,                 /* mathrlap  */
  YYSYMBOL_mathllap = 190,                 /* mathllap  */
  YYSYMBOL_mathclap = 191,                 /* mathclap  */
  YYSYMBOL_textstring = 192,               /* textstring  */
  YYSYMBOL_displaystyle = 193,             /* displaystyle  */
  YYSYMBOL_textstyle = 194,                /* textstyle  */
  YYSYMBOL_textsize = 195,                 /* textsize  */
  YYSYMBOL_scriptsize = 196,               /* scriptsize  */
  YYSYMBOL_scriptscriptsize = 197,         /* scriptscriptsize  */
  YYSYMBOL_italics = 198,                  /* italics  */
  YYSYMBOL_slashed = 199,                  /* slashed  */
  YYSYMBOL_boxed = 200,                    /* boxed  */
  YYSYMBOL_bold = 201,                     /* bold  */
  YYSYMBOL_roman = 202,                    /* roman  */
  YYSYMBOL_rmchars = 203,                  /* rmchars  */
  YYSYMBOL_bbold = 204,                    /* bbold  */
  YYSYMBOL_bbchars = 205,                  /* bbchars  */
  YYSYMBOL_bbchar = 206,                   /* bbchar  */
  YYSYMBOL_frak = 207,                     /* frak  */
  YYSYMBOL_frakletters = 208,              /* frakletters  */
  YYSYMBOL_frakletter = 209,               /* frakletter  */
  YYSYMBOL_cal = 210,                      /* cal  */
  YYSYMBOL_calletters = 211,               /* calletters  */
  YYSYMBOL_calletter = 212,                /* calletter  */
  YYSYMBOL_thinspace = 213,                /* thinspace  */
  YYSYMBOL_medspace = 214,                 /* medspace  */
  YYSYMBOL_thickspace = 215,               /* thickspace  */
  YYSYMBOL_quad = 216,                     /* quad  */
  YYSYMBOL_qquad = 217,                    /* qquad  */
  YYSYMBOL_negspace = 218,                 /* negspace  */
  YYSYMBOL_phantom = 219,                  /* phantom  */
  YYSYMBOL_href = 220,                     /* href  */
  YYSYMBOL_tensor = 221,                   /* tensor  */
  YYSYMBOL_multi = 222,                    /* multi  */
  YYSYMBOL_subsupList = 223,               /* subsupList  */
  YYSYMBOL_subsupTerm = 224,               /* subsupTerm  */
  YYSYMBOL_mfrac = 225,                    /* mfrac  */
  YYSYMBOL_pmod = 226,                     /* pmod  */
  YYSYMBOL_texover = 227,                  /* texover  */
  YYSYMBOL_texatop = 228,                  /* texatop  */
  YYSYMBOL_binom = 229,                    /* binom  */
  YYSYMBOL_munderbrace = 230,              /* munderbrace  */
  YYSYMBOL_munderline = 231,               /* munderline  */
  YYSYMBOL_moverbrace = 232,               /* moverbrace  */
  YYSYMBOL_bar = 233,                      /* bar  */
  YYSYMBOL_vec = 234,                      /* vec  */
  YYSYMBOL_dot = 235,                      /* dot  */
  YYSYMBOL_ddot = 236,                     /* ddot  */
  YYSYMBOL_dddot = 237,                    /* dddot  */
  YYSYMBOL_ddddot = 238,                   /* ddddot  */
  YYSYMBOL_tilde = 239,                    /* tilde  */
  YYSYMBOL_check = 240,                    /* check  */
  YYSYMBOL_hat = 241,                      /* hat  */
  YYSYMBOL_msqrt = 242,                    /* msqrt  */
  YYSYMBOL_mroot = 243,                    /* mroot  */
  YYSYMBOL_raisebox = 244,                 /* raisebox  */
  YYSYMBOL_munder = 245,                   /* munder  */
  YYSYMBOL_mover = 246,                    /* mover  */
  YYSYMBOL_munderover = 247,               /* munderover  */
  YYSYMBOL_emptymrow = 248,                /* emptymrow  */
  YYSYMBOL_mathenv = 249,                  /* mathenv  */
  YYSYMBOL_columnAlignList = 250,          /* columnAlignList  */
  YYSYMBOL_substack = 251,                 /* substack  */
  YYSYMBOL_array = 252,                    /* array  */
  YYSYMBOL_arrayopts = 253,                /* arrayopts  */
  YYSYMBOL_anarrayopt = 254,               /* anarrayopt  */
  YYSYMBOL_collayout = 255,                /* collayout  */
  YYSYMBOL_colalign = 256,                 /* colalign  */
  YYSYMBOL_rowalign = 257,                 /* rowalign  */
  YYSYMBOL_align = 258,                    /* align  */
  YYSYMBOL_eqrows = 259,                   /* eqrows  */
  YYSYMBOL_eqcols = 260,                   /* eqcols  */
  YYSYMBOL_rowlines = 261,                 /* rowlines  */
  YYSYMBOL_collines = 262,                 /* collines  */
  YYSYMBOL_frame = 263,                    /* frame  */
  YYSYMBOL_padding = 264,                  /* padding  */
  YYSYMBOL_tableRowList = 265,             /* tableRowList  */
  YYSYMBOL_tableRow = 266,                 /* tableRow  */
  YYSYMBOL_simpleTableRow = 267,           /* simpleTableRow  */
  YYSYMBOL_optsTableRow = 268,             /* optsTableRow  */
  YYSYMBOL_rowopts = 269,                  /* rowopts  */
  YYSYMBOL_arowopt = 270,                  /* arowopt  */
  YYSYMBOL_tableCell = 271,                /* tableCell  */
  YYSYMBOL_cellopts = 272,                 /* cellopts  */
  YYSYMBOL_acellopt = 273,                 /* acellopt  */
  YYSYMBOL_rowspan = 274,                  /* rowspan  */
  YYSYMBOL_colspan = 275                   /* colspan  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  190
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4668

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  163
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  113
/* YYNRULES -- Number of rules.  */
#define YYNRULES  314
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  561

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   417


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   286,   286,   289,   290,   291,   292,   293,   295,   297,
     298,   299,   312,   326,   330,   336,   355,   369,   388,   402,
     421,   435,   454,   468,   478,   488,   495,   502,   506,   510,
     515,   516,   517,   518,   519,   523,   527,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   563,   564,   565,   566,   567,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,   590,   594,   602,   603,
     604,   605,   607,   612,   617,   623,   627,   631,   636,   641,
     645,   649,   654,   658,   662,   667,   671,   675,   680,   684,
     688,   693,   698,   703,   708,   713,   718,   723,   729,   733,
     737,   741,   743,   749,   750,   756,   762,   763,   764,   769,
     774,   779,   783,   788,   792,   796,   800,   805,   810,   815,
     820,   825,   830,   836,   847,   855,   863,   871,   879,   887,
     894,   902,   907,   912,   917,   922,   927,   932,   937,   942,
     947,   952,   957,   962,   967,   972,   976,   982,   987,   991,
     997,  1001,  1005,  1013,  1018,  1022,  1028,  1033,  1038,  1042,
    1048,  1053,  1057,  1061,  1065,  1069,  1073,  1077,  1082,  1092,
    1099,  1107,  1117,  1126,  1134,  1138,  1144,  1149,  1153,  1157,
    1162,  1169,  1177,  1182,  1189,  1203,  1210,  1224,  1231,  1239,
    1244,  1249,  1254,  1258,  1263,  1267,  1272,  1277,  1282,  1287,
    1292,  1296,  1301,  1305,  1310,  1314,  1319,  1324,  1331,  1339,
    1352,  1365,  1375,  1387,  1396,  1406,  1413,  1421,  1428,  1436,
    1446,  1455,  1459,  1463,  1467,  1471,  1475,  1479,  1483,  1487,
    1491,  1495,  1499,  1509,  1516,  1520,  1524,  1529,  1534,  1539,
    1543,  1551,  1555,  1561,  1565,  1569,  1573,  1577,  1581,  1585,
    1589,  1593,  1597,  1602,  1607,  1612,  1617,  1622,  1627,  1632,
    1637,  1642,  1647,  1654,  1658,  1664,  1668,  1673,  1677,  1683,
    1691,  1695,  1701,  1705,  1710,  1713,  1717,  1725,  1729,  1735,
    1739,  1743,  1747,  1752,  1757
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TEXOVER", "TEXATOP",
  "CHAR", "STARTMATH", "STARTDMATH", "ENDMATH", "MI", "MIB", "MN", "MO",
  "SUP", "SUB", "MROWOPEN", "MROWCLOSE", "LEFT", "RIGHT", "BIG", "BBIG",
  "BIGG", "BBIGG", "BIGL", "BBIGL", "BIGGL", "BBIGGL", "FRAC", "TFRAC",
  "OPERATORNAME", "MATHOP", "MATHBIN", "MATHREL", "MOP", "MOL", "MOLL",
  "MOF", "MOR", "PERIODDELIM", "OTHERDELIM", "LEFTDELIM", "RIGHTDELIM",
  "MOS", "MOB", "SQRT", "ROOT", "BINOM", "TBINOM", "UNDER", "OVER",
  "OVERBRACE", "UNDERLINE", "UNDERBRACE", "UNDEROVER", "TENSOR", "MULTI",
  "ARRAYALIGN", "COLUMNALIGN", "ARRAY", "COLSEP", "ROWSEP", "ARRAYOPTS",
  "COLLAYOUT", "COLALIGN", "ROWALIGN", "ALIGN", "EQROWS", "EQCOLS",
  "ROWLINES", "COLLINES", "FRAME", "PADDING", "ATTRLIST", "ITALICS",
  "BOLD", "BOXED", "SLASHED", "RM", "BB", "ST", "END", "BBLOWERCHAR",
  "BBUPPERCHAR", "BBDIGIT", "CALCHAR", "FRAKCHAR", "CAL", "FRAK", "CLAP",
  "LLAP", "RLAP", "ROWOPTS", "TEXTSIZE", "SCSIZE", "SCSCSIZE", "DISPLAY",
  "TEXTSTY", "TEXTBOX", "TEXTSTRING", "XMLSTRING", "CELLOPTS", "ROWSPAN",
  "COLSPAN", "THINSPACE", "MEDSPACE", "THICKSPACE", "QUAD", "QQUAD",
  "NEGSPACE", "PHANTOM", "HREF", "UNKNOWNCHAR", "EMPTYMROW", "STATLINE",
  "TOOLTIP", "TOGGLE", "FGHIGHLIGHT", "BGHIGHLIGHT", "SPACE", "INTONE",
  "INTTWO", "INTTHREE", "BAR", "WIDEBAR", "VEC", "WIDEVEC", "HAT",
  "WIDEHAT", "CHECK", "WIDECHECK", "TILDE", "WIDETILDE", "DOT", "DDOT",
  "DDDOT", "DDDDOT", "UNARYMINUS", "UNARYPLUS", "BEGINENV", "ENDENV",
  "MATRIX", "PMATRIX", "BMATRIX", "BBMATRIX", "VMATRIX", "VVMATRIX", "SVG",
  "ENDSVG", "SMALLMATRIX", "CASES", "ALIGNED", "GATHERED", "SUBSTACK",
  "PMOD", "RMCHAR", "COLOR", "BGCOLOR", "XARROW", "OPTARGOPEN",
  "OPTARGCLOSE", "ITEXNUM", "RAISEBOX", "NEG", "$accept", "doc",
  "xmlmmlTermList", "char", "expression", "compoundTermList",
  "compoundTerm", "closedTerm", "left", "right", "bigdelim",
  "unrecognized", "unaryminus", "unaryplus", "mi", "mib", "mn", "mob",
  "mo", "space", "statusline", "tooltip", "toggle", "fghighlight",
  "bghighlight", "color", "mathrlap", "mathllap", "mathclap", "textstring",
  "displaystyle", "textstyle", "textsize", "scriptsize",
  "scriptscriptsize", "italics", "slashed", "boxed", "bold", "roman",
  "rmchars", "bbold", "bbchars", "bbchar", "frak", "frakletters",
  "frakletter", "cal", "calletters", "calletter", "thinspace", "medspace",
  "thickspace", "quad", "qquad", "negspace", "phantom", "href", "tensor",
  "multi", "subsupList", "subsupTerm", "mfrac", "pmod", "texover",
  "texatop", "binom", "munderbrace", "munderline", "moverbrace", "bar",
  "vec", "dot", "ddot", "dddot", "ddddot", "tilde", "check", "hat",
  "msqrt", "mroot", "raisebox", "munder", "mover", "munderover",
  "emptymrow", "mathenv", "columnAlignList", "substack", "array",
  "arrayopts", "anarrayopt", "collayout", "colalign", "rowalign", "align",
  "eqrows", "eqcols", "rowlines", "collines", "frame", "padding",
  "tableRowList", "tableRow", "simpleTableRow", "optsTableRow", "rowopts",
  "arowopt", "tableCell", "cellopts", "acellopt", "rowspan", "colspan", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417
};
#endif

#define YYPACT_NINF (-396)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     203,  -396,  1291,  1445,    27,   203,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  4354,  4354,  3130,   173,   180,   189,   192,
     195,    22,    92,   107,   141,  4354,  4354,   -20,   -18,    -9,
       3,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  3283,  4354,  4354,  4354,  4354,  4354,  4354,  4354,
    4354,  4354,  4354,   -13,    39,  4354,  4354,  4354,  4354,    14,
      58,    72,    76,  4354,  4354,  4354,  3130,  3130,  3130,  3130,
    3130,    70,  -396,  -396,  -396,  -396,  -396,  -396,  4354,    90,
    -396,  -396,   100,   104,  4354,    24,    38,   127,  4354,  4354,
    4354,  4354,  4354,  4354,  4354,  4354,  4354,  4354,  4354,  4354,
    4354,  4354,  -396,  -396,   -25,    67,  4354,  -396,   122,   150,
    3436,   148,   -64,  1599,  -396,    35,  3130,  -396,  -396,  -396,
    -396,  -396,   171,  -396,   211,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,    97,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  1753,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,   982,    31,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  4354,  4354,  -396,  -396,  -396,  -396,  3130,  -396,
    4354,  4354,  4354,  4354,  4354,  -396,  -396,  -396,  4354,   224,
     231,  4354,  1906,  -396,  -396,  -396,  -396,   103,   160,   174,
     175,  -396,  -396,  -396,  3130,  3130,  3130,  3130,  3130,  -396,
    -396,  4354,  4354,  4354,  4354,  4354,  4354,   140,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,   -16,  2059,  2059,  2059,  2059,  2059,  2059,   -87,
    2059,  2059,  2059,  2059,  2059,  -396,  3130,  3130,  3130,  -396,
    -396,  3589,   163,  -396,  -396,  4354,  4354,  1137,  4354,  4354,
    4354,  4354,  -396,  -396,  3130,  3130,  -396,  -396,  -396,  -396,
    2212,  -396,  -396,  -396,  -396,  -396,  4354,  4354,  3742,   231,
     231,  -396,   114,   248,   251,   253,   254,  3130,    10,  -396,
     212,  -396,  -396,   -60,  -396,  -396,  -396,   110,  -396,  -396,
     -38,  -396,  -396,   -44,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,   193,   196,   215,   -56,   -52,   -31,   -30,   -17,   -10,
     129,  -396,    -5,    -4,    -3,    -1,    12,  3130,  3130,  2365,
    3895,  -396,  4048,   263,   265,  3130,  3130,   115,  -396,   279,
     266,   284,   286,  2518,  2671,  4354,  -396,  -396,  4354,   287,
     183,  -396,  4354,   231,   108,   184,    81,  -396,  2059,  2824,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,   223,   215,  -396,
       1,   164,   162,   165,   166,   167,   161,  -396,   168,   159,
     169,   170,  -396,  4507,  4354,  -396,  4201,  -396,  4354,  4354,
    2977,  2977,  -396,  -396,  -396,  4354,  4354,  4354,  4354,  -396,
    -396,  -396,  -396,  4354,  -396,   -12,   187,   238,   242,   245,
     250,   252,   264,   268,   269,   270,   271,    96,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,    21,  -396,   272,   273,  -396,  -396,   -11,  -396,  -396,
    -396,  -396,  -396,   200,    17,  -396,  2059,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    4354,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,   231,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  2059,  -396,  2824,  -396,  -396,  -396,
    3130,  -396,   243,  2059,     9,  -396,   191,    19,   212,  3130,
     246,    11,   288,  -396,  -396,   205,   289,  -396,   275,  -396,
    -396
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,     8,     0,     0,     0,     2,     4,     5,     9,   131,
     132,   133,   138,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   147,   139,   140,   144,   148,   145,   143,   142,   141,
     146,   135,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   191,   192,   193,   194,   195,   196,     0,     0,
     128,   251,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   129,   130,     0,     0,     0,   175,     0,     0,
       0,     0,     0,     0,    13,    29,     0,   137,   101,    31,
      32,    34,    33,    35,   136,    36,    77,    87,    88,    89,
      90,    91,    92,    62,    61,    60,    78,    63,    64,    65,
      66,    67,    68,    74,    75,    69,    70,    71,    72,    73,
      76,    79,    80,    81,    82,    83,    84,    85,    86,    37,
      38,    39,   100,    93,    94,    40,    56,    57,    55,    46,
      47,    49,    50,    51,    52,    54,    53,    48,    41,    42,
      43,    44,    45,    58,    59,    98,    99,    30,    10,     0,
       1,     6,     7,    28,    33,   136,    27,     0,    29,   104,
     103,   102,   110,   108,   109,   113,   111,   112,   116,   114,
     115,   119,   117,   118,   121,   120,   123,   122,   125,   124,
     127,   126,     0,     0,   149,   150,   151,   152,     0,   236,
       0,     0,     0,     0,     0,   221,   220,   219,     0,     0,
       0,     0,   304,   170,   173,   172,   171,     0,     0,     0,
       0,   163,   162,   161,   167,   168,   169,   165,   166,   164,
     197,     0,     0,     0,     0,     0,     0,     0,   222,   223,
     224,   225,   234,   235,   232,   233,   230,   231,   226,   227,
     228,   229,     0,   304,   304,   304,   304,   304,   304,     0,
     304,   304,   304,   304,   304,   212,     0,     0,     0,   247,
     134,     0,     0,    11,    14,     0,     0,     0,     0,     0,
       0,     0,   176,    12,     0,     0,    96,    95,   210,   211,
       0,   238,   217,   218,   246,   248,     0,     0,     0,     0,
     200,   204,     0,     0,     0,     0,     0,   305,     0,   293,
     295,   296,   297,     0,   180,   181,   182,     0,   178,   190,
       0,   188,   186,     0,   184,   198,   154,   155,   156,   157,
     158,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   265,     0,     0,     0,     0,     0,   159,   160,     0,
       0,   243,     0,    26,    25,     0,     0,     0,    97,    22,
      20,    18,    16,     0,     0,     0,   250,   208,     0,   207,
       0,   205,     0,     0,     0,     0,     0,   269,   304,   304,
     174,   177,   179,   187,   189,   183,   185,     0,     0,   267,
       0,     0,     0,     0,     0,     0,     0,   264,     0,     0,
       0,     0,   268,     0,     0,   241,     0,   244,     0,     0,
       0,     0,   107,   106,   105,     0,     0,     0,     0,   213,
     215,   237,   209,     0,   199,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   271,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   302,
     303,     0,   300,     0,     0,   309,   310,     0,   307,   311,
     312,   294,   298,     0,     0,   266,   304,   252,   254,   255,
     257,   256,   258,   259,   260,   261,   253,   245,   249,   239,
       0,   242,    24,    23,   214,   216,    21,    19,    17,    15,
     206,     0,   202,   203,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   304,   272,   304,   301,   313,   314,
       0,   308,     0,   304,     0,   240,     0,     0,   299,   306,
       0,     0,     0,   201,   270,     0,     0,   263,     0,   262,
     153
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -396,  -396,  -396,   343,   344,    36,   -40,   536,  -396,  -191,
    -396,  -396,  -396,  -396,  -396,    -2,  -396,    73,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
     105,  -396,  -396,    15,  -396,  -396,    20,  -396,  -396,    18,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -234,  -323,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,   -46,  -396,  -396,
    -396,   -93,  -396,  -395,  -374,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -269,   -29,  -158,  -396,  -396,  -100,   -27,  -396,
    -102,  -396,  -396
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,   337,   114,   115,   116,   388,
     117,   118,   119,   120,   121,   194,   123,   195,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   347,   348,   149,   353,   354,   150,   350,   351,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     330,   331,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   420,   186,   187,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   338,   339,   340,   341,   481,   482,   342,   487,
     488,   489,   490
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     122,   122,   240,   521,   408,   540,   332,   401,   408,   401,
     479,   485,   370,   122,   364,   365,   366,   367,   368,   369,
     410,   372,   373,   374,   375,   376,   407,   190,   432,   408,
     408,   480,   486,   282,   301,   554,   415,   536,   113,   189,
     362,   352,   413,   408,   305,   306,   349,   317,   305,   306,
     408,   197,   458,   459,   242,   408,   408,   408,   495,   408,
     371,   214,   215,   363,   122,   122,   122,   122,   122,   408,
     408,   408,   408,   304,   495,   124,   124,   401,   224,   408,
     225,   496,   294,   421,   458,   459,   479,   422,   124,   226,
     483,   484,   485,   247,   312,   400,   265,   543,   302,   241,
     522,   227,   254,   255,   256,   257,   258,   480,   423,   424,
     266,   122,   534,   486,   122,   283,   284,   285,   286,   287,
     288,   289,   425,   290,   291,   292,   293,   327,   328,   426,
     402,   216,   217,   401,   428,   429,   430,   248,   431,   124,
     124,   124,   124,   124,   458,   459,   218,   219,   552,   304,
     556,   249,   307,   442,   443,   250,   444,   304,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   259,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     220,   221,   483,   484,   308,   309,   124,   122,   261,   124,
     411,   344,   345,   346,   296,   122,   327,   328,   262,   454,
     327,   328,   263,   523,   327,   328,   267,   553,     1,     2,
       3,   199,   200,   201,   304,   304,   304,   304,   304,   202,
     203,   204,   297,   401,   310,   311,   122,   544,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   327,   328,   329,
     122,   344,   345,   346,   327,   328,   300,   458,   459,   514,
     515,   312,   122,   122,   122,   122,   122,   107,   349,   361,
     352,   382,   124,   403,   320,   547,   404,   304,   405,   406,
     124,   409,   419,   417,   551,   418,   427,   438,   439,   446,
     304,   122,   122,   122,   122,   122,   122,   546,   122,   122,
     122,   122,   122,   445,   122,   122,   122,   304,   447,   448,
     453,   124,   493,   498,   497,   122,   502,   499,   504,   500,
     524,   501,   122,   122,   525,   124,   503,   526,   122,   505,
     542,   506,   527,   550,   528,   555,   558,   124,   124,   124,
     124,   124,   377,   378,   379,   122,   529,   304,   304,   304,
     530,   531,   532,   533,   538,   539,   557,   559,   191,   192,
     393,   394,   343,   304,   304,   560,   124,   124,   124,   124,
     124,   124,   412,   124,   124,   124,   124,   124,   414,   124,
     124,   124,   494,   416,   535,   122,   122,   122,   548,   491,
     124,   537,   492,   122,   122,   541,     0,   124,   124,     0,
       0,   122,   122,   124,     0,     0,     0,     0,     0,     0,
     304,   304,     0,     0,     0,     0,   122,   122,     0,     0,
     124,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   440,   441,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,   122,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     124,   124,   124,     0,     0,     0,     0,     0,   124,   124,
       0,     0,     0,     0,     0,     0,   124,   124,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   124,   124,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   304,
       0,     0,     0,   124,   124,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,     0,   122,     0,     0,     0,   122,     0,
       0,   122,     0,     0,     0,     0,     0,   122,     0,   193,
     196,   198,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   222,   223,     0,     0,     0,     0,     0,     0,   124,
       0,     0,     0,     0,     0,     0,   549,     0,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,     0,
       0,   243,   244,   245,   246,     0,     0,     0,     0,   251,
     252,   253,     0,     0,     0,     0,     0,   124,     0,   124,
       0,     0,     0,   124,   260,     0,   124,     0,     0,     0,
     264,     0,   124,     0,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,     0,     0,
       0,     0,   295,     0,     0,     0,   299,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   318,   319,
       0,     0,     0,     0,     0,     0,   321,   322,   323,   324,
     325,     0,     0,     0,   326,     0,     0,   333,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   355,   356,   357,
     358,   359,   360,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   381,     0,     0,
       0,   383,   384,     0,   389,   390,   391,   392,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   396,   397,   399,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   435,     0,   437,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   451,     0,     0,   452,     0,     0,     0,   455,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   508,
     509,     0,   511,     0,   512,   513,     0,     0,     0,     0,
       0,   516,   517,   518,   519,   314,   315,     0,     0,   520,
       0,     9,    10,    11,    12,    13,    14,    15,   316,    16,
       0,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,     0,
      54,     0,     0,     0,     0,     0,   545,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,    59,
      60,     0,     0,     0,     0,     0,     0,     0,    61,    62,
      63,    64,    65,     0,    66,    67,    68,    69,    70,    71,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,     0,     0,     0,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   105,   106,   107,   108,   109,   110,
     385,   386,   111,   112,     0,     0,     9,    10,    11,    12,
      13,    14,    15,     0,    16,   387,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,    54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    56,    57,    58,    59,    60,     0,     0,     0,     0,
       0,     0,     0,    61,    62,    63,    64,    65,     0,    66,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,     0,     0,     0,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105,
     106,   107,   108,   109,   110,     0,     0,   111,   112,     8,
       9,    10,    11,    12,    13,    14,    15,     0,    16,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     0,     0,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    56,    57,    58,    59,    60,
       0,     0,     0,     0,     0,     0,     0,    61,    62,    63,
      64,    65,     0,    66,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
       0,     0,     0,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   106,   107,   108,   109,   110,     0,
       0,   111,   112,   188,     9,    10,    11,    12,    13,    14,
      15,     0,    16,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,     0,     0,
       0,    61,    62,    63,    64,    65,     0,    66,    67,    68,
      69,    70,    71,     0,     0,     0,     0,     0,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,     0,     0,     0,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,   106,   107,
     108,   109,   110,     0,     0,   111,   112,   303,     9,    10,
      11,    12,    13,    14,    15,     0,    16,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     0,     0,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    56,    57,    58,    59,    60,     0,     0,
       0,     0,     0,     0,     0,    61,    62,    63,    64,    65,
       0,    66,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,     0,     0,
       0,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   106,   107,   108,   109,   110,     0,     0,   111,
     112,   313,     9,    10,    11,    12,    13,    14,    15,     0,
      16,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     0,
       0,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    56,    57,    58,
      59,    60,     0,     0,     0,     0,     0,     0,     0,    61,
      62,    63,    64,    65,     0,    66,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   105,   106,   107,   108,   109,
     110,     0,     0,   111,   112,     9,    10,    11,    12,    13,
      14,    15,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,   334,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,     0,     0,     0,     0,     0,
       0,     0,    61,    62,    63,    64,    65,   335,    66,    67,
      68,    69,    70,    71,     0,     0,   336,     0,     0,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,     0,     0,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   105,   106,
     107,   108,   109,   110,     0,     0,   111,   112,     9,    10,
      11,    12,    13,    14,    15,     0,    16,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     0,     0,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    56,    57,    58,    59,    60,     0,     0,
       0,     0,     0,     0,     0,    61,    62,    63,    64,    65,
     335,    66,    67,    68,    69,    70,    71,     0,     0,   336,
       0,     0,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,     0,     0,
       0,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   106,   107,   108,   109,   110,     0,     0,   111,
     112,     9,    10,    11,    12,    13,    14,    15,     0,    16,
       0,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,     0,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,    59,
      60,     0,     0,     0,     0,     0,     0,     0,    61,    62,
      63,    64,    65,     0,    66,    67,    68,    69,    70,    71,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,     0,     0,     0,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   105,   106,   107,   108,   109,   110,
       0,   395,   111,   112,     9,    10,    11,    12,    13,    14,
      15,     0,    16,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,     0,     0,
       0,    61,    62,    63,    64,    65,     0,    66,    67,    68,
      69,    70,    71,     0,     0,     0,     0,     0,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,     0,     0,     0,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,   106,   107,
     108,   109,   110,     0,   433,   111,   112,     9,    10,    11,
      12,    13,    14,    15,   449,    16,     0,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     0,     0,    54,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,    56,    57,    58,    59,    60,     0,     0,     0,
       0,     0,     0,     0,    61,    62,    63,    64,    65,     0,
      66,    67,    68,    69,    70,    71,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,     0,     0,     0,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,   106,   107,   108,   109,   110,     0,     0,   111,   112,
       9,    10,    11,    12,    13,    14,    15,   450,    16,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     0,     0,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    56,    57,    58,    59,    60,
       0,     0,     0,     0,     0,     0,     0,    61,    62,    63,
      64,    65,     0,    66,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
       0,     0,     0,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   106,   107,   108,   109,   110,     0,
       0,   111,   112,     9,    10,    11,    12,    13,    14,    15,
       0,    16,     0,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       0,     0,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,    56,    57,
      58,    59,    60,     0,     0,     0,     0,     0,     0,     0,
      61,    62,    63,    64,    65,     0,    66,    67,    68,    69,
      70,    71,     0,     0,   336,     0,     0,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,     0,     0,     0,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   105,   106,   107,   108,
     109,   110,     0,     0,   111,   112,     9,    10,    11,    12,
      13,    14,    15,     0,    16,   387,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,    54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    56,    57,    58,    59,    60,     0,     0,     0,     0,
       0,     0,     0,    61,    62,    63,    64,    65,     0,    66,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,     0,     0,     0,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105,
     106,   107,   108,   109,   110,     0,     0,   111,   112,     9,
      10,    11,    12,    13,    14,    15,     0,    16,     0,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     0,     0,    54,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,     0,     0,     0,    61,    62,    63,    64,
      65,     0,    66,    67,    68,    69,    70,    71,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,     0,
       0,     0,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   105,   106,   107,   108,   109,   110,     0,     0,
     111,   112,     9,    10,    11,    12,     0,     0,    15,     0,
      16,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     0,
       0,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    56,    57,    58,
      59,    60,     0,     0,     0,     0,     0,     0,     0,    61,
      62,    63,    64,    65,     0,    66,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   105,   106,   107,   108,   109,
     110,   228,     0,   111,   112,     9,    10,    11,    12,     0,
       0,    15,     0,    16,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,    60,     0,     0,     0,     0,     0,
       0,     0,    61,    62,    63,    64,    65,     0,    66,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,     0,     0,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   105,   106,
     107,   108,   109,   110,   298,     0,   111,   112,     9,    10,
      11,    12,     0,     0,    15,     0,    16,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     0,     0,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    56,    57,    58,    59,    60,     0,     0,
       0,     0,     0,     0,     0,    61,    62,    63,    64,    65,
       0,    66,    67,    68,    69,    70,    71,   380,     0,     0,
       0,     0,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,     0,     0,
       0,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   106,   107,   108,   109,   110,     0,     0,   111,
     112,     9,    10,    11,    12,   398,     0,    15,     0,    16,
       0,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,     0,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,    59,
      60,     0,     0,     0,     0,     0,     0,     0,    61,    62,
      63,    64,    65,     0,    66,    67,    68,    69,    70,    71,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,     0,     0,     0,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   105,   106,   107,   108,   109,   110,
       0,     0,   111,   112,     9,    10,    11,    12,     0,     0,
      15,     0,    16,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,     0,     0,
       0,    61,    62,    63,    64,    65,     0,    66,    67,    68,
      69,    70,    71,   434,     0,     0,     0,     0,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,     0,     0,     0,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,   106,   107,
     108,   109,   110,     0,     0,   111,   112,     9,    10,    11,
      12,     0,     0,    15,     0,    16,     0,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     0,     0,    54,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,    56,    57,    58,    59,    60,     0,     0,     0,
       0,     0,     0,     0,    61,    62,    63,    64,    65,     0,
      66,    67,    68,    69,    70,    71,   436,     0,     0,     0,
       0,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,     0,     0,     0,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,   106,   107,   108,   109,   110,     0,     0,   111,   112,
       9,    10,    11,    12,     0,     0,    15,     0,    16,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     0,     0,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    56,    57,    58,    59,    60,
       0,     0,     0,     0,     0,     0,     0,    61,    62,    63,
      64,    65,     0,    66,    67,    68,    69,    70,    71,   510,
       0,     0,     0,     0,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
       0,     0,     0,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   106,   107,   108,   109,   110,     0,
       0,   111,   112,     9,    10,    11,    12,     0,     0,    15,
       0,    16,     0,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       0,     0,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,    56,    57,
      58,    59,    60,     0,     0,     0,     0,     0,     0,     0,
      61,    62,    63,    64,    65,     0,    66,    67,    68,    69,
      70,    71,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,     0,     0,     0,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   105,   106,   107,   108,
     109,   110,     0,     0,   111,   112,     9,    10,    11,    12,
       0,     0,    15,     0,    16,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,    54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    56,    57,    58,    59,    60,     0,     0,     0,     0,
       0,     0,     0,    61,    62,    63,    64,    65,     0,    66,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
      72,    73,    74,    75,    76,    77,    78,    79,    80,   507,
      82,    83,    84,    85,    86,    87,     0,     0,     0,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105,
     106,   107,   108,   109,   110,     0,     0,   111,   112
};

static const yytype_int16 yycheck[] =
{
       2,     3,    15,    15,    60,    16,   240,   330,    60,   332,
     405,   406,    99,    15,   283,   284,   285,   286,   287,   288,
      80,   290,   291,   292,   293,   294,    16,     0,    16,    60,
      60,   405,   406,    58,    98,    16,    80,    16,     2,     3,
      56,    85,    80,    60,    13,    14,    84,    16,    13,    14,
      60,    15,    63,    64,    15,    60,    60,    60,    57,    60,
     147,    39,    40,    79,    66,    67,    68,    69,    70,    60,
      60,    60,    60,   113,    57,     2,     3,   400,    98,    60,
      98,    80,    15,   139,    63,    64,   481,   139,    15,    98,
     101,   102,   487,    79,   154,   329,    72,    80,   162,   112,
     112,    98,    66,    67,    68,    69,    70,   481,   139,   139,
      72,   113,    16,   487,   116,   140,   141,   142,   143,   144,
     145,   146,   139,   148,   149,   150,   151,    13,    14,   139,
      16,    39,    40,   456,   139,   139,   139,    79,   139,    66,
      67,    68,    69,    70,    63,    64,    39,    40,   139,   189,
     139,    79,   116,    38,    39,    79,    41,   197,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    98,   403,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      39,    40,   101,   102,    13,    14,   113,   189,    98,   116,
      80,    81,    82,    83,    72,   197,    13,    14,    98,    16,
      13,    14,    98,    16,    13,    14,    79,    16,     5,     6,
       7,    38,    39,    40,   254,   255,   256,   257,   258,    39,
      40,    41,    72,   546,    13,    14,   228,   496,    39,    40,
      41,    39,    40,    41,    39,    40,    41,    13,    14,    15,
     242,    81,    82,    83,    13,    14,    98,    63,    64,   440,
     441,   154,   254,   255,   256,   257,   258,   154,    84,   119,
      85,    98,   189,    15,   228,   534,    15,   307,    15,    15,
     197,    59,    57,    80,   543,    79,   147,    14,    13,    13,
     320,   283,   284,   285,   286,   287,   288,   521,   290,   291,
     292,   293,   294,    14,   296,   297,   298,   337,    14,    13,
      13,   228,    79,   141,   140,   307,   145,   142,   149,   143,
      72,   144,   314,   315,    72,   242,   148,    72,   320,   150,
     120,   151,    72,    80,    72,    79,   121,   254,   255,   256,
     257,   258,   296,   297,   298,   337,    72,   377,   378,   379,
      72,    72,    72,    72,    72,    72,    58,    58,     5,     5,
     314,   315,   247,   393,   394,    80,   283,   284,   285,   286,
     287,   288,   347,   290,   291,   292,   293,   294,   350,   296,
     297,   298,   418,   353,   467,   377,   378,   379,   536,   408,
     307,   481,   409,   385,   386,   487,    -1,   314,   315,    -1,
      -1,   393,   394,   320,    -1,    -1,    -1,    -1,    -1,    -1,
     440,   441,    -1,    -1,    -1,    -1,   408,   409,    -1,    -1,
     337,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   385,   386,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   440,   441,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     377,   378,   379,    -1,    -1,    -1,    -1,    -1,   385,   386,
      -1,    -1,    -1,    -1,    -1,    -1,   393,   394,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   408,   409,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   496,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   549,
      -1,    -1,    -1,   440,   441,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   534,    -1,   536,    -1,    -1,    -1,   540,    -1,
      -1,   543,    -1,    -1,    -1,    -1,    -1,   549,    -1,    13,
      14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,   496,
      -1,    -1,    -1,    -1,    -1,    -1,   540,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      -1,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    63,
      64,    65,    -1,    -1,    -1,    -1,    -1,   534,    -1,   536,
      -1,    -1,    -1,   540,    78,    -1,   543,    -1,    -1,    -1,
      84,    -1,   549,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,   223,
      -1,    -1,    -1,    -1,    -1,    -1,   230,   231,   232,   233,
     234,    -1,    -1,    -1,   238,    -1,    -1,   241,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   261,   262,   263,
     264,   265,   266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   301,    -1,    -1,
      -1,   305,   306,    -1,   308,   309,   310,   311,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   326,   327,   328,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   380,    -1,   382,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   395,    -1,    -1,   398,    -1,    -1,    -1,   402,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   433,
     434,    -1,   436,    -1,   438,   439,    -1,    -1,    -1,    -1,
      -1,   445,   446,   447,   448,     3,     4,    -1,    -1,   453,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,   510,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    -1,    92,    93,    94,    95,    96,    97,
      -1,    -1,    -1,    -1,    -1,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,    -1,    -1,    -1,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   152,   153,   154,   155,   156,   157,
       3,     4,   160,   161,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,    92,
      93,    94,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,    -1,    -1,    -1,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,
     153,   154,   155,   156,   157,    -1,    -1,   160,   161,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    -1,    92,    93,    94,    95,    96,    97,    -1,
      -1,    -1,    -1,    -1,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
      -1,    -1,    -1,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   152,   153,   154,   155,   156,   157,    -1,
      -1,   160,   161,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    -1,    92,    93,    94,
      95,    96,    97,    -1,    -1,    -1,    -1,    -1,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,    -1,    -1,    -1,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,   153,   154,
     155,   156,   157,    -1,    -1,   160,   161,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      -1,    92,    93,    94,    95,    96,    97,    -1,    -1,    -1,
      -1,    -1,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,    -1,    -1,
      -1,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   152,   153,   154,   155,   156,   157,    -1,    -1,   160,
     161,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    -1,    92,    93,    94,    95,    96,
      97,    -1,    -1,    -1,    -1,    -1,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,    -1,    -1,    -1,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   152,   153,   154,   155,   156,
     157,    -1,    -1,   160,   161,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    -1,    -1,   100,    -1,    -1,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,    -1,    -1,    -1,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,   153,
     154,   155,   156,   157,    -1,    -1,   160,   161,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    -1,    -1,   100,
      -1,    -1,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,    -1,    -1,
      -1,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   152,   153,   154,   155,   156,   157,    -1,    -1,   160,
     161,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    -1,    92,    93,    94,    95,    96,    97,
      -1,    -1,    -1,    -1,    -1,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,    -1,    -1,    -1,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   152,   153,   154,   155,   156,   157,
      -1,   159,   160,   161,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    -1,    92,    93,    94,
      95,    96,    97,    -1,    -1,    -1,    -1,    -1,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,    -1,    -1,    -1,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,   153,   154,
     155,   156,   157,    -1,   159,   160,   161,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,
      92,    93,    94,    95,    96,    97,    -1,    -1,    -1,    -1,
      -1,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,    -1,    -1,    -1,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     152,   153,   154,   155,   156,   157,    -1,    -1,   160,   161,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    -1,    92,    93,    94,    95,    96,    97,    -1,
      -1,    -1,    -1,    -1,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
      -1,    -1,    -1,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   152,   153,   154,   155,   156,   157,    -1,
      -1,   160,   161,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    -1,    92,    93,    94,    95,
      96,    97,    -1,    -1,   100,    -1,    -1,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,    -1,    -1,    -1,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   152,   153,   154,   155,
     156,   157,    -1,    -1,   160,   161,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,    92,
      93,    94,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,    -1,    -1,    -1,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,
     153,   154,   155,   156,   157,    -1,    -1,   160,   161,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    -1,    92,    93,    94,    95,    96,    97,    -1,    -1,
      -1,    -1,    -1,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,    -1,
      -1,    -1,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   152,   153,   154,   155,   156,   157,    -1,    -1,
     160,   161,     9,    10,    11,    12,    -1,    -1,    15,    -1,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    -1,    92,    93,    94,    95,    96,
      97,    -1,    -1,    -1,    -1,    -1,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,    -1,    -1,    -1,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   152,   153,   154,   155,   156,
     157,   158,    -1,   160,   161,     9,    10,    11,    12,    -1,
      -1,    15,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,    -1,    -1,    -1,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,   153,
     154,   155,   156,   157,   158,    -1,   160,   161,     9,    10,
      11,    12,    -1,    -1,    15,    -1,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      -1,    92,    93,    94,    95,    96,    97,    98,    -1,    -1,
      -1,    -1,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,    -1,    -1,
      -1,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   152,   153,   154,   155,   156,   157,    -1,    -1,   160,
     161,     9,    10,    11,    12,    13,    -1,    15,    -1,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    -1,    92,    93,    94,    95,    96,    97,
      -1,    -1,    -1,    -1,    -1,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,    -1,    -1,    -1,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   152,   153,   154,   155,   156,   157,
      -1,    -1,   160,   161,     9,    10,    11,    12,    -1,    -1,
      15,    -1,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    -1,    92,    93,    94,
      95,    96,    97,    98,    -1,    -1,    -1,    -1,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,    -1,    -1,    -1,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,   153,   154,
     155,   156,   157,    -1,    -1,   160,   161,     9,    10,    11,
      12,    -1,    -1,    15,    -1,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,
      92,    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,
      -1,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,    -1,    -1,    -1,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     152,   153,   154,   155,   156,   157,    -1,    -1,   160,   161,
       9,    10,    11,    12,    -1,    -1,    15,    -1,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    -1,    92,    93,    94,    95,    96,    97,    98,
      -1,    -1,    -1,    -1,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
      -1,    -1,    -1,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   152,   153,   154,   155,   156,   157,    -1,
      -1,   160,   161,     9,    10,    11,    12,    -1,    -1,    15,
      -1,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    -1,    92,    93,    94,    95,
      96,    97,    -1,    -1,    -1,    -1,    -1,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,    -1,    -1,    -1,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   152,   153,   154,   155,
     156,   157,    -1,    -1,   160,   161,     9,    10,    11,    12,
      -1,    -1,    15,    -1,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,    92,
      93,    94,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,    -1,    -1,    -1,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,
     153,   154,   155,   156,   157,    -1,    -1,   160,   161
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     5,     6,     7,   164,   165,   166,   167,     8,     9,
      10,    11,    12,    13,    14,    15,    17,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    58,    73,    74,    75,    76,    77,
      78,    86,    87,    88,    89,    90,    92,    93,    94,    95,
      96,    97,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   152,   153,   154,   155,   156,
     157,   160,   161,   168,   169,   170,   171,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   207,
     210,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   251,   252,     8,   168,
       0,   166,   167,   170,   178,   180,   170,   168,   170,    38,
      39,    40,    39,    40,    41,    39,    40,    41,    39,    40,
      41,    39,    40,    41,    39,    40,    39,    40,    39,    40,
      39,    40,   170,   170,    98,    98,    98,    98,   158,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
      15,   112,    15,   170,   170,   170,   170,    79,    79,    79,
      79,   170,   170,   170,   168,   168,   168,   168,   168,    98,
     170,    98,    98,    98,   170,    72,    72,    79,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,    58,   140,   141,   142,   143,   144,   145,   146,
     148,   149,   150,   151,    15,   170,    72,    72,   158,   170,
      98,    98,   162,     8,   169,    13,    14,   168,    13,    14,
      13,    14,   154,     8,     3,     4,    16,    16,   170,   170,
     168,   170,   170,   170,   170,   170,   170,    13,    14,    15,
     223,   224,   223,   170,    61,    91,   100,   168,   265,   266,
     267,   268,   271,   203,    81,    82,    83,   205,   206,    84,
     211,   212,    85,   208,   209,   170,   170,   170,   170,   170,
     170,   119,    56,    79,   265,   265,   265,   265,   265,   265,
      99,   147,   265,   265,   265,   265,   265,   168,   168,   168,
      98,   170,    98,   170,   170,     3,     4,    18,   172,   170,
     170,   170,   170,   168,   168,   159,   170,   170,    13,   170,
     223,   224,    16,    15,    15,    15,    15,    16,    60,    59,
      80,    80,   206,    80,   212,    80,   209,    80,    79,    57,
     250,   139,   139,   139,   139,   139,   139,   147,   139,   139,
     139,   139,    16,   159,    98,   170,    98,   170,    14,    13,
     168,   168,    38,    39,    41,    14,    13,    14,    13,    16,
      16,   170,   170,    13,    16,   170,   223,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   256,
     257,   269,   270,   101,   102,   256,   257,   272,   273,   274,
     275,   266,   271,    79,   250,    57,    80,   140,   141,   142,
     143,   144,   145,   148,   149,   150,   151,   112,   170,   170,
      98,   170,   170,   170,   172,   172,   170,   170,   170,   170,
     170,    15,   112,    16,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    16,   254,    16,   270,    72,    72,
      16,   273,   120,    80,   265,   170,   223,   265,   267,   168,
      80,   265,   139,    16,    16,    79,   139,    58,   121,    58,
      80
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   163,   164,   165,   165,   165,   165,   165,   166,   167,
     167,   167,   167,   168,   168,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   171,   171,   171,   172,   172,   172,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   174,   175,
     176,   177,   178,   179,   179,   180,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   182,   183,   184,   185,   186,   187,   188,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   203,   204,   205,   205,
     206,   206,   206,   207,   208,   208,   209,   210,   211,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     221,   222,   222,   222,   223,   223,   224,   224,   224,   224,
     225,   225,   226,   227,   227,   228,   228,   229,   229,   230,
     231,   232,   233,   233,   234,   234,   235,   236,   237,   238,
     239,   239,   240,   240,   241,   241,   242,   243,   243,   244,
     244,   244,   244,   244,   244,   245,   245,   246,   246,   247,
     247,   248,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   250,   250,   251,   252,
     252,   253,   253,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   265,   266,   266,   267,   267,   268,
     269,   269,   270,   270,   271,   271,   271,   272,   272,   273,
     273,   273,   273,   274,   275
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     2,     1,     2,
       2,     3,     3,     1,     2,     5,     3,     5,     3,     5,
       3,     5,     3,     5,     5,     3,     3,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,    10,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     1,     2,     4,     1,     2,
       1,     1,     1,     4,     1,     2,     1,     4,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     5,
       3,     8,     6,     6,     1,     2,     4,     2,     2,     3,
       3,     3,     2,     5,     5,     5,     5,     3,     3,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     5,     3,     5,
       6,     4,     5,     3,     4,     5,     3,     2,     3,     5,
       4,     1,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     9,     8,     4,     3,     2,     1,     4,     4,
       8,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     3,     1,     1,     1,     3,     5,
       1,     2,     1,     1,     0,     1,     5,     1,     2,     1,
       1,     1,     1,     2,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (ret_str, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, ret_str); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, char **ret_str)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (ret_str);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, char **ret_str)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, ret_str);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule, char **ret_str)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)], ret_str);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, ret_str); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, char **ret_str)
{
  YYUSE (yyvaluep);
  YYUSE (ret_str);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (char **ret_str)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* doc: xmlmmlTermList  */
#line 286 "itex2MML.y"
                     {/* all processing done in body*/}
#line 3248 "y.tab.c"
    break;

  case 3: /* xmlmmlTermList: %empty  */
#line 289 "itex2MML.y"
{/* nothing - do nothing*/}
#line 3254 "y.tab.c"
    break;

  case 4: /* xmlmmlTermList: char  */
#line 290 "itex2MML.y"
       {/* proc done in body*/}
#line 3260 "y.tab.c"
    break;

  case 5: /* xmlmmlTermList: expression  */
#line 291 "itex2MML.y"
             {/* all proc. in body*/}
#line 3266 "y.tab.c"
    break;

  case 6: /* xmlmmlTermList: xmlmmlTermList char  */
#line 292 "itex2MML.y"
                      {/* all proc. in body*/}
#line 3272 "y.tab.c"
    break;

  case 7: /* xmlmmlTermList: xmlmmlTermList expression  */
#line 293 "itex2MML.y"
                            {/* all proc. in body*/}
#line 3278 "y.tab.c"
    break;

  case 8: /* char: CHAR  */
#line 295 "itex2MML.y"
           {printf("%s", yyvsp[0]);}
#line 3284 "y.tab.c"
    break;

  case 9: /* expression: STARTMATH ENDMATH  */
#line 297 "itex2MML.y"
                              {/* empty math group - ignore*/}
#line 3290 "y.tab.c"
    break;

  case 10: /* expression: STARTDMATH ENDMATH  */
#line 298 "itex2MML.y"
                     {/* ditto */}
#line 3296 "y.tab.c"
    break;

  case 11: /* expression: STARTMATH compoundTermList ENDMATH  */
#line 299 "itex2MML.y"
                                     {
  char ** r = (char **) ret_str;
  char * s = itex2MML_copy3("<math xmlns='http://www.w3.org/1998/Math/MathML' display='inline'>", yyvsp[-1], "</math>");
  itex2MML_free_string(yyvsp[-1]);
  if (r) {
    (*r) = (s == itex2MML_empty_string) ? 0 : s;
  }
  else {
    if (itex2MML_write_mathml)
      (*itex2MML_write_mathml) (s);
    itex2MML_free_string(s);
  }
}
#line 3314 "y.tab.c"
    break;

  case 12: /* expression: STARTDMATH compoundTermList ENDMATH  */
#line 312 "itex2MML.y"
                                      {
  char ** r = (char **) ret_str;
  char * s = itex2MML_copy3("<math xmlns='http://www.w3.org/1998/Math/MathML' display='block'>", yyvsp[-1], "</math>");
  itex2MML_free_string(yyvsp[-1]);
  if (r) {
    (*r) = (s == itex2MML_empty_string) ? 0 : s;
  }
  else {
    if (itex2MML_write_mathml)
      (*itex2MML_write_mathml) (s);
    itex2MML_free_string(s);
  }
}
#line 3332 "y.tab.c"
    break;

  case 13: /* compoundTermList: compoundTerm  */
#line 326 "itex2MML.y"
                               {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 3341 "y.tab.c"
    break;

  case 14: /* compoundTermList: compoundTermList compoundTerm  */
#line 330 "itex2MML.y"
                                {
  yyval = itex2MML_copy2(yyvsp[-1], yyvsp[0]);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 3351 "y.tab.c"
    break;

  case 15: /* compoundTerm: mob SUB closedTerm SUP closedTerm  */
#line 336 "itex2MML.y"
                                                {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<munderover>", yyvsp[-4], " ");
    char * s2 = itex2MML_copy3(yyvsp[-2], " ", yyvsp[0]);
    yyval = itex2MML_copy3(s1, s2, "</munderover>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  else {
    char * s1 = itex2MML_copy3("<msubsup>", yyvsp[-4], " ");
    char * s2 = itex2MML_copy3(yyvsp[-2], " ", yyvsp[0]);
    yyval = itex2MML_copy3(s1, s2, "</msubsup>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  itex2MML_free_string(yyvsp[-4]);
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[0]);
}
#line 3375 "y.tab.c"
    break;

  case 16: /* compoundTerm: mob SUB closedTerm  */
#line 355 "itex2MML.y"
                     {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<munder>", yyvsp[-2], " ");
    yyval = itex2MML_copy3(s1, yyvsp[0], "</munder>");
    itex2MML_free_string(s1);
  }
  else {
    char * s1 = itex2MML_copy3("<msub>", yyvsp[-2], " ");
    yyval = itex2MML_copy3(s1, yyvsp[0], "</msub>");
    itex2MML_free_string(s1);
  }
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[0]);
}
#line 3394 "y.tab.c"
    break;

  case 17: /* compoundTerm: mob SUP closedTerm SUB closedTerm  */
#line 369 "itex2MML.y"
                                    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<munderover>", yyvsp[-4], " ");
    char * s2 = itex2MML_copy3(yyvsp[0], " ", yyvsp[-2]);
    yyval = itex2MML_copy3(s1, s2, "</munderover>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  else {
    char * s1 = itex2MML_copy3("<msubsup>", yyvsp[-4], " ");
    char * s2 = itex2MML_copy3(yyvsp[0], " ", yyvsp[-2]);
    yyval = itex2MML_copy3(s1, s2, "</msubsup>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  itex2MML_free_string(yyvsp[-4]);
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[0]);
}
#line 3418 "y.tab.c"
    break;

  case 18: /* compoundTerm: mob SUP closedTerm  */
#line 388 "itex2MML.y"
                     {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<mover>", yyvsp[-2], " ");
    yyval = itex2MML_copy3(s1, yyvsp[0], "</mover>");
    itex2MML_free_string(s1);
  }
  else {
    char * s1 = itex2MML_copy3("<msup>", yyvsp[-2], " ");
    yyval = itex2MML_copy3(s1, yyvsp[0], "</msup>");
    itex2MML_free_string(s1);
  }
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[0]);
}
#line 3437 "y.tab.c"
    break;

  case 19: /* compoundTerm: mib SUB closedTerm SUP closedTerm  */
#line 402 "itex2MML.y"
                                   {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<munderover>", yyvsp[-4], " ");
    char * s2 = itex2MML_copy3(yyvsp[-2], " ", yyvsp[0]);
    yyval = itex2MML_copy3(s1, s2, "</munderover>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  else {
    char * s1 = itex2MML_copy3("<msubsup>", yyvsp[-4], " ");
    char * s2 = itex2MML_copy3(yyvsp[-2], " ", yyvsp[0]);
    yyval = itex2MML_copy3(s1, s2, "</msubsup>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  itex2MML_free_string(yyvsp[-4]);
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[0]);
}
#line 3461 "y.tab.c"
    break;

  case 20: /* compoundTerm: mib SUB closedTerm  */
#line 421 "itex2MML.y"
                     {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<munder>", yyvsp[-2], " ");
    yyval = itex2MML_copy3(s1, yyvsp[0], "</munder>");
    itex2MML_free_string(s1);
  }
  else {
    char * s1 = itex2MML_copy3("<msub>", yyvsp[-2], " ");
    yyval = itex2MML_copy3(s1, yyvsp[0], "</msub>");
    itex2MML_free_string(s1);
  }
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[0]);
}
#line 3480 "y.tab.c"
    break;

  case 21: /* compoundTerm: mib SUP closedTerm SUB closedTerm  */
#line 435 "itex2MML.y"
                                    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<munderover>", yyvsp[-4], " ");
    char * s2 = itex2MML_copy3(yyvsp[0], " ", yyvsp[-2]);
    yyval = itex2MML_copy3(s1, s2, "</munderover>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  else {
    char * s1 = itex2MML_copy3("<msubsup>", yyvsp[-4], " ");
    char * s2 = itex2MML_copy3(yyvsp[0], " ", yyvsp[-2]);
    yyval = itex2MML_copy3(s1, s2, "</msubsup>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  itex2MML_free_string(yyvsp[-4]);
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[0]);
}
#line 3504 "y.tab.c"
    break;

  case 22: /* compoundTerm: mib SUP closedTerm  */
#line 454 "itex2MML.y"
                     {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<mover>", yyvsp[-2], " ");
    yyval = itex2MML_copy3(s1, yyvsp[0], "</mover>");
    itex2MML_free_string(s1);
  }
  else {
    char * s1 = itex2MML_copy3("<msup>", yyvsp[-2], " ");
    yyval = itex2MML_copy3(s1, yyvsp[0], "</msup>");
    itex2MML_free_string(s1);
  }
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[0]);
}
#line 3523 "y.tab.c"
    break;

  case 23: /* compoundTerm: closedTerm SUB closedTerm SUP closedTerm  */
#line 468 "itex2MML.y"
                                           {
  char * s1 = itex2MML_copy3("<msubsup>", yyvsp[-4], " ");
  char * s2 = itex2MML_copy3(yyvsp[-2], " ", yyvsp[0]);
  yyval = itex2MML_copy3(s1, s2, "</msubsup>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(yyvsp[-4]);
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[0]);
}
#line 3538 "y.tab.c"
    break;

  case 24: /* compoundTerm: closedTerm SUP closedTerm SUB closedTerm  */
#line 478 "itex2MML.y"
                                           {
  char * s1 = itex2MML_copy3("<msubsup>", yyvsp[-4], " ");
  char * s2 = itex2MML_copy3(yyvsp[0], " ", yyvsp[-2]);
  yyval = itex2MML_copy3(s1, s2, "</msubsup>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(yyvsp[-4]);
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[0]);
}
#line 3553 "y.tab.c"
    break;

  case 25: /* compoundTerm: closedTerm SUB closedTerm  */
#line 488 "itex2MML.y"
                            {
  char * s1 = itex2MML_copy3("<msub>", yyvsp[-2], " ");
  yyval = itex2MML_copy3(s1, yyvsp[0], "</msub>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[0]);
}
#line 3565 "y.tab.c"
    break;

  case 26: /* compoundTerm: closedTerm SUP closedTerm  */
#line 495 "itex2MML.y"
                            {
  char * s1 = itex2MML_copy3("<msup>", yyvsp[-2], " ");
  yyval = itex2MML_copy3(s1, yyvsp[0], "</msup>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[0]);
}
#line 3577 "y.tab.c"
    break;

  case 27: /* compoundTerm: SUB closedTerm  */
#line 502 "itex2MML.y"
                 {
  yyval = itex2MML_copy3("<msub><mo></mo>", yyvsp[0], "</msub>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3586 "y.tab.c"
    break;

  case 28: /* compoundTerm: SUP closedTerm  */
#line 506 "itex2MML.y"
                 {
  yyval = itex2MML_copy3("<msup><mo></mo>", yyvsp[0], "</msup>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3595 "y.tab.c"
    break;

  case 29: /* compoundTerm: closedTerm  */
#line 510 "itex2MML.y"
             {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 3604 "y.tab.c"
    break;

  case 34: /* closedTerm: mi  */
#line 519 "itex2MML.y"
     {
  yyval = itex2MML_copy3("<mi>", yyvsp[0], "</mi>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3613 "y.tab.c"
    break;

  case 35: /* closedTerm: mn  */
#line 523 "itex2MML.y"
     {
  yyval = itex2MML_copy3("<mn>", yyvsp[0], "</mn>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3622 "y.tab.c"
    break;

  case 95: /* closedTerm: MROWOPEN closedTerm MROWCLOSE  */
#line 586 "itex2MML.y"
                                {
  yyval = itex2MML_copy_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[-1]);
}
#line 3631 "y.tab.c"
    break;

  case 96: /* closedTerm: MROWOPEN compoundTermList MROWCLOSE  */
#line 590 "itex2MML.y"
                                      {
  yyval = itex2MML_copy3("<mrow>", yyvsp[-1], "</mrow>");
  itex2MML_free_string(yyvsp[-1]);
}
#line 3640 "y.tab.c"
    break;

  case 97: /* closedTerm: left compoundTermList right  */
#line 594 "itex2MML.y"
                              {
  char * s1 = itex2MML_copy3("<mrow>", yyvsp[-2], yyvsp[-1]);
  yyval = itex2MML_copy3(s1, yyvsp[0], "</mrow>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 3653 "y.tab.c"
    break;

  case 102: /* left: LEFT LEFTDELIM  */
#line 607 "itex2MML.y"
                     {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mo>", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3663 "y.tab.c"
    break;

  case 103: /* left: LEFT OTHERDELIM  */
#line 612 "itex2MML.y"
                  {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mo>", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3673 "y.tab.c"
    break;

  case 104: /* left: LEFT PERIODDELIM  */
#line 617 "itex2MML.y"
                   {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy_string("");
  itex2MML_free_string(yyvsp[0]);
}
#line 3683 "y.tab.c"
    break;

  case 105: /* right: RIGHT RIGHTDELIM  */
#line 623 "itex2MML.y"
                        {
  yyval = itex2MML_copy3("<mo>", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3692 "y.tab.c"
    break;

  case 106: /* right: RIGHT OTHERDELIM  */
#line 627 "itex2MML.y"
                   {
  yyval = itex2MML_copy3("<mo>", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3701 "y.tab.c"
    break;

  case 107: /* right: RIGHT PERIODDELIM  */
#line 631 "itex2MML.y"
                    {
  yyval = itex2MML_copy_string("");
  itex2MML_free_string(yyvsp[0]);
}
#line 3710 "y.tab.c"
    break;

  case 108: /* bigdelim: BIG LEFTDELIM  */
#line 636 "itex2MML.y"
                        {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mo maxsize=\"1.2em\" minsize=\"1.2em\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3720 "y.tab.c"
    break;

  case 109: /* bigdelim: BIG RIGHTDELIM  */
#line 641 "itex2MML.y"
                 {
  yyval = itex2MML_copy3("<mo maxsize=\"1.2em\" minsize=\"1.2em\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3729 "y.tab.c"
    break;

  case 110: /* bigdelim: BIG OTHERDELIM  */
#line 645 "itex2MML.y"
                 {
  yyval = itex2MML_copy3("<mo maxsize=\"1.2em\" minsize=\"1.2em\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3738 "y.tab.c"
    break;

  case 111: /* bigdelim: BBIG LEFTDELIM  */
#line 649 "itex2MML.y"
                 {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mo maxsize=\"1.8em\" minsize=\"1.8em\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3748 "y.tab.c"
    break;

  case 112: /* bigdelim: BBIG RIGHTDELIM  */
#line 654 "itex2MML.y"
                  {
  yyval = itex2MML_copy3("<mo maxsize=\"1.8em\" minsize=\"1.8em\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3757 "y.tab.c"
    break;

  case 113: /* bigdelim: BBIG OTHERDELIM  */
#line 658 "itex2MML.y"
                  {
  yyval = itex2MML_copy3("<mo maxsize=\"1.8em\" minsize=\"1.8em\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3766 "y.tab.c"
    break;

  case 114: /* bigdelim: BIGG LEFTDELIM  */
#line 662 "itex2MML.y"
                 {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mo maxsize=\"2.4em\" minsize=\"2.4em\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3776 "y.tab.c"
    break;

  case 115: /* bigdelim: BIGG RIGHTDELIM  */
#line 667 "itex2MML.y"
                  {
  yyval = itex2MML_copy3("<mo maxsize=\"2.4em\" minsize=\"2.4em\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3785 "y.tab.c"
    break;

  case 116: /* bigdelim: BIGG OTHERDELIM  */
#line 671 "itex2MML.y"
                  {
  yyval = itex2MML_copy3("<mo maxsize=\"2.4em\" minsize=\"2.4em\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3794 "y.tab.c"
    break;

  case 117: /* bigdelim: BBIGG LEFTDELIM  */
#line 675 "itex2MML.y"
                  {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mo maxsize=\"3em\" minsize=\"3em\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3804 "y.tab.c"
    break;

  case 118: /* bigdelim: BBIGG RIGHTDELIM  */
#line 680 "itex2MML.y"
                   {
  yyval = itex2MML_copy3("<mo maxsize=\"3em\" minsize=\"3em\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3813 "y.tab.c"
    break;

  case 119: /* bigdelim: BBIGG OTHERDELIM  */
#line 684 "itex2MML.y"
                   {
  yyval = itex2MML_copy3("<mo maxsize=\"3em\" minsize=\"3em\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3822 "y.tab.c"
    break;

  case 120: /* bigdelim: BIGL LEFTDELIM  */
#line 688 "itex2MML.y"
                {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mo maxsize=\"1.2em\" minsize=\"1.2em\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3832 "y.tab.c"
    break;

  case 121: /* bigdelim: BIGL OTHERDELIM  */
#line 693 "itex2MML.y"
                  {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mo maxsize=\"1.2em\" minsize=\"1.2em\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3842 "y.tab.c"
    break;

  case 122: /* bigdelim: BBIGL LEFTDELIM  */
#line 698 "itex2MML.y"
                  {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mo maxsize=\"1.8em\" minsize=\"1.8em\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3852 "y.tab.c"
    break;

  case 123: /* bigdelim: BBIGL OTHERDELIM  */
#line 703 "itex2MML.y"
                   {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mo maxsize=\"1.8em\" minsize=\"1.8em\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3862 "y.tab.c"
    break;

  case 124: /* bigdelim: BIGGL LEFTDELIM  */
#line 708 "itex2MML.y"
                  {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mo maxsize=\"2.4em\" minsize=\"2.4em\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3872 "y.tab.c"
    break;

  case 125: /* bigdelim: BIGGL OTHERDELIM  */
#line 713 "itex2MML.y"
                   {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mo maxsize=\"2.4em\" minsize=\"2.4em\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3882 "y.tab.c"
    break;

  case 126: /* bigdelim: BBIGGL LEFTDELIM  */
#line 718 "itex2MML.y"
                   {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mo maxsize=\"3em\" minsize=\"3em\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3892 "y.tab.c"
    break;

  case 127: /* bigdelim: BBIGGL OTHERDELIM  */
#line 723 "itex2MML.y"
                    {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mo maxsize=\"3em\" minsize=\"3em\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3902 "y.tab.c"
    break;

  case 128: /* unrecognized: UNKNOWNCHAR  */
#line 729 "itex2MML.y"
                          {
  yyval = itex2MML_copy_string("<merror><mtext>Unknown character</mtext></merror>");
}
#line 3910 "y.tab.c"
    break;

  case 129: /* unaryminus: UNARYMINUS  */
#line 733 "itex2MML.y"
                       {
  yyval = itex2MML_copy_string("<mo lspace=\"verythinmathspace\" rspace=\"0em\">&minus;</mo>");
}
#line 3918 "y.tab.c"
    break;

  case 130: /* unaryplus: UNARYPLUS  */
#line 737 "itex2MML.y"
                     {
  yyval = itex2MML_copy_string("<mo lspace=\"verythinmathspace\" rspace=\"0em\">+</mo>");
}
#line 3926 "y.tab.c"
    break;

  case 132: /* mib: MIB  */
#line 743 "itex2MML.y"
         {
  itex2MML_rowposn=2;
  yyval = itex2MML_copy3("<mi>", yyvsp[0], "</mi>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3936 "y.tab.c"
    break;

  case 134: /* mn: ITEXNUM TEXTSTRING  */
#line 750 "itex2MML.y"
                     {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 3946 "y.tab.c"
    break;

  case 135: /* mob: MOB  */
#line 756 "itex2MML.y"
         {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mo lspace=\"thinmathspace\" rspace=\"thinmathspace\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3956 "y.tab.c"
    break;

  case 138: /* mo: MO  */
#line 764 "itex2MML.y"
     {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mo>", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3966 "y.tab.c"
    break;

  case 139: /* mo: MOL  */
#line 769 "itex2MML.y"
      {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mo>", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3976 "y.tab.c"
    break;

  case 140: /* mo: MOLL  */
#line 774 "itex2MML.y"
       {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mstyle scriptlevel=\"0\"><mo>", yyvsp[0], "</mo></mstyle>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3986 "y.tab.c"
    break;

  case 141: /* mo: RIGHTDELIM  */
#line 779 "itex2MML.y"
             {
  yyval = itex2MML_copy3("<mo stretchy=\"false\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 3995 "y.tab.c"
    break;

  case 142: /* mo: LEFTDELIM  */
#line 783 "itex2MML.y"
            {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mo stretchy=\"false\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4005 "y.tab.c"
    break;

  case 143: /* mo: OTHERDELIM  */
#line 788 "itex2MML.y"
             {
  yyval = itex2MML_copy3("<mo stretchy=\"false\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4014 "y.tab.c"
    break;

  case 144: /* mo: MOF  */
#line 792 "itex2MML.y"
      {
  yyval = itex2MML_copy3("<mo stretchy=\"false\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4023 "y.tab.c"
    break;

  case 145: /* mo: PERIODDELIM  */
#line 796 "itex2MML.y"
              {
  yyval = itex2MML_copy3("<mo>", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4032 "y.tab.c"
    break;

  case 146: /* mo: MOS  */
#line 800 "itex2MML.y"
      {
  itex2MML_rowposn=2;
  yyval = itex2MML_copy3("<mo lspace=\"mediummathspace\" rspace=\"mediummathspace\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4042 "y.tab.c"
    break;

  case 147: /* mo: MOP  */
#line 805 "itex2MML.y"
      {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mo lspace=\"0em\" rspace=\"thinmathspace\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4052 "y.tab.c"
    break;

  case 148: /* mo: MOR  */
#line 810 "itex2MML.y"
      {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mo lspace=\"verythinmathspace\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4062 "y.tab.c"
    break;

  case 149: /* mo: OPERATORNAME TEXTSTRING  */
#line 815 "itex2MML.y"
                          {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mo lspace=\"0em\" rspace=\"thinmathspace\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4072 "y.tab.c"
    break;

  case 150: /* mo: MATHOP TEXTSTRING  */
#line 820 "itex2MML.y"
                    {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mo lspace=\"thinmathspace\" rspace=\"thinmathspace\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4082 "y.tab.c"
    break;

  case 151: /* mo: MATHBIN TEXTSTRING  */
#line 825 "itex2MML.y"
                     {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mo lspace=\"mediummathspace\" rspace=\"mediummathspace\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4092 "y.tab.c"
    break;

  case 152: /* mo: MATHREL TEXTSTRING  */
#line 830 "itex2MML.y"
                     {
  itex2MML_rowposn = 2;
  yyval = itex2MML_copy3("<mo lspace=\"thickmathspace\" rspace=\"thickmathspace\">", yyvsp[0], "</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4102 "y.tab.c"
    break;

  case 153: /* space: SPACE ST INTONE END ST INTTWO END ST INTTHREE END  */
#line 836 "itex2MML.y"
                                                         {
  char * s1 = itex2MML_copy3("<mspace height=\"", yyvsp[-7], "ex\" depth=\"");
  char * s2 = itex2MML_copy3(yyvsp[-4], "ex\" width=\"", yyvsp[-1]);
  yyval = itex2MML_copy3(s1, s2, "em\"></mspace>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(yyvsp[-7]);
  itex2MML_free_string(yyvsp[-4]);
  itex2MML_free_string(yyvsp[-1]);
}
#line 4117 "y.tab.c"
    break;

  case 154: /* statusline: STATLINE TEXTSTRING closedTerm  */
#line 847 "itex2MML.y"
                                           {
  char * s1 = itex2MML_copy3("<maction actiontype=\"statusline\">", yyvsp[0], "<mtext>");
  yyval = itex2MML_copy3(s1, yyvsp[-1], "</mtext></maction>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4129 "y.tab.c"
    break;

  case 155: /* tooltip: TOOLTIP TEXTSTRING closedTerm  */
#line 855 "itex2MML.y"
                                       {
  char * s1 = itex2MML_copy3("<maction actiontype=\"tooltip\">", yyvsp[0], "<mtext>");
  yyval = itex2MML_copy3(s1, yyvsp[-1], "</mtext></maction>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4141 "y.tab.c"
    break;

  case 156: /* toggle: TOGGLE closedTerm closedTerm  */
#line 863 "itex2MML.y"
                                     {
  char * s1 = itex2MML_copy3("<maction actiontype=\"toggle\" selection=\"2\">", yyvsp[-1], " ");
  yyval = itex2MML_copy3(s1, yyvsp[0], "</maction>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4153 "y.tab.c"
    break;

  case 157: /* fghighlight: FGHIGHLIGHT ATTRLIST closedTerm  */
#line 871 "itex2MML.y"
                                             {
  char * s1 = itex2MML_copy3("<maction actiontype=\"highlight\" other='color=", yyvsp[-1], "'>");
  yyval = itex2MML_copy3(s1, yyvsp[0], "</maction>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4165 "y.tab.c"
    break;

  case 158: /* bghighlight: BGHIGHLIGHT ATTRLIST closedTerm  */
#line 879 "itex2MML.y"
                                             {
  char * s1 = itex2MML_copy3("<maction actiontype=\"highlight\" other='background=", yyvsp[-1], "'>");
  yyval = itex2MML_copy3(s1, yyvsp[0], "</maction>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4177 "y.tab.c"
    break;

  case 159: /* color: COLOR ATTRLIST compoundTermList  */
#line 887 "itex2MML.y"
                                       {
  char * s1 = itex2MML_copy3("<mstyle mathcolor=", yyvsp[-1], ">");
  yyval = itex2MML_copy3(s1, yyvsp[0], "</mstyle>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4189 "y.tab.c"
    break;

  case 160: /* color: BGCOLOR ATTRLIST compoundTermList  */
#line 894 "itex2MML.y"
                                    {
  char * s1 = itex2MML_copy3("<mstyle mathbackground=", yyvsp[-1], ">");
  yyval = itex2MML_copy3(s1, yyvsp[0], "</mstyle>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4201 "y.tab.c"
    break;

  case 161: /* mathrlap: RLAP closedTerm  */
#line 902 "itex2MML.y"
                          {
  yyval = itex2MML_copy3("<mpadded width=\"0\">", yyvsp[0], "</mpadded>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4210 "y.tab.c"
    break;

  case 162: /* mathllap: LLAP closedTerm  */
#line 907 "itex2MML.y"
                          {
  yyval = itex2MML_copy3("<mpadded width=\"0\" lspace=\"-100%width\">", yyvsp[0], "</mpadded>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4219 "y.tab.c"
    break;

  case 163: /* mathclap: CLAP closedTerm  */
#line 912 "itex2MML.y"
                          {
  yyval = itex2MML_copy3("<mpadded width=\"0\" lspace=\"-50%width\">", yyvsp[0], "</mpadded>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4228 "y.tab.c"
    break;

  case 164: /* textstring: TEXTBOX TEXTSTRING  */
#line 917 "itex2MML.y"
                               {
  yyval = itex2MML_copy3("<mtext>", yyvsp[0], "</mtext>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4237 "y.tab.c"
    break;

  case 165: /* displaystyle: DISPLAY compoundTermList  */
#line 922 "itex2MML.y"
                                       {
  yyval = itex2MML_copy3("<mstyle displaystyle=\"true\">", yyvsp[0], "</mstyle>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4246 "y.tab.c"
    break;

  case 166: /* textstyle: TEXTSTY compoundTermList  */
#line 927 "itex2MML.y"
                                    {
  yyval = itex2MML_copy3("<mstyle displaystyle=\"false\">", yyvsp[0], "</mstyle>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4255 "y.tab.c"
    break;

  case 167: /* textsize: TEXTSIZE compoundTermList  */
#line 932 "itex2MML.y"
                                    {
  yyval = itex2MML_copy3("<mstyle scriptlevel=\"0\">", yyvsp[0], "</mstyle>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4264 "y.tab.c"
    break;

  case 168: /* scriptsize: SCSIZE compoundTermList  */
#line 937 "itex2MML.y"
                                    {
  yyval = itex2MML_copy3("<mstyle scriptlevel=\"1\">", yyvsp[0], "</mstyle>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4273 "y.tab.c"
    break;

  case 169: /* scriptscriptsize: SCSCSIZE compoundTermList  */
#line 942 "itex2MML.y"
                                            {
  yyval = itex2MML_copy3("<mstyle scriptlevel=\"2\">", yyvsp[0], "</mstyle>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4282 "y.tab.c"
    break;

  case 170: /* italics: ITALICS closedTerm  */
#line 947 "itex2MML.y"
                            {
  yyval = itex2MML_copy3("<mstyle mathvariant=\"italic\">", yyvsp[0], "</mstyle>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4291 "y.tab.c"
    break;

  case 171: /* slashed: SLASHED closedTerm  */
#line 952 "itex2MML.y"
                            {
  yyval = itex2MML_copy3("<menclose notation=\"updiagonalstrike\">", yyvsp[0], "</menclose>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4300 "y.tab.c"
    break;

  case 172: /* boxed: BOXED closedTerm  */
#line 957 "itex2MML.y"
                        {
  yyval = itex2MML_copy3("<menclose notation=\"box\">", yyvsp[0], "</menclose>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4309 "y.tab.c"
    break;

  case 173: /* bold: BOLD closedTerm  */
#line 962 "itex2MML.y"
                      {
  yyval = itex2MML_copy3("<mstyle mathvariant=\"bold\">", yyvsp[0], "</mstyle>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4318 "y.tab.c"
    break;

  case 174: /* roman: RM ST rmchars END  */
#line 967 "itex2MML.y"
                         {
  yyval = itex2MML_copy3("<mi mathvariant=\"normal\">", yyvsp[-1], "</mi>");
  itex2MML_free_string(yyvsp[-1]);
}
#line 4327 "y.tab.c"
    break;

  case 175: /* rmchars: RMCHAR  */
#line 972 "itex2MML.y"
                {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4336 "y.tab.c"
    break;

  case 176: /* rmchars: rmchars RMCHAR  */
#line 976 "itex2MML.y"
                 {
  yyval = itex2MML_copy2(yyvsp[-1], yyvsp[0]);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4346 "y.tab.c"
    break;

  case 177: /* bbold: BB ST bbchars END  */
#line 982 "itex2MML.y"
                         {
  yyval = itex2MML_copy3("<mi>", yyvsp[-1], "</mi>");
  itex2MML_free_string(yyvsp[-1]);
}
#line 4355 "y.tab.c"
    break;

  case 178: /* bbchars: bbchar  */
#line 987 "itex2MML.y"
                {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4364 "y.tab.c"
    break;

  case 179: /* bbchars: bbchars bbchar  */
#line 991 "itex2MML.y"
                 {
  yyval = itex2MML_copy2(yyvsp[-1], yyvsp[0]);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4374 "y.tab.c"
    break;

  case 180: /* bbchar: BBLOWERCHAR  */
#line 997 "itex2MML.y"
                    {
  yyval = itex2MML_copy3("&", yyvsp[0], "opf;");
  itex2MML_free_string(yyvsp[0]);
}
#line 4383 "y.tab.c"
    break;

  case 181: /* bbchar: BBUPPERCHAR  */
#line 1001 "itex2MML.y"
              {
  yyval = itex2MML_copy3("&", yyvsp[0], "opf;");
  itex2MML_free_string(yyvsp[0]);
}
#line 4392 "y.tab.c"
    break;

  case 182: /* bbchar: BBDIGIT  */
#line 1005 "itex2MML.y"
          {
  /* Blackboard digits 0-9 correspond to Unicode characters 0x1D7D8-0x1D7E1 */
  char * end = yyvsp[0] + 1;
  int code = 0x1D7D8 + strtoul(yyvsp[0], &end, 10);
  yyval = itex2MML_character_reference(code);
  itex2MML_free_string(yyvsp[0]);
}
#line 4404 "y.tab.c"
    break;

  case 183: /* frak: FRAK ST frakletters END  */
#line 1013 "itex2MML.y"
                              {
  yyval = itex2MML_copy3("<mi>", yyvsp[-1], "</mi>");
  itex2MML_free_string(yyvsp[-1]);
}
#line 4413 "y.tab.c"
    break;

  case 184: /* frakletters: frakletter  */
#line 1018 "itex2MML.y"
                        {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4422 "y.tab.c"
    break;

  case 185: /* frakletters: frakletters frakletter  */
#line 1022 "itex2MML.y"
                         {
  yyval = itex2MML_copy2(yyvsp[-1], yyvsp[0]);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4432 "y.tab.c"
    break;

  case 186: /* frakletter: FRAKCHAR  */
#line 1028 "itex2MML.y"
                     {
  yyval = itex2MML_copy3("&", yyvsp[0], "fr;");
  itex2MML_free_string(yyvsp[0]);
}
#line 4441 "y.tab.c"
    break;

  case 187: /* cal: CAL ST calletters END  */
#line 1033 "itex2MML.y"
                           {
  yyval = itex2MML_copy3("<mi>", yyvsp[-1], "</mi>");
  itex2MML_free_string(yyvsp[-1]);
}
#line 4450 "y.tab.c"
    break;

  case 188: /* calletters: calletter  */
#line 1038 "itex2MML.y"
                      {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4459 "y.tab.c"
    break;

  case 189: /* calletters: calletters calletter  */
#line 1042 "itex2MML.y"
                       {
  yyval = itex2MML_copy2(yyvsp[-1], yyvsp[0]);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4469 "y.tab.c"
    break;

  case 190: /* calletter: CALCHAR  */
#line 1048 "itex2MML.y"
                   {
  yyval = itex2MML_copy3("&", yyvsp[0], "scr;");
  itex2MML_free_string(yyvsp[0]);
}
#line 4478 "y.tab.c"
    break;

  case 191: /* thinspace: THINSPACE  */
#line 1053 "itex2MML.y"
                     {
  yyval = itex2MML_copy_string("<mspace width=\"thinmathspace\"></mspace>");
}
#line 4486 "y.tab.c"
    break;

  case 192: /* medspace: MEDSPACE  */
#line 1057 "itex2MML.y"
                   {
  yyval = itex2MML_copy_string("<mspace width=\"mediummathspace\"></mspace>");
}
#line 4494 "y.tab.c"
    break;

  case 193: /* thickspace: THICKSPACE  */
#line 1061 "itex2MML.y"
                       {
  yyval = itex2MML_copy_string("<mspace width=\"thickmathspace\"></mspace>");
}
#line 4502 "y.tab.c"
    break;

  case 194: /* quad: QUAD  */
#line 1065 "itex2MML.y"
           {
  yyval = itex2MML_copy_string("<mspace width=\"1em\"></mspace>");
}
#line 4510 "y.tab.c"
    break;

  case 195: /* qquad: QQUAD  */
#line 1069 "itex2MML.y"
             {
  yyval = itex2MML_copy_string("<mspace width=\"2em\"></mspace>");
}
#line 4518 "y.tab.c"
    break;

  case 196: /* negspace: NEGSPACE  */
#line 1073 "itex2MML.y"
                   {
  yyval = itex2MML_copy_string("<mspace width=\"-0.1667 em\"></mspace>");
}
#line 4526 "y.tab.c"
    break;

  case 197: /* phantom: PHANTOM closedTerm  */
#line 1077 "itex2MML.y"
                            {
  yyval = itex2MML_copy3("<mphantom>", yyvsp[0], "</mphantom>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4535 "y.tab.c"
    break;

  case 198: /* href: HREF TEXTSTRING closedTerm  */
#line 1082 "itex2MML.y"
                                 {
  char * s1 = itex2MML_copy3("<mrow href=\"", yyvsp[-1], "\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" xlink:type=\"simple\" xlink:href=\"");
  char * s2 = itex2MML_copy3(s1, yyvsp[-1], "\">");
  yyval = itex2MML_copy3(s2, yyvsp[0], "</mrow>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4549 "y.tab.c"
    break;

  case 199: /* tensor: TENSOR closedTerm MROWOPEN subsupList MROWCLOSE  */
#line 1092 "itex2MML.y"
                                                        {
  char * s1 = itex2MML_copy3("<mmultiscripts>", yyvsp[-3], yyvsp[-1]);
  yyval = itex2MML_copy2(s1, "</mmultiscripts>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-3]);
  itex2MML_free_string(yyvsp[-1]);
}
#line 4561 "y.tab.c"
    break;

  case 200: /* tensor: TENSOR closedTerm subsupList  */
#line 1099 "itex2MML.y"
                               {
  char * s1 = itex2MML_copy3("<mmultiscripts>", yyvsp[-1], yyvsp[0]);
  yyval = itex2MML_copy2(s1, "</mmultiscripts>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4573 "y.tab.c"
    break;

  case 201: /* multi: MULTI MROWOPEN subsupList MROWCLOSE closedTerm MROWOPEN subsupList MROWCLOSE  */
#line 1107 "itex2MML.y"
                                                                                    {
  char * s1 = itex2MML_copy3("<mmultiscripts>", yyvsp[-3], yyvsp[-1]);
  char * s2 = itex2MML_copy3("<mprescripts></mprescripts>", yyvsp[-5], "</mmultiscripts>");
  yyval = itex2MML_copy2(s1, s2);
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(yyvsp[-5]);
  itex2MML_free_string(yyvsp[-3]);
  itex2MML_free_string(yyvsp[-1]);
}
#line 4588 "y.tab.c"
    break;

  case 202: /* multi: MULTI MROWOPEN subsupList MROWCLOSE closedTerm EMPTYMROW  */
#line 1117 "itex2MML.y"
                                                           {
  char * s1 = itex2MML_copy2("<mmultiscripts>", yyvsp[-1]);
  char * s2 = itex2MML_copy3("<mprescripts></mprescripts>", yyvsp[-3], "</mmultiscripts>");
  yyval = itex2MML_copy2(s1, s2);
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(yyvsp[-3]);
  itex2MML_free_string(yyvsp[-1]);
}
#line 4602 "y.tab.c"
    break;

  case 203: /* multi: MULTI EMPTYMROW closedTerm MROWOPEN subsupList MROWCLOSE  */
#line 1126 "itex2MML.y"
                                                           {
  char * s1 = itex2MML_copy3("<mmultiscripts>", yyvsp[-3], yyvsp[-1]);
  yyval = itex2MML_copy2(s1, "</mmultiscripts>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-3]);
  itex2MML_free_string(yyvsp[-1]);
}
#line 4614 "y.tab.c"
    break;

  case 204: /* subsupList: subsupTerm  */
#line 1134 "itex2MML.y"
                       {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4623 "y.tab.c"
    break;

  case 205: /* subsupList: subsupList subsupTerm  */
#line 1138 "itex2MML.y"
                        {
  yyval = itex2MML_copy3(yyvsp[-1], " ", yyvsp[0]);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4633 "y.tab.c"
    break;

  case 206: /* subsupTerm: SUB closedTerm SUP closedTerm  */
#line 1144 "itex2MML.y"
                                          {
  yyval = itex2MML_copy3(yyvsp[-2], " ", yyvsp[0]);
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4643 "y.tab.c"
    break;

  case 207: /* subsupTerm: SUB closedTerm  */
#line 1149 "itex2MML.y"
                 {
  yyval = itex2MML_copy2(yyvsp[0], " <none></none>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4652 "y.tab.c"
    break;

  case 208: /* subsupTerm: SUP closedTerm  */
#line 1153 "itex2MML.y"
                 {
  yyval = itex2MML_copy2("<none></none> ", yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4661 "y.tab.c"
    break;

  case 209: /* subsupTerm: SUB SUP closedTerm  */
#line 1157 "itex2MML.y"
                     {
  yyval = itex2MML_copy2("<none></none> ", yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4670 "y.tab.c"
    break;

  case 210: /* mfrac: FRAC closedTerm closedTerm  */
#line 1162 "itex2MML.y"
                                  {
  char * s1 = itex2MML_copy3("<mfrac>", yyvsp[-1], yyvsp[0]);
  yyval = itex2MML_copy2(s1, "</mfrac>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4682 "y.tab.c"
    break;

  case 211: /* mfrac: TFRAC closedTerm closedTerm  */
#line 1169 "itex2MML.y"
                              {
  char * s1 = itex2MML_copy3("<mstyle displaystyle=\"false\"><mfrac>", yyvsp[-1], yyvsp[0]);
  yyval = itex2MML_copy2(s1, "</mfrac></mstyle>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4694 "y.tab.c"
    break;

  case 212: /* pmod: PMOD closedTerm  */
#line 1177 "itex2MML.y"
                      {
  yyval = itex2MML_copy3( "<mo lspace=\"mediummathspace\">(</mo><mo rspace=\"thinmathspace\">mod</mo>", yyvsp[0], "<mo rspace=\"mediummathspace\">)</mo>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4703 "y.tab.c"
    break;

  case 213: /* texover: MROWOPEN compoundTermList TEXOVER compoundTermList MROWCLOSE  */
#line 1182 "itex2MML.y"
                                                                      {
  char * s1 = itex2MML_copy3("<mfrac><mrow>", yyvsp[-3], "</mrow><mrow>");
  yyval = itex2MML_copy3(s1, yyvsp[-1], "</mrow></mfrac>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-3]);
  itex2MML_free_string(yyvsp[-1]);
}
#line 4715 "y.tab.c"
    break;

  case 214: /* texover: left compoundTermList TEXOVER compoundTermList right  */
#line 1189 "itex2MML.y"
                                                       {
  char * s1 = itex2MML_copy3("<mrow>", yyvsp[-4], "<mfrac><mrow>");
  char * s2 = itex2MML_copy3(yyvsp[-3], "</mrow><mrow>", yyvsp[-1]);
  char * s3 = itex2MML_copy3("</mrow></mfrac>", yyvsp[0], "</mrow>");
  yyval = itex2MML_copy3(s1, s2, s3);
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(s3);
  itex2MML_free_string(yyvsp[-4]);
  itex2MML_free_string(yyvsp[-3]);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4733 "y.tab.c"
    break;

  case 215: /* texatop: MROWOPEN compoundTermList TEXATOP compoundTermList MROWCLOSE  */
#line 1203 "itex2MML.y"
                                                                      {
  char * s1 = itex2MML_copy3("<mfrac linethickness=\"0\"><mrow>", yyvsp[-3], "</mrow><mrow>");
  yyval = itex2MML_copy3(s1, yyvsp[-1], "</mrow></mfrac>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-3]);
  itex2MML_free_string(yyvsp[-1]);
}
#line 4745 "y.tab.c"
    break;

  case 216: /* texatop: left compoundTermList TEXATOP compoundTermList right  */
#line 1210 "itex2MML.y"
                                                       {
  char * s1 = itex2MML_copy3("<mrow>", yyvsp[-4], "<mfrac linethickness=\"0\"><mrow>");
  char * s2 = itex2MML_copy3(yyvsp[-3], "</mrow><mrow>", yyvsp[-1]);
  char * s3 = itex2MML_copy3("</mrow></mfrac>", yyvsp[0], "</mrow>");
  yyval = itex2MML_copy3(s1, s2, s3);
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(s3);
  itex2MML_free_string(yyvsp[-4]);
  itex2MML_free_string(yyvsp[-3]);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4763 "y.tab.c"
    break;

  case 217: /* binom: BINOM closedTerm closedTerm  */
#line 1224 "itex2MML.y"
                                   {
  char * s1 = itex2MML_copy3("<mrow><mo>(</mo><mfrac linethickness=\"0\">", yyvsp[-1], yyvsp[0]);
  yyval = itex2MML_copy2(s1, "</mfrac><mo>)</mo></mrow>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4775 "y.tab.c"
    break;

  case 218: /* binom: TBINOM closedTerm closedTerm  */
#line 1231 "itex2MML.y"
                               {
  char * s1 = itex2MML_copy3("<mrow><mo>(</mo><mstyle displaystyle=\"false\"><mfrac linethickness=\"0\">", yyvsp[-1], yyvsp[0]);
  yyval = itex2MML_copy2(s1, "</mfrac></mstyle><mo>)</mo></mrow>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4787 "y.tab.c"
    break;

  case 219: /* munderbrace: UNDERBRACE closedTerm  */
#line 1239 "itex2MML.y"
                                   {
  yyval = itex2MML_copy3("<munder>", yyvsp[0], "<mo>&UnderBrace;</mo></munder>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4796 "y.tab.c"
    break;

  case 220: /* munderline: UNDERLINE closedTerm  */
#line 1244 "itex2MML.y"
                                 {
  yyval = itex2MML_copy3("<munder>", yyvsp[0], "<mo>&#x00332;</mo></munder>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4805 "y.tab.c"
    break;

  case 221: /* moverbrace: OVERBRACE closedTerm  */
#line 1249 "itex2MML.y"
                                 {
  yyval = itex2MML_copy3("<mover>", yyvsp[0], "<mo>&OverBrace;</mo></mover>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4814 "y.tab.c"
    break;

  case 222: /* bar: BAR closedTerm  */
#line 1254 "itex2MML.y"
                    {
  yyval = itex2MML_copy3("<mover>", yyvsp[0], "<mo stretchy=\"false\">&#x000AF;</mo></mover>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4823 "y.tab.c"
    break;

  case 223: /* bar: WIDEBAR closedTerm  */
#line 1258 "itex2MML.y"
                     {
  yyval = itex2MML_copy3("<mover>", yyvsp[0], "<mo>&#x000AF;</mo></mover>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4832 "y.tab.c"
    break;

  case 224: /* vec: VEC closedTerm  */
#line 1263 "itex2MML.y"
                    {
  yyval = itex2MML_copy3("<mover>", yyvsp[0], "<mo stretchy=\"false\">&RightVector;</mo></mover>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4841 "y.tab.c"
    break;

  case 225: /* vec: WIDEVEC closedTerm  */
#line 1267 "itex2MML.y"
                     {
  yyval = itex2MML_copy3("<mover>", yyvsp[0], "<mo>&RightVector;</mo></mover>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4850 "y.tab.c"
    break;

  case 226: /* dot: DOT closedTerm  */
#line 1272 "itex2MML.y"
                    {
  yyval = itex2MML_copy3("<mover>", yyvsp[0], "<mo>&dot;</mo></mover>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4859 "y.tab.c"
    break;

  case 227: /* ddot: DDOT closedTerm  */
#line 1277 "itex2MML.y"
                      {
  yyval = itex2MML_copy3("<mover>", yyvsp[0], "<mo>&Dot;</mo></mover>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4868 "y.tab.c"
    break;

  case 228: /* dddot: DDDOT closedTerm  */
#line 1282 "itex2MML.y"
                        {
  yyval = itex2MML_copy3("<mover>", yyvsp[0], "<mo>&tdot;</mo></mover>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4877 "y.tab.c"
    break;

  case 229: /* ddddot: DDDDOT closedTerm  */
#line 1287 "itex2MML.y"
                          {
  yyval = itex2MML_copy3("<mover>", yyvsp[0], "<mo>&DotDot;</mo></mover>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4886 "y.tab.c"
    break;

  case 230: /* tilde: TILDE closedTerm  */
#line 1292 "itex2MML.y"
                        {
  yyval = itex2MML_copy3("<mover>", yyvsp[0], "<mo stretchy=\"false\">&tilde;</mo></mover>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4895 "y.tab.c"
    break;

  case 231: /* tilde: WIDETILDE closedTerm  */
#line 1296 "itex2MML.y"
                       {
  yyval = itex2MML_copy3("<mover>", yyvsp[0], "<mo>&tilde;</mo></mover>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4904 "y.tab.c"
    break;

  case 232: /* check: CHECK closedTerm  */
#line 1301 "itex2MML.y"
                        {
  yyval = itex2MML_copy3("<mover>", yyvsp[0], "<mo stretchy=\"false\">&#x2c7;</mo></mover>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4913 "y.tab.c"
    break;

  case 233: /* check: WIDECHECK closedTerm  */
#line 1305 "itex2MML.y"
                       {
  yyval = itex2MML_copy3("<mover>", yyvsp[0], "<mo>&#x2c7;</mo></mover>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4922 "y.tab.c"
    break;

  case 234: /* hat: HAT closedTerm  */
#line 1310 "itex2MML.y"
                    {
  yyval = itex2MML_copy3("<mover>", yyvsp[0], "<mo stretchy=\"false\">&#x5E;</mo></mover>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4931 "y.tab.c"
    break;

  case 235: /* hat: WIDEHAT closedTerm  */
#line 1314 "itex2MML.y"
                     {
  yyval = itex2MML_copy3("<mover>", yyvsp[0], "<mo>&#x5E;</mo></mover>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4940 "y.tab.c"
    break;

  case 236: /* msqrt: SQRT closedTerm  */
#line 1319 "itex2MML.y"
                       {
  yyval = itex2MML_copy3("<msqrt>", yyvsp[0], "</msqrt>");
  itex2MML_free_string(yyvsp[0]);
}
#line 4949 "y.tab.c"
    break;

  case 237: /* mroot: SQRT OPTARGOPEN compoundTermList OPTARGCLOSE closedTerm  */
#line 1324 "itex2MML.y"
                                                               {
  char * s1 = itex2MML_copy3("<mroot>", yyvsp[0], yyvsp[-2]);
  yyval = itex2MML_copy2(s1, "</mroot>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4961 "y.tab.c"
    break;

  case 238: /* mroot: ROOT closedTerm closedTerm  */
#line 1331 "itex2MML.y"
                             {
  char * s1 = itex2MML_copy3("<mroot>", yyvsp[0], yyvsp[-1]);
  yyval = itex2MML_copy2(s1, "</mroot>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4973 "y.tab.c"
    break;

  case 239: /* raisebox: RAISEBOX TEXTSTRING TEXTSTRING TEXTSTRING closedTerm  */
#line 1339 "itex2MML.y"
                                                               {
  char * s1 = itex2MML_copy3("<mpadded voffset='", yyvsp[-3], "' height='");
  char * s2 = itex2MML_copy3(s1, yyvsp[-2], "' depth='");
  char * s3 = itex2MML_copy3(s2, yyvsp[-1], "'>");
  yyval = itex2MML_copy3(s3, yyvsp[0], "</mpadded>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(s3);
  itex2MML_free_string(yyvsp[-3]);
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 4991 "y.tab.c"
    break;

  case 240: /* raisebox: RAISEBOX NEG TEXTSTRING TEXTSTRING TEXTSTRING closedTerm  */
#line 1352 "itex2MML.y"
                                                           {
  char * s1 = itex2MML_copy3("<mpadded voffset='-", yyvsp[-3], "' height='");
  char * s2 = itex2MML_copy3(s1, yyvsp[-2], "' depth='");
  char * s3 = itex2MML_copy3(s2, yyvsp[-1], "'>");
  yyval = itex2MML_copy3(s3, yyvsp[0], "</mpadded>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(s3);
  itex2MML_free_string(yyvsp[-3]);
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5009 "y.tab.c"
    break;

  case 241: /* raisebox: RAISEBOX TEXTSTRING TEXTSTRING closedTerm  */
#line 1365 "itex2MML.y"
                                            {
  char * s1 = itex2MML_copy3("<mpadded voffset='", yyvsp[-2], "' height='");
  char * s2 = itex2MML_copy3(s1, yyvsp[-1], "' depth='depth'>");
  yyval = itex2MML_copy3(s2, yyvsp[0], "</mpadded>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5024 "y.tab.c"
    break;

  case 242: /* raisebox: RAISEBOX NEG TEXTSTRING TEXTSTRING closedTerm  */
#line 1375 "itex2MML.y"
                                                {
  char * s1 = itex2MML_copy3("<mpadded voffset='-", yyvsp[-2], "' height='");
  char * s2 = itex2MML_copy3(s1, yyvsp[-1], "' depth='+");
  char * s3 = itex2MML_copy3(s2, yyvsp[-2], "'>");
  yyval = itex2MML_copy3(s3, yyvsp[0], "</mpadded>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(s3);
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5041 "y.tab.c"
    break;

  case 243: /* raisebox: RAISEBOX TEXTSTRING closedTerm  */
#line 1387 "itex2MML.y"
                                 {
  char * s1 = itex2MML_copy3("<mpadded voffset='", yyvsp[-1], "' height='+");
  char * s2 = itex2MML_copy3(s1, yyvsp[-1], "' depth='depth'>");
  yyval = itex2MML_copy3(s2, yyvsp[0], "</mpadded>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5055 "y.tab.c"
    break;

  case 244: /* raisebox: RAISEBOX NEG TEXTSTRING closedTerm  */
#line 1396 "itex2MML.y"
                                     {
  char * s1 = itex2MML_copy3("<mpadded voffset='-", yyvsp[-1], "' height='0pt' depth='+");
  char * s2 = itex2MML_copy3(s1, yyvsp[-1], "'>");
  yyval = itex2MML_copy3(s2, yyvsp[0], "</mpadded>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5069 "y.tab.c"
    break;

  case 245: /* munder: XARROW OPTARGOPEN compoundTermList OPTARGCLOSE EMPTYMROW  */
#line 1406 "itex2MML.y"
                                                                 {
  char * s1 = itex2MML_copy3("<munder><mo>", yyvsp[-4], "</mo><mrow>");
  yyval = itex2MML_copy3(s1, yyvsp[-2], "</mrow></munder>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-4]);
  itex2MML_free_string(yyvsp[-2]);
}
#line 5081 "y.tab.c"
    break;

  case 246: /* munder: UNDER closedTerm closedTerm  */
#line 1413 "itex2MML.y"
                              {
  char * s1 = itex2MML_copy3("<munder>", yyvsp[0], yyvsp[-1]);
  yyval = itex2MML_copy2(s1, "</munder>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5093 "y.tab.c"
    break;

  case 247: /* mover: XARROW closedTerm  */
#line 1421 "itex2MML.y"
                         {
  char * s1 = itex2MML_copy3("<mover><mo>", yyvsp[-1], "</mo>");
  yyval =  itex2MML_copy3(s1, yyvsp[0], "</mover>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5105 "y.tab.c"
    break;

  case 248: /* mover: OVER closedTerm closedTerm  */
#line 1428 "itex2MML.y"
                             {
  char * s1 = itex2MML_copy3("<mover>", yyvsp[0], yyvsp[-1]);
  yyval = itex2MML_copy2(s1, "</mover>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5117 "y.tab.c"
    break;

  case 249: /* munderover: XARROW OPTARGOPEN compoundTermList OPTARGCLOSE closedTerm  */
#line 1436 "itex2MML.y"
                                                                      {
  char * s1 = itex2MML_copy3("<munderover><mo>", yyvsp[-4], "</mo><mrow>");
  char * s2 = itex2MML_copy3(s1, yyvsp[-2], "</mrow>");
  yyval = itex2MML_copy3(s2, yyvsp[0], "</munderover>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(yyvsp[-4]);
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5132 "y.tab.c"
    break;

  case 250: /* munderover: UNDEROVER closedTerm closedTerm closedTerm  */
#line 1446 "itex2MML.y"
                                             {
  char * s1 = itex2MML_copy3("<munderover>", yyvsp[0], yyvsp[-2]);
  yyval = itex2MML_copy3(s1, yyvsp[-1], "</munderover>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5145 "y.tab.c"
    break;

  case 251: /* emptymrow: EMPTYMROW  */
#line 1455 "itex2MML.y"
                     {
  yyval = itex2MML_copy_string("<mrow></mrow>");
}
#line 5153 "y.tab.c"
    break;

  case 252: /* mathenv: BEGINENV MATRIX tableRowList ENDENV MATRIX  */
#line 1459 "itex2MML.y"
                                                    {
  yyval = itex2MML_copy3("<mrow><mtable rowspacing=\"0.5ex\">", yyvsp[-2], "</mtable></mrow>");
  itex2MML_free_string(yyvsp[-2]);
}
#line 5162 "y.tab.c"
    break;

  case 253: /* mathenv: BEGINENV GATHERED tableRowList ENDENV GATHERED  */
#line 1463 "itex2MML.y"
                                                  {
  yyval = itex2MML_copy3("<mrow><mtable rowspacing=\"1.0ex\">", yyvsp[-2], "</mtable></mrow>");
  itex2MML_free_string(yyvsp[-2]);
}
#line 5171 "y.tab.c"
    break;

  case 254: /* mathenv: BEGINENV PMATRIX tableRowList ENDENV PMATRIX  */
#line 1467 "itex2MML.y"
                                               {
  yyval = itex2MML_copy3("<mrow><mo>(</mo><mrow><mtable rowspacing=\"0.5ex\">", yyvsp[-2], "</mtable></mrow><mo>)</mo></mrow>");
  itex2MML_free_string(yyvsp[-2]);
}
#line 5180 "y.tab.c"
    break;

  case 255: /* mathenv: BEGINENV BMATRIX tableRowList ENDENV BMATRIX  */
#line 1471 "itex2MML.y"
                                               {
  yyval = itex2MML_copy3("<mrow><mo>[</mo><mrow><mtable rowspacing=\"0.5ex\">", yyvsp[-2], "</mtable></mrow><mo>]</mo></mrow>");
  itex2MML_free_string(yyvsp[-2]);
}
#line 5189 "y.tab.c"
    break;

  case 256: /* mathenv: BEGINENV VMATRIX tableRowList ENDENV VMATRIX  */
#line 1475 "itex2MML.y"
                                               {
  yyval = itex2MML_copy3("<mrow><mo>&VerticalBar;</mo><mrow><mtable rowspacing=\"0.5ex\">", yyvsp[-2], "</mtable></mrow><mo>&VerticalBar;</mo></mrow>");
  itex2MML_free_string(yyvsp[-2]);
}
#line 5198 "y.tab.c"
    break;

  case 257: /* mathenv: BEGINENV BBMATRIX tableRowList ENDENV BBMATRIX  */
#line 1479 "itex2MML.y"
                                                 {
  yyval = itex2MML_copy3("<mrow><mo>{</mo><mrow><mtable rowspacing=\"0.5ex\">", yyvsp[-2], "</mtable></mrow><mo>}</mo></mrow>");
  itex2MML_free_string(yyvsp[-2]);
}
#line 5207 "y.tab.c"
    break;

  case 258: /* mathenv: BEGINENV VVMATRIX tableRowList ENDENV VVMATRIX  */
#line 1483 "itex2MML.y"
                                                 {
  yyval = itex2MML_copy3("<mrow><mo>&DoubleVerticalBar;</mo><mrow><mtable rowspacing=\"0.5ex\">", yyvsp[-2], "</mtable></mrow><mo>&DoubleVerticalBar;</mo></mrow>");
  itex2MML_free_string(yyvsp[-2]);
}
#line 5216 "y.tab.c"
    break;

  case 259: /* mathenv: BEGINENV SMALLMATRIX tableRowList ENDENV SMALLMATRIX  */
#line 1487 "itex2MML.y"
                                                       {
  yyval = itex2MML_copy3("<mstyle scriptlevel=\"2\"><mrow><mtable rowspacing=\"0.5ex\">", yyvsp[-2], "</mtable></mrow></mstyle>");
  itex2MML_free_string(yyvsp[-2]);
}
#line 5225 "y.tab.c"
    break;

  case 260: /* mathenv: BEGINENV CASES tableRowList ENDENV CASES  */
#line 1491 "itex2MML.y"
                                           {
  yyval = itex2MML_copy3("<mrow><mo>{</mo><mrow><mtable columnalign=\"left left\">", yyvsp[-2], "</mtable></mrow></mrow>");
  itex2MML_free_string(yyvsp[-2]);
}
#line 5234 "y.tab.c"
    break;

  case 261: /* mathenv: BEGINENV ALIGNED tableRowList ENDENV ALIGNED  */
#line 1495 "itex2MML.y"
                                               {
  yyval = itex2MML_copy3("<mrow><mtable columnalign=\"right left right left right left right left right left\" columnspacing=\"0em\">", yyvsp[-2], "</mtable></mrow>");
  itex2MML_free_string(yyvsp[-2]);
}
#line 5243 "y.tab.c"
    break;

  case 262: /* mathenv: BEGINENV ARRAY ARRAYALIGN ST columnAlignList END tableRowList ENDENV ARRAY  */
#line 1499 "itex2MML.y"
                                                                             {
  char * s1 = itex2MML_copy3("<mtable rowspacing=\"0.5ex\" align=\"", yyvsp[-6], "\" columnalign=\"");
  char * s2 = itex2MML_copy3(s1, yyvsp[-4], "\">");
  yyval = itex2MML_copy3(s2, yyvsp[-2], "</mtable>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(yyvsp[-6]);
  itex2MML_free_string(yyvsp[-4]);
  itex2MML_free_string(yyvsp[-2]);
}
#line 5258 "y.tab.c"
    break;

  case 263: /* mathenv: BEGINENV ARRAY ST columnAlignList END tableRowList ENDENV ARRAY  */
#line 1509 "itex2MML.y"
                                                                  {
  char * s1 = itex2MML_copy3("<mtable rowspacing=\"0.5ex\" columnalign=\"", yyvsp[-4], "\">");
  yyval = itex2MML_copy3(s1, yyvsp[-2], "</mtable>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-4]);
  itex2MML_free_string(yyvsp[-2]);
}
#line 5270 "y.tab.c"
    break;

  case 264: /* mathenv: BEGINENV SVG XMLSTRING ENDSVG  */
#line 1516 "itex2MML.y"
                                {
  yyval = itex2MML_copy3("<semantics><annotation-xml encoding=\"SVG1.1\">", yyvsp[-1], "</annotation-xml></semantics>");
  itex2MML_free_string(yyvsp[-1]);
}
#line 5279 "y.tab.c"
    break;

  case 265: /* mathenv: BEGINENV SVG ENDSVG  */
#line 1520 "itex2MML.y"
                      {
  yyval = itex2MML_copy_string(" ");
}
#line 5287 "y.tab.c"
    break;

  case 266: /* columnAlignList: columnAlignList COLUMNALIGN  */
#line 1524 "itex2MML.y"
                                             {
  yyval = itex2MML_copy3(yyvsp[-1], " ", yyvsp[0]);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5297 "y.tab.c"
    break;

  case 267: /* columnAlignList: COLUMNALIGN  */
#line 1529 "itex2MML.y"
              {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5306 "y.tab.c"
    break;

  case 268: /* substack: SUBSTACK MROWOPEN tableRowList MROWCLOSE  */
#line 1534 "itex2MML.y"
                                                   {
  yyval = itex2MML_copy3("<mrow><mtable columnalign=\"center\" rowspacing=\"0.5ex\">", yyvsp[-1], "</mtable></mrow>");
  itex2MML_free_string(yyvsp[-1]);
}
#line 5315 "y.tab.c"
    break;

  case 269: /* array: ARRAY MROWOPEN tableRowList MROWCLOSE  */
#line 1539 "itex2MML.y"
                                             {
  yyval = itex2MML_copy3("<mrow><mtable>", yyvsp[-1], "</mtable></mrow>");
  itex2MML_free_string(yyvsp[-1]);
}
#line 5324 "y.tab.c"
    break;

  case 270: /* array: ARRAY MROWOPEN ARRAYOPTS MROWOPEN arrayopts MROWCLOSE tableRowList MROWCLOSE  */
#line 1543 "itex2MML.y"
                                                                               {
  char * s1 = itex2MML_copy3("<mrow><mtable ", yyvsp[-3], ">");
  yyval = itex2MML_copy3(s1, yyvsp[-1], "</mtable></mrow>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-3]);
  itex2MML_free_string(yyvsp[-1]);
}
#line 5336 "y.tab.c"
    break;

  case 271: /* arrayopts: anarrayopt  */
#line 1551 "itex2MML.y"
                      {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5345 "y.tab.c"
    break;

  case 272: /* arrayopts: arrayopts anarrayopt  */
#line 1555 "itex2MML.y"
                       {
  yyval = itex2MML_copy3(yyvsp[-1], " ", yyvsp[0]);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5355 "y.tab.c"
    break;

  case 273: /* anarrayopt: collayout  */
#line 1561 "itex2MML.y"
                      {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5364 "y.tab.c"
    break;

  case 274: /* anarrayopt: colalign  */
#line 1565 "itex2MML.y"
           {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5373 "y.tab.c"
    break;

  case 275: /* anarrayopt: rowalign  */
#line 1569 "itex2MML.y"
           {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5382 "y.tab.c"
    break;

  case 276: /* anarrayopt: align  */
#line 1573 "itex2MML.y"
        {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5391 "y.tab.c"
    break;

  case 277: /* anarrayopt: eqrows  */
#line 1577 "itex2MML.y"
         {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5400 "y.tab.c"
    break;

  case 278: /* anarrayopt: eqcols  */
#line 1581 "itex2MML.y"
         {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5409 "y.tab.c"
    break;

  case 279: /* anarrayopt: rowlines  */
#line 1585 "itex2MML.y"
           {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5418 "y.tab.c"
    break;

  case 280: /* anarrayopt: collines  */
#line 1589 "itex2MML.y"
           {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5427 "y.tab.c"
    break;

  case 281: /* anarrayopt: frame  */
#line 1593 "itex2MML.y"
        {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5436 "y.tab.c"
    break;

  case 282: /* anarrayopt: padding  */
#line 1597 "itex2MML.y"
          {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5445 "y.tab.c"
    break;

  case 283: /* collayout: COLLAYOUT ATTRLIST  */
#line 1602 "itex2MML.y"
                              {
  yyval = itex2MML_copy2("columnalign=", yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5454 "y.tab.c"
    break;

  case 284: /* colalign: COLALIGN ATTRLIST  */
#line 1607 "itex2MML.y"
                            {
  yyval = itex2MML_copy2("columnalign=", yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5463 "y.tab.c"
    break;

  case 285: /* rowalign: ROWALIGN ATTRLIST  */
#line 1612 "itex2MML.y"
                            {
  yyval = itex2MML_copy2("rowalign=", yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5472 "y.tab.c"
    break;

  case 286: /* align: ALIGN ATTRLIST  */
#line 1617 "itex2MML.y"
                      {
  yyval = itex2MML_copy2("align=", yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5481 "y.tab.c"
    break;

  case 287: /* eqrows: EQROWS ATTRLIST  */
#line 1622 "itex2MML.y"
                        {
  yyval = itex2MML_copy2("equalrows=", yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5490 "y.tab.c"
    break;

  case 288: /* eqcols: EQCOLS ATTRLIST  */
#line 1627 "itex2MML.y"
                        {
  yyval = itex2MML_copy2("equalcolumns=", yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5499 "y.tab.c"
    break;

  case 289: /* rowlines: ROWLINES ATTRLIST  */
#line 1632 "itex2MML.y"
                            {
  yyval = itex2MML_copy2("rowlines=", yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5508 "y.tab.c"
    break;

  case 290: /* collines: COLLINES ATTRLIST  */
#line 1637 "itex2MML.y"
                            {
  yyval = itex2MML_copy2("columnlines=", yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5517 "y.tab.c"
    break;

  case 291: /* frame: FRAME ATTRLIST  */
#line 1642 "itex2MML.y"
                      {
  yyval = itex2MML_copy2("frame=", yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5526 "y.tab.c"
    break;

  case 292: /* padding: PADDING ATTRLIST  */
#line 1647 "itex2MML.y"
                          {
  char * s1 = itex2MML_copy3("rowspacing=", yyvsp[0], " columnspacing=");
  yyval = itex2MML_copy2(s1, yyvsp[0]);
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[0]);
}
#line 5537 "y.tab.c"
    break;

  case 293: /* tableRowList: tableRow  */
#line 1654 "itex2MML.y"
                       {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5546 "y.tab.c"
    break;

  case 294: /* tableRowList: tableRowList ROWSEP tableRow  */
#line 1658 "itex2MML.y"
                               {
  yyval = itex2MML_copy3(yyvsp[-2], " ", yyvsp[0]);
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5556 "y.tab.c"
    break;

  case 295: /* tableRow: simpleTableRow  */
#line 1664 "itex2MML.y"
                         {
  yyval = itex2MML_copy3("<mtr>", yyvsp[0], "</mtr>");
  itex2MML_free_string(yyvsp[0]);
}
#line 5565 "y.tab.c"
    break;

  case 296: /* tableRow: optsTableRow  */
#line 1668 "itex2MML.y"
               {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5574 "y.tab.c"
    break;

  case 297: /* simpleTableRow: tableCell  */
#line 1673 "itex2MML.y"
                          {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5583 "y.tab.c"
    break;

  case 298: /* simpleTableRow: simpleTableRow COLSEP tableCell  */
#line 1677 "itex2MML.y"
                                  {
  yyval = itex2MML_copy3(yyvsp[-2], " ", yyvsp[0]);
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5593 "y.tab.c"
    break;

  case 299: /* optsTableRow: ROWOPTS MROWOPEN rowopts MROWCLOSE simpleTableRow  */
#line 1683 "itex2MML.y"
                                                                {
  char * s1 = itex2MML_copy3("<mtr ", yyvsp[-2], ">");
  yyval = itex2MML_copy3(s1, yyvsp[0], "</mtr>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5605 "y.tab.c"
    break;

  case 300: /* rowopts: arowopt  */
#line 1691 "itex2MML.y"
                 {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5614 "y.tab.c"
    break;

  case 301: /* rowopts: rowopts arowopt  */
#line 1695 "itex2MML.y"
                  {
  yyval = itex2MML_copy3(yyvsp[-1], " ", yyvsp[0]);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5624 "y.tab.c"
    break;

  case 302: /* arowopt: colalign  */
#line 1701 "itex2MML.y"
                  {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5633 "y.tab.c"
    break;

  case 303: /* arowopt: rowalign  */
#line 1705 "itex2MML.y"
           {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5642 "y.tab.c"
    break;

  case 304: /* tableCell: %empty  */
#line 1710 "itex2MML.y"
             {
  yyval = itex2MML_copy_string("<mtd></mtd>");
}
#line 5650 "y.tab.c"
    break;

  case 305: /* tableCell: compoundTermList  */
#line 1713 "itex2MML.y"
                   {
  yyval = itex2MML_copy3("<mtd>", yyvsp[0], "</mtd>");
  itex2MML_free_string(yyvsp[0]);
}
#line 5659 "y.tab.c"
    break;

  case 306: /* tableCell: CELLOPTS MROWOPEN cellopts MROWCLOSE compoundTermList  */
#line 1717 "itex2MML.y"
                                                        {
  char * s1 = itex2MML_copy3("<mtd ", yyvsp[-2], ">");
  yyval = itex2MML_copy3(s1, yyvsp[0], "</mtd>");
  itex2MML_free_string(s1);
  itex2MML_free_string(yyvsp[-2]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5671 "y.tab.c"
    break;

  case 307: /* cellopts: acellopt  */
#line 1725 "itex2MML.y"
                   {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5680 "y.tab.c"
    break;

  case 308: /* cellopts: cellopts acellopt  */
#line 1729 "itex2MML.y"
                    {
  yyval = itex2MML_copy3(yyvsp[-1], " ", yyvsp[0]);
  itex2MML_free_string(yyvsp[-1]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5690 "y.tab.c"
    break;

  case 309: /* acellopt: colalign  */
#line 1735 "itex2MML.y"
                   {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5699 "y.tab.c"
    break;

  case 310: /* acellopt: rowalign  */
#line 1739 "itex2MML.y"
           {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5708 "y.tab.c"
    break;

  case 311: /* acellopt: rowspan  */
#line 1743 "itex2MML.y"
          {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5717 "y.tab.c"
    break;

  case 312: /* acellopt: colspan  */
#line 1747 "itex2MML.y"
          {
  yyval = itex2MML_copy_string(yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5726 "y.tab.c"
    break;

  case 313: /* rowspan: ROWSPAN ATTRLIST  */
#line 1752 "itex2MML.y"
                          {
  yyval = itex2MML_copy2("rowspan=", yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5735 "y.tab.c"
    break;

  case 314: /* colspan: COLSPAN ATTRLIST  */
#line 1757 "itex2MML.y"
                          {
  yyval = itex2MML_copy2("columnspan=", yyvsp[0]);
  itex2MML_free_string(yyvsp[0]);
}
#line 5744 "y.tab.c"
    break;


#line 5748 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (ret_str, YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, ret_str);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, ret_str);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (ret_str, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, ret_str);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, ret_str);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1762 "itex2MML.y"


char * itex2MML_parse (const char * buffer, unsigned long length)
{
  char * mathml = 0;

  int result;

  itex2MML_setup (buffer, length);
  itex2MML_restart ();

  result = itex2MML_yyparse (&mathml);

  if (result && mathml) /* shouldn't happen? */
    {
      itex2MML_free_string (mathml);
      mathml = 0;
    }
  return mathml;
}

int itex2MML_filter (const char * buffer, unsigned long length)
{
  itex2MML_setup (buffer, length);
  itex2MML_restart ();

  return itex2MML_yyparse (0);
}

#define ITEX_DELIMITER_DOLLAR 0
#define ITEX_DELIMITER_DOUBLE 1
#define ITEX_DELIMITER_SQUARE 2

static char * itex2MML_last_error = 0;

static void itex2MML_keep_error (const char * msg)
{
  if (itex2MML_last_error)
    {
      itex2MML_free_string (itex2MML_last_error);
      itex2MML_last_error = 0;
    }
  itex2MML_last_error = itex2MML_copy_escaped (msg);
}

int itex2MML_html_filter (const char * buffer, unsigned long length)
{
  return itex2MML_do_html_filter (buffer, length, 0);
}

int itex2MML_strict_html_filter (const char * buffer, unsigned long length)
{
  return itex2MML_do_html_filter (buffer, length, 1);
}

int itex2MML_do_html_filter (const char * buffer, unsigned long length, const int forbid_markup)
{
  int result = 0;

  int type = 0;
  int skip = 0;
  int match = 0;

  const char * ptr1 = buffer;
  const char * ptr2 = 0;

  const char * end = buffer + length;

  char * mathml = 0;

  void (*save_error_fn) (const char * msg) = itex2MML_error;

  itex2MML_error = itex2MML_keep_error;

 _until_math:
  ptr2 = ptr1;

  while (ptr2 < end)
    {
      if (*ptr2 == '$') break;
      if ((*ptr2 == '\\') && (ptr2 + 1 < end))
	{
	  if (*(ptr2+1) == '[') break;
	}
      ++ptr2;
    }
  if (itex2MML_write && ptr2 > ptr1)
    (*itex2MML_write) (ptr1, ptr2 - ptr1);

  if (ptr2 == end) goto _finish;

 _until_html:
  ptr1 = ptr2;

  if (ptr2 + 1 < end)
    {
      if ((*ptr2 == '\\') && (*(ptr2+1) == '['))
	{
	  type = ITEX_DELIMITER_SQUARE;
	  ptr2 += 2;
	}
      else if ((*ptr2 == '$') && (*(ptr2+1) == '$'))
	{
	  type = ITEX_DELIMITER_DOUBLE;
	  ptr2 += 2;
	}
      else
	{
	  type = ITEX_DELIMITER_DOLLAR;
	  ptr2 += 2;
	}
    }
  else goto _finish;

  skip = 0;
  match = 0;

  while (ptr2 < end)
    {
      switch (*ptr2)
	{
	case '<':
	case '>':
	  if (forbid_markup == 1) skip = 1;
	  break;

	case '\\':
	  if (ptr2 + 1 < end)
	    {
	      if (*(ptr2 + 1) == '[')
		{
		  skip = 1;
		}
	      else if (*(ptr2 + 1) == ']')
		{
		  if (type == ITEX_DELIMITER_SQUARE)
		    {
		      ptr2 += 2;
		      match = 1;
		    }
		  else
		    {
		      skip = 1;
		    }
		}
	    }
	  break;

	case '$':
	  if (type == ITEX_DELIMITER_SQUARE)
	    {
	      skip = 1;
	    }
	  else if (ptr2 + 1 < end)
	    {
	      if (*(ptr2 + 1) == '$')
		{
		  if (type == ITEX_DELIMITER_DOLLAR)
		    {
		      ptr2++;
		      match = 1;
		    }
		  else
		    {
		      ptr2 += 2;
		      match = 1;
		    }
		}
	      else
		{
		  if (type == ITEX_DELIMITER_DOLLAR)
		    {
		      ptr2++;
		      match = 1;
		    }
		  else
		    {
		      skip = 1;
		    }
		}
	    }
	  else
	    {
	      if (type == ITEX_DELIMITER_DOLLAR)
		{
		  ptr2++;
		  match = 1;
		}
	      else
		{
		  skip = 1;
		}
	    }
	  break;

	default:
	  break;
	}
      if (skip || match) break;

      ++ptr2;
    }
  if (skip)
    {
      if (type == ITEX_DELIMITER_DOLLAR)
	{
	  if (itex2MML_write)
	    (*itex2MML_write) (ptr1, 1);
	  ptr1++;
	}
      else
	{
	  if (itex2MML_write)
	    (*itex2MML_write) (ptr1, 2);
	  ptr1 += 2;
	}
      goto _until_math;
    }
  if (match)
    {
      mathml = itex2MML_parse (ptr1, ptr2 - ptr1);

      if (mathml)
	{
	  if (itex2MML_write_mathml)
	    (*itex2MML_write_mathml) (mathml);
	  itex2MML_free_string (mathml);
	  mathml = 0;
	}
      else
	{
	  ++result;
	  if (itex2MML_write)
	    {
	      if (type == ITEX_DELIMITER_DOLLAR)
		(*itex2MML_write) ("<math xmlns='http://www.w3.org/1998/Math/MathML' display='inline'><merror><mtext>", 0);
	      else
		(*itex2MML_write) ("<math xmlns='http://www.w3.org/1998/Math/MathML' display='block'><merror><mtext>", 0);

	      (*itex2MML_write) (itex2MML_last_error, 0);
	      (*itex2MML_write) ("</mtext></merror></math>", 0);
	    }
	}
      ptr1 = ptr2;

      goto _until_math;
    }
  if (itex2MML_write)
    (*itex2MML_write) (ptr1, ptr2 - ptr1);

 _finish:
  if (itex2MML_last_error)
    {
      itex2MML_free_string (itex2MML_last_error);
      itex2MML_last_error = 0;
    }
  itex2MML_error = save_error_fn;

  return result;
}
