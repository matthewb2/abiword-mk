/* A Bison parser, made by GNU Bison 3.7.4.  */

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
