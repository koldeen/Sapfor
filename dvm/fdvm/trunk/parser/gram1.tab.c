/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PERCENT = 1,
     AMPERSAND = 2,
     ASTER = 3,
     CLUSTER = 4,
     COLON = 5,
     COMMA = 6,
     DASTER = 7,
     DEFINED_OPERATOR = 8,
     DOT = 9,
     DQUOTE = 10,
     GLOBAL_A = 11,
     LEFTAB = 12,
     LEFTPAR = 13,
     MINUS = 14,
     PLUS = 15,
     POINT_TO = 16,
     QUOTE = 17,
     RIGHTAB = 18,
     RIGHTPAR = 19,
     AND = 20,
     DSLASH = 21,
     EQV = 22,
     EQ = 23,
     EQUAL = 24,
     FFALSE = 25,
     GE = 26,
     GT = 27,
     LE = 28,
     LT = 29,
     NE = 30,
     NEQV = 31,
     NOT = 32,
     OR = 33,
     TTRUE = 34,
     SLASH = 35,
     XOR = 36,
     REFERENCE = 37,
     AT = 38,
     ACROSS = 39,
     ALIGN_WITH = 40,
     ALIGN = 41,
     ALLOCATABLE = 42,
     ALLOCATE = 43,
     ARITHIF = 44,
     ASSIGNMENT = 45,
     ASSIGN = 46,
     ASSIGNGOTO = 47,
     ASYNCHRONOUS = 48,
     ASYNCID = 49,
     ASYNCWAIT = 50,
     BACKSPACE = 51,
     BAD_CCONST = 52,
     BAD_SYMBOL = 53,
     BARRIER = 54,
     BLOCKDATA = 55,
     BLOCK = 56,
     BOZ_CONSTANT = 57,
     BYTE = 58,
     CALL = 59,
     CASE = 60,
     CHARACTER = 61,
     CHAR_CONSTANT = 62,
     CHECK = 63,
     CLOSE = 64,
     COMMON = 65,
     COMPLEX = 66,
     COMPGOTO = 67,
     CONSISTENT_GROUP = 68,
     CONSISTENT_SPEC = 69,
     CONSISTENT_START = 70,
     CONSISTENT_WAIT = 71,
     CONSISTENT = 72,
     CONSTRUCT_ID = 73,
     CONTAINS = 74,
     CONTINUE = 75,
     CORNER = 76,
     CYCLE = 77,
     DATA = 78,
     DEALLOCATE = 79,
     HPF_TEMPLATE = 80,
     DEBUG = 81,
     DEFAULT_CASE = 82,
     DEFINE = 83,
     DERIVED = 84,
     DIMENSION = 85,
     DISTRIBUTE = 86,
     DOWHILE = 87,
     DOUBLEPRECISION = 88,
     DOUBLECOMPLEX = 89,
     DP_CONSTANT = 90,
     DVM_POINTER = 91,
     DYNAMIC = 92,
     ELEMENTAL = 93,
     ELSE = 94,
     ELSEIF = 95,
     ELSEWHERE = 96,
     ENDASYNCHRONOUS = 97,
     ENDDEBUG = 98,
     ENDINTERVAL = 99,
     ENDUNIT = 100,
     ENDDO = 101,
     ENDFILE = 102,
     ENDFORALL = 103,
     ENDIF = 104,
     ENDINTERFACE = 105,
     ENDMODULE = 106,
     ENDON = 107,
     ENDSELECT = 108,
     ENDTASK_REGION = 109,
     ENDTYPE = 110,
     ENDWHERE = 111,
     ENTRY = 112,
     EXIT = 113,
     EOLN = 114,
     EQUIVALENCE = 115,
     ERROR = 116,
     EXTERNAL = 117,
     F90 = 118,
     FIND = 119,
     FORALL = 120,
     FORMAT = 121,
     FUNCTION = 122,
     GATE = 123,
     GEN_BLOCK = 124,
     HEAP = 125,
     HIGH = 126,
     IDENTIFIER = 127,
     IMPLICIT = 128,
     IMPLICITNONE = 129,
     INCLUDE_TO = 130,
     INCLUDE = 131,
     INDEPENDENT = 132,
     INDIRECT_ACCESS = 133,
     INDIRECT_GROUP = 134,
     INDIRECT = 135,
     INHERIT = 136,
     INQUIRE = 137,
     INTERFACEASSIGNMENT = 138,
     INTERFACEOPERATOR = 139,
     INTERFACE = 140,
     INTRINSIC = 141,
     INTEGER = 142,
     INTENT = 143,
     INTERVAL = 144,
     INOUT = 145,
     IN = 146,
     INT_CONSTANT = 147,
     LABEL = 148,
     LABEL_DECLARE = 149,
     LET = 150,
     LOCALIZE = 151,
     LOGICAL = 152,
     LOGICALIF = 153,
     LOOP = 154,
     LOW = 155,
     MAXLOC = 156,
     MAX = 157,
     MAP = 158,
     MINLOC = 159,
     MIN = 160,
     MODULE_PROCEDURE = 161,
     MODULE = 162,
     MULT_BLOCK = 163,
     NAMEEQ = 164,
     NAMELIST = 165,
     NEW_VALUE = 166,
     NEW = 167,
     NULLIFY = 168,
     OCTAL_CONSTANT = 169,
     ONLY = 170,
     ON = 171,
     ON_DIR = 172,
     ONTO = 173,
     OPEN = 174,
     OPERATOR = 175,
     OPTIONAL = 176,
     OTHERWISE = 177,
     OUT = 178,
     OWN = 179,
     PARALLEL = 180,
     PARAMETER = 181,
     PAUSE = 182,
     PLAINDO = 183,
     PLAINGOTO = 184,
     POINTER = 185,
     POINTERLET = 186,
     PREFETCH = 187,
     PRINT = 188,
     PRIVATE = 189,
     PRODUCT = 190,
     PROGRAM = 191,
     PUBLIC = 192,
     PURE = 193,
     RANGE = 194,
     READ = 195,
     REALIGN_WITH = 196,
     REALIGN = 197,
     REAL = 198,
     REAL_CONSTANT = 199,
     RECURSIVE = 200,
     REDISTRIBUTE_NEW = 201,
     REDISTRIBUTE = 202,
     REDUCTION_GROUP = 203,
     REDUCTION_START = 204,
     REDUCTION_WAIT = 205,
     REDUCTION = 206,
     REMOTE_ACCESS_SPEC = 207,
     REMOTE_ACCESS = 208,
     REMOTE_GROUP = 209,
     RESET = 210,
     RESULT = 211,
     RETURN = 212,
     REWIND = 213,
     SAVE = 214,
     SECTION = 215,
     SELECT = 216,
     SEQUENCE = 217,
     SHADOW_ADD = 218,
     SHADOW_COMPUTE = 219,
     SHADOW_GROUP = 220,
     SHADOW_RENEW = 221,
     SHADOW_START_SPEC = 222,
     SHADOW_START = 223,
     SHADOW_WAIT_SPEC = 224,
     SHADOW_WAIT = 225,
     SHADOW = 226,
     STAGE = 227,
     STATIC = 228,
     STAT = 229,
     STOP = 230,
     SUBROUTINE = 231,
     SUM = 232,
     SYNC = 233,
     TARGET = 234,
     TASK = 235,
     TASK_REGION = 236,
     THEN = 237,
     TO = 238,
     TRACEON = 239,
     TRACEOFF = 240,
     TRUNC = 241,
     TYPE = 242,
     TYPE_DECL = 243,
     UNDER = 244,
     UNKNOWN = 245,
     USE = 246,
     VIRTUAL = 247,
     VARIABLE = 248,
     WAIT = 249,
     WHERE = 250,
     WHERE_ASSIGN = 251,
     WHILE = 252,
     WITH = 253,
     WRITE = 254,
     COMMENT = 255,
     WGT_BLOCK = 256,
     HPF_PROCESSORS = 257,
     IOSTAT = 258,
     ERR = 259,
     END = 260,
     OMPDVM_ATOMIC = 261,
     OMPDVM_BARRIER = 262,
     OMPDVM_COPYIN = 263,
     OMPDVM_COPYPRIVATE = 264,
     OMPDVM_CRITICAL = 265,
     OMPDVM_ONETHREAD = 266,
     OMPDVM_DO = 267,
     OMPDVM_DYNAMIC = 268,
     OMPDVM_ENDCRITICAL = 269,
     OMPDVM_ENDDO = 270,
     OMPDVM_ENDMASTER = 271,
     OMPDVM_ENDORDERED = 272,
     OMPDVM_ENDPARALLEL = 273,
     OMPDVM_ENDPARALLELDO = 274,
     OMPDVM_ENDPARALLELSECTIONS = 275,
     OMPDVM_ENDPARALLELWORKSHARE = 276,
     OMPDVM_ENDSECTIONS = 277,
     OMPDVM_ENDSINGLE = 278,
     OMPDVM_ENDWORKSHARE = 279,
     OMPDVM_FIRSTPRIVATE = 280,
     OMPDVM_FLUSH = 281,
     OMPDVM_GUIDED = 282,
     OMPDVM_LASTPRIVATE = 283,
     OMPDVM_MASTER = 284,
     OMPDVM_NOWAIT = 285,
     OMPDVM_NONE = 286,
     OMPDVM_NUM_THREADS = 287,
     OMPDVM_ORDERED = 288,
     OMPDVM_PARALLEL = 289,
     OMPDVM_PARALLELDO = 290,
     OMPDVM_PARALLELSECTIONS = 291,
     OMPDVM_PARALLELWORKSHARE = 292,
     OMPDVM_RUNTIME = 293,
     OMPDVM_SECTION = 294,
     OMPDVM_SECTIONS = 295,
     OMPDVM_SCHEDULE = 296,
     OMPDVM_SHARED = 297,
     OMPDVM_SINGLE = 298,
     OMPDVM_THREADPRIVATE = 299,
     OMPDVM_WORKSHARE = 300,
     OMPDVM_NODES = 301,
     OMPDVM_IF = 302,
     IAND = 303,
     IEOR = 304,
     IOR = 305,
     ACC_REGION = 306,
     ACC_END_REGION = 307,
     ACC_CHECKSECTION = 308,
     ACC_END_CHECKSECTION = 309,
     ACC_GET_ACTUAL = 310,
     ACC_ACTUAL = 311,
     ACC_TARGETS = 312,
     ACC_ASYNC = 313,
     ACC_HOST = 314,
     ACC_CUDA = 315,
     ACC_LOCAL = 316,
     ACC_INLOCAL = 317,
     ACC_CUDA_BLOCK = 318,
     ACC_ROUTINE = 319,
     ACC_TIE = 320,
     BY = 321,
     IO_MODE = 322,
     CP_CREATE = 323,
     CP_LOAD = 324,
     CP_SAVE = 325,
     CP_WAIT = 326,
     FILES = 327,
     VARLIST = 328,
     STATUS = 329,
     EXITINTERVAL = 330,
     TEMPLATE_CREATE = 331,
     TEMPLATE_DELETE = 332,
     SPF_ANALYSIS = 333,
     SPF_PARALLEL = 334,
     SPF_TRANSFORM = 335,
     SPF_NOINLINE = 336,
     SPF_PARALLEL_REG = 337,
     SPF_END_PARALLEL_REG = 338,
     SPF_PRIVATES_EXPANSION = 339,
     SPF_FISSION = 340,
     SPF_SHRINK = 341,
     SPF_CHECKPOINT = 342,
     SPF_EXCEPT = 343,
     SPF_FILES_COUNT = 344,
     SPF_INTERVAL = 345,
     SPF_TIME = 346,
     SPF_ITER = 347,
     SPF_FLEXIBLE = 348,
     SPF_APPLY_REGION = 349,
     SPF_APPLY_FRAGMENT = 350,
     SPF_CODE_COVERAGE = 351,
     BINARY_OP = 354,
     UNARY_OP = 355
   };
#endif
/* Tokens.  */
#define PERCENT 1
#define AMPERSAND 2
#define ASTER 3
#define CLUSTER 4
#define COLON 5
#define COMMA 6
#define DASTER 7
#define DEFINED_OPERATOR 8
#define DOT 9
#define DQUOTE 10
#define GLOBAL_A 11
#define LEFTAB 12
#define LEFTPAR 13
#define MINUS 14
#define PLUS 15
#define POINT_TO 16
#define QUOTE 17
#define RIGHTAB 18
#define RIGHTPAR 19
#define AND 20
#define DSLASH 21
#define EQV 22
#define EQ 23
#define EQUAL 24
#define FFALSE 25
#define GE 26
#define GT 27
#define LE 28
#define LT 29
#define NE 30
#define NEQV 31
#define NOT 32
#define OR 33
#define TTRUE 34
#define SLASH 35
#define XOR 36
#define REFERENCE 37
#define AT 38
#define ACROSS 39
#define ALIGN_WITH 40
#define ALIGN 41
#define ALLOCATABLE 42
#define ALLOCATE 43
#define ARITHIF 44
#define ASSIGNMENT 45
#define ASSIGN 46
#define ASSIGNGOTO 47
#define ASYNCHRONOUS 48
#define ASYNCID 49
#define ASYNCWAIT 50
#define BACKSPACE 51
#define BAD_CCONST 52
#define BAD_SYMBOL 53
#define BARRIER 54
#define BLOCKDATA 55
#define BLOCK 56
#define BOZ_CONSTANT 57
#define BYTE 58
#define CALL 59
#define CASE 60
#define CHARACTER 61
#define CHAR_CONSTANT 62
#define CHECK 63
#define CLOSE 64
#define COMMON 65
#define COMPLEX 66
#define COMPGOTO 67
#define CONSISTENT_GROUP 68
#define CONSISTENT_SPEC 69
#define CONSISTENT_START 70
#define CONSISTENT_WAIT 71
#define CONSISTENT 72
#define CONSTRUCT_ID 73
#define CONTAINS 74
#define CONTINUE 75
#define CORNER 76
#define CYCLE 77
#define DATA 78
#define DEALLOCATE 79
#define HPF_TEMPLATE 80
#define DEBUG 81
#define DEFAULT_CASE 82
#define DEFINE 83
#define DERIVED 84
#define DIMENSION 85
#define DISTRIBUTE 86
#define DOWHILE 87
#define DOUBLEPRECISION 88
#define DOUBLECOMPLEX 89
#define DP_CONSTANT 90
#define DVM_POINTER 91
#define DYNAMIC 92
#define ELEMENTAL 93
#define ELSE 94
#define ELSEIF 95
#define ELSEWHERE 96
#define ENDASYNCHRONOUS 97
#define ENDDEBUG 98
#define ENDINTERVAL 99
#define ENDUNIT 100
#define ENDDO 101
#define ENDFILE 102
#define ENDFORALL 103
#define ENDIF 104
#define ENDINTERFACE 105
#define ENDMODULE 106
#define ENDON 107
#define ENDSELECT 108
#define ENDTASK_REGION 109
#define ENDTYPE 110
#define ENDWHERE 111
#define ENTRY 112
#define EXIT 113
#define EOLN 114
#define EQUIVALENCE 115
#define ERROR 116
#define EXTERNAL 117
#define F90 118
#define FIND 119
#define FORALL 120
#define FORMAT 121
#define FUNCTION 122
#define GATE 123
#define GEN_BLOCK 124
#define HEAP 125
#define HIGH 126
#define IDENTIFIER 127
#define IMPLICIT 128
#define IMPLICITNONE 129
#define INCLUDE_TO 130
#define INCLUDE 131
#define INDEPENDENT 132
#define INDIRECT_ACCESS 133
#define INDIRECT_GROUP 134
#define INDIRECT 135
#define INHERIT 136
#define INQUIRE 137
#define INTERFACEASSIGNMENT 138
#define INTERFACEOPERATOR 139
#define INTERFACE 140
#define INTRINSIC 141
#define INTEGER 142
#define INTENT 143
#define INTERVAL 144
#define INOUT 145
#define IN 146
#define INT_CONSTANT 147
#define LABEL 148
#define LABEL_DECLARE 149
#define LET 150
#define LOCALIZE 151
#define LOGICAL 152
#define LOGICALIF 153
#define LOOP 154
#define LOW 155
#define MAXLOC 156
#define MAX 157
#define MAP 158
#define MINLOC 159
#define MIN 160
#define MODULE_PROCEDURE 161
#define MODULE 162
#define MULT_BLOCK 163
#define NAMEEQ 164
#define NAMELIST 165
#define NEW_VALUE 166
#define NEW 167
#define NULLIFY 168
#define OCTAL_CONSTANT 169
#define ONLY 170
#define ON 171
#define ON_DIR 172
#define ONTO 173
#define OPEN 174
#define OPERATOR 175
#define OPTIONAL 176
#define OTHERWISE 177
#define OUT 178
#define OWN 179
#define PARALLEL 180
#define PARAMETER 181
#define PAUSE 182
#define PLAINDO 183
#define PLAINGOTO 184
#define POINTER 185
#define POINTERLET 186
#define PREFETCH 187
#define PRINT 188
#define PRIVATE 189
#define PRODUCT 190
#define PROGRAM 191
#define PUBLIC 192
#define PURE 193
#define RANGE 194
#define READ 195
#define REALIGN_WITH 196
#define REALIGN 197
#define REAL 198
#define REAL_CONSTANT 199
#define RECURSIVE 200
#define REDISTRIBUTE_NEW 201
#define REDISTRIBUTE 202
#define REDUCTION_GROUP 203
#define REDUCTION_START 204
#define REDUCTION_WAIT 205
#define REDUCTION 206
#define REMOTE_ACCESS_SPEC 207
#define REMOTE_ACCESS 208
#define REMOTE_GROUP 209
#define RESET 210
#define RESULT 211
#define RETURN 212
#define REWIND 213
#define SAVE 214
#define SECTION 215
#define SELECT 216
#define SEQUENCE 217
#define SHADOW_ADD 218
#define SHADOW_COMPUTE 219
#define SHADOW_GROUP 220
#define SHADOW_RENEW 221
#define SHADOW_START_SPEC 222
#define SHADOW_START 223
#define SHADOW_WAIT_SPEC 224
#define SHADOW_WAIT 225
#define SHADOW 226
#define STAGE 227
#define STATIC 228
#define STAT 229
#define STOP 230
#define SUBROUTINE 231
#define SUM 232
#define SYNC 233
#define TARGET 234
#define TASK 235
#define TASK_REGION 236
#define THEN 237
#define TO 238
#define TRACEON 239
#define TRACEOFF 240
#define TRUNC 241
#define TYPE 242
#define TYPE_DECL 243
#define UNDER 244
#define UNKNOWN 245
#define USE 246
#define VIRTUAL 247
#define VARIABLE 248
#define WAIT 249
#define WHERE 250
#define WHERE_ASSIGN 251
#define WHILE 252
#define WITH 253
#define WRITE 254
#define COMMENT 255
#define WGT_BLOCK 256
#define HPF_PROCESSORS 257
#define IOSTAT 258
#define ERR 259
#define END 260
#define OMPDVM_ATOMIC 261
#define OMPDVM_BARRIER 262
#define OMPDVM_COPYIN 263
#define OMPDVM_COPYPRIVATE 264
#define OMPDVM_CRITICAL 265
#define OMPDVM_ONETHREAD 266
#define OMPDVM_DO 267
#define OMPDVM_DYNAMIC 268
#define OMPDVM_ENDCRITICAL 269
#define OMPDVM_ENDDO 270
#define OMPDVM_ENDMASTER 271
#define OMPDVM_ENDORDERED 272
#define OMPDVM_ENDPARALLEL 273
#define OMPDVM_ENDPARALLELDO 274
#define OMPDVM_ENDPARALLELSECTIONS 275
#define OMPDVM_ENDPARALLELWORKSHARE 276
#define OMPDVM_ENDSECTIONS 277
#define OMPDVM_ENDSINGLE 278
#define OMPDVM_ENDWORKSHARE 279
#define OMPDVM_FIRSTPRIVATE 280
#define OMPDVM_FLUSH 281
#define OMPDVM_GUIDED 282
#define OMPDVM_LASTPRIVATE 283
#define OMPDVM_MASTER 284
#define OMPDVM_NOWAIT 285
#define OMPDVM_NONE 286
#define OMPDVM_NUM_THREADS 287
#define OMPDVM_ORDERED 288
#define OMPDVM_PARALLEL 289
#define OMPDVM_PARALLELDO 290
#define OMPDVM_PARALLELSECTIONS 291
#define OMPDVM_PARALLELWORKSHARE 292
#define OMPDVM_RUNTIME 293
#define OMPDVM_SECTION 294
#define OMPDVM_SECTIONS 295
#define OMPDVM_SCHEDULE 296
#define OMPDVM_SHARED 297
#define OMPDVM_SINGLE 298
#define OMPDVM_THREADPRIVATE 299
#define OMPDVM_WORKSHARE 300
#define OMPDVM_NODES 301
#define OMPDVM_IF 302
#define IAND 303
#define IEOR 304
#define IOR 305
#define ACC_REGION 306
#define ACC_END_REGION 307
#define ACC_CHECKSECTION 308
#define ACC_END_CHECKSECTION 309
#define ACC_GET_ACTUAL 310
#define ACC_ACTUAL 311
#define ACC_TARGETS 312
#define ACC_ASYNC 313
#define ACC_HOST 314
#define ACC_CUDA 315
#define ACC_LOCAL 316
#define ACC_INLOCAL 317
#define ACC_CUDA_BLOCK 318
#define ACC_ROUTINE 319
#define ACC_TIE 320
#define BY 321
#define IO_MODE 322
#define CP_CREATE 323
#define CP_LOAD 324
#define CP_SAVE 325
#define CP_WAIT 326
#define FILES 327
#define VARLIST 328
#define STATUS 329
#define EXITINTERVAL 330
#define TEMPLATE_CREATE 331
#define TEMPLATE_DELETE 332
#define SPF_ANALYSIS 333
#define SPF_PARALLEL 334
#define SPF_TRANSFORM 335
#define SPF_NOINLINE 336
#define SPF_PARALLEL_REG 337
#define SPF_END_PARALLEL_REG 338
#define SPF_PRIVATES_EXPANSION 339
#define SPF_FISSION 340
#define SPF_SHRINK 341
#define SPF_CHECKPOINT 342
#define SPF_EXCEPT 343
#define SPF_FILES_COUNT 344
#define SPF_INTERVAL 345
#define SPF_TIME 346
#define SPF_ITER 347
#define SPF_FLEXIBLE 348
#define SPF_APPLY_REGION 349
#define SPF_APPLY_FRAGMENT 350
#define SPF_CODE_COVERAGE 351
#define BINARY_OP 354
#define UNARY_OP 355




/* Copy the first part of user declarations.  */
#line 353 "gram1.y"

#include <string.h>
#include "inc.h"
#include "extern.h"
#include "defines.h"
#include "fdvm.h"
#include "fm.h"

/* We may use builtin alloca */
#include "compatible.h"
#ifdef _NEEDALLOCAH_
#  include <alloca.h>
#endif

#define EXTEND_NODE 2  /* move the definition to h/ files. */

extern PTR_BFND global_bfnd, pred_bfnd;
extern PTR_SYMB star_symb;
extern PTR_SYMB global_list;
extern PTR_TYPE global_bool;
extern PTR_TYPE global_int;
extern PTR_TYPE global_float;
extern PTR_TYPE global_double;
extern PTR_TYPE global_char;
extern PTR_TYPE global_string;
extern PTR_TYPE global_string_2;
extern PTR_TYPE global_complex;
extern PTR_TYPE global_dcomplex;
extern PTR_TYPE global_gate;
extern PTR_TYPE global_event;
extern PTR_TYPE global_sequence;
extern PTR_TYPE global_default;
extern PTR_LABEL thislabel;
extern PTR_CMNT comments, cur_comment;
extern PTR_BFND last_bfnd;
extern PTR_TYPE impltype[];
extern int nioctl;
extern int maxdim;
extern long yystno;	/* statement label */
extern char stmtbuf[];	/* input buffer */
extern char *commentbuf;	/* comments buffer from scanner */
extern PTR_BLOB head_blob;
extern PTR_BLOB cur_blob;
extern PTR_TYPE vartype; /* variable type */
extern int end_group;
extern char saveall;
extern int privateall;
extern int needkwd;
extern int implkwd;
extern int opt_kwd_hedr;
/* added for FORTRAN 90 */
extern PTR_LLND first_unresolved_call;
extern PTR_LLND last_unresolved_call;
extern int data_stat;
extern char yyquote;

extern int warn_all;
extern int statement_kind; /* kind of statement: 1 - HPF-DVM-directive, 0 - Fortran statement*/ 
int extend_flag = 0;

static int do_name_err;
static int ndim;	/* number of dimension */
/*!!! hpf */
static int explicit_shape; /*  1 if shape specification is explicit */
/* static int varleng;*/	/* variable size */
static int lastwasbranch = NO;	/* set if last stmt was a branch stmt */
static int thiswasbranch = NO;	/* set if this stmt is a branch stmt */
static PTR_SYMB type_var = SMNULL;
static PTR_LLND stat_alloc = LLNULL; /* set if ALLOCATE/DEALLOCATE stmt has STAT-clause*/
/* static int subscripts_status = 0; */
static int type_options,type_opt;   /* The various options used to declare a name -
                                      RECURSIVE, POINTER, OPTIONAL etc.         */
static PTR_BFND module_scope;
static int position = IN_OUTSIDE;            
static int attr_ndim;           /* number of dimensions in DIMENSION (array_spec)
                                   attribute declaration */
static PTR_LLND attr_dims;     /* low level representation of array_spec in
                                   DIMENSION (array_spec) attribute declarartion. */
static int in_vec = NO;	      /* set if processing array constructor */


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 434 "gram1.y"
{
    int token;
    char charv;
    char *charp;
    PTR_BFND bf_node;
    PTR_LLND ll_node;
    PTR_SYMB symbol;
    PTR_TYPE data_type;
    PTR_HASH hash_entry;
    PTR_LABEL label;
}
/* Line 187 of yacc.c.  */
#line 899 "gram1.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 641 "gram1.y"

void add_scope_level();
void delete_beyond_scope_level();
PTR_HASH look_up_sym();
PTR_HASH just_look_up_sym();
PTR_HASH just_look_up_sym_in_scope();
PTR_HASH look_up_op();
PTR_SYMB make_constant();
PTR_SYMB make_scalar();
PTR_SYMB make_array();
PTR_SYMB make_pointer();
PTR_SYMB make_function();
PTR_SYMB make_external();
PTR_SYMB make_intrinsic();
PTR_SYMB make_procedure();
PTR_SYMB make_process();
PTR_SYMB make_program();
PTR_SYMB make_module();
PTR_SYMB make_common();
PTR_SYMB make_parallel_region();
PTR_SYMB make_derived_type();
PTR_SYMB make_local_entity();
PTR_SYMB make_global_entity();
PTR_TYPE make_type_node();
PTR_TYPE lookup_type(), make_type();
void     process_type();
void     process_interface();
void     bind();
void     late_bind_if_needed();
PTR_SYMB component();
PTR_SYMB lookup_type_symbol();
PTR_SYMB resolve_overloading();
PTR_BFND cur_scope();
PTR_BFND subroutine_call();
PTR_BFND process_call();
PTR_LLND deal_with_options();
PTR_LLND intrinsic_op_node();
PTR_LLND defined_op_node();
int is_substring_ref();
int is_array_section_ref();
PTR_LLND dim_expr(); 
PTR_BFND exit_stat();
PTR_BFND make_do();
PTR_BFND make_pardo();
PTR_BFND make_enddoall();
PTR_TYPE install_array(); 
PTR_SYMB install_entry(); 
void install_param_list();
PTR_LLND construct_entry_list();
void copy_sym_data();
PTR_LLND check_and_install();
PTR_HASH look_up();
PTR_BFND get_bfnd(); 
PTR_BLOB make_blob();
PTR_LABEL make_label();
PTR_LABEL make_label_node();
int is_interface_stat();
PTR_LLND make_llnd (); 
PTR_LLND make_llnd_label (); 
PTR_TYPE make_sa_type(); 
PTR_SYMB procedure_call();
PTR_BFND proc_list();
PTR_SYMB set_id_list();
PTR_LLND set_ll_list();
PTR_LLND add_to_lowLevelList(), add_to_lowList();
PTR_BFND set_stat_list() ;
PTR_BLOB follow_blob();
PTR_SYMB proc_decl_init();
PTR_CMNT make_comment();
PTR_HASH correct_symtab();
char *copyn();
char *convic();
char *StringConcatenation();
int atoi();
PTR_BFND make_logif();
PTR_BFND make_if();
PTR_BFND make_forall();
void startproc();
void match_parameters();
void make_else();
void make_elseif();
void make_endif();
void make_elsewhere();
void make_elsewhere_mask();
void make_endwhere();
void make_endforall();
void make_endselect();
void make_extend();
void make_endextend();
void make_section();
void make_section_extend();
void doinclude();
void endproc();
void err();
void execerr();
void flline();
void warn();
void warn1();
void newprog();
void set_type();
void dclerr();
void enddcl();
void install_const();
void setimpl();
void copy_module_scope();
void delete_symbol();
void replace_symbol_in_expr();
long convci();
void set_expr_type();
void errstr();
void yyerror();
void set_blobs();
void make_loop();
void startioctl();
void endioctl();
void redefine_func_arg_type();
int isResultVar();

/* used by FORTRAN M */
PTR_BFND make_processdo();
PTR_BFND make_processes();
PTR_BFND make_endprocesses();

PTR_BFND make_endparallel();/*OMP*/
PTR_BFND make_parallel();/*OMP*/
PTR_BFND make_endsingle();/*OMP*/
PTR_BFND make_single();/*OMP*/
PTR_BFND make_endmaster();/*OMP*/
PTR_BFND make_master();/*OMP*/
PTR_BFND make_endordered();/*OMP*/
PTR_BFND make_ordered();/*OMP*/
PTR_BFND make_endcritical();/*OMP*/
PTR_BFND make_critical();/*OMP*/
PTR_BFND make_endsections();/*OMP*/
PTR_BFND make_sections();/*OMP*/
PTR_BFND make_ompsection();/*OMP*/
PTR_BFND make_endparallelsections();/*OMP*/
PTR_BFND make_parallelsections();/*OMP*/
PTR_BFND make_endworkshare();/*OMP*/
PTR_BFND make_workshare();/*OMP*/
PTR_BFND make_endparallelworkshare();/*OMP*/
PTR_BFND make_parallelworkshare();/*OMP*/



/* Line 216 of yacc.c.  */
#line 1056 "gram1.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5730

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  356
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  536
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1292
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2570

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   355

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,     1,     2,   354,   355
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     8,    12,    16,    20,    24,    27,
      29,    31,    33,    37,    41,    46,    52,    58,    62,    67,
      71,    72,    75,    78,    81,    83,    85,    90,    96,   101,
     107,   110,   116,   118,   119,   121,   122,   124,   125,   128,
     132,   134,   138,   140,   142,   144,   145,   146,   147,   149,
     151,   153,   155,   157,   159,   161,   163,   165,   167,   169,
     171,   173,   176,   181,   184,   190,   192,   194,   196,   198,
     200,   202,   204,   206,   208,   210,   212,   214,   217,   221,
     227,   233,   236,   238,   240,   242,   244,   246,   248,   250,
     252,   254,   256,   258,   260,   262,   264,   266,   268,   270,
     272,   274,   276,   278,   283,   291,   294,   298,   306,   313,
     314,   317,   323,   325,   330,   332,   334,   336,   339,   341,
     346,   348,   350,   352,   354,   356,   358,   361,   364,   367,
     369,   371,   379,   383,   388,   392,   397,   401,   404,   410,
     411,   414,   417,   423,   424,   429,   435,   436,   439,   443,
     445,   447,   449,   451,   453,   455,   457,   459,   461,   463,
     464,   466,   472,   479,   486,   487,   489,   495,   505,   507,
     509,   512,   515,   516,   517,   520,   523,   529,   534,   539,
     543,   548,   552,   557,   561,   565,   570,   576,   580,   585,
     591,   595,   599,   601,   605,   608,   613,   617,   622,   626,
     630,   634,   638,   642,   646,   648,   653,   655,   657,   662,
     666,   667,   668,   673,   675,   679,   681,   685,   688,   692,
     696,   701,   704,   705,   707,   709,   713,   719,   721,   725,
     726,   728,   736,   738,   742,   745,   748,   752,   754,   756,
     761,   765,   768,   770,   772,   774,   776,   780,   782,   786,
     788,   790,   797,   799,   801,   804,   807,   809,   813,   815,
     818,   821,   823,   827,   829,   833,   839,   841,   843,   845,
     848,   851,   855,   859,   861,   865,   869,   871,   875,   877,
     879,   883,   885,   889,   891,   893,   897,   903,   904,   905,
     907,   912,   917,   919,   923,   927,   930,   932,   936,   940,
     947,   954,   962,   964,   966,   970,   972,   974,   976,   980,
     984,   985,   989,   990,   993,   997,   999,  1001,  1004,  1008,
    1010,  1012,  1014,  1018,  1020,  1024,  1026,  1028,  1032,  1037,
    1038,  1041,  1044,  1046,  1048,  1052,  1054,  1058,  1060,  1061,
    1062,  1063,  1066,  1067,  1069,  1071,  1073,  1076,  1079,  1084,
    1086,  1090,  1092,  1096,  1098,  1100,  1102,  1104,  1108,  1112,
    1116,  1120,  1124,  1127,  1130,  1133,  1137,  1141,  1145,  1149,
    1153,  1157,  1161,  1165,  1169,  1173,  1177,  1180,  1184,  1188,
    1190,  1192,  1194,  1196,  1198,  1200,  1206,  1213,  1218,  1224,
    1228,  1230,  1232,  1238,  1243,  1246,  1247,  1249,  1255,  1256,
    1258,  1260,  1264,  1266,  1270,  1273,  1275,  1277,  1279,  1281,
    1283,  1285,  1289,  1293,  1299,  1301,  1303,  1307,  1310,  1316,
    1321,  1326,  1330,  1333,  1335,  1336,  1337,  1344,  1346,  1348,
    1350,  1355,  1361,  1363,  1368,  1374,  1375,  1377,  1381,  1383,
    1385,  1387,  1390,  1394,  1398,  1401,  1403,  1406,  1409,  1412,
    1416,  1424,  1428,  1432,  1434,  1437,  1440,  1442,  1445,  1449,
    1451,  1453,  1455,  1461,  1469,  1470,  1477,  1482,  1494,  1508,
    1513,  1517,  1521,  1529,  1538,  1542,  1544,  1547,  1550,  1554,
    1556,  1560,  1561,  1563,  1564,  1566,  1568,  1571,  1577,  1584,
    1586,  1590,  1594,  1595,  1598,  1600,  1606,  1614,  1615,  1617,
    1621,  1625,  1632,  1638,  1645,  1650,  1656,  1662,  1665,  1667,
    1669,  1680,  1682,  1686,  1691,  1695,  1699,  1703,  1707,  1714,
    1721,  1727,  1736,  1739,  1743,  1747,  1755,  1763,  1764,  1766,
    1771,  1774,  1779,  1781,  1784,  1787,  1789,  1791,  1792,  1793,
    1794,  1797,  1800,  1803,  1806,  1809,  1811,  1814,  1817,  1821,
    1826,  1829,  1833,  1835,  1839,  1843,  1845,  1847,  1849,  1853,
    1855,  1857,  1862,  1868,  1870,  1872,  1876,  1880,  1882,  1887,
    1889,  1891,  1893,  1896,  1899,  1902,  1904,  1908,  1912,  1917,
    1922,  1924,  1928,  1930,  1936,  1938,  1940,  1942,  1946,  1950,
    1954,  1958,  1962,  1966,  1968,  1972,  1978,  1984,  1990,  1991,
    1992,  1994,  1998,  2000,  2002,  2006,  2010,  2014,  2018,  2021,
    2025,  2029,  2030,  2032,  2034,  2036,  2038,  2040,  2042,  2044,
    2046,  2048,  2050,  2052,  2054,  2056,  2058,  2060,  2062,  2064,
    2066,  2068,  2070,  2072,  2074,  2076,  2078,  2080,  2082,  2084,
    2086,  2088,  2090,  2092,  2094,  2096,  2098,  2100,  2102,  2104,
    2106,  2108,  2110,  2112,  2114,  2116,  2118,  2120,  2122,  2124,
    2126,  2128,  2130,  2132,  2134,  2136,  2138,  2140,  2142,  2144,
    2146,  2148,  2150,  2152,  2154,  2156,  2158,  2162,  2166,  2169,
    2173,  2175,  2179,  2181,  2185,  2187,  2191,  2193,  2198,  2202,
    2204,  2208,  2210,  2214,  2219,  2221,  2226,  2231,  2236,  2240,
    2244,  2246,  2250,  2254,  2256,  2260,  2264,  2266,  2270,  2274,
    2276,  2280,  2281,  2287,  2294,  2303,  2305,  2309,  2311,  2313,
    2315,  2320,  2322,  2323,  2326,  2330,  2333,  2338,  2339,  2341,
    2347,  2352,  2359,  2364,  2366,  2371,  2376,  2378,  2385,  2387,
    2391,  2393,  2397,  2399,  2404,  2406,  2408,  2412,  2414,  2416,
    2420,  2422,  2423,  2425,  2428,  2432,  2434,  2437,  2443,  2448,
    2453,  2460,  2462,  2466,  2468,  2470,  2477,  2482,  2484,  2488,
    2490,  2492,  2494,  2496,  2498,  2502,  2504,  2506,  2508,  2515,
    2520,  2522,  2527,  2529,  2531,  2533,  2535,  2540,  2543,  2551,
    2553,  2558,  2560,  2562,  2574,  2575,  2578,  2582,  2584,  2588,
    2590,  2594,  2596,  2600,  2602,  2606,  2608,  2612,  2614,  2618,
    2627,  2629,  2633,  2636,  2639,  2647,  2649,  2653,  2657,  2659,
    2664,  2666,  2670,  2672,  2674,  2675,  2677,  2679,  2682,  2684,
    2686,  2688,  2690,  2692,  2694,  2696,  2698,  2700,  2702,  2704,
    2713,  2720,  2729,  2736,  2738,  2745,  2752,  2759,  2766,  2768,
    2772,  2778,  2780,  2784,  2791,  2793,  2797,  2806,  2813,  2820,
    2825,  2831,  2837,  2840,  2843,  2844,  2846,  2850,  2852,  2857,
    2865,  2867,  2871,  2875,  2877,  2881,  2887,  2891,  2895,  2897,
    2901,  2903,  2905,  2909,  2913,  2917,  2921,  2932,  2941,  2952,
    2953,  2954,  2956,  2959,  2964,  2969,  2976,  2978,  2980,  2982,
    2984,  2986,  2988,  2990,  2992,  2994,  2996,  2998,  3005,  3010,
    3015,  3019,  3029,  3031,  3033,  3037,  3039,  3045,  3051,  3061,
    3062,  3064,  3066,  3070,  3074,  3078,  3082,  3086,  3093,  3097,
    3101,  3105,  3109,  3117,  3123,  3125,  3127,  3131,  3136,  3138,
    3140,  3144,  3146,  3148,  3152,  3156,  3159,  3163,  3168,  3173,
    3179,  3185,  3187,  3190,  3195,  3200,  3205,  3206,  3208,  3211,
    3219,  3226,  3230,  3234,  3242,  3248,  3250,  3254,  3256,  3261,
    3264,  3268,  3272,  3277,  3284,  3288,  3291,  3295,  3297,  3299,
    3304,  3310,  3314,  3321,  3324,  3329,  3332,  3334,  3338,  3342,
    3343,  3345,  3349,  3352,  3355,  3358,  3361,  3371,  3377,  3379,
    3383,  3386,  3389,  3392,  3402,  3407,  3409,  3413,  3415,  3417,
    3420,  3421,  3429,  3431,  3436,  3438,  3442,  3444,  3446,  3448,
    3465,  3466,  3470,  3474,  3478,  3482,  3489,  3499,  3505,  3507,
    3511,  3517,  3519,  3521,  3523,  3525,  3527,  3529,  3531,  3533,
    3535,  3537,  3539,  3541,  3543,  3545,  3547,  3549,  3551,  3553,
    3555,  3557,  3559,  3561,  3563,  3565,  3567,  3569,  3571,  3574,
    3577,  3582,  3586,  3591,  3597,  3599,  3601,  3603,  3605,  3607,
    3609,  3611,  3613,  3615,  3621,  3624,  3627,  3630,  3633,  3636,
    3642,  3644,  3646,  3648,  3653,  3658,  3663,  3668,  3670,  3672,
    3674,  3676,  3678,  3680,  3682,  3684,  3686,  3688,  3690,  3692,
    3694,  3696,  3698,  3703,  3707,  3712,  3718,  3720,  3722,  3724,
    3726,  3731,  3735,  3738,  3743,  3747,  3752,  3756,  3761,  3767,
    3769,  3771,  3773,  3775,  3777,  3779,  3781,  3789,  3795,  3797,
    3799,  3801,  3803,  3808,  3812,  3817,  3823,  3825,  3827,  3832,
    3836,  3841,  3847,  3849,  3851,  3854,  3856,  3859,  3864,  3868,
    3873,  3877,  3882,  3888,  3890,  3892,  3894,  3896,  3898,  3900,
    3902,  3904,  3906,  3908,  3910,  3913,  3918,  3922,  3925,  3930,
    3934,  3937,  3941,  3944,  3947,  3950,  3953,  3956,  3959,  3963,
    3966,  3972,  3975,  3981,  3984,  3990,  3992,  3994,  3998,  4002,
    4003,  4004,  4006,  4008,  4010,  4012,  4014,  4016,  4018,  4022,
    4025,  4031,  4036,  4039,  4045,  4050,  4053,  4056,  4058,  4060,
    4064,  4067,  4070,  4073,  4078,  4083,  4088,  4093,  4098,  4103,
    4105,  4107,  4109,  4113,  4116,  4119,  4121,  4123,  4127,  4130,
    4133,  4135,  4137,  4139,  4141,  4143,  4145,  4150,  4155,  4160,
    4163,  4173,  4183,  4185,  4189,  4192,  4193,  4200,  4201,  4208,
    4210,  4212,  4216,  4218,  4220,  4222,  4228,  4234,  4240,  4242,
    4246,  4250,  4252,  4256,  4258,  4260,  4262,  4268,  4274,  4280,
    4282,  4286,  4289,  4295,  4298,  4304,  4310,  4312,  4314,  4318,
    4323,  4325,  4329,  4335,  4341,  4347,  4353,  4361,  4363,  4367,
    4370,  4373,  4376
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     357,     0,    -1,    -1,   357,   358,   116,    -1,   359,   360,
     577,    -1,   359,   377,   577,    -1,   359,   522,   577,    -1,
     359,   133,   373,    -1,   359,   247,    -1,   257,    -1,     1,
      -1,   150,    -1,   193,   361,   368,    -1,    57,   361,   369,
      -1,   233,   361,   363,   370,    -1,   362,   233,   361,   363,
     370,    -1,   124,   361,   364,   370,   366,    -1,   365,   370,
     366,    -1,   114,   367,   370,   366,    -1,   164,   361,   367,
      -1,    -1,   202,   374,    -1,   195,   374,    -1,    95,   374,
      -1,   367,    -1,   367,    -1,   398,   124,   361,   367,    -1,
     398,   362,   124,   361,   367,    -1,   362,   124,   361,   367,
      -1,   362,   398,   124,   361,   367,    -1,   374,   375,    -1,
     374,   213,    15,   367,    21,    -1,   129,    -1,    -1,   367,
      -1,    -1,   367,    -1,    -1,    15,    21,    -1,    15,   371,
      21,    -1,   372,    -1,   371,     8,   372,    -1,   367,    -1,
       5,    -1,    64,    -1,    -1,    -1,    -1,   382,    -1,   383,
      -1,   384,    -1,   414,    -1,   410,    -1,   578,    -1,   419,
      -1,   420,    -1,   421,    -1,   479,    -1,   400,    -1,   415,
      -1,   425,    -1,   216,   489,    -1,   216,   489,   490,   456,
      -1,   123,   488,    -1,   183,   489,    15,   462,    21,    -1,
     390,    -1,   391,    -1,   396,    -1,   393,    -1,   395,    -1,
     411,    -1,   412,    -1,   413,    -1,   378,    -1,   466,    -1,
     464,    -1,   392,    -1,   142,   489,    -1,   142,   489,   367,
      -1,   141,   489,    15,   380,    21,    -1,   140,   489,    15,
      26,    21,    -1,   107,   531,    -1,    10,    -1,   379,    -1,
     381,    -1,    17,    -1,    16,    -1,     5,    -1,     9,    -1,
      37,    -1,    23,    -1,    22,    -1,    35,    -1,    38,    -1,
      34,    -1,    25,    -1,    32,    -1,    29,    -1,    28,    -1,
      31,    -1,    30,    -1,    33,    -1,    24,    -1,   245,   489,
     490,   367,    -1,   245,     8,   489,   374,   389,   490,   367,
      -1,   112,   489,    -1,   112,   489,   367,    -1,   398,   385,
     367,   489,   472,   404,   409,    -1,   384,     8,   367,   472,
     404,   409,    -1,    -1,     7,     7,    -1,     8,   374,   386,
       7,     7,    -1,   387,    -1,   386,     8,   374,   387,    -1,
     183,    -1,   389,    -1,    44,    -1,    87,   472,    -1,   119,
      -1,   145,    15,   388,    21,    -1,   143,    -1,   178,    -1,
     187,    -1,   216,    -1,   230,    -1,   236,    -1,   374,   148,
      -1,   374,   180,    -1,   374,   147,    -1,   194,    -1,   191,
      -1,   145,   489,    15,   388,    21,   490,   367,    -1,   390,
       8,   367,    -1,   178,   489,   490,   367,    -1,   391,     8,
     367,    -1,   230,   489,   490,   418,    -1,   392,     8,   418,
      -1,   191,   489,    -1,   191,   489,   490,   394,   458,    -1,
      -1,   219,   489,    -1,   194,   489,    -1,   194,   489,   490,
     397,   458,    -1,    -1,   402,   399,   406,   399,    -1,   244,
      15,   367,    21,   399,    -1,    -1,   401,   367,    -1,   400,
       8,   367,    -1,    13,    -1,     6,    -1,   403,    -1,   144,
      -1,   200,    -1,    68,    -1,    90,    -1,    91,    -1,   154,
      -1,    63,    -1,    -1,   405,    -1,     5,   552,   509,   553,
     399,    -1,     5,   552,    15,   553,     5,    21,    -1,     5,
     552,    15,   553,   495,    21,    -1,    -1,   405,    -1,    15,
     573,   407,   408,    21,    -1,    15,   573,   407,   408,     8,
     573,   407,   408,    21,    -1,   495,    -1,     5,    -1,   564,
     495,    -1,   564,     5,    -1,    -1,    -1,    26,   495,    -1,
      18,   495,    -1,    87,   490,   489,   367,   472,    -1,   410,
       8,   367,   472,    -1,    44,   489,   490,   418,    -1,   411,
       8,   418,    -1,   187,   489,   490,   418,    -1,   412,     8,
     418,    -1,   236,   489,   490,   418,    -1,   413,     8,   418,
      -1,    67,   489,   418,    -1,    67,   489,   417,   418,    -1,
     414,   546,   417,   546,   418,    -1,   414,     8,   418,    -1,
     167,   489,   416,   498,    -1,   415,   546,   416,   546,   498,
      -1,   415,     8,   498,    -1,    37,   367,    37,    -1,    23,
      -1,    37,   367,    37,    -1,   367,   472,    -1,   119,   489,
     490,   367,    -1,   419,     8,   367,    -1,   143,   489,   490,
     367,    -1,   420,     8,   367,    -1,   117,   489,   422,    -1,
     421,     8,   422,    -1,    15,   423,    21,    -1,   424,     8,
     424,    -1,   423,     8,   424,    -1,   367,    -1,   367,    15,
     494,    21,    -1,   503,    -1,   426,    -1,    80,   488,   427,
     429,    -1,   426,   546,   429,    -1,    -1,    -1,   430,    37,
     431,    37,    -1,   432,    -1,   430,     8,   432,    -1,   443,
      -1,   431,     8,   443,    -1,   433,   435,    -1,   433,   435,
     436,    -1,   433,   435,   437,    -1,   433,   435,   436,   437,
      -1,   433,   440,    -1,    -1,   367,    -1,   367,    -1,    15,
     438,    21,    -1,    15,   439,     7,   439,    21,    -1,   452,
      -1,   438,     8,   452,    -1,    -1,   452,    -1,    15,   441,
       8,   434,    26,   438,    21,    -1,   442,    -1,   441,     8,
     442,    -1,   435,   436,    -1,   435,   437,    -1,   435,   436,
     437,    -1,   440,    -1,   444,    -1,   433,   434,     5,   444,
      -1,   447,     5,   444,    -1,   433,   434,    -1,   446,    -1,
     448,    -1,   450,    -1,    36,    -1,    36,   246,   512,    -1,
      27,    -1,    27,   246,   512,    -1,    64,    -1,   445,    -1,
     433,   498,    15,   573,   491,    21,    -1,    59,    -1,   447,
      -1,    17,   447,    -1,    16,   447,    -1,   149,    -1,   149,
     246,   512,    -1,   449,    -1,    17,   449,    -1,    16,   449,
      -1,   201,    -1,   201,   246,   512,    -1,    92,    -1,    92,
     246,   512,    -1,    15,   451,     8,   451,    21,    -1,   448,
      -1,   446,    -1,   453,    -1,    17,   453,    -1,    16,   453,
      -1,   452,    17,   453,    -1,   452,    16,   453,    -1,   454,
      -1,   453,     5,   454,    -1,   453,    37,   454,    -1,   455,
      -1,   455,     9,   454,    -1,   149,    -1,   434,    -1,    15,
     452,    21,    -1,   457,    -1,   456,     8,   457,    -1,   418,
      -1,   417,    -1,   459,   461,   460,    -1,   458,     8,   459,
     461,   460,    -1,    -1,    -1,   367,    -1,   177,    15,   380,
      21,    -1,    47,    15,    26,    21,    -1,   463,    -1,   462,
       8,   463,    -1,   367,    26,   495,    -1,   163,   465,    -1,
     367,    -1,   465,     8,   367,    -1,   248,   489,   467,    -1,
     248,   489,   467,     8,   376,   470,    -1,   248,   489,   467,
       8,   376,   172,    -1,   248,   489,   467,     8,   376,   172,
     468,    -1,   367,    -1,   469,    -1,   468,     8,   469,    -1,
     471,    -1,   367,    -1,   471,    -1,   470,     8,   471,    -1,
     367,    18,   367,    -1,    -1,    15,   473,    21,    -1,    -1,
     474,   475,    -1,   473,     8,   475,    -1,   476,    -1,     7,
      -1,   495,     7,    -1,   495,     7,   476,    -1,     5,    -1,
     495,    -1,   478,    -1,   477,     8,   478,    -1,   149,    -1,
     130,   489,   480,    -1,   131,    -1,   481,    -1,   480,     8,
     481,    -1,   482,    15,   485,    21,    -1,    -1,   483,   484,
      -1,   231,   403,    -1,   398,    -1,   486,    -1,   485,     8,
     486,    -1,   487,    -1,   487,    16,   487,    -1,   129,    -1,
      -1,    -1,    -1,     7,     7,    -1,    -1,   493,    -1,   495,
      -1,   513,    -1,   564,   495,    -1,   573,   492,    -1,   493,
       8,   573,   492,    -1,   495,    -1,   494,     8,   495,    -1,
     496,    -1,    15,   495,    21,    -1,   511,    -1,   499,    -1,
     507,    -1,   514,    -1,   495,    17,   495,    -1,   495,    16,
     495,    -1,   495,     5,   495,    -1,   495,    37,   495,    -1,
     495,     9,   495,    -1,   379,   495,    -1,    17,   495,    -1,
      16,   495,    -1,   495,    25,   495,    -1,   495,    29,   495,
      -1,   495,    31,   495,    -1,   495,    28,   495,    -1,   495,
      30,   495,    -1,   495,    32,   495,    -1,   495,    24,   495,
      -1,   495,    33,   495,    -1,   495,    38,   495,    -1,   495,
      35,   495,    -1,   495,    22,   495,    -1,    34,   495,    -1,
     495,    23,   495,    -1,   495,   379,   495,    -1,    17,    -1,
      16,    -1,   367,    -1,   498,    -1,   501,    -1,   500,    -1,
     498,    15,   573,   491,    21,    -1,   498,    15,   573,   491,
      21,   505,    -1,   501,    15,   491,    21,    -1,   501,    15,
     491,    21,   505,    -1,   499,     3,   129,    -1,   498,    -1,
     501,    -1,   498,    15,   573,   491,    21,    -1,   501,    15,
     491,    21,    -1,   498,   505,    -1,    -1,   505,    -1,    15,
     506,     7,   506,    21,    -1,    -1,   495,    -1,   508,    -1,
     508,   246,   512,    -1,   509,    -1,   509,   246,   512,    -1,
     510,   504,    -1,    36,    -1,    27,    -1,   201,    -1,    92,
      -1,   149,    -1,    64,    -1,   498,   246,    64,    -1,   509,
     246,    64,    -1,    15,   496,     8,   496,    21,    -1,   498,
      -1,   509,    -1,   495,     7,   495,    -1,   495,     7,    -1,
     495,     7,   495,     7,   495,    -1,   495,     7,     7,   495,
      -1,     7,   495,     7,   495,    -1,     7,     7,   495,    -1,
       7,   495,    -1,     7,    -1,    -1,    -1,    14,   408,   515,
     570,   516,    20,    -1,   498,    -1,   501,    -1,   502,    -1,
     518,     8,   573,   502,    -1,   518,     8,   573,   564,   498,
      -1,   517,    -1,   519,     8,   573,   517,    -1,   519,     8,
     573,   564,   498,    -1,    -1,   498,    -1,   521,     8,   498,
      -1,   543,    -1,   542,    -1,   525,    -1,   533,   525,    -1,
     102,   551,   531,    -1,   103,   551,   530,    -1,   108,   531,
      -1,   523,    -1,   533,   523,    -1,   534,   543,    -1,   534,
     239,    -1,   533,   534,   239,    -1,    97,   551,    15,   495,
      21,   239,   530,    -1,    96,   551,   530,    -1,   106,   551,
     530,    -1,   526,    -1,    76,   551,    -1,   535,   543,    -1,
     535,    -1,   533,   535,    -1,   105,   551,   530,    -1,   579,
      -1,   842,    -1,   860,    -1,    89,   551,    15,   495,    21,
      -1,    89,   551,   552,   541,   553,   613,   524,    -1,    -1,
       8,   374,   254,    15,   495,    21,    -1,   254,    15,   495,
      21,    -1,   185,   551,   552,   541,   553,   546,   539,    26,
     495,     8,   495,    -1,   185,   551,   552,   541,   553,   546,
     539,    26,   495,     8,   495,     8,   495,    -1,    62,   551,
     527,   530,    -1,    84,   551,   530,    -1,   110,   551,   530,
      -1,   218,   551,   374,    62,    15,   495,    21,    -1,   533,
     218,   551,   374,    62,    15,   495,    21,    -1,    15,   529,
      21,    -1,   495,    -1,   495,     7,    -1,     7,   495,    -1,
     495,     7,   495,    -1,   528,    -1,   529,     8,   528,    -1,
      -1,   367,    -1,    -1,   367,    -1,    75,    -1,   532,     7,
      -1,   155,   551,    15,   495,    21,    -1,   122,   551,    15,
     536,   538,    21,    -1,   537,    -1,   536,     8,   537,    -1,
     539,    26,   513,    -1,    -1,     8,   495,    -1,   367,    -1,
     539,    26,   495,     8,   495,    -1,   539,    26,   495,     8,
     495,     8,   495,    -1,    -1,   149,    -1,   113,   551,   530,
      -1,    98,   551,   530,    -1,    98,   551,    15,   495,    21,
     530,    -1,   252,   551,    15,   495,    21,    -1,   533,   252,
     551,    15,   495,    21,    -1,   544,   495,    26,   495,    -1,
     188,   551,   499,    18,   495,    -1,    48,   551,   478,   240,
     367,    -1,    77,   551,    -1,   545,    -1,   554,    -1,    46,
     551,    15,   495,    21,   478,     8,   478,     8,   478,    -1,
     547,    -1,   547,    15,    21,    -1,   547,    15,   548,    21,
      -1,   214,   551,   506,    -1,   550,   551,   506,    -1,    79,
     551,   530,    -1,   115,   551,   530,    -1,    45,   551,    15,
     520,   518,    21,    -1,    81,   551,    15,   520,   519,    21,
      -1,   170,   551,    15,   521,    21,    -1,   253,   551,    15,
     495,    21,   499,    26,   495,    -1,   152,   428,    -1,   186,
     551,   478,    -1,    49,   551,   367,    -1,    49,   551,   367,
     546,    15,   477,    21,    -1,    69,   551,    15,   477,    21,
     546,   495,    -1,    -1,     8,    -1,    61,   551,   367,   573,
      -1,   573,   549,    -1,   548,     8,   573,   549,    -1,   495,
      -1,   564,   495,    -1,     5,   478,    -1,   184,    -1,   232,
      -1,    -1,    -1,    -1,   555,   561,    -1,   555,   576,    -1,
     555,     5,    -1,   555,     9,    -1,   557,   561,    -1,   559,
      -1,   565,   561,    -1,   565,   560,    -1,   565,   561,   568,
      -1,   565,   560,     8,   568,    -1,   566,   561,    -1,   566,
     561,   570,    -1,   567,    -1,   567,     8,   570,    -1,   556,
     551,   574,    -1,    53,    -1,   215,    -1,   104,    -1,   558,
     551,   574,    -1,   176,    -1,    66,    -1,   139,   551,   574,
     561,    -1,   139,   551,   574,   561,   570,    -1,   576,    -1,
       5,    -1,    15,   575,    21,    -1,    15,   562,    21,    -1,
     563,    -1,   562,     8,   573,   563,    -1,   575,    -1,     5,
      -1,     9,    -1,   564,   495,    -1,   564,     5,    -1,   564,
       9,    -1,   166,    -1,   197,   551,   574,    -1,   256,   551,
     574,    -1,   190,   551,   575,   574,    -1,   190,   551,     5,
     574,    -1,   569,    -1,   568,     8,   569,    -1,   499,    -1,
      15,   568,     8,   540,    21,    -1,   496,    -1,   572,    -1,
     571,    -1,   496,     8,   496,    -1,   496,     8,   572,    -1,
     572,     8,   496,    -1,   572,     8,   572,    -1,   571,     8,
     496,    -1,   571,     8,   572,    -1,   511,    -1,    15,   495,
      21,    -1,    15,   496,     8,   540,    21,    -1,    15,   572,
       8,   540,    21,    -1,    15,   571,     8,   540,    21,    -1,
      -1,    -1,   576,    -1,    15,   575,    21,    -1,   499,    -1,
     507,    -1,   575,   497,   575,    -1,   575,     5,   575,    -1,
     575,    37,   575,    -1,   575,     9,   575,    -1,   497,   575,
      -1,   575,    23,   575,    -1,   129,    26,   495,    -1,    -1,
     257,    -1,   580,    -1,   628,    -1,   603,    -1,   582,    -1,
     593,    -1,   588,    -1,   640,    -1,   643,    -1,   720,    -1,
     585,    -1,   594,    -1,   596,    -1,   598,    -1,   600,    -1,
     648,    -1,   654,    -1,   651,    -1,   779,    -1,   777,    -1,
     604,    -1,   629,    -1,   658,    -1,   709,    -1,   707,    -1,
     708,    -1,   710,    -1,   711,    -1,   712,    -1,   713,    -1,
     714,    -1,   722,    -1,   724,    -1,   729,    -1,   726,    -1,
     728,    -1,   732,    -1,   730,    -1,   731,    -1,   743,    -1,
     747,    -1,   748,    -1,   751,    -1,   750,    -1,   752,    -1,
     753,    -1,   754,    -1,   755,    -1,   657,    -1,   737,    -1,
     738,    -1,   739,    -1,   742,    -1,   756,    -1,   759,    -1,
     764,    -1,   769,    -1,   771,    -1,   772,    -1,   773,    -1,
     774,    -1,   776,    -1,   735,    -1,   778,    -1,    82,   489,
     581,    -1,   580,     8,   581,    -1,   367,   472,    -1,    94,
     489,   583,    -1,   584,    -1,   583,     8,   584,    -1,   367,
      -1,   138,   489,   586,    -1,   587,    -1,   586,     8,   587,
      -1,   367,    -1,   228,   489,   592,   589,    -1,    15,   590,
      21,    -1,   591,    -1,   590,     8,   591,    -1,   495,    -1,
     495,     7,   495,    -1,     7,    15,   494,    21,    -1,   367,
      -1,   259,   489,   367,   472,    -1,   303,   489,   367,   472,
      -1,   593,     8,   367,   472,    -1,   136,   489,   595,    -1,
     594,     8,   595,    -1,   367,    -1,   211,   489,   597,    -1,
     596,     8,   597,    -1,   367,    -1,   205,   489,   599,    -1,
     598,     8,   599,    -1,   367,    -1,    70,   489,   601,    -1,
     600,     8,   601,    -1,   367,    -1,   175,   367,   472,    -1,
      -1,    88,   489,   607,   610,   602,    -1,   204,   551,   607,
     611,   613,   602,    -1,   204,   551,   611,   613,   602,     7,
       7,   605,    -1,   606,    -1,   605,     8,   606,    -1,   607,
      -1,   608,    -1,   367,    -1,   367,    15,   494,    21,    -1,
     367,    -1,    -1,   611,   613,    -1,    15,   612,    21,    -1,
     613,   614,    -1,   612,     8,   613,   614,    -1,    -1,    58,
      -1,    58,    15,   573,   627,    21,    -1,   126,    15,   615,
      21,    -1,   258,    15,   615,     8,   495,    21,    -1,   165,
      15,   495,    21,    -1,     5,    -1,   137,    15,   615,    21,
      -1,    86,    15,   616,    21,    -1,   367,    -1,    15,   617,
      21,   374,   255,   619,    -1,   618,    -1,   617,     8,   618,
      -1,   495,    -1,   495,     7,   495,    -1,   620,    -1,   620,
      15,   621,    21,    -1,   367,    -1,   622,    -1,   621,     8,
     622,    -1,   495,    -1,   768,    -1,    40,   623,   624,    -1,
     367,    -1,    -1,   625,    -1,    17,   626,    -1,   624,    17,
     626,    -1,   495,    -1,   564,   495,    -1,   564,   495,     8,
     564,   495,    -1,    43,   489,   631,   633,    -1,   199,   551,
     632,   633,    -1,   199,   551,   633,     7,     7,   630,    -1,
     632,    -1,   630,     8,   632,    -1,   367,    -1,   498,    -1,
      15,   638,    21,   374,   255,   634,    -1,   637,    15,   635,
      21,    -1,   636,    -1,   635,     8,   636,    -1,   495,    -1,
       5,    -1,   513,    -1,   367,    -1,   639,    -1,   638,     8,
     639,    -1,   367,    -1,     5,    -1,     7,    -1,   641,     7,
       7,   489,   367,   472,    -1,   640,     8,   367,   472,    -1,
     642,    -1,   641,     8,   374,   642,    -1,    82,    -1,   259,
      -1,   303,    -1,    94,    -1,    87,    15,   473,    21,    -1,
     228,   589,    -1,    43,    15,   638,    21,   374,   255,   634,
      -1,    43,    -1,    88,   611,   613,   602,    -1,    88,    -1,
      67,    -1,   398,     8,   374,    93,   489,    15,   644,    21,
       7,     7,   646,    -1,    -1,   645,     7,    -1,   644,     8,
       7,    -1,   647,    -1,   646,     8,   647,    -1,   367,    -1,
     127,   489,   649,    -1,   650,    -1,   649,     8,   650,    -1,
     367,    -1,    74,   489,   652,    -1,   653,    -1,   652,     8,
     653,    -1,   367,    -1,    51,   489,   655,    -1,    51,   489,
       8,   374,    67,     7,     7,   655,    -1,   656,    -1,   655,
       8,   656,    -1,   367,   472,    -1,   168,   551,    -1,   182,
     551,    15,   659,    21,   660,   664,    -1,   498,    -1,   659,
       8,   498,    -1,   613,   173,   661,    -1,   613,    -1,   498,
      15,   662,    21,    -1,   663,    -1,   662,     8,   663,    -1,
     495,    -1,     5,    -1,    -1,   665,    -1,   666,    -1,   665,
     666,    -1,   670,    -1,   692,    -1,   700,    -1,   667,    -1,
     677,    -1,   679,    -1,   678,    -1,   668,    -1,   671,    -1,
     672,    -1,   675,    -1,     8,   374,   209,    15,   715,     7,
     716,    21,    -1,     8,   374,   209,    15,   716,    21,    -1,
       8,   374,    71,    15,   669,     7,   716,    21,    -1,     8,
     374,    71,    15,   716,    21,    -1,   367,    -1,     8,   374,
     169,    15,   674,    21,    -1,     8,   374,   282,    15,   674,
      21,    -1,     8,   374,   191,    15,   674,    21,    -1,     8,
     374,   320,    15,   673,    21,    -1,   495,    -1,   495,     8,
     495,    -1,   495,     8,   495,     8,   495,    -1,   499,    -1,
     674,     8,   499,    -1,     8,   374,   322,    15,   676,    21,
      -1,   661,    -1,   676,     8,   661,    -1,     8,   374,   135,
      15,   715,     7,   733,    21,    -1,     8,   374,   135,    15,
     733,    21,    -1,     8,   374,   229,    15,   495,    21,    -1,
       8,   374,    41,   680,    -1,     8,   374,    41,   680,   680,
      -1,    15,   613,   681,   682,    21,    -1,   148,     7,    -1,
     180,     7,    -1,    -1,   683,    -1,   682,     8,   683,    -1,
     705,    -1,   705,    15,   684,    21,    -1,   705,    15,   684,
      21,    15,   686,    21,    -1,   685,    -1,   684,     8,   685,
      -1,   495,     7,   495,    -1,   687,    -1,   686,     8,   687,
      -1,   688,     7,   689,     7,   690,    -1,   688,     7,   689,
      -1,   688,     7,   690,    -1,   688,    -1,   689,     7,   690,
      -1,   689,    -1,   690,    -1,   374,   217,   691,    -1,   374,
     157,   691,    -1,   374,   128,   691,    -1,    15,   493,    21,
      -1,     8,   374,   208,    15,   693,   697,   694,     8,   696,
      21,    -1,     8,   374,   208,    15,   693,   697,   694,    21,
      -1,     8,   374,   208,    15,   693,   695,   694,     7,   696,
      21,    -1,    -1,    -1,   367,    -1,   374,   697,    -1,   696,
       8,   374,   697,    -1,   698,    15,   499,    21,    -1,   699,
      15,   674,     8,   495,    21,    -1,   234,    -1,   192,    -1,
     162,    -1,   159,    -1,    35,    -1,    22,    -1,    24,    -1,
      33,    -1,   247,    -1,   158,    -1,   161,    -1,     8,   374,
     223,    15,   702,    21,    -1,     8,   374,   224,   701,    -1,
       8,   374,   226,   701,    -1,     8,   374,   221,    -1,     8,
     374,   221,    15,   705,    15,   590,    21,    21,    -1,   367,
      -1,   703,    -1,   702,     8,   703,    -1,   705,    -1,   705,
      15,   704,    78,    21,    -1,   705,    15,   704,   590,    21,
      -1,   705,    15,   704,   590,    21,    15,   374,    78,    21,
      -1,    -1,   498,    -1,   705,    -1,   706,     8,   705,    -1,
     225,   551,   701,    -1,   224,   551,   701,    -1,   227,   551,
     701,    -1,   226,   551,   701,    -1,   222,   551,   701,    15,
     702,    21,    -1,   206,   551,   695,    -1,   207,   551,   695,
      -1,    72,   551,   669,    -1,    73,   551,   669,    -1,   210,
     551,    15,   715,     7,   716,    21,    -1,   210,   551,    15,
     716,    21,    -1,   367,    -1,   717,    -1,   716,     8,   717,
      -1,   705,    15,   718,    21,    -1,   705,    -1,   719,    -1,
     718,     8,   719,    -1,   495,    -1,     7,    -1,   237,   489,
     721,    -1,   720,     8,   721,    -1,   367,   472,    -1,   238,
     551,   723,    -1,   238,   551,   723,   692,    -1,   238,   551,
     723,   668,    -1,   238,   551,   723,   692,   668,    -1,   238,
     551,   723,   668,   692,    -1,   367,    -1,   111,   551,    -1,
     723,    15,   495,    21,    -1,   723,    15,   513,    21,    -1,
     174,   551,   500,   727,    -1,    -1,   670,    -1,   109,   551,
      -1,   160,   551,   725,   374,   175,   609,   472,    -1,   160,
     551,   725,   374,   323,   499,    -1,   189,   551,   715,    -1,
     212,   551,   715,    -1,   135,   551,    15,   715,     7,   733,
      21,    -1,   135,   551,    15,   733,    21,    -1,   734,    -1,
     733,     8,   734,    -1,   705,    -1,   705,    15,   494,    21,
      -1,   134,   551,    -1,   134,   551,   670,    -1,   134,   551,
     736,    -1,   134,   551,   670,   736,    -1,     8,   374,   208,
      15,   674,    21,    -1,    50,   551,   741,    -1,    99,   551,
      -1,    52,   551,   741,    -1,   367,    -1,   740,    -1,   740,
      15,   494,    21,    -1,   120,   551,   499,    26,   499,    -1,
      83,   551,   746,    -1,    83,   551,   746,    15,   744,    21,
      -1,   573,   745,    -1,   744,     8,   573,   745,    -1,   564,
     495,    -1,   149,    -1,   100,   551,   746,    -1,   146,   551,
     749,    -1,    -1,   495,    -1,   332,   551,   494,    -1,   101,
     551,    -1,   241,   551,    -1,   242,   551,    -1,    56,   551,
      -1,    65,   551,   573,    15,   548,    21,   408,   490,   674,
      -1,   324,   551,    15,   757,    21,    -1,   758,    -1,   757,
       8,   758,    -1,   374,   315,    -1,   374,   318,    -1,   374,
     182,    -1,   220,   551,    15,   760,    26,   626,    21,   613,
     763,    -1,   498,    15,   761,    21,    -1,   762,    -1,   761,
       8,   762,    -1,   616,    -1,   768,    -1,   132,   706,    -1,
      -1,   153,   551,    15,   498,    18,   765,    21,    -1,   498,
      -1,   498,    15,   766,    21,    -1,   767,    -1,   766,     8,
     767,    -1,   768,    -1,     7,    -1,     5,    -1,   325,   551,
     495,     8,   374,   330,    15,   674,    21,     8,   374,   329,
      15,   494,    21,   770,    -1,    -1,     8,   374,   182,    -1,
       8,   374,   318,    -1,   326,   551,   495,    -1,   327,   551,
     495,    -1,   327,   551,   495,     8,   374,   315,    -1,   328,
     551,   495,     8,   374,   331,    15,   498,    21,    -1,   333,
     551,    15,   775,    21,    -1,   502,    -1,   775,     8,   502,
      -1,   334,   551,    15,   659,    21,    -1,   828,    -1,   781,
      -1,   780,    -1,   798,    -1,   801,    -1,   802,    -1,   803,
      -1,   804,    -1,   810,    -1,   813,    -1,   818,    -1,   819,
      -1,   820,    -1,   823,    -1,   824,    -1,   825,    -1,   826,
      -1,   827,    -1,   829,    -1,   830,    -1,   831,    -1,   832,
      -1,   833,    -1,   834,    -1,   835,    -1,   836,    -1,   837,
      -1,   268,   551,    -1,   275,   551,    -1,   291,   551,   613,
     782,    -1,   291,   551,   613,    -1,   546,   613,   783,   613,
      -1,   782,   546,   613,   783,   613,    -1,   785,    -1,   794,
      -1,   789,    -1,   790,    -1,   786,    -1,   787,    -1,   788,
      -1,   792,    -1,   793,    -1,   840,    15,   841,   839,    21,
      -1,   191,   784,    -1,   282,   784,    -1,   285,   784,    -1,
     265,   784,    -1,   299,   784,    -1,    84,    15,   374,   791,
      21,    -1,   191,    -1,   299,    -1,   288,    -1,   304,    15,
     495,    21,    -1,   289,    15,   495,    21,    -1,   208,    15,
     795,    21,    -1,   613,   797,     7,   796,    -1,   674,    -1,
      17,    -1,    16,    -1,     5,    -1,    37,    -1,   162,    -1,
     159,    -1,    35,    -1,    22,    -1,    24,    -1,    33,    -1,
     305,    -1,   306,    -1,   307,    -1,   247,    -1,   297,   551,
     613,   799,    -1,   297,   551,   613,    -1,   546,   613,   800,
     613,    -1,   799,   546,   613,   800,   613,    -1,   785,    -1,
     794,    -1,   786,    -1,   787,    -1,   279,   551,   613,   817,
      -1,   279,   551,   613,    -1,   296,   551,    -1,   269,   551,
     613,   805,    -1,   269,   551,   613,    -1,   272,   551,   613,
     817,    -1,   272,   551,   613,    -1,   546,   613,   806,   613,
      -1,   805,   546,   613,   806,   613,    -1,   785,    -1,   794,
      -1,   786,    -1,   787,    -1,   808,    -1,   807,    -1,   290,
      -1,   298,    15,   374,   809,     8,   495,    21,    -1,   298,
      15,   374,   809,    21,    -1,   230,    -1,    94,    -1,   284,
      -1,   295,    -1,   300,   551,   613,   811,    -1,   300,   551,
     613,    -1,   546,   613,   812,   613,    -1,   811,   546,   613,
     812,   613,    -1,   785,    -1,   786,    -1,   280,   551,   613,
     814,    -1,   280,   551,   613,    -1,   546,   613,   815,   613,
      -1,   814,   546,   613,   815,   613,    -1,   817,    -1,   816,
      -1,   266,   784,    -1,   287,    -1,   302,   551,    -1,   281,
     551,   613,   817,    -1,   281,   551,   613,    -1,   292,   551,
     613,   821,    -1,   292,   551,   613,    -1,   546,   613,   822,
     613,    -1,   821,   546,   613,   822,   613,    -1,   785,    -1,
     794,    -1,   789,    -1,   790,    -1,   786,    -1,   787,    -1,
     788,    -1,   792,    -1,   793,    -1,   808,    -1,   807,    -1,
     276,   551,    -1,   293,   551,   613,   782,    -1,   293,   551,
     613,    -1,   277,   551,    -1,   294,   551,   613,   782,    -1,
     294,   551,   613,    -1,   278,   551,    -1,   301,   489,   784,
      -1,   286,   551,    -1,   273,   551,    -1,   290,   551,    -1,
     274,   551,    -1,   264,   551,    -1,   263,   551,    -1,   283,
     551,   784,    -1,   283,   551,    -1,   267,   551,    15,   498,
      21,    -1,   267,   551,    -1,   271,   551,    15,   498,    21,
      -1,   271,   551,    -1,    37,   367,   840,    37,   841,    -1,
     838,    -1,   498,    -1,   839,     8,   838,    -1,   839,     8,
     498,    -1,    -1,    -1,   843,    -1,   856,    -1,   844,    -1,
     857,    -1,   845,    -1,   846,    -1,   858,    -1,   308,   551,
     847,    -1,   310,   551,    -1,   312,   551,    15,   853,    21,
      -1,   312,   551,    15,    21,    -1,   312,   551,    -1,   313,
     551,    15,   853,    21,    -1,   313,   551,    15,    21,    -1,
     313,   551,    -1,   374,   375,    -1,   848,    -1,   849,    -1,
     848,     8,   849,    -1,   374,   850,    -1,   374,   852,    -1,
     374,   851,    -1,   147,    15,   853,    21,    -1,   148,    15,
     853,    21,    -1,   180,    15,   853,    21,    -1,   318,    15,
     853,    21,    -1,   319,    15,   853,    21,    -1,   314,    15,
     854,    21,    -1,   315,    -1,   674,    -1,   855,    -1,   854,
       8,   855,    -1,   374,   316,    -1,   374,   317,    -1,   309,
      -1,   311,    -1,   321,   489,   859,    -1,   374,   375,    -1,
     374,   851,    -1,   861,    -1,   862,    -1,   863,    -1,   864,
      -1,   869,    -1,   886,    -1,   335,    15,   870,    21,    -1,
     336,    15,   877,    21,    -1,   337,    15,   882,    21,    -1,
     339,   884,    -1,   339,   884,     8,   374,   351,    15,   865,
      21,   867,    -1,   339,   884,     8,   374,   352,    15,   865,
      21,   868,    -1,   866,    -1,   865,     8,   866,    -1,   374,
     353,    -1,    -1,     8,   374,   352,    15,   865,    21,    -1,
      -1,     8,   374,   351,    15,   865,    21,    -1,   340,    -1,
     871,    -1,   870,     8,   871,    -1,   872,    -1,   873,    -1,
     874,    -1,   374,   208,    15,   696,    21,    -1,   374,   191,
      15,   674,    21,    -1,   374,   183,    15,   875,    21,    -1,
     876,    -1,   875,     8,   876,    -1,   502,    26,   495,    -1,
     878,    -1,   877,     8,   878,    -1,   879,    -1,   880,    -1,
     881,    -1,   374,   228,    15,   702,    21,    -1,   374,    41,
      15,   702,    21,    -1,   374,   209,    15,   716,    21,    -1,
     883,    -1,   882,     8,   883,    -1,   374,   338,    -1,   374,
     342,    15,   659,    21,    -1,   374,   341,    -1,   374,   341,
      15,   659,    21,    -1,   374,   343,    15,   885,    21,    -1,
     367,    -1,   502,    -1,   885,     8,   502,    -1,   344,    15,
     887,    21,    -1,   888,    -1,   887,     8,   888,    -1,   374,
     244,    15,   889,    21,    -1,   374,   330,    15,   659,    21,
      -1,   374,   345,    15,   659,    21,    -1,   374,   346,    15,
     495,    21,    -1,   374,   347,    15,   891,     8,   495,    21,
      -1,   890,    -1,   889,     8,   890,    -1,   374,   315,    -1,
     374,   350,    -1,   374,   348,    -1,   374,   349,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   787,   787,   788,   792,   794,   808,   839,   848,   854,
     874,   883,   899,   911,   921,   928,   934,   939,   944,   968,
     995,  1009,  1011,  1013,  1017,  1034,  1048,  1072,  1088,  1102,
    1120,  1122,  1129,  1133,  1134,  1141,  1142,  1150,  1151,  1153,
    1157,  1158,  1162,  1166,  1172,  1182,  1186,  1191,  1198,  1199,
    1200,  1201,  1202,  1203,  1204,  1205,  1206,  1207,  1208,  1209,
    1210,  1211,  1216,  1221,  1228,  1230,  1231,  1232,  1233,  1234,
    1235,  1236,  1237,  1238,  1239,  1240,  1241,  1244,  1248,  1256,
    1264,  1273,  1281,  1285,  1287,  1291,  1293,  1295,  1297,  1299,
    1301,  1303,  1305,  1307,  1309,  1311,  1313,  1315,  1317,  1319,
    1321,  1323,  1325,  1330,  1339,  1349,  1357,  1367,  1388,  1408,
    1409,  1411,  1415,  1417,  1421,  1425,  1427,  1431,  1437,  1441,
    1443,  1447,  1451,  1455,  1459,  1463,  1469,  1473,  1477,  1483,
    1488,  1495,  1506,  1519,  1530,  1543,  1553,  1566,  1571,  1578,
    1581,  1586,  1591,  1598,  1601,  1611,  1625,  1628,  1647,  1674,
    1676,  1688,  1696,  1697,  1698,  1699,  1700,  1701,  1702,  1707,
    1708,  1712,  1714,  1721,  1726,  1727,  1729,  1731,  1744,  1750,
    1756,  1765,  1774,  1787,  1788,  1791,  1795,  1810,  1825,  1843,
    1864,  1884,  1906,  1923,  1941,  1948,  1955,  1962,  1975,  1982,
    1989,  2000,  2004,  2006,  2011,  2029,  2040,  2052,  2064,  2078,
    2084,  2091,  2097,  2103,  2111,  2118,  2134,  2137,  2146,  2148,
    2152,  2156,  2176,  2180,  2182,  2186,  2187,  2190,  2192,  2194,
    2196,  2198,  2201,  2204,  2208,  2214,  2218,  2222,  2224,  2229,
    2230,  2234,  2238,  2240,  2244,  2246,  2248,  2253,  2257,  2259,
    2261,  2264,  2266,  2267,  2268,  2269,  2270,  2271,  2272,  2273,
    2276,  2277,  2283,  2286,  2287,  2289,  2293,  2294,  2297,  2298,
    2300,  2304,  2305,  2306,  2307,  2309,  2312,  2313,  2322,  2324,
    2331,  2338,  2345,  2354,  2356,  2358,  2362,  2364,  2368,  2377,
    2384,  2391,  2393,  2397,  2401,  2407,  2409,  2414,  2418,  2422,
    2429,  2436,  2446,  2448,  2452,  2464,  2467,  2476,  2489,  2495,
    2501,  2507,  2515,  2525,  2527,  2531,  2533,  2566,  2568,  2572,
    2611,  2612,  2616,  2616,  2621,  2625,  2633,  2642,  2651,  2661,
    2667,  2670,  2672,  2676,  2684,  2699,  2706,  2708,  2712,  2728,
    2728,  2732,  2734,  2746,  2748,  2752,  2758,  2770,  2782,  2799,
    2828,  2829,  2837,  2838,  2842,  2844,  2846,  2857,  2861,  2867,
    2869,  2873,  2875,  2877,  2881,  2883,  2887,  2889,  2891,  2893,
    2895,  2897,  2899,  2901,  2903,  2905,  2907,  2909,  2911,  2913,
    2915,  2917,  2919,  2921,  2923,  2925,  2927,  2929,  2931,  2935,
    2936,  2947,  3021,  3033,  3035,  3039,  3170,  3220,  3264,  3306,
    3364,  3366,  3368,  3407,  3450,  3461,  3462,  3466,  3471,  3472,
    3476,  3478,  3484,  3486,  3492,  3502,  3508,  3515,  3521,  3529,
    3537,  3553,  3563,  3576,  3583,  3585,  3608,  3610,  3612,  3614,
    3616,  3618,  3620,  3622,  3626,  3626,  3626,  3640,  3642,  3665,
    3667,  3669,  3685,  3687,  3689,  3703,  3706,  3708,  3716,  3718,
    3720,  3722,  3776,  3796,  3811,  3820,  3823,  3873,  3879,  3884,
    3902,  3904,  3906,  3908,  3910,  3913,  3919,  3921,  3923,  3926,
    3928,  3930,  3957,  3966,  3975,  3976,  3978,  3983,  3990,  3998,
    4000,  4004,  4007,  4009,  4013,  4019,  4021,  4023,  4025,  4029,
    4031,  4040,  4041,  4048,  4049,  4053,  4057,  4078,  4081,  4085,
    4087,  4094,  4099,  4100,  4111,  4128,  4151,  4176,  4177,  4184,
    4186,  4188,  4190,  4192,  4196,  4273,  4285,  4292,  4294,  4295,
    4297,  4306,  4313,  4320,  4328,  4333,  4338,  4341,  4344,  4347,
    4350,  4353,  4357,  4375,  4380,  4399,  4418,  4422,  4423,  4426,
    4430,  4435,  4442,  4444,  4446,  4450,  4451,  4462,  4477,  4481,
    4488,  4491,  4501,  4514,  4527,  4530,  4532,  4535,  4538,  4542,
    4551,  4554,  4558,  4560,  4566,  4570,  4572,  4574,  4581,  4585,
    4587,  4591,  4593,  4597,  4616,  4632,  4641,  4650,  4652,  4656,
    4682,  4697,  4712,  4729,  4737,  4746,  4754,  4759,  4764,  4786,
    4802,  4804,  4808,  4810,  4817,  4819,  4821,  4825,  4827,  4829,
    4831,  4833,  4835,  4839,  4842,  4845,  4851,  4857,  4866,  4870,
    4877,  4879,  4883,  4885,  4887,  4892,  4897,  4902,  4907,  4916,
    4921,  4927,  4928,  4943,  4944,  4945,  4946,  4947,  4948,  4949,
    4950,  4951,  4952,  4953,  4954,  4955,  4956,  4957,  4958,  4959,
    4960,  4961,  4964,  4965,  4966,  4967,  4968,  4969,  4970,  4971,
    4972,  4973,  4974,  4975,  4976,  4977,  4978,  4979,  4980,  4981,
    4982,  4983,  4984,  4985,  4986,  4987,  4988,  4989,  4990,  4991,
    4992,  4993,  4994,  4995,  4996,  4997,  4998,  4999,  5000,  5001,
    5002,  5003,  5004,  5005,  5006,  5007,  5011,  5013,  5024,  5045,
    5049,  5051,  5055,  5068,  5072,  5074,  5078,  5089,  5100,  5104,
    5106,  5110,  5112,  5114,  5129,  5141,  5161,  5181,  5203,  5209,
    5218,  5226,  5232,  5240,  5247,  5253,  5262,  5266,  5272,  5280,
    5294,  5308,  5313,  5329,  5344,  5372,  5374,  5378,  5380,  5384,
    5413,  5436,  5457,  5458,  5462,  5483,  5485,  5489,  5497,  5501,
    5506,  5508,  5510,  5512,  5518,  5520,  5524,  5534,  5538,  5540,
    5545,  5547,  5551,  5555,  5561,  5571,  5573,  5577,  5579,  5581,
    5588,  5606,  5607,  5611,  5613,  5617,  5624,  5634,  5663,  5678,
    5685,  5703,  5705,  5709,  5723,  5749,  5762,  5778,  5780,  5783,
    5785,  5791,  5795,  5823,  5825,  5829,  5837,  5843,  5846,  5904,
    5968,  5970,  5973,  5977,  5981,  5985,  6002,  6014,  6018,  6022,
    6032,  6037,  6042,  6049,  6058,  6058,  6069,  6080,  6082,  6086,
    6097,  6101,  6103,  6107,  6118,  6122,  6124,  6128,  6140,  6142,
    6149,  6151,  6155,  6171,  6179,  6190,  6192,  6196,  6199,  6204,
    6214,  6216,  6220,  6222,  6231,  6232,  6236,  6238,  6243,  6244,
    6245,  6246,  6247,  6248,  6249,  6250,  6251,  6252,  6253,  6256,
    6261,  6265,  6269,  6273,  6286,  6290,  6294,  6298,  6301,  6303,
    6305,  6309,  6311,  6315,  6319,  6321,  6325,  6330,  6334,  6338,
    6340,  6344,  6352,  6358,  6365,  6368,  6370,  6374,  6376,  6380,
    6392,  6394,  6398,  6402,  6404,  6408,  6410,  6412,  6414,  6416,
    6418,  6420,  6424,  6428,  6432,  6436,  6440,  6447,  6453,  6458,
    6461,  6464,  6477,  6479,  6483,  6485,  6490,  6496,  6502,  6508,
    6514,  6520,  6526,  6532,  6538,  6547,  6553,  6570,  6572,  6580,
    6588,  6590,  6594,  6598,  6600,  6604,  6606,  6614,  6618,  6630,
    6633,  6651,  6653,  6657,  6659,  6663,  6665,  6669,  6673,  6677,
    6686,  6690,  6694,  6699,  6703,  6715,  6717,  6721,  6726,  6730,
    6732,  6736,  6738,  6742,  6747,  6754,  6777,  6779,  6781,  6783,
    6785,  6789,  6800,  6804,  6819,  6826,  6833,  6834,  6838,  6842,
    6850,  6854,  6858,  6866,  6871,  6885,  6887,  6891,  6893,  6902,
    6904,  6906,  6908,  6944,  6948,  6952,  6956,  6960,  6972,  6974,
    6978,  6981,  6983,  6987,  6992,  6999,  7002,  7010,  7014,  7019,
    7021,  7028,  7033,  7037,  7041,  7045,  7049,  7053,  7056,  7058,
    7062,  7064,  7066,  7070,  7074,  7086,  7088,  7092,  7094,  7098,
    7101,  7104,  7108,  7114,  7126,  7128,  7132,  7134,  7138,  7146,
    7158,  7159,  7161,  7165,  7169,  7171,  7179,  7183,  7186,  7188,
    7192,  7196,  7198,  7199,  7200,  7201,  7202,  7203,  7204,  7205,
    7206,  7207,  7208,  7209,  7210,  7211,  7212,  7213,  7214,  7215,
    7216,  7217,  7218,  7219,  7220,  7221,  7222,  7223,  7226,  7232,
    7238,  7244,  7250,  7254,  7260,  7261,  7262,  7263,  7264,  7265,
    7266,  7267,  7268,  7271,  7276,  7281,  7287,  7293,  7299,  7304,
    7310,  7316,  7322,  7329,  7335,  7341,  7348,  7352,  7354,  7360,
    7367,  7373,  7379,  7385,  7391,  7397,  7403,  7409,  7415,  7421,
    7427,  7433,  7443,  7448,  7454,  7458,  7464,  7465,  7466,  7467,
    7470,  7478,  7484,  7490,  7495,  7501,  7508,  7514,  7518,  7524,
    7525,  7526,  7527,  7528,  7529,  7532,  7541,  7545,  7551,  7558,
    7565,  7572,  7581,  7587,  7593,  7597,  7603,  7604,  7607,  7613,
    7619,  7623,  7630,  7631,  7634,  7640,  7646,  7651,  7659,  7665,
    7670,  7677,  7681,  7687,  7688,  7689,  7690,  7691,  7692,  7693,
    7694,  7695,  7696,  7697,  7701,  7706,  7711,  7718,  7723,  7729,
    7735,  7740,  7745,  7750,  7754,  7759,  7764,  7768,  7773,  7777,
    7783,  7788,  7794,  7799,  7805,  7815,  7819,  7823,  7827,  7833,
    7836,  7840,  7841,  7842,  7843,  7844,  7845,  7846,  7849,  7853,
    7857,  7859,  7861,  7865,  7867,  7869,  7873,  7875,  7879,  7881,
    7885,  7888,  7891,  7896,  7898,  7900,  7902,  7904,  7908,  7912,
    7917,  7921,  7923,  7927,  7929,  7933,  7937,  7941,  7945,  7947,
    7951,  7952,  7953,  7954,  7955,  7956,  7959,  7963,  7967,  7971,
    7973,  7975,  7979,  7981,  7985,  7990,  7991,  7996,  7997,  8001,
    8005,  8007,  8011,  8012,  8013,  8016,  8020,  8024,  8027,  8029,
    8033,  8037,  8039,  8043,  8044,  8045,  8048,  8052,  8056,  8060,
    8062,  8066,  8068,  8070,  8072,  8075,  8079,  8083,  8085,  8089,
    8093,  8095,  8099,  8101,  8103,  8105,  8107,  8111,  8113,  8117,
    8119,  8123,  8125
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PERCENT", "AMPERSAND", "ASTER",
  "CLUSTER", "COLON", "COMMA", "DASTER", "DEFINED_OPERATOR", "DOT",
  "DQUOTE", "GLOBAL_A", "LEFTAB", "LEFTPAR", "MINUS", "PLUS", "POINT_TO",
  "QUOTE", "RIGHTAB", "RIGHTPAR", "AND", "DSLASH", "EQV", "EQ", "EQUAL",
  "FFALSE", "GE", "GT", "LE", "LT", "NE", "NEQV", "NOT", "OR", "TTRUE",
  "SLASH", "XOR", "REFERENCE", "AT", "ACROSS", "ALIGN_WITH", "ALIGN",
  "ALLOCATABLE", "ALLOCATE", "ARITHIF", "ASSIGNMENT", "ASSIGN",
  "ASSIGNGOTO", "ASYNCHRONOUS", "ASYNCID", "ASYNCWAIT", "BACKSPACE",
  "BAD_CCONST", "BAD_SYMBOL", "BARRIER", "BLOCKDATA", "BLOCK",
  "BOZ_CONSTANT", "BYTE", "CALL", "CASE", "CHARACTER", "CHAR_CONSTANT",
  "CHECK", "CLOSE", "COMMON", "COMPLEX", "COMPGOTO", "CONSISTENT_GROUP",
  "CONSISTENT_SPEC", "CONSISTENT_START", "CONSISTENT_WAIT", "CONSISTENT",
  "CONSTRUCT_ID", "CONTAINS", "CONTINUE", "CORNER", "CYCLE", "DATA",
  "DEALLOCATE", "HPF_TEMPLATE", "DEBUG", "DEFAULT_CASE", "DEFINE",
  "DERIVED", "DIMENSION", "DISTRIBUTE", "DOWHILE", "DOUBLEPRECISION",
  "DOUBLECOMPLEX", "DP_CONSTANT", "DVM_POINTER", "DYNAMIC", "ELEMENTAL",
  "ELSE", "ELSEIF", "ELSEWHERE", "ENDASYNCHRONOUS", "ENDDEBUG",
  "ENDINTERVAL", "ENDUNIT", "ENDDO", "ENDFILE", "ENDFORALL", "ENDIF",
  "ENDINTERFACE", "ENDMODULE", "ENDON", "ENDSELECT", "ENDTASK_REGION",
  "ENDTYPE", "ENDWHERE", "ENTRY", "EXIT", "EOLN", "EQUIVALENCE", "ERROR",
  "EXTERNAL", "F90", "FIND", "FORALL", "FORMAT", "FUNCTION", "GATE",
  "GEN_BLOCK", "HEAP", "HIGH", "IDENTIFIER", "IMPLICIT", "IMPLICITNONE",
  "INCLUDE_TO", "INCLUDE", "INDEPENDENT", "INDIRECT_ACCESS",
  "INDIRECT_GROUP", "INDIRECT", "INHERIT", "INQUIRE",
  "INTERFACEASSIGNMENT", "INTERFACEOPERATOR", "INTERFACE", "INTRINSIC",
  "INTEGER", "INTENT", "INTERVAL", "INOUT", "IN", "INT_CONSTANT", "LABEL",
  "LABEL_DECLARE", "LET", "LOCALIZE", "LOGICAL", "LOGICALIF", "LOOP",
  "LOW", "MAXLOC", "MAX", "MAP", "MINLOC", "MIN", "MODULE_PROCEDURE",
  "MODULE", "MULT_BLOCK", "NAMEEQ", "NAMELIST", "NEW_VALUE", "NEW",
  "NULLIFY", "OCTAL_CONSTANT", "ONLY", "ON", "ON_DIR", "ONTO", "OPEN",
  "OPERATOR", "OPTIONAL", "OTHERWISE", "OUT", "OWN", "PARALLEL",
  "PARAMETER", "PAUSE", "PLAINDO", "PLAINGOTO", "POINTER", "POINTERLET",
  "PREFETCH", "PRINT", "PRIVATE", "PRODUCT", "PROGRAM", "PUBLIC", "PURE",
  "RANGE", "READ", "REALIGN_WITH", "REALIGN", "REAL", "REAL_CONSTANT",
  "RECURSIVE", "REDISTRIBUTE_NEW", "REDISTRIBUTE", "REDUCTION_GROUP",
  "REDUCTION_START", "REDUCTION_WAIT", "REDUCTION", "REMOTE_ACCESS_SPEC",
  "REMOTE_ACCESS", "REMOTE_GROUP", "RESET", "RESULT", "RETURN", "REWIND",
  "SAVE", "SECTION", "SELECT", "SEQUENCE", "SHADOW_ADD", "SHADOW_COMPUTE",
  "SHADOW_GROUP", "SHADOW_RENEW", "SHADOW_START_SPEC", "SHADOW_START",
  "SHADOW_WAIT_SPEC", "SHADOW_WAIT", "SHADOW", "STAGE", "STATIC", "STAT",
  "STOP", "SUBROUTINE", "SUM", "SYNC", "TARGET", "TASK", "TASK_REGION",
  "THEN", "TO", "TRACEON", "TRACEOFF", "TRUNC", "TYPE", "TYPE_DECL",
  "UNDER", "UNKNOWN", "USE", "VIRTUAL", "VARIABLE", "WAIT", "WHERE",
  "WHERE_ASSIGN", "WHILE", "WITH", "WRITE", "COMMENT", "WGT_BLOCK",
  "HPF_PROCESSORS", "IOSTAT", "ERR", "END", "OMPDVM_ATOMIC",
  "OMPDVM_BARRIER", "OMPDVM_COPYIN", "OMPDVM_COPYPRIVATE",
  "OMPDVM_CRITICAL", "OMPDVM_ONETHREAD", "OMPDVM_DO", "OMPDVM_DYNAMIC",
  "OMPDVM_ENDCRITICAL", "OMPDVM_ENDDO", "OMPDVM_ENDMASTER",
  "OMPDVM_ENDORDERED", "OMPDVM_ENDPARALLEL", "OMPDVM_ENDPARALLELDO",
  "OMPDVM_ENDPARALLELSECTIONS", "OMPDVM_ENDPARALLELWORKSHARE",
  "OMPDVM_ENDSECTIONS", "OMPDVM_ENDSINGLE", "OMPDVM_ENDWORKSHARE",
  "OMPDVM_FIRSTPRIVATE", "OMPDVM_FLUSH", "OMPDVM_GUIDED",
  "OMPDVM_LASTPRIVATE", "OMPDVM_MASTER", "OMPDVM_NOWAIT", "OMPDVM_NONE",
  "OMPDVM_NUM_THREADS", "OMPDVM_ORDERED", "OMPDVM_PARALLEL",
  "OMPDVM_PARALLELDO", "OMPDVM_PARALLELSECTIONS",
  "OMPDVM_PARALLELWORKSHARE", "OMPDVM_RUNTIME", "OMPDVM_SECTION",
  "OMPDVM_SECTIONS", "OMPDVM_SCHEDULE", "OMPDVM_SHARED", "OMPDVM_SINGLE",
  "OMPDVM_THREADPRIVATE", "OMPDVM_WORKSHARE", "OMPDVM_NODES", "OMPDVM_IF",
  "IAND", "IEOR", "IOR", "ACC_REGION", "ACC_END_REGION",
  "ACC_CHECKSECTION", "ACC_END_CHECKSECTION", "ACC_GET_ACTUAL",
  "ACC_ACTUAL", "ACC_TARGETS", "ACC_ASYNC", "ACC_HOST", "ACC_CUDA",
  "ACC_LOCAL", "ACC_INLOCAL", "ACC_CUDA_BLOCK", "ACC_ROUTINE", "ACC_TIE",
  "BY", "IO_MODE", "CP_CREATE", "CP_LOAD", "CP_SAVE", "CP_WAIT", "FILES",
  "VARLIST", "STATUS", "EXITINTERVAL", "TEMPLATE_CREATE",
  "TEMPLATE_DELETE", "SPF_ANALYSIS", "SPF_PARALLEL", "SPF_TRANSFORM",
  "SPF_NOINLINE", "SPF_PARALLEL_REG", "SPF_END_PARALLEL_REG",
  "SPF_PRIVATES_EXPANSION", "SPF_FISSION", "SPF_SHRINK", "SPF_CHECKPOINT",
  "SPF_EXCEPT", "SPF_FILES_COUNT", "SPF_INTERVAL", "SPF_TIME", "SPF_ITER",
  "SPF_FLEXIBLE", "SPF_APPLY_REGION", "SPF_APPLY_FRAGMENT",
  "SPF_CODE_COVERAGE", "BINARY_OP", "UNARY_OP", "$accept", "program",
  "stat", "thislabel", "entry", "new_prog", "proc_attr", "procname",
  "funcname", "typedfunc", "opt_result_clause", "name", "progname",
  "blokname", "arglist", "args", "arg", "filename", "needkeyword",
  "keywordoff", "keyword_if_colon_follow", "spec", "interface",
  "defined_op", "operator", "intrinsic_op", "type_dcl", "end_type", "dcl",
  "options", "attr_spec_list", "attr_spec", "intent_spec", "access_spec",
  "intent", "optional", "static", "private", "private_attr", "sequence",
  "public", "public_attr", "type", "opt_key_hedr", "attrib", "att_type",
  "typespec", "typename", "lengspec", "proper_lengspec", "selector",
  "clause", "end_ioctl", "initial_value", "dimension", "allocatable",
  "pointer", "target", "common", "namelist", "namelist_group", "comblock",
  "var", "external", "intrinsic", "equivalence", "equivset", "equivlist",
  "equi_object", "data", "data1", "data_in", "in_data", "datapair",
  "datalvals", "datarvals", "datalval", "data_null", "d_name", "dataname",
  "datasubs", "datarange", "iconexprlist", "opticonexpr", "dataimplieddo",
  "dlist", "dataelt", "datarval", "datavalue", "BOZ_const", "int_const",
  "unsignedint", "real_const", "unsignedreal", "complex_const_data",
  "complex_part", "iconexpr", "iconterm", "iconfactor", "iconprimary",
  "savelist", "saveitem", "use_name_list", "use_key_word",
  "no_use_key_word", "use_name", "paramlist", "paramitem",
  "module_proc_stmt", "proc_name_list", "use_stat", "module_name",
  "only_list", "only_name", "rename_list", "rename_name", "dims",
  "dimlist", "@1", "dim", "ubound", "labellist", "label", "implicit",
  "implist", "impitem", "imptype", "@2", "type_implicit", "letgroups",
  "letgroup", "letter", "inside", "in_dcl", "opt_double_colon",
  "funarglist", "funarg", "funargs", "subscript_list", "expr", "uexpr",
  "addop", "ident", "lhs", "array_ele_substring_func_ref",
  "structure_component", "array_element", "asubstring", "opt_substring",
  "substring", "opt_expr", "simple_const", "numeric_bool_const",
  "integer_constant", "string_constant", "complex_const", "kind",
  "triplet", "vec", "@3", "@4", "allocate_object", "allocation_list",
  "allocate_object_list", "stat_spec", "pointer_name_list", "exec",
  "do_while", "opt_while", "plain_do", "case", "case_selector",
  "case_value_range", "case_value_range_list", "opt_construct_name",
  "opt_unit_name", "construct_name", "construct_name_colon", "logif",
  "forall", "forall_list", "forall_expr", "opt_forall_cond", "do_var",
  "dospec", "dotarget", "whereable", "iffable", "let", "goto", "opt_comma",
  "call", "callarglist", "callarg", "stop", "end_spec", "intonlyon",
  "intonlyoff", "io", "iofmove", "fmkwd", "iofctl", "ctlkwd", "inquire",
  "infmt", "ioctl", "ctllist", "ioclause", "nameeq", "read", "write",
  "print", "inlist", "inelt", "outlist", "out2", "other", "in_ioctl",
  "start_ioctl", "fexpr", "unpar_fexpr", "cmnt", "dvm_specification",
  "dvm_exec", "dvm_template", "template_obj", "dvm_dynamic",
  "dyn_array_name_list", "dyn_array_name", "dvm_inherit",
  "dummy_array_name_list", "dummy_array_name", "dvm_shadow",
  "shadow_attr_stuff", "sh_width_list", "sh_width", "sh_array_name",
  "dvm_processors", "dvm_indirect_group", "indirect_group_name",
  "dvm_remote_group", "remote_group_name", "dvm_reduction_group",
  "reduction_group_name", "dvm_consistent_group", "consistent_group_name",
  "opt_onto", "dvm_distribute", "dvm_redistribute", "dist_name_list",
  "distributee", "dist_name", "pointer_ar_elem", "processors_name",
  "opt_dist_format_clause", "dist_format_clause", "dist_format_list",
  "opt_key_word", "dist_format", "array_name", "derived_spec",
  "derived_elem_list", "derived_elem", "target_spec", "derived_target",
  "derived_subscript_list", "derived_subscript", "dummy_ident",
  "opt_plus_shadow", "plus_shadow", "shadow_id", "shadow_width",
  "dvm_align", "dvm_realign", "realignee_list", "alignee", "realignee",
  "align_directive_stuff", "align_base", "align_subscript_list",
  "align_subscript", "align_base_name", "dim_ident_list", "dim_ident",
  "dvm_combined_dir", "dvm_attribute_list", "dvm_attribute", "dvm_pointer",
  "dimension_list", "@5", "pointer_var_list", "pointer_var", "dvm_heap",
  "heap_array_name_list", "heap_array_name", "dvm_consistent",
  "consistent_array_name_list", "consistent_array_name", "dvm_asyncid",
  "async_id_list", "async_id", "dvm_new_value", "dvm_parallel_on",
  "ident_list", "opt_on", "distribute_cycles", "par_subscript_list",
  "par_subscript", "opt_spec", "spec_list", "par_spec",
  "remote_access_spec", "consistent_spec", "consistent_group", "new_spec",
  "private_spec", "cuda_block_spec", "sizelist", "variable_list",
  "tie_spec", "tied_array_list", "indirect_access_spec", "stage_spec",
  "across_spec", "in_out_across", "opt_in_out", "dependent_array_list",
  "dependent_array", "dependence_list", "dependence", "section_spec_list",
  "section_spec", "ar_section", "low_section", "high_section", "section",
  "reduction_spec", "opt_key_word_r", "no_opt_key_word_r",
  "reduction_group", "reduction_list", "reduction", "reduction_op",
  "loc_op", "shadow_spec", "shadow_group_name", "shadow_list", "shadow",
  "opt_corner", "array_ident", "array_ident_list", "dvm_shadow_start",
  "dvm_shadow_wait", "dvm_shadow_group", "dvm_reduction_start",
  "dvm_reduction_wait", "dvm_consistent_start", "dvm_consistent_wait",
  "dvm_remote_access", "group_name", "remote_data_list", "remote_data",
  "remote_index_list", "remote_index", "dvm_task", "task_array",
  "dvm_task_region", "task_name", "dvm_end_task_region", "task", "dvm_on",
  "opt_new_spec", "dvm_end_on", "dvm_map", "dvm_prefetch", "dvm_reset",
  "dvm_indirect_access", "indirect_list", "indirect_reference",
  "hpf_independent", "hpf_reduction_spec", "dvm_asynchronous",
  "dvm_endasynchronous", "dvm_asyncwait", "async_ident", "async",
  "dvm_f90", "dvm_debug_dir", "debparamlist", "debparam",
  "fragment_number", "dvm_enddebug_dir", "dvm_interval_dir",
  "interval_number", "dvm_exit_interval_dir", "dvm_endinterval_dir",
  "dvm_traceon_dir", "dvm_traceoff_dir", "dvm_barrier_dir", "dvm_check",
  "dvm_io_mode_dir", "mode_list", "mode_spec", "dvm_shadow_add",
  "template_ref", "shadow_axis_list", "shadow_axis", "opt_include_to",
  "dvm_localize", "localize_target", "target_subscript_list",
  "target_subscript", "aster_expr", "dvm_cp_create", "opt_mode",
  "dvm_cp_load", "dvm_cp_save", "dvm_cp_wait", "dvm_template_create",
  "template_list", "dvm_template_delete", "omp_specification_directive",
  "omp_execution_directive", "ompdvm_onethread",
  "omp_parallel_end_directive", "omp_parallel_begin_directive",
  "parallel_clause_list", "parallel_clause", "omp_variable_list_in_par",
  "ompprivate_clause", "ompfirstprivate_clause", "omplastprivate_clause",
  "ompcopyin_clause", "ompshared_clause", "ompdefault_clause", "def_expr",
  "ompif_clause", "ompnumthreads_clause", "ompreduction_clause",
  "ompreduction", "ompreduction_vars", "ompreduction_op",
  "omp_sections_begin_directive", "sections_clause_list",
  "sections_clause", "omp_sections_end_directive", "omp_section_directive",
  "omp_do_begin_directive", "omp_do_end_directive", "do_clause_list",
  "do_clause", "ompordered_clause", "ompschedule_clause", "ompschedule_op",
  "omp_single_begin_directive", "single_clause_list", "single_clause",
  "omp_single_end_directive", "end_single_clause_list",
  "end_single_clause", "ompcopyprivate_clause", "ompnowait_clause",
  "omp_workshare_begin_directive", "omp_workshare_end_directive",
  "omp_parallel_do_begin_directive", "paralleldo_clause_list",
  "paralleldo_clause", "omp_parallel_do_end_directive",
  "omp_parallel_sections_begin_directive",
  "omp_parallel_sections_end_directive",
  "omp_parallel_workshare_begin_directive",
  "omp_parallel_workshare_end_directive", "omp_threadprivate_directive",
  "omp_master_begin_directive", "omp_master_end_directive",
  "omp_ordered_begin_directive", "omp_ordered_end_directive",
  "omp_barrier_directive", "omp_atomic_directive", "omp_flush_directive",
  "omp_critical_begin_directive", "omp_critical_end_directive",
  "omp_common_var", "omp_variable_list", "op_slash_1", "op_slash_0",
  "acc_directive", "acc_region", "acc_checksection", "acc_get_actual",
  "acc_actual", "opt_clause", "acc_clause_list", "acc_clause",
  "data_clause", "targets_clause", "async_clause", "acc_var_list",
  "computer_list", "computer", "acc_end_region", "acc_end_checksection",
  "acc_routine", "opt_targets_clause", "spf_directive", "spf_analysis",
  "spf_parallel", "spf_transform", "spf_parallel_reg",
  "characteristic_list", "characteristic", "opt_clause_apply_fragment",
  "opt_clause_apply_region", "spf_end_parallel_reg", "analysis_spec_list",
  "analysis_spec", "analysis_reduction_spec", "analysis_private_spec",
  "analysis_parameter_spec", "spf_parameter_list", "spf_parameter",
  "parallel_spec_list", "parallel_spec", "parallel_shadow_spec",
  "parallel_across_spec", "parallel_remote_access_spec",
  "transform_spec_list", "transform_spec", "region_name",
  "array_element_list", "spf_checkpoint", "checkpoint_spec_list",
  "checkpoint_spec", "spf_type_list", "spf_type", "interval_spec", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   352,   353,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   354,   355
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   356,   357,   357,   358,   358,   358,   358,   358,   358,
     358,   359,   360,   360,   360,   360,   360,   360,   360,   360,
     361,   362,   362,   362,   363,   364,   365,   365,   365,   365,
     366,   366,   367,   368,   368,   369,   369,   370,   370,   370,
     371,   371,   372,   372,   373,   374,   375,   376,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   378,   378,   378,
     378,   378,   379,   380,   380,   381,   381,   381,   381,   381,
     381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
     381,   381,   381,   382,   382,   383,   383,   384,   384,   385,
     385,   385,   386,   386,   387,   387,   387,   387,   387,   387,
     387,   387,   387,   387,   387,   387,   388,   388,   388,   389,
     389,   390,   390,   391,   391,   392,   392,   393,   393,   394,
     395,   396,   396,   397,   398,   398,   399,   400,   400,   401,
     401,   402,   403,   403,   403,   403,   403,   403,   403,   404,
     404,   405,   405,   405,   406,   406,   406,   406,   407,   407,
     407,   407,   408,   409,   409,   409,   410,   410,   411,   411,
     412,   412,   413,   413,   414,   414,   414,   414,   415,   415,
     415,   416,   417,   417,   418,   419,   419,   420,   420,   421,
     421,   422,   423,   423,   424,   424,   424,   425,   426,   426,
     427,   428,   429,   430,   430,   431,   431,   432,   432,   432,
     432,   432,   433,   434,   435,   436,   437,   438,   438,   439,
     439,   440,   441,   441,   442,   442,   442,   442,   443,   443,
     443,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   445,   446,   446,   446,   447,   447,   448,   448,
     448,   449,   449,   449,   449,   450,   451,   451,   452,   452,
     452,   452,   452,   453,   453,   453,   454,   454,   455,   455,
     455,   456,   456,   457,   457,   458,   458,   459,   460,   461,
     461,   461,   462,   462,   463,   464,   465,   465,   466,   466,
     466,   466,   467,   468,   468,   469,   469,   470,   470,   471,
     472,   472,   474,   473,   473,   475,   475,   475,   475,   476,
     476,   477,   477,   478,   479,   479,   480,   480,   481,   483,
     482,   484,   484,   485,   485,   486,   486,   487,   488,   489,
     490,   490,   491,   491,   492,   492,   492,   493,   493,   494,
     494,   495,   495,   495,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   497,
     497,   498,   499,   499,   499,   500,   500,   500,   500,   501,
     502,   502,   502,   502,   503,   504,   504,   505,   506,   506,
     507,   507,   507,   507,   507,   508,   508,   508,   508,   509,
     510,   510,   510,   511,   512,   512,   513,   513,   513,   513,
     513,   513,   513,   513,   515,   516,   514,   517,   517,   518,
     518,   518,   519,   519,   519,   520,   521,   521,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   523,   523,   524,   524,   524,   525,   525,   526,
     526,   526,   526,   526,   527,   528,   528,   528,   528,   529,
     529,   530,   530,   531,   531,   532,   533,   534,   535,   536,
     536,   537,   538,   538,   539,   540,   540,   541,   541,   542,
     542,   542,   542,   542,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   544,   545,   545,   545,   545,   546,   546,   547,
     548,   548,   549,   549,   549,   550,   550,   551,   552,   553,
     554,   554,   554,   554,   554,   554,   554,   554,   554,   554,
     554,   554,   554,   554,   555,   556,   556,   556,   557,   558,
     558,   559,   559,   560,   560,   561,   561,   562,   562,   563,
     563,   563,   563,   563,   563,   564,   565,   566,   567,   567,
     568,   568,   569,   569,   570,   570,   570,   571,   571,   571,
     571,   571,   571,   572,   572,   572,   572,   572,   573,   574,
     575,   575,   576,   576,   576,   576,   576,   576,   576,   576,
     576,   577,   577,   578,   578,   578,   578,   578,   578,   578,
     578,   578,   578,   578,   578,   578,   578,   578,   578,   578,
     578,   578,   579,   579,   579,   579,   579,   579,   579,   579,
     579,   579,   579,   579,   579,   579,   579,   579,   579,   579,
     579,   579,   579,   579,   579,   579,   579,   579,   579,   579,
     579,   579,   579,   579,   579,   579,   579,   579,   579,   579,
     579,   579,   579,   579,   579,   579,   580,   580,   581,   582,
     583,   583,   584,   585,   586,   586,   587,   588,   589,   590,
     590,   591,   591,   591,   592,   593,   593,   593,   594,   594,
     595,   596,   596,   597,   598,   598,   599,   600,   600,   601,
     602,   602,   603,   604,   604,   605,   605,   606,   606,   607,
     608,   609,   610,   610,   611,   612,   612,   613,   614,   614,
     614,   614,   614,   614,   614,   614,   615,   616,   617,   617,
     618,   618,   619,   619,   620,   621,   621,   622,   622,   622,
     623,   624,   624,   625,   625,   626,   627,   627,   628,   629,
     629,   630,   630,   631,   632,   633,   634,   635,   635,   636,
     636,   636,   637,   638,   638,   639,   639,   639,   640,   640,
     641,   641,   642,   642,   642,   642,   642,   642,   642,   642,
     642,   642,   642,   643,   645,   644,   644,   646,   646,   647,
     648,   649,   649,   650,   651,   652,   652,   653,   654,   654,
     655,   655,   656,   657,   658,   659,   659,   660,   660,   661,
     662,   662,   663,   663,   664,   664,   665,   665,   666,   666,
     666,   666,   666,   666,   666,   666,   666,   666,   666,   667,
     667,   668,   668,   669,   670,   670,   671,   672,   673,   673,
     673,   674,   674,   675,   676,   676,   677,   677,   678,   679,
     679,   680,   681,   681,   681,   682,   682,   683,   683,   683,
     684,   684,   685,   686,   686,   687,   687,   687,   687,   687,
     687,   687,   688,   689,   690,   691,   692,   692,   692,   693,
     694,   695,   696,   696,   697,   697,   698,   698,   698,   698,
     698,   698,   698,   698,   698,   699,   699,   700,   700,   700,
     700,   700,   701,   702,   702,   703,   703,   703,   703,   704,
     705,   706,   706,   707,   707,   708,   708,   709,   710,   711,
     712,   713,   714,   714,   715,   716,   716,   717,   717,   718,
     718,   719,   719,   720,   720,   721,   722,   722,   722,   722,
     722,   723,   724,   725,   725,   726,   727,   727,   728,   729,
     729,   730,   731,   732,   732,   733,   733,   734,   734,   735,
     735,   735,   735,   736,   737,   738,   739,   740,   741,   741,
     742,   743,   743,   744,   744,   745,   746,   747,   748,   749,
     749,   750,   751,   752,   753,   754,   755,   756,   757,   757,
     758,   758,   758,   759,   760,   761,   761,   762,   762,   763,
     763,   764,   765,   765,   766,   766,   767,   767,   768,   769,
     770,   770,   770,   771,   772,   772,   773,   774,   775,   775,
     776,   777,   778,   778,   778,   778,   778,   778,   778,   778,
     778,   778,   778,   778,   778,   778,   778,   778,   778,   778,
     778,   778,   778,   778,   778,   778,   778,   778,   779,   780,
     781,   781,   782,   782,   783,   783,   783,   783,   783,   783,
     783,   783,   783,   784,   785,   786,   787,   788,   789,   790,
     791,   791,   791,   792,   793,   794,   795,   796,   797,   797,
     797,   797,   797,   797,   797,   797,   797,   797,   797,   797,
     797,   797,   798,   798,   799,   799,   800,   800,   800,   800,
     801,   801,   802,   803,   803,   804,   804,   805,   805,   806,
     806,   806,   806,   806,   806,   807,   808,   808,   809,   809,
     809,   809,   810,   810,   811,   811,   812,   812,   813,   813,
     814,   814,   815,   815,   816,   817,   818,   819,   819,   820,
     820,   821,   821,   822,   822,   822,   822,   822,   822,   822,
     822,   822,   822,   822,   823,   824,   824,   825,   826,   826,
     827,   828,   829,   830,   831,   832,   833,   834,   835,   835,
     836,   836,   837,   837,   838,   839,   839,   839,   839,   840,
     841,   842,   842,   842,   842,   842,   842,   842,   843,   844,
     845,   845,   845,   846,   846,   846,   847,   847,   848,   848,
     849,   849,   849,   850,   850,   850,   850,   850,   851,   852,
     853,   854,   854,   855,   855,   856,   857,   858,   859,   859,
     860,   860,   860,   860,   860,   860,   861,   862,   863,   864,
     864,   864,   865,   865,   866,   867,   867,   868,   868,   869,
     870,   870,   871,   871,   871,   872,   873,   874,   875,   875,
     876,   877,   877,   878,   878,   878,   879,   880,   881,   882,
     882,   883,   883,   883,   883,   883,   884,   885,   885,   886,
     887,   887,   888,   888,   888,   888,   888,   889,   889,   890,
     890,   891,   891
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     3,     3,     3,     3,     2,     1,
       1,     1,     3,     3,     4,     5,     5,     3,     4,     3,
       0,     2,     2,     2,     1,     1,     4,     5,     4,     5,
       2,     5,     1,     0,     1,     0,     1,     0,     2,     3,
       1,     3,     1,     1,     1,     0,     0,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     2,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     5,
       5,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     7,     2,     3,     7,     6,     0,
       2,     5,     1,     4,     1,     1,     1,     2,     1,     4,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     1,
       1,     7,     3,     4,     3,     4,     3,     2,     5,     0,
       2,     2,     5,     0,     4,     5,     0,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     5,     6,     6,     0,     1,     5,     9,     1,     1,
       2,     2,     0,     0,     2,     2,     5,     4,     4,     3,
       4,     3,     4,     3,     3,     4,     5,     3,     4,     5,
       3,     3,     1,     3,     2,     4,     3,     4,     3,     3,
       3,     3,     3,     3,     1,     4,     1,     1,     4,     3,
       0,     0,     4,     1,     3,     1,     3,     2,     3,     3,
       4,     2,     0,     1,     1,     3,     5,     1,     3,     0,
       1,     7,     1,     3,     2,     2,     3,     1,     1,     4,
       3,     2,     1,     1,     1,     1,     3,     1,     3,     1,
       1,     6,     1,     1,     2,     2,     1,     3,     1,     2,
       2,     1,     3,     1,     3,     5,     1,     1,     1,     2,
       2,     3,     3,     1,     3,     3,     1,     3,     1,     1,
       3,     1,     3,     1,     1,     3,     5,     0,     0,     1,
       4,     4,     1,     3,     3,     2,     1,     3,     3,     6,
       6,     7,     1,     1,     3,     1,     1,     1,     3,     3,
       0,     3,     0,     2,     3,     1,     1,     2,     3,     1,
       1,     1,     3,     1,     3,     1,     1,     3,     4,     0,
       2,     2,     1,     1,     3,     1,     3,     1,     0,     0,
       0,     2,     0,     1,     1,     1,     2,     2,     4,     1,
       3,     1,     3,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     1,
       1,     1,     1,     1,     1,     5,     6,     4,     5,     3,
       1,     1,     5,     4,     2,     0,     1,     5,     0,     1,
       1,     3,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     3,     3,     5,     1,     1,     3,     2,     5,     4,
       4,     3,     2,     1,     0,     0,     6,     1,     1,     1,
       4,     5,     1,     4,     5,     0,     1,     3,     1,     1,
       1,     2,     3,     3,     2,     1,     2,     2,     2,     3,
       7,     3,     3,     1,     2,     2,     1,     2,     3,     1,
       1,     1,     5,     7,     0,     6,     4,    11,    13,     4,
       3,     3,     7,     8,     3,     1,     2,     2,     3,     1,
       3,     0,     1,     0,     1,     1,     2,     5,     6,     1,
       3,     3,     0,     2,     1,     5,     7,     0,     1,     3,
       3,     6,     5,     6,     4,     5,     5,     2,     1,     1,
      10,     1,     3,     4,     3,     3,     3,     3,     6,     6,
       5,     8,     2,     3,     3,     7,     7,     0,     1,     4,
       2,     4,     1,     2,     2,     1,     1,     0,     0,     0,
       2,     2,     2,     2,     2,     1,     2,     2,     3,     4,
       2,     3,     1,     3,     3,     1,     1,     1,     3,     1,
       1,     4,     5,     1,     1,     3,     3,     1,     4,     1,
       1,     1,     2,     2,     2,     1,     3,     3,     4,     4,
       1,     3,     1,     5,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     1,     3,     5,     5,     5,     0,     0,
       1,     3,     1,     1,     3,     3,     3,     3,     2,     3,
       3,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     2,     3,
       1,     3,     1,     3,     1,     3,     1,     4,     3,     1,
       3,     1,     3,     4,     1,     4,     4,     4,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     0,     5,     6,     8,     1,     3,     1,     1,     1,
       4,     1,     0,     2,     3,     2,     4,     0,     1,     5,
       4,     6,     4,     1,     4,     4,     1,     6,     1,     3,
       1,     3,     1,     4,     1,     1,     3,     1,     1,     3,
       1,     0,     1,     2,     3,     1,     2,     5,     4,     4,
       6,     1,     3,     1,     1,     6,     4,     1,     3,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     6,     4,
       1,     4,     1,     1,     1,     1,     4,     2,     7,     1,
       4,     1,     1,    11,     0,     2,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     8,
       1,     3,     2,     2,     7,     1,     3,     3,     1,     4,
       1,     3,     1,     1,     0,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     8,
       6,     8,     6,     1,     6,     6,     6,     6,     1,     3,
       5,     1,     3,     6,     1,     3,     8,     6,     6,     4,
       5,     5,     2,     2,     0,     1,     3,     1,     4,     7,
       1,     3,     3,     1,     3,     5,     3,     3,     1,     3,
       1,     1,     3,     3,     3,     3,    10,     8,    10,     0,
       0,     1,     2,     4,     4,     6,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     6,     4,     4,
       3,     9,     1,     1,     3,     1,     5,     5,     9,     0,
       1,     1,     3,     3,     3,     3,     3,     6,     3,     3,
       3,     3,     7,     5,     1,     1,     3,     4,     1,     1,
       3,     1,     1,     3,     3,     2,     3,     4,     4,     5,
       5,     1,     2,     4,     4,     4,     0,     1,     2,     7,
       6,     3,     3,     7,     5,     1,     3,     1,     4,     2,
       3,     3,     4,     6,     3,     2,     3,     1,     1,     4,
       5,     3,     6,     2,     4,     2,     1,     3,     3,     0,
       1,     3,     2,     2,     2,     2,     9,     5,     1,     3,
       2,     2,     2,     9,     4,     1,     3,     1,     1,     2,
       0,     7,     1,     4,     1,     3,     1,     1,     1,    16,
       0,     3,     3,     3,     3,     6,     9,     5,     1,     3,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       4,     3,     4,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     2,     2,     2,     2,     2,     5,
       1,     1,     1,     4,     4,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     4,     5,     1,     1,     1,     1,
       4,     3,     2,     4,     3,     4,     3,     4,     5,     1,
       1,     1,     1,     1,     1,     1,     7,     5,     1,     1,
       1,     1,     4,     3,     4,     5,     1,     1,     4,     3,
       4,     5,     1,     1,     2,     1,     2,     4,     3,     4,
       3,     4,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     3,     2,     4,     3,
       2,     3,     2,     2,     2,     2,     2,     2,     3,     2,
       5,     2,     5,     2,     5,     1,     1,     3,     3,     0,
       0,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       5,     4,     2,     5,     4,     2,     2,     1,     1,     3,
       2,     2,     2,     4,     4,     4,     4,     4,     4,     1,
       1,     1,     3,     2,     2,     1,     1,     3,     2,     2,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     2,
       9,     9,     1,     3,     2,     0,     6,     0,     6,     1,
       1,     3,     1,     1,     1,     5,     5,     5,     1,     3,
       3,     1,     3,     1,     1,     1,     5,     5,     5,     1,
       3,     2,     5,     2,     5,     5,     1,     1,     3,     4,
       1,     3,     5,     5,     5,     5,     7,     1,     3,     2,
       2,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,    10,    11,     9,     0,     0,     3,   150,
     149,   789,   339,   537,   537,   537,   537,   537,   339,   537,
     555,   537,    20,   537,   537,   158,   537,   560,   339,   154,
     537,   339,   537,   537,   339,   485,   537,   537,   537,   338,
     537,   782,   537,   537,   340,   791,   537,   155,   156,   785,
      45,   537,   537,   537,   537,   537,   537,   537,   537,   557,
     537,   537,   483,   483,   537,   537,   537,   339,   537,     0,
     537,   339,   339,   537,   537,   338,    20,   339,   339,   325,
       0,   537,   537,   339,   339,   537,   339,   339,   339,   339,
     152,   339,   537,   211,   537,   157,   537,   537,     0,    20,
     339,   537,   537,   537,   559,   339,   537,   339,   535,   537,
     537,   339,   537,   537,   537,   339,    20,   339,    45,   537,
     537,   153,    45,   537,   339,   537,   537,   537,   339,   537,
     537,   556,   339,   537,   339,   537,   537,   537,   537,   537,
     537,   339,   339,   536,    20,   339,   339,   537,   537,   537,
       0,   339,     8,   339,   537,   537,   537,   783,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   339,   537,   784,   537,  1225,   537,
    1226,   537,   537,   339,   537,   537,   537,   537,   537,   537,
     537,   537,     0,     0,     0,     0,  1249,     0,   611,     0,
      37,   611,    73,    48,    49,    50,    65,    66,    76,    68,
      69,    67,   109,    58,     0,   146,   151,    52,    70,    71,
      72,    51,    59,    54,    55,    56,    60,   207,    75,    74,
      57,   611,   445,   440,   453,     0,     0,     0,   456,   439,
     438,     0,   508,   511,   537,   509,     0,   537,     0,   537,
     545,     0,     0,   552,    53,   459,   613,   616,   622,   618,
     617,   623,   624,   625,   626,   615,   632,   614,   633,   619,
       0,   780,   620,   627,   629,   628,   660,   634,   636,   637,
     635,   638,   639,   640,   641,   642,   621,   643,   644,   646,
     647,   645,   649,   650,   648,   674,   661,   662,   663,   664,
     651,   652,   653,   655,   654,   656,   657,   658,   659,   665,
     666,   667,   668,   669,   670,   671,   672,   673,   631,   675,
     630,  1033,  1032,  1034,  1035,  1036,  1037,  1038,  1039,  1040,
    1041,  1042,  1043,  1044,  1045,  1046,  1047,  1048,  1031,  1049,
    1050,  1051,  1052,  1053,  1054,  1055,  1056,  1057,   460,  1191,
    1193,  1195,  1196,  1192,  1194,  1197,   461,  1230,  1231,  1232,
    1233,  1234,  1235,     0,     0,   340,     0,     0,     0,     0,
       0,     0,     0,   995,    35,     0,     0,   598,     0,     0,
       0,     0,     0,     0,   454,   507,   481,   210,     0,     0,
       0,   481,     0,   312,   339,   727,     0,   727,   538,     0,
      23,   481,     0,   481,   975,     0,   992,   483,   481,   481,
     481,    32,   484,    81,   444,   958,   481,   952,   105,   481,
      37,   481,     0,   340,     0,     0,    63,     0,     0,   329,
      44,     7,   969,     0,     0,     0,   599,     0,     0,    77,
     340,     0,   989,   522,     0,     0,     0,   296,   295,     0,
       0,   813,     0,     0,   340,     0,     0,   538,     0,   340,
       0,     0,     0,   340,    33,   340,    22,   599,     0,    21,
       0,     0,     0,     0,     0,     0,     0,   398,   340,    45,
     140,     0,     0,     0,     0,     0,     0,     0,     0,   787,
     340,     0,   340,     0,     0,   993,   994,     0,   339,   340,
       0,     0,     0,   599,     0,  1177,  1176,  1181,  1058,   727,
    1183,   727,  1173,  1175,  1059,  1164,  1167,  1170,   727,   727,
     727,  1179,  1172,  1174,   727,   727,   727,   727,  1112,   727,
     727,  1189,  1146,     0,    45,  1199,  1202,  1205,    45,     0,
       0,     0,     0,     0,     0,     0,     0,    45,    45,    45,
    1276,  1239,    45,   612,     4,    20,    20,     0,     0,    45,
       5,     0,     0,     0,     0,     0,    45,    20,     0,     0,
       0,   147,   164,     0,     0,     0,     0,   528,     0,   528,
       0,     0,     0,     0,   528,   222,     6,   486,   537,   537,
     446,   441,     0,   457,   448,   447,   455,    82,   172,     0,
       0,     0,   406,     0,   405,   410,   408,   409,   407,   381,
       0,     0,   351,   382,   354,   384,   383,   355,   400,   402,
     395,   353,   356,   598,   398,   542,   543,     0,   380,   379,
      32,     0,   602,   603,   540,     0,   600,   599,     0,   544,
     599,   564,   547,   546,   600,   550,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,   776,   777,   775,
       0,   773,   763,     0,     0,   435,     0,   323,     0,   524,
     977,   978,   974,    45,   310,   808,   810,   976,    36,    13,
     598,     0,   481,     0,   192,     0,   310,     0,   184,     0,
     709,   707,   843,   930,   931,   807,   804,   805,   482,   516,
     222,   435,   310,   676,   986,   981,   470,   341,     0,     0,
       0,     0,     0,   719,   722,   711,     0,   497,   682,   679,
     680,   451,     0,     0,   500,   987,   442,   443,   458,   452,
     471,   106,   499,    45,   517,     0,   199,     0,   382,     0,
       0,    37,    25,   803,   800,   801,   324,   326,     0,     0,
      45,   970,   971,     0,   700,   698,   686,   683,   684,     0,
       0,     0,    78,     0,    45,   990,   988,     0,     0,   951,
       0,    45,     0,    19,     0,     0,     0,     0,   956,     0,
       0,     0,   497,   523,     0,     0,   934,   961,   599,     0,
     599,   600,   139,    34,    12,   143,   576,     0,   764,     0,
       0,     0,   727,   706,   704,   891,   928,   929,     0,   703,
     701,   962,   399,   514,     0,     0,     0,   912,     0,   924,
     923,   926,   925,     0,   691,     0,   689,   694,     0,     0,
      37,    24,     0,   310,   943,   946,     0,    45,     0,   302,
     298,     0,     0,   577,   310,     0,   527,     0,  1116,  1111,
     527,  1148,  1178,     0,   527,   527,   527,   527,   527,   527,
    1171,   310,    46,  1198,  1207,  1208,     0,     0,    46,  1227,
      45,     0,  1023,  1024,     0,   991,   349,     0,     0,     0,
       0,  1250,  1252,  1253,  1254,     0,     0,  1261,  1263,  1264,
    1265,     0,     0,  1269,    45,     0,     0,  1280,     0,     0,
      20,    43,    38,    42,     0,    40,    17,    46,   310,   132,
     134,   136,   110,     0,     0,    20,   339,   148,   538,   598,
     165,   146,   310,   179,   181,   183,   187,   527,   190,   527,
     196,   198,   200,   209,     0,   213,     0,    45,     0,   449,
     424,     0,   351,   364,   363,   376,   362,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   598,     0,     0,   598,
       0,     0,   398,   404,   396,   512,     0,     0,   515,   570,
     571,   575,     0,   567,     0,   569,     0,   608,     0,     0,
       0,     0,     0,   554,   569,   558,     0,     0,   582,   548,
     580,     0,     0,   351,   353,   551,   586,   585,   553,   677,
     310,   699,   702,   705,   708,   310,   339,     0,   944,     0,
      45,   758,   178,     0,     0,     0,     0,     0,     0,   312,
     812,     0,   529,     0,   475,   479,     0,   469,   598,     0,
     194,   185,     0,   321,     0,   208,     0,   678,   598,     0,
     786,   319,   316,   313,   315,   320,   310,   727,   724,   733,
     728,     0,     0,     0,     0,     0,   725,   711,   727,     0,
     790,     0,   498,   539,     0,     0,     0,    18,   204,     0,
       0,     0,   206,   195,     0,   494,   492,   489,     0,    45,
       0,   329,     0,     0,   332,   330,     0,    45,   972,   381,
     920,   967,     0,     0,   965,     0,   561,     0,    87,    88,
      86,    85,    91,    90,   102,    95,    98,    97,   100,    99,
      96,   101,    94,    92,    89,    93,    83,     0,    84,   197,
       0,     0,     0,     0,     0,     0,   297,     0,   188,   436,
       0,    45,   957,   955,   133,   815,     0,     0,     0,   292,
     539,   180,     0,   579,     0,   578,   287,   287,     0,   759,
       0,   727,   711,   938,     0,     0,   935,   284,   283,    62,
     281,     0,     0,     0,     0,     0,     0,     0,   688,   687,
     135,    14,   182,   945,    45,   948,   947,   146,     0,   103,
      47,     0,     0,   695,     0,   727,   527,     0,  1145,  1115,
    1110,   727,   527,  1147,  1190,   727,   527,   727,   527,   527,
     527,   727,   527,   727,   527,   696,     0,     0,     0,     0,
    1219,     0,     0,  1206,  1210,  1212,  1211,    45,  1201,   851,
    1220,     0,  1204,     0,  1228,  1229,     0,     0,   998,    45,
      45,    45,     0,   390,   391,  1028,     0,     0,     0,     0,
       0,    45,  1236,     0,     0,     0,    45,  1237,  1271,  1273,
       0,     0,    45,  1238,     0,     0,     0,     0,     0,     0,
      45,  1279,    28,    37,     0,     0,    39,     0,    30,   159,
     116,   310,   339,   118,   120,     0,   121,   114,   122,   130,
     129,   123,   124,   125,     0,   112,   115,    26,     0,   310,
       0,     0,   144,   177,     0,     0,   222,   222,     0,   224,
     217,   221,     0,     0,     0,   352,     0,   359,   361,   358,
     357,   375,   377,   371,   365,   504,   368,   366,   369,   367,
     370,   372,   374,   360,   373,   378,   598,   411,   389,     0,
     343,     0,   414,   415,   401,   412,   403,     0,   598,   513,
       0,   532,   530,     0,   598,   566,   573,   574,   572,   601,
     610,   605,   607,   609,   606,   604,   565,   549,     0,     0,
       0,   351,     0,     0,     0,     0,     0,   697,   779,     0,
     789,   792,   782,     0,   791,   785,     0,   783,   784,   781,
     774,     0,   429,     0,     0,   506,     0,     0,     0,     0,
     811,   477,   476,     0,   474,     0,   193,     0,   527,   806,
     427,   428,   432,     0,     0,     0,   314,   317,   176,     0,
     598,     0,     0,     0,     0,     0,   712,   723,   310,   462,
     727,   681,     0,   481,     0,     0,   201,     0,   394,   980,
       0,     0,     0,    16,   802,   327,   337,     0,   333,   335,
     331,     0,     0,     0,     0,     0,     0,     0,   964,   685,
     562,    80,    79,   128,   126,   127,   340,     0,   487,   423,
       0,     0,     0,     0,   191,     0,   520,     0,     0,   727,
       0,     0,    64,   527,   505,   601,   138,     0,   142,    45,
       0,   711,     0,     0,     0,     0,   933,     0,     0,     0,
       0,     0,   913,   915,     0,   692,   690,     0,    45,   950,
      45,   949,   145,   340,     0,   502,     0,  1180,     0,   727,
    1182,     0,   727,     0,     0,   727,     0,   727,     0,   727,
       0,   727,     0,     0,     0,    45,     0,     0,     0,  1209,
       0,  1200,  1203,  1002,  1000,  1001,    45,   997,     0,     0,
       0,   350,   598,   598,     0,  1027,  1030,     0,     0,    45,
    1251,     0,     0,     0,  1262,     0,     0,     0,  1270,     0,
       0,    45,     0,     0,     0,    45,  1281,    15,    29,    41,
       0,   173,   160,   117,     0,    45,     0,    45,    27,   159,
     539,   539,   169,   172,   168,     0,   186,   189,   214,     0,
       0,     0,   247,   245,   252,   249,   263,   256,   261,     0,
       0,   215,   238,   250,   242,   253,   243,   258,   244,     0,
     237,     0,   232,   229,   218,   219,     0,     0,   425,   351,
       0,   387,   598,   347,   344,   345,     0,   398,     0,   534,
     533,     0,     0,   581,   352,     0,     0,     0,   351,   588,
     351,   592,   351,   590,   310,     0,   598,   518,     0,     0,
     979,     0,   311,   478,   480,   172,   322,     0,   598,   519,
       0,   983,   598,   982,   318,   320,   726,     0,     0,     0,
     736,     0,     0,     0,     0,   710,   464,   481,   501,     0,
     203,   202,   381,   493,   490,   488,     0,   491,     0,   328,
       0,     0,     0,     0,     0,     0,   966,     0,  1012,     0,
       0,   422,   417,   953,   954,   721,   310,   960,   437,   816,
     818,   824,   294,   293,     0,   287,     0,     0,   289,   288,
       0,   760,   761,   713,     0,   942,   941,     0,   939,     0,
     936,   282,     0,  1018,  1007,     0,  1005,  1008,   755,     0,
       0,   927,   919,   693,     0,     0,     0,     0,     0,   300,
       0,   299,   307,     0,  1189,     0,  1189,  1189,  1125,     0,
    1119,  1121,  1122,  1120,   727,  1124,  1123,     0,  1189,   727,
    1143,  1142,     0,     0,  1186,  1185,     0,     0,  1189,     0,
    1189,     0,   727,  1064,  1068,  1069,  1070,  1066,  1067,  1071,
    1072,  1065,     0,  1153,  1157,  1158,  1159,  1155,  1156,  1160,
    1161,  1154,  1163,  1162,   727,     0,  1106,  1108,  1109,  1107,
     727,     0,  1136,  1137,   727,     0,     0,     0,     0,     0,
       0,  1221,     0,     0,   852,   999,     0,  1025,     0,   598,
       0,  1029,     0,     0,  1258,     0,     0,     0,     0,     0,
       0,     0,     0,  1277,     0,    45,    45,     0,     0,  1287,
       0,     0,     0,     0,     0,     0,     0,     0,   108,   794,
       0,   111,     0,   173,     0,   146,     0,   171,   170,   267,
     253,   266,     0,   255,   260,   254,   259,     0,     0,     0,
       0,     0,   222,   212,   223,   241,     0,   222,   234,   235,
       0,     0,     0,     0,   278,   223,   279,     0,     0,   227,
     268,   273,   276,   229,   220,     0,   503,     0,   413,   385,
     388,     0,   346,     0,   531,   568,   569,     0,     0,   351,
       0,     0,     0,   778,   772,   788,     0,     0,     0,   525,
       0,   340,   526,     0,   985,     0,     0,     0,   740,     0,
     738,   735,   730,   734,   732,     0,    45,     0,   463,   450,
     205,   334,   336,     0,     0,     0,   968,   963,   131,     0,
    1011,   421,     0,     0,   416,   959,     0,    45,   814,   825,
     826,   831,   835,   828,   836,   837,   838,   832,   834,   833,
     829,   830,     0,     0,     0,     0,   285,     0,     0,     0,
       0,   937,   932,   472,     0,  1004,   727,   914,     0,     0,
     889,   104,   306,   301,   303,   305,     0,     0,     0,  1074,
     727,  1075,  1076,    45,  1117,   727,  1144,  1140,   727,  1189,
       0,  1073,    45,  1077,     0,  1078,     0,  1062,   727,  1151,
     727,  1104,   727,  1134,   727,  1213,  1214,  1215,  1223,  1224,
      45,  1218,  1216,  1217,     0,     0,     0,   393,     0,     0,
    1257,  1256,   901,   902,   903,   900,   905,   899,   906,   898,
     897,   896,   904,   892,     0,     0,    45,  1255,  1267,  1268,
    1266,  1274,  1272,     0,  1275,     0,     0,  1242,     0,  1289,
    1290,    45,  1282,  1283,  1284,  1285,  1291,  1292,     0,    31,
     175,   174,     0,     0,   119,   113,   107,     0,     0,   161,
     598,   166,     0,   248,   246,   264,   257,   262,   216,   222,
     598,     0,   240,   236,   223,     0,   233,     0,   270,   269,
       0,   225,   229,     0,     0,     0,     0,     0,   230,     0,
     426,   386,   348,   397,     0,   583,   595,   597,   596,     0,
     430,     0,     0,   809,     0,   433,     0,   984,   756,   729,
       0,     0,    45,     0,     0,     0,   844,   973,   845,  1017,
       0,  1014,  1016,   420,   419,     0,     0,   817,     0,   827,
       0,   288,     0,     0,   765,   762,   719,   714,   715,   717,
     718,   940,  1006,  1010,     0,     0,   381,     0,     0,     0,
       0,   309,   308,   521,     0,     0,     0,  1118,  1141,     0,
    1188,  1187,     0,     0,     0,  1063,  1152,  1105,  1135,  1222,
       0,     0,   392,  1260,  1259,     0,     0,     0,  1278,  1244,
      45,  1245,  1247,  1288,     0,     0,     0,   795,   162,   163,
       0,     0,   239,   598,   241,     0,   280,   228,     0,   272,
     271,   274,   275,   277,   473,     0,   770,   769,   771,     0,
     767,   431,     0,   996,   434,     0,   741,   739,     0,   731,
       0,     0,     0,  1013,   418,     0,     0,     0,     0,     0,
     910,     0,     0,     0,     0,     0,     0,     0,   286,   291,
     290,     0,     0,     0,  1003,   916,   917,     0,   842,   890,
     890,   304,  1090,  1089,  1088,  1095,  1096,  1097,  1094,  1091,
    1093,  1092,  1101,  1098,  1099,  1100,     0,  1085,  1129,  1128,
    1130,  1131,     0,  1190,  1080,  1082,  1081,     0,  1084,  1083,
       0,  1026,     0,     0,   893,  1243,    45,  1240,    45,  1241,
    1286,   796,     0,   172,   265,     0,     0,   227,   226,     0,
       0,   766,   510,     0,     0,     0,   466,  1015,   823,   822,
       0,   820,   727,   859,     0,     0,     0,     0,     0,   908,
     909,     0,     0,     0,     0,     0,   716,   921,  1009,    45,
       0,     0,     0,     0,     0,  1127,  1184,  1079,    45,   894,
       0,     0,     0,     0,     0,   251,   231,   495,   768,   757,
     744,   737,   742,     0,     0,   819,   864,   860,     0,     0,
       0,     0,     0,     0,     0,     0,   848,     0,   854,     0,
     467,   720,     0,     0,   841,    45,    45,   887,  1087,  1086,
       0,     0,     0,   354,     0,     0,   799,   793,   797,   167,
       0,     0,   465,   821,     0,     0,     0,     0,   857,   846,
       0,   840,     0,   907,   858,     0,   847,     0,   853,     0,
     922,     0,     0,     0,  1126,     0,   895,    45,    45,     0,
     496,     0,   747,     0,   745,   748,   862,   863,     0,   865,
     867,     0,     0,     0,   849,   855,   468,   918,   888,   886,
       0,     0,     0,   798,   750,   751,     0,   743,     0,   861,
       0,   856,   839,     0,     0,     0,  1246,  1248,     0,   749,
     752,   746,   866,     0,     0,   870,   911,   850,  1020,   753,
       0,     0,     0,   868,    45,  1019,   754,   872,   871,    45,
       0,     0,     0,   873,   878,   880,   881,  1021,  1022,     0,
       0,     0,    45,   869,    45,    45,   598,   884,   883,   882,
     874,     0,   876,   877,     0,   879,     0,    45,   885,   875
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     6,     7,   208,   384,   209,   840,   751,   210,
     916,   619,   804,   689,   569,   914,   915,   441,  2095,  1233,
    1524,   211,   212,   620,  1137,  1138,   213,   214,   215,   579,
    1304,  1305,  1141,  1306,   216,   217,   218,   219,  1166,   220,
     221,  1167,   222,   582,   223,   224,   225,   226,  1591,  1592,
     931,  1603,   950,  1878,   227,   228,   229,   230,   231,   232,
     785,  1177,  1178,   233,   234,   235,   746,  1089,  1090,   236,
     237,   710,   453,   943,   944,  1619,   945,   946,  1916,  1629,
    1634,  1635,  1917,  1918,  1630,  1631,  1632,  1621,  1622,  1623,
    1624,  1890,  1626,  1627,  1628,  1892,  2148,  1920,  1921,  1922,
    1179,  1180,  1496,  1497,  2006,  1739,  1158,  1159,   238,   458,
     239,   850,  2023,  2024,  1771,  2025,  1040,   718,   719,  1063,
    1064,  1052,  1053,   240,   756,   757,   758,   759,  1105,  1457,
    1458,  1459,   397,   374,   404,  1349,  1643,  1350,   885,  1012,
     622,   641,   623,   624,   625,   626,  1852,  1092,   983,  1930,
     823,   627,   628,   629,   630,   631,  1354,  1645,   632,  1324,
    1927,  1422,  1403,  1423,  1033,  1150,   241,   242,  1968,   243,
     244,   692,  1045,  1046,   709,   423,   245,   246,   247,   248,
    1096,  1097,  1451,  1937,  1938,  1083,   249,   250,   251,   252,
    1215,   253,   986,  1362,   254,   376,   727,  1440,   255,   256,
     257,   258,   259,   260,   652,   644,   992,   993,   994,   261,
     262,   263,  1009,  1010,  1015,  1016,  1017,  1351,   769,   645,
     801,   564,   264,   265,   266,   713,   267,   729,   730,   268,
     767,   768,   269,   499,   835,   836,   838,   270,   271,   765,
     272,   820,   273,   814,   274,   701,  1080,   275,   276,  2197,
    2198,  2199,  2200,  1726,  1077,   407,   721,   722,  1076,  1691,
    1754,  1959,  1960,  2411,  2412,  2483,  2484,  2505,  2519,  2520,
    1759,  1957,   277,   278,  1741,   673,   809,   810,  1945,  2269,
    2270,  1946,   670,   671,   279,   280,   281,   282,  2112,  2113,
    2447,  2448,   283,   754,   755,   284,   706,   707,   285,   685,
     686,   286,   287,  1156,  1731,  2187,  2370,  2371,  1988,  1989,
    1990,  1991,  1992,   703,  1993,  1994,  1995,  2427,  1240,  1996,
    2429,  1997,  1998,  1999,  2373,  2456,  2488,  2489,  2524,  2525,
    2542,  2543,  2544,  2545,  2546,  2557,  2000,  2209,  2391,   816,
    1857,  2083,  2084,  2085,  2001,   828,  1511,  1512,  2018,  1173,
    2388,   288,   289,   290,   291,   292,   293,   294,   295,   797,
    1175,  1176,  1747,  1748,   296,   844,   297,   780,   298,   781,
     299,  1153,   300,   301,   302,   303,   304,  1113,  1114,   305,
     762,   306,   307,   308,   681,   682,   309,   310,  1425,  1681,
     715,   311,   312,   776,   313,   314,   315,   316,   317,   318,
     319,  1247,  1248,   320,  1183,  1755,  1756,  2304,   321,  1719,
    2180,  2181,  1757,   322,  2535,   323,   324,   325,   326,  1256,
     327,   328,   329,   330,   331,   332,  1216,  1802,   862,  1780,
    1781,  1782,  1806,  1807,  1808,  2337,  1809,  1810,  1783,  2215,
    2439,  2326,   333,  1222,  1830,   334,   335,   336,   337,  1206,
    1784,  1785,  1786,  2332,   338,  1224,  1834,   339,  1212,  1789,
    1790,  1791,   340,   341,   342,  1218,  1824,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,  1795,  1796,   863,  1533,   358,   359,   360,   361,
     362,   873,   874,   875,  1234,  1235,  1236,  1241,  1840,  1841,
     363,   364,   365,   879,   366,   367,   368,   369,   370,  2096,
    2097,  2347,  2349,   371,   890,   891,   892,   893,   894,  1853,
    1854,   896,   897,   898,   899,   900,   902,   903,   561,  1864,
     372,   906,   907,  1868,  1869,  1874
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2235
static const yytype_int16 yypact[] =
{
   -2235,   180, -2235, -2235, -2235, -2235,    -4,  4944, -2235, -2235,
   -2235,   117, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,   841, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235,    34, -2235, -2235,   877,   145, -2235, -2235, -2235,    34,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235,    48,    48, -2235, -2235, -2235, -2235, -2235,    48,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
     124, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,    48, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235,   198, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
     214,   387, -2235, -2235, -2235, -2235, -2235,    34, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235,    34, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235,   299,   467,   578,    48, -2235,   629,   439,  1420,
     704,   439, -2235, -2235, -2235,   749,   760,   769,   801, -2235,
   -2235, -2235,   799,   830,    48, -2235, -2235,   906,   913,   917,
     924,   666,   275,   944,   948,   963, -2235,   109, -2235, -2235,
   -2235,   439, -2235, -2235, -2235,   974,   987,  1898,  2010, -2235,
   -2235,  1575, -2235,   945, -2235, -2235,  1293, -2235,   972, -2235,
   -2235,  1969,   972,   985, -2235, -2235,  1025, -2235, -2235, -2235,
    1061,  1065,  1070,  1077,  1086, -2235, -2235, -2235, -2235,  1088,
    1000, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235,  1096, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235,   169,    48,  1046,  1087,  1093,   979,    48,
      48,    90,    48, -2235,    48,    48,  1140, -2235,   121,  1152,
      48,    48,    48,    48, -2235, -2235,    48, -2235,  1156,    48,
    1003,    48,  1172, -2235, -2235, -2235,    48, -2235,  1166,    48,
   -2235,    48,  1217,   363, -2235,  1003, -2235,    48,    48,    48,
      48, -2235, -2235, -2235, -2235, -2235,    48, -2235,    48,    48,
     704,    48,  1219,  1046,    48,  1243, -2235,    48,    48, -2235,
   -2235, -2235,  1201,  1246,    48,    48, -2235,  1248,  1260,    48,
    1046,  1268,  1575, -2235,  1274,  1279,    48, -2235,  1209,    48,
    1206, -2235,  1285,    48,  1046,  1301,  1307, -2235,   979,  1046,
      48,    48,  2336,    83,    48,    92, -2235, -2235,   370, -2235,
     408,    48,    48,    48,  1310,    48,    48,  1575,   100, -2235,
   -2235,  1316,    48,    48,    48,    48,    48,  2618,    48, -2235,
    1046,    48,  1046,    48,    48, -2235, -2235,    48, -2235,  1046,
      48,  1318,  1322, -2235,    48, -2235, -2235,  1329, -2235, -2235,
    1332, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235,  1337, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235,    48, -2235, -2235,  1343,  1353, -2235,  1357,
    1575,  1575,  1575,  1575,  1575,  1377,  1381, -2235, -2235, -2235,
   -2235,  1259, -2235, -2235, -2235, -2235, -2235,  1187,   193, -2235,
   -2235,    48,    48,    48,    48,  1370, -2235, -2235,  1258,    48,
      48, -2235,   660,    48,    48,    48,    48,    48,   665,    48,
    1206,    48,    48,  1219, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235,  1160, -2235, -2235, -2235, -2235, -2235, -2235,  1575,
    1575,  1575, -2235,  1575, -2235, -2235, -2235, -2235, -2235, -2235,
    1575,  2977, -2235,    69,  1401, -2235,  1398, -2235,  1183,  1185,
    1421, -2235, -2235,  1387,  1575, -2235, -2235,  1841, -2235, -2235,
    1413,  1323,  1401, -2235, -2235,  1298,   -13, -2235,  1841, -2235,
   -2235, -2235,  1435,   458,    94,  2855,  2855,    48,    48,    48,
      48,    48,    48,    48,  1448, -2235,    48, -2235, -2235, -2235,
     626, -2235, -2235,  1442,    48, -2235,  1575, -2235,  1223,   683,
   -2235,  1452, -2235, -2235,  1467,  1465, -2235, -2235, -2235, -2235,
   -2235,  2692,    48,  1497, -2235,    48,  1467,    48, -2235,   979,
   -2235, -2235, -2235, -2235, -2235, -2235,  1508, -2235, -2235, -2235,
   -2235, -2235,  1467, -2235, -2235,  1503, -2235, -2235,   648,  1364,
      48,   721,   166, -2235,  1510,  1359,  1575,  1383, -2235,  1522,
   -2235, -2235,  1575,  1575, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235,    48, -2235,    48,  1536,   478,
      48,   704, -2235, -2235,  1545, -2235,  1549, -2235,  1548,   976,
   -2235,  1560, -2235,    48, -2235, -2235, -2235,  1567, -2235,   972,
    1551,  3141, -2235,    48, -2235,  5661, -2235,    48,  1575, -2235,
    1563, -2235,    48, -2235,    48,    48,    48,  1401,   839,    48,
      48,    48,  1383, -2235,    48,   465, -2235, -2235, -2235,  1323,
    1298, -2235, -2235, -2235, -2235, -2235, -2235,   169, -2235,  1442,
    1572,  1510, -2235, -2235, -2235, -2235, -2235, -2235,    48, -2235,
   -2235, -2235,  5661, -2235,   121,  1519,    48, -2235,  1568, -2235,
   -2235, -2235, -2235,  1573,  3255,   771, -2235, -2235,   198,    48,
     704, -2235,    48,  1467, -2235,  1576,  1566, -2235,    48, -2235,
    1586,  1575,  1575, -2235,  1467,    48,   181,    48,  1311,  1311,
     183,  1311, -2235,  1582,   229,   301,   316,   386,   395,   451,
   -2235,  1467,   977, -2235,  1593, -2235,   132,   210,  1289, -2235,
   -2235,  3479,  5661,  3510,  3541,  1597,  5661,    48,    48,   475,
     791, -2235, -2235, -2235, -2235,    97,   805, -2235, -2235, -2235,
   -2235,  1195,   806, -2235, -2235,   559,   808, -2235,    48,    48,
   -2235, -2235, -2235, -2235,   812, -2235, -2235,  1394,  1467, -2235,
   -2235, -2235, -2235,  1569,    48, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235,  1467, -2235, -2235, -2235, -2235,  1598, -2235,  1598,
   -2235, -2235, -2235, -2235,   433, -2235,   474, -2235,  1595, -2235,
   -2235,  3619,  1600,  1603,  1603,  1890, -2235,  1575,  1575,  1575,
    1575,  1575,  1575,  1575,  1575,  1575,  1575,  1575,  1575,  1575,
    1575,  1575,  1575,  1575,  1575,  1575, -2235,  1557,  1493,  1602,
     565,   548,  1575, -2235, -2235, -2235,   831,  1512, -2235, -2235,
   -2235, -2235,   836, -2235,  1752,  1094,  1575,  1615,  1323,  1323,
    1323,  1323,  1323, -2235,  1117, -2235,   458,   458,  1401,  1618,
   -2235,  2855,  5661,   165,   174, -2235,  1624,  1625, -2235, -2235,
    1467, -2235, -2235, -2235, -2235,  1467, -2235,   706, -2235,   169,
   -2235, -2235, -2235,    48,  3650,    48,  1619,  1575,  1570, -2235,
   -2235,    48, -2235,  1575,  3684, -2235,   842, -2235, -2235,  1599,
   -2235, -2235,   858, -2235,    48, -2235,    48, -2235, -2235,  1364,
   -2235, -2235, -2235, -2235, -2235,  3724,  1467, -2235, -2235, -2235,
    1627,  1628,  1629,  1631,  1632,  1634, -2235,  1359, -2235,    48,
   -2235,  3758, -2235, -2235,    48,  3800,  3842, -2235,  1636,   859,
    1647,  1421, -2235, -2235,    48, -2235,  1649, -2235,  1614, -2235,
      48, -2235,  1529,   728, -2235, -2235,    18, -2235, -2235,  1653,
   -2235,  1648,  1658,   879, -2235,    48,  2855,  1645, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235,  1650, -2235, -2235,
     491,  1651,  1652,  3903,  2725,   -88, -2235,  1637, -2235, -2235,
     894, -2235, -2235, -2235, -2235, -2235,   895,  1642,   905, -2235,
   -2235, -2235,  1575, -2235,  1228, -2235, -2235, -2235,   916, -2235,
    1662, -2235,  1359,  1660,  1666,   953, -2235, -2235, -2235,  1668,
   -2235,  1665,  1667,  1655,    48,  1575,  1575,  2618, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235,  1669,  1676, -2235,   952, -2235,
   -2235,  3989,  4020, -2235,  1664, -2235,   454,  1677, -2235, -2235,
   -2235, -2235,   459, -2235, -2235, -2235,   488, -2235,   524,   568,
     574, -2235,   588, -2235,   599, -2235,  1671,  1672,  1674,  1675,
   -2235,  1682,  1686, -2235, -2235, -2235, -2235, -2235, -2235,  1401,
    1694,  1684, -2235,  1685, -2235, -2235,   -51,   954, -2235, -2235,
   -2235, -2235,  1575,   724,   843, -2235,   955,   956,  1688,  1695,
    1696, -2235, -2235,  1700,  1702,  1706, -2235, -2235, -2235,  1707,
    1708,  1710, -2235, -2235,   876,  1714,  1722,  1723,  1729,  1731,
   -2235, -2235, -2235,   704,    48,   173, -2235,  1735, -2235,  1704,
   -2235,  1467, -2235, -2235, -2235,  1736, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235,  1271, -2235, -2235, -2235,    48,  1467,
     155,  1779, -2235, -2235,    48,    48, -2235,  1055,   474, -2235,
    1738, -2235,  1692,  1575,  2855, -2235,  1575,  1603,  1603,   608,
     608,  1890,   922,  2933,  2260,  5661,  2260,  2260,  2260,  2260,
    2260,  2933,  1711,  1603,  1711,  5692,  1602, -2235, -2235,  1737,
    1756,  2526, -2235, -2235, -2235, -2235, -2235,  1758, -2235, -2235,
     979,  5661, -2235,  1575, -2235, -2235, -2235, -2235,  5661,   127,
    5661,  1615,  1615,   931,  1615,   644, -2235,  1618,  1762,   458,
    4056,  1763,  1764,  1765,  2855,  2855,  2855, -2235, -2235,    48,
    1759, -2235, -2235,  1760,  1510, -2235,   198, -2235, -2235, -2235,
   -2235,  1523, -2235,   962,   979, -2235,   979,   978,  1770,   981,
   -2235,  5661,  1575,  2692, -2235,   984, -2235,   979,  1598, -2235,
     880,   926, -2235,  1014,  1616,  1022, -2235,  2344, -2235,   166,
   -2235,  1766,    48,    48,  1575,    48, -2235, -2235,  1467, -2235,
   -2235, -2235,  1541,    48,  1575,    48, -2235,    48, -2235,  1401,
    1575,  1769,  2725, -2235, -2235, -2235, -2235,  1026, -2235,  1767,
   -2235,  1776,  1777,  1782,  1590,  1575,    48,    48, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235,  1046,    48, -2235,  2795,
    3073,  1780,    48,    48, -2235,    48, -2235,   138,    48, -2235,
    1575,    48, -2235,  1598,  5661, -2235,  1792,   323,  1792, -2235,
      48,  1359,  1795,  2828,    48,    48, -2235,   121,  1575,   793,
    1575,  1029, -2235,  1788,  1030,  5661, -2235,    51, -2235, -2235,
   -2235, -2235, -2235,  1046,   400, -2235,    48, -2235,   579, -2235,
   -2235,    45, -2235,   159,   904, -2235,   668, -2235,   394, -2235,
     -80, -2235,    48,    48,    48, -2235,    48,    48,   977, -2235,
      48, -2235, -2235, -2235, -2235, -2235, -2235, -2235,  1474,  1492,
    1479,  5661, -2235,  1602,    48, -2235, -2235,    48,    48, -2235,
   -2235,    48,    48,    48, -2235,    48,    48,    48, -2235,  1796,
    1797, -2235,    48,    48,  1575, -2235, -2235, -2235, -2235, -2235,
      48,   847, -2235, -2235,  1799, -2235,  1810, -2235, -2235,  1704,
   -2235, -2235, -2235, -2235,  5661,  2382, -2235, -2235, -2235,   594,
     342,   342,  1574,  1577, -2235, -2235,  1601,  1605,  1606,   469,
      48, -2235, -2235, -2235, -2235,  1813, -2235, -2235, -2235,  1738,
   -2235,  1811, -2235,   140,  1806, -2235,  1807,  4087, -2235,  1824,
    1827,  1421, -2235, -2235,  4125, -2235,  1575,  1575,  1512, -2235,
    5661,  1841,   458, -2235,   207,  2855,  2855,  2855,   222, -2235,
     293, -2235,   493, -2235,  1467,    48, -2235, -2235,  1845,  1040,
   -2235,  1848, -2235,  5661, -2235, -2235, -2235,  1575, -2235, -2235,
    1575, -2235, -2235, -2235, -2235,  5661, -2235,  1616,  1575,  1838,
   -2235,  1839,  1843,  4162,  1854, -2235,   115,    48, -2235,  1044,
   -2235, -2235,  1840,  5661, -2235, -2235,  4125, -2235,  1529, -2235,
    1529,    48,    48,    48,  1066,  1071, -2235,    48,  1850,  1846,
    1575,  4220,  2887, -2235, -2235, -2235,  1467,  1401, -2235, -2235,
    1697,  1861,  5661, -2235,    48, -2235,  1864,  1865, -2235, -2235,
    1621,  1874, -2235, -2235,  1876, -2235,  5661,  1072, -2235,  1076,
   -2235, -2235,  4278, -2235, -2235,  1115, -2235, -2235,  5661,  1863,
      48, -2235, -2235, -2235,  1871,  1872,  1680,  1819,    48,    48,
    1875,  1884, -2235,   661, -2235,  1879, -2235, -2235, -2235,  1881,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235,   579, -2235, -2235,
   -2235, -2235,    45,    48, -2235, -2235,  1137,  1883, -2235,  1885,
   -2235,  1887, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235,   904, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235,   668, -2235, -2235, -2235, -2235,
   -2235,   394, -2235, -2235, -2235,   -80,  1882,  1888,  1893,   989,
    1141, -2235,  1896,  1902,  1401, -2235,  1909, -2235,  1910,  1602,
    1908, -2235,  1904,  1143, -2235,  1145,  1126,  1162,  1174,  1177,
    1194,  1198,  1202, -2235,  1204, -2235, -2235,  -143,  1205, -2235,
    1210,  1227,  4309,  1151,  1923,  1911,  1575,  1575, -2235, -2235,
    1913, -2235,  2376,   847,  2442, -2235,  1234, -2235,  5661, -2235,
   -2235, -2235,  1927, -2235, -2235, -2235, -2235,   565,   565,   565,
     565,   565,  1055, -2235,  1921,  1906,  1924,  1055,  1806, -2235,
     474,   140,   128,   128, -2235, -2235, -2235,  1251,  1931,  1498,
     258, -2235,  1932,   140, -2235,  1575, -2235,  1920, -2235,  1421,
   -2235,  2526,  5661,  1928, -2235, -2235,  1298,  1916,  1929,  1252,
    1933,  1934,  1935, -2235, -2235, -2235,  1937,   200,   979, -2235,
      48,  1046,  5661,   200,  5661,  1616,  1575,  1936,  4364,  1269,
   -2235, -2235, -2235, -2235, -2235,  1575, -2235,  1943, -2235, -2235,
   -2235, -2235, -2235,  1278,  1296,  1315, -2235, -2235, -2235,   511,
   -2235,  5661,  1575,  1575,  4422, -2235,    48, -2235, -2235,  1861,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235,  1922,   323,  1940,  3141, -2235,    48,    48,    48,
    2828, -2235, -2235, -2235,   793, -2235, -2235, -2235,  2587,    48,
   -2235, -2235,  1875,  1952, -2235, -2235,    48,    48,  1575, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
     159, -2235, -2235, -2235,  1575, -2235,  1575, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235,    48,    48,  1941,   975,  1575,    48,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235,  1946,  1948, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235,    48, -2235,  1620,  1324, -2235,  1334, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,  1575, -2235,
    5661,  5661,  1335,  1961, -2235, -2235, -2235,  1955,  4482, -2235,
   -2235, -2235,   594, -2235, -2235, -2235, -2235, -2235, -2235,  1055,
   -2235,    48, -2235, -2235,  1963,  1956, -2235,  1047,   258,   258,
     140, -2235,   140,   128,   128,   128,   128,   128,  1491,  4527,
   -2235, -2235, -2235, -2235,  1575, -2235, -2235, -2235, -2235,  2011,
   -2235,    48,  1979,  1465,    48, -2235,    48, -2235,  4558, -2235,
    1575,  1575, -2235,  4592,  1739,  1575, -2235, -2235, -2235, -2235,
    1340, -2235, -2235,  5661,  5661,  1575,  1976, -2235,  1045, -2235,
    1575, -2235,  1973,  1974, -2235, -2235,  1982,  1990, -2235, -2235,
   -2235, -2235, -2235,  1867,  1980,  1341,  1993,  1996,  1345,   866,
      48, -2235, -2235,  5661,   613,  1983,    -2, -2235, -2235,  1971,
   -2235, -2235,   306,  4623,  4679, -2235, -2235, -2235, -2235, -2235,
    1355,  1985,  1011,  5661, -2235,    48,    48,  1126, -2235, -2235,
   -2235,  2001,  2004, -2235,  4942,  2007,  2008, -2235, -2235, -2235,
    1779,  1998, -2235,  1602, -2235,   140, -2235,  1491,  1999,   258,
     258, -2235, -2235, -2235, -2235,  5277, -2235,  4125, -2235,  1362,
   -2235, -2235,   979,  1694, -2235,  1616,  5661, -2235,  1768, -2235,
    2002,  5317,   511, -2235,  5661,  2493,  2009,  2015,  2016,  2017,
    2019,  2020,    48,    48,  2024,  2025,  2026,  5348, -2235, -2235,
   -2235,  1575,    48,    48, -2235, -2235,  2028,    48, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235,  2037, -2235, -2235, -2235,
   -2235, -2235,  1367, -2235, -2235, -2235, -2235,  2027, -2235, -2235,
    2014, -2235,   519,  2038, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235,  2042, -2235, -2235,  2036,  1385,  1491, -2235,  1575,
    2011, -2235, -2235,  1575,    48,  1575, -2235, -2235, -2235,  5661,
    1393, -2235, -2235,  2009,    48,    48,    48,    48,    48, -2235,
   -2235,  1575,  1575,    48,  1575,  1395, -2235, -2235,  2052, -2235,
    1402,  2055,  1417,    48,  1575, -2235, -2235, -2235, -2235, -2235,
    1575,  1712,  1715,    48,  2044, -2235, -2235,  5379, -2235,  5661,
   -2235, -2235,  2054,  5410,  2493, -2235,   347, -2235,  2060,  1419,
    1424,  2063,  1425,  2058,  1427,  5441,  5472,  2056, -2235,  1429,
    5503, -2235,    48,  2000, -2235, -2235, -2235, -2235,  1694, -2235,
    5534,  1751,  5565,  1007,  2066,  2068, -2235,  2077, -2235, -2235,
    1575,  2119, -2235, -2235,  2083,  2085,    48,    48, -2235, -2235,
      48, -2235,  2618, -2235, -2235,  1575, -2235,    48, -2235,  1575,
   -2235,  2073,  1433,  1439, -2235,  2081, -2235, -2235, -2235,    48,
    5661,    48,  5661,  1443, -2235, -2235, -2235, -2235,  1450, -2235,
    2082,  1453,  1454,  1458,  5596, -2235,  5661, -2235, -2235, -2235,
    1575,  1476,  1477, -2235, -2235,  2084,  2119, -2235,    48, -2235,
    1575, -2235, -2235,  2078,  1575,  1481, -2235, -2235,  1575,  2093,
   -2235, -2235, -2235,  5630,  1482, -2235, -2235,  5661,  2092, -2235,
    1575,  1575,  1575,  2096, -2235, -2235, -2235,  5661, -2235, -2235,
     -34,   513,  1483, -2235,  2108,  2109, -2235, -2235, -2235,  2102,
    2102,  2102, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235,   411,  2113, -2235,  1995, -2235,  1488, -2235, -2235, -2235
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2235, -2235, -2235, -2235, -2235,    -3,  1899,  1218, -2235, -2235,
    -673,   -38, -2235, -2235,  -387, -2235,   846, -2235,   -50,  -727,
   -2235, -2235, -2235,  2257,   123, -2235, -2235, -2235, -2235, -2235,
   -2235,   244,   537,   940, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235,  -170,  -901, -2235, -2235, -2235,  1036,   542,  1561,
   -2235,  -108, -1571,   261, -2235, -2235, -2235, -2235, -2235, -2235,
    1555,  -294,  -314, -2235, -2235, -2235,  1554, -2235,  -554, -2235,
   -2235, -2235, -2235,  1438, -2235, -2235,   834, -1276, -1551,  1211,
     523, -1543,   -99,    16,  1215, -2235,   253,   262, -1819, -2235,
   -1558, -1234, -1557,   -61, -2235,    43, -1583, -1389,  -972, -2235,
   -2235,   659,  1001,   432,   -22,   170, -2235,   684, -2235, -2235,
   -2235, -2235, -2235,   -36, -2235, -1467,  -340,  1138, -2235,  1120,
     754,   776,  -375, -2235, -2235,  1083, -2235, -2235, -2235, -2235,
     477,   479,  2112,   134,  -355, -1298,   257,  -365, -1019,   867,
    -550,  -608,  1903,   693,  1730,  -872,  -864, -2235, -2235,  -617,
    -615,  -240, -2235,  -880, -2235,  -601,  -955, -1136, -2235, -2235,
   -2235,   239, -2235, -2235,  1484, -2235, -2235,  1951, -2235,  1953,
   -2235, -2235,   788, -2235,  -384,     2, -2235, -2235,  1957,  1958,
   -2235,   752, -2235,  -722,  -115,  1414, -2235,  1308, -2235, -2235,
     -28, -2235,  1157,   560, -2235,  4745,  -411, -1080, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235,  -200, -2235,   558,  -949, -2235,
   -2235, -2235,   553, -1304,  -623,  1199,  -935,  -385,  -313,  -401,
     775,   421, -2235, -2235, -2235,  1556, -2235, -2235,  1130, -2235,
   -2235,  1100, -2235,  1378, -1952,  1033, -2235, -2235, -2235,  1562,
   -2235,  1571, -2235,  1565, -2235,  1579, -1013, -2235, -2235, -2235,
     -79,    72, -2235, -2235, -2235,  -398, -2235,  -400,   798,  -345,
     797, -2235,    58, -2235, -2235, -2235,  -284, -2235, -2235, -2235,
   -1620, -2235, -2235, -2235, -2235, -2235, -1437,  -523,   225, -2235,
    -127, -2235,  1431,  1216, -2235, -2235,  1207, -2235, -2235, -2235,
   -2235,  -235, -2235, -2235,  1146, -2235, -2235,  1193, -2235,   300,
    1208, -2235, -2235,  -835, -2235, -2234, -2235,  -163, -2235, -2235,
     263, -2235,  -768,  -388,  -361, -2235, -2235, -2235, -1458, -2235,
   -2235, -2235, -2235, -2235,  -120, -2235, -2235,  -252, -2235,  -274,
   -2235,  -293, -2235,  -292, -1765,  -989,  -766, -2235,   -43,  -477,
    -869, -1582, -2235, -2235, -2235,  -484, -1527,   512, -2235,  -749,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,  -485,
   -1464,   766, -2235,   264, -2235,  1607, -2235,  1771, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -1444,   811, -2235,
    1520, -2235, -2235, -2235, -2235,  1900, -2235, -2235, -2235,   329,
    1878, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235,   730, -2235, -2235, -2235,   273, -2235, -2235, -2235,
   -2235,    13, -1890, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235,   705,   487,  -536,  -957,
    -950, -1341, -1451, -1439, -1421, -2235, -1420, -1411, -1217, -2235,
   -2235, -2235, -2235, -2235,   471, -2235, -2235, -2235, -2235, -2235,
     516, -1410, -1409, -2235, -2235, -2235,   470, -2235, -2235,   508,
   -2235,   662, -2235, -2235, -2235, -2235,   481, -2235, -2235, -2235,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235,
   -2235, -2235,   267, -2235,   265,   -25, -2235, -2235, -2235, -2235,
   -2235, -2235, -2235,  1073, -2235,  1434, -2235,  -810, -2235,   249,
   -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -2235, -1817,
      73, -2235, -2235, -2235, -2235,  1053, -2235, -2235, -2235, -2235,
     246, -2235,  1050, -2235, -2235, -2235, -2235,  1049, -2235, -2235,
   -2235, -2235,  1038, -2235,   221, -2235
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1190
static const yytype_int16 yytable[] =
{
     410,   821,   693,   678,   704,   870,   817,   725,  1481,   829,
     830,   831,   832,   984,  1111,  1254,   643,   716,  1407,   988,
     674,   643,  1715,  1255,   422,   422,  1356,   731,  1098,   734,
    1312,   430,  1886,  1018,   737,   738,   739,  1002,  1363,   567,
    1749,  1620,   740,   743,  1858,   742,  1860,   744,  1640,  2098,
    1919,  1889,  1891,  1257,  1014,  1014,   792,  1772,   649,   952,
     457,   653,   655,  1742,  1436,   424,  2205,  1243,   476,  1905,
    1087,   800,   479,   437,   698,  1653,  1383,  1195,   747,  1196,
    1493,   761,   812,  1625,   976,  1816,  1909,  1482,  2132,  2182,
     402,  1924,  2328,   793,   697,   773,   459,  1817,   683,   402,
    1353,  1353,  -563,  -541,  1951,  1013,  1013,   402,  1859,   789,
    1855,  1774,     8,   474,   794,  1818,  1819,   594,   802,   856,
     805,   858,  1764,  1966,  -527,  1820,  1822,  1823,   859,   860,
     861,  1553,   373,   824,   864,   865,   866,   867,  1263,   868,
     869,   501,  -565,  1911,   694,   839,   375,   842,  2547,  2428,
    1031,  1244,   381,  1238,   848,  1911,  1912,  1913,   695,  1502,
     405,  1254,   388,  -339,   806,   390,  1514,   560,   393,  1402,
    1600,  1069,  2099,  1384,   667,   399,   668,   421,   911,   406,
       2,     3,  -593,   409,  1421,  -584,   581,  1461,   440,   594,
    1288,   594,  1002,  1805,  -593,  1815,  1793,  1828,   911,  -137,
     853,   428,  1776,   588,   590,   432,   433,  2100,  -141,   595,
    -563,   438,   439,   497,   912,  -594,   -61,   444,   445,   421,
     447,   448,   449,   450,  1070,   451,  1462,  -594,  2329,   507,
    -587,  1242,   643,  2495,   460,  1483,   995,   594,  -527,   464,
     997,   466,  -587,  -565,  -541,   469,  -339,  1004,   987,   473,
     421,   475,  1071,  1973,  1974,  1975,  -565,   421,   481,  1765,
     921,   421,   485,  2145,  1554,  1850,   488,  1555,   490,   421,
     933,   934,   935,   936,  -339,   498,   500,  1914,  1112,   502,
     503,  -584,  2330,   589,  2548,   509,  1169,   510,   421,  1914,
    -593,   514,  1072,  2331,   937,  2146,  1522, -1114,   421, -1139,
    1463,  -591,   421,  1073,   617,  1042,  1264,  1461,  1047,   594,
    2252,  1788,  -527,  -591,   557,   977,  1707,  1811,   541,  1821,
     543,  1829,   421,  -594,   594,  1265,  1078,   548,  2137,   421,
       4,  1074,  1208,  1174,  1003,   669,   672,  1005,  -587,   421,
    -137,   679,   680,   684,   680, -1061,   688,   690,  1653,  -141,
     696,  -563,   700,   702,   702,   705,  1050,   -61,   708,  2135,
    1032,   712,  1605,   708,  1099,  2133,   991,  1357,   723,  1967,
    1736,   728,  1057,   708,  1816,   708,  1893,  1895,   733,   422,
     708,   708,   708,  1051,  -565,   807,  1817,  1002,   708,  1002,
     741,   708,  2182,   708,   594,   508,  1002,   643,  1164,   752,
     753,   643,  1646,   594,  1818,  1819,   764,   766,   643,  -591,
    1014,   772,  1172,  1171,  1820,  1822,  1823, -1150,   779,   736,
    1463,   783,  -584,   405,  1075,  1699,  1453,  1152,  1521,  1519,
    1601,  -593, -1166,   796,  1616,  1513,   803,     5, -1114,   825,
   -1139,  1316,   723,   813,   815,   815,  1714,   819,   796,  1659,
    1661,  1663,   421,  1191,   827,   827,   827,   827,   827,   594,
     837,  1381,   594,   841,  -594,   843,   779,   594,   978,   846,
    1317,  1805,   849,  1007,  1448,  1680,   854,  1902,   724,  -587,
    1161,   978,   558,  1162,  1815,  1163, -1061,  1165,  1743,  1318,
    1828,  1617,   421,  1470,   872,  2454,   594,  2334,   878,   421,
    1737,  -589, -1169,  1193,  1094,   871,  1903,   889,   895,   901,
    2493, -1103,   905,  -589,  1203,  1014,  1753,  1310,  2179,   917,
    1884,  1885,   978,  2138,  2139,  1190,   923,  2455,  1192,   421,
     913,  1225,   594,   918,   919,   920,   696,   421,   720,  2549,
    2399,   926,   927,  1618,  1311,   932,   696,   696,   696,   696,
    -591,  2066,   811,   940,   941,  2208,  1002,  2257, -1150,   643,
    2212,  2485,   908,   909,  1889,  1891,  1013, -1133,  2550,  1116,
   -1113,  2195,  1769, -1166,   924, -1138,   594,  1803,  1289,  1813,
    2254,  1826,   594,  1832,  1804,  1774,  1814,   421,  1827,  1104,
    1833,  1346,  1313,   559,  2335,  1811,   594,  1371,  1372,  1373,
    1374,  1375,  1775,   421, -1060,  2336,  2230,   594,  1821,  -589,
    1610,  1611,  1355,   957,  1829,  1027,  2485,   958,  2312,   712,
    1020,   764,   819,   813,   700,  1025,  1620,  2310,   843,  2313,
    2314,  2131,   570,  1038,  1029,  2315,   696,  2316,  1473,  1474,
   -1149,  2549,   847, -1169,   562,   973,  2317,  1030,  2318,   998,
    2319,  1036, -1103,   999,   708,  2344,  1059,  1049,  1258,   696,
    2501,  2502,   596,   987,   978,   928,  1259,  1429,  1625,  1060,
    2550,  1475,  2357,  1424,   587,   929,  1776,   421,  1437,  1777,
    1387,  1001,  1066,  1260, -1165,  1388,  1616,  2028,   694,  -527,
   -1168,   594,  1254,   917,   421,  1254,   563,   617,  -527,  1363,
    1851,  1638,   695,  -527, -1102,  1254,  2273,  1088, -1133,  1093,
    1106, -1113,  1095,  1863,   617, -1132, -1138,  1111,  1111,   568,
    1659,  1661,  1663,  1014,  1140,  1109,  1428,  -382,  1098,  1067,
    2551,  1145,  1836,  1837,  1838,  1139,  1842,  1843,  1956,  1562,
    1861,  1862,  1068,  1617,  1146, -1060,  1147,  1870,  1871,  1390,
    -589,  1154,  1797,  1157,  2259,  2260,   696,   571,   643,   643,
     643,   643,   643,  1002,  1002,  1002,  1002,  1002,   572,   669,
    1774,  1501,  2320,  1391,  1013,  2321,  1639,   573,  2343,  1187,
    1109, -1149,  2404,  1014,  1014,  1014,   696,  1775,  1392,  2563,
    2565,    25,  1188,  1393,  1394,  1618,    29,  1198,  1753,  1261,
    1395,   696,  2569,  1275,   696,  1528,   575,   576,  1688,   574,
    1199,  1531,  1262,  1266,  1272,  1534,  1280,  1536,    47,    48,
    1285,  1538,  1513,  1540,  1513, -1165,  1267,  1273,  1205,  1281,
    1246, -1168,  1211,  1286,  1658,  1660,  1662,  1217,   580,  1358,
    1221,  1223,  -384,  2390,  1364, -1102,  -383,  1151,  -792,  -792,
    1413,  2424,  1359,  2131,  1274,  1803, -1132,  1365,  1563,  1774,
    2322,  1776,  1804,  1414,  1777,  1876,  1417,  1445,  1813,  1778,
    1282,   841,    90,  1877,  1826,  1814,  1775,  1779,  1832,  1418,
    1446,  1827,    95,  -382,   402,  1833,  1307,  1467,  2072,  1276,
    2073,  1700,   403,  1701,    50,   976,  1587,  1322,  2529,  2074,
    1468,  2075,  1485,  1488,  1277,  1278,  1279,  1284,  1319,  1314,
    2536,  1315,  2422,  1491,   583,  1486,  1489,  2420,  2323,  2324,
    2325,   584,  1308,   577,  1029,   585,  1492,   957,   121,  -383,
    2419,   958,   586,  1798,  1396,  2438,   998,  1499,   959,   960,
     999,   979,  2123,  2124,  2125,  2126,  2127,   638,   639,   642,
    1776,  1593,   591,  1777,   642,  2355,   592,  1799,  1778,   973,
     633,  1505,  1556,  1564,  1488,  1397,  1779,  1800,  1001,  1599,
    1666,   593,  1801,  1648,  1506,  1557,  1565,  1566,  -387,  1651,
    1401,   597,  1646,  1667,  2119,  1649,  1252,   648,  1797,  1059,
     982,   669,  1358,   656,   118,   421,  2492,  1405,  2161,  1670,
    1606,   122,  1672,   684,  2166,  1675,  1680,   664,   665,  1398,
     978,  1513,  2002,  2491,  -385,  -852,   705,  1353,  1353,  1353,
    1353,  1353,  1678,  2268,  2076,  2077,   982,  2078,  2079,  1668,
    1682,   646,  1933,   657,  1708,  1679,   654,  1760,  1252,    25,
    1696,  1438,  1676,  1683,    29,  1687,   728,  1709,  1417,   917,
    1761,  1763,  1252,   402,  1014,  1014,  1014,  1464,  2080,  1698,
    1309,  1949,   753,  2143,  2144,  1970,    47,    48,  2256,   658,
    1609,  1610,  1611,   659,  1252,  1254,    46,   766,   660,  1467,
    2010,  1421,  1612,  2160,  1505,   661,  2286,  1976,  1692,  1730,
    1694,  1613,  1977,  2011,   662,  1774,   663,  2012,  1695,   998,
    2081,  1487,   675,   999,   666,  1939,  1660,  1662,   676,    74,
     638,   639,  1775,  2082,  1614,  1369,  1764,  1000,   621,  1615,
      90,  1717,   998,  2014,  1226,  1227,   999,   749,   677,  1787,
      95,  1001,  1792,   638,   639,  1812,  2015,  1825,  1376,  1831,
    1000,  1835,    96,  1299,  1517,  2040,  1300,  1616,  2072,  2060,
    2073,  2069,   714,  1550,  1001,   691,   787,  1228,  2041,  2074,
    1389,  2075,  2061,   795,  2070,   642,  2071,   699,  1768,  1798,
    2086,   711,   109,  2261,  2262,  2263,   121,  1849,  1529,   717,
    2287,   726,  1760,  2087,  1532,  1505,  1776,  1548,  1535,  1777,
    1537,  1535,  1535,  1799,  1539,  2088,  1541,  1254,  2089,  1558,
    1559,  1560,  1760,  1800,  1617,   598,  1488,  1103,  1801,   760,
    1488,   889,  2093,  2101,  1461,  2090,   895,   782,  1488,  2091,
     150,  1254,   901,  2092,  2268,  2094,  2102,  1579,  1580,  2238,
     905,  2103,   732,   998,   745,  1488,  2288,   999,  2029,   599,
    2031,  2032,  2120,   784,   638,   639,  1588,   913,  2104,  1495,
    1936,  1000,  2036,  1765,  2289,  2121,  1618,  1931,   750,  2140,
    -587,   763,  2043,   770,  2045,  1001,  2290,   904,  2291,  2292,
    1598,  2293,  2141,  1928,  2294,   771,   696,  2171,  1596,  1597,
    1319,  1947,  2385,   774,  2076,  2077,  1550,  2078,  2079,   777,
    2172,  1229,  1230,  1953,   778,  1231,  1232,  1955,   635,  2176,
     786,  1605,   636,   998,  1550,  2058,  2059,   999,   637,   638,
     639,   910,  2151,  1969,   638,   639,   790,  2177,  2080,   775,
     612,  1000,   791,  1550,  1943,   818,  2363,  1463,  1002,   614,
     642,   826,  2240,   851,   642,  1001,  2178,   852,   799,   638,
     639,   642,  2240,  2245,   855,  2241,  1008,   857,  2282,  1187,
     612,  1664, -1189,  1505,   822,  2242,  2246,   615,   876,   614,
    2081,  2283,  2306,  1550,   834,  2295,  2308,  2296,   877,  1061,
    2360,  1062,   880,  2082,   607,  2394,  2340,   922,   608,   609,
     610,   611,   925,  2361,  2034,   616,  1985,   615,  2395,  2037,
    1677,   612,   887,  2140,  1690,  1690,   888,  1690,   613,   949,
     614,  2414,  2047,  1252,   978,   708,  2406,  1088,   985,  1088,
    1505,   643,  1702,   979,  2415,   616,  2431,   881,   882,   883,
     884,   886,   640,  2434,  2049,  2436,  1594,  1467,   615,   980,
    2051,   981,  1550,  1505,  2053,  1760,   982,  2467,  2437,   996,
    2458,  2086,   617,  1006,  1725,  2459,  2461,  2086,  2463,  1740,
    2468,  2506,   640,  1157,  2498,  1026,   616,   807,  2508,  1738,
    2499,  1467,  1505,  1035,  2507,  1734,  1187,  1037,  1766,   696,
    1767,  2509,   617,  1041,  2511,  2512,   951,   953,   954,  2513,
     955,  2515,  1039,    25,  2240,  2240,  1770,   956,    29,  1252,
    2532,  2552,   642,   421,   618,  1839,  1642,  2516,  2517,  2106,
    2107,   822,  2528,  2533,  2553,  -230,  1246,  2143,  2144,  2568,
      47,    48,  1048,   617,  2143,  2144,  1054,  1360,  1058,  1856,
    1209,  1210,   607,  1213,   618,   405,   608,   609,   610,   611,
    1084,  1867,  1082,  1268,  1079,  1873,  1269,  1270,  1271,   612,
    1940,  1941,  1942,  1034,   565,  1140,   613,  1882,   614,  1894,
    1896,   976,  1875,  1100,  2387,   605,   606,  1101,  1044,  1377,
    1378,  2558,  2559,  1102,    90,   618,  2472,  2473,  1107,  1239,
    1239,  1219,  1220,  2162,    95,  1115,   615,  1117,  1144,  1170,
     787,  1181,  1904,  1184,  1194,   607,  1065,  1197,  1185,   608,
     609,   610,   611,  1081,  1200,  1915,  2164,  1214,  1208,  1085,
    1086,  1237,   612,  1229,   616,  1252,   594,  1287,  1326,   613,
    1323,   614,   958,  1290,  1702,  2151,  2203,  1702,  1702,  1702,
     121,  1347,  1348,  -342,   999,  1111,  1379,  1944,  2423,  1513,
    2214,  2207,  1385,  1386,  1406,  2217,  1416,  1408,  2218,   615,
    1452,   421,  1430,  1431,  1432,  1143,  1433,  1434,  2225,  1435,
    2226,  1444,  2227,   566,  2228,  1447,  1291,  1450,  1456,   708,
    -934,   617,  1292,  1465,   150,  1466,  1471,   616,  1490,  1500,
    1477,  1472,  1476,  1504,  1484,  1503,  1507,  1518,   991,  1978,
    1508,  1510,  1509,  2470,  1520,  1527,  1542,  1543,  1293,  1544,
    1545,   642,   642,   642,   642,   642,  1095,  1546,  1530,  1008,
    1008,  1547,  1550,  1567,   421,  1551,  1552,  2490,  1111,   928,
    1568,  1569,  1294,   618,  1295,  1571,   957,  1572,  1201,  1202,
     958,  1573,  1575,  1576,   617,  1577,   787,   959,   960,  1581,
    2021,  2022,  2309,   961,   962,  2250,   964,  1582,  1583,   966,
     967,   968,   969,   970,  1584,  2253,  1585,  1296,   973,   787,
    1590,  1595,  1297,  1633,  1636,  2039,  1298,  1366,  1641,  2490,
    1299,  1367,   607,  1300,  1642,  1647,   608,   609,   610,   611,
    1652,  1655,  1656,  1657,   373,   403,   618,  1671,  1665,   612,
    1697,  1688,   991,  1710,  1602,  1301,   613,  1449,   614,   607,
    1705,  1711,  1712,   608,   609,   610,   611,  1713,  1462,  1302,
    1735,  1724,  1744,  1762,  1846,  1303,   612,  1847,  2379,  2380,
    1848,  1865,  1866,   613,  1879,   614,   615,  1881,  1907,  1910,
    1897,  1923,  1925,  1898,  1327,  1328,  1329,  1330,  1331,  1332,
    1333,  1334,  1335,  1336,  1337,  1338,  1339,  1340,  1341,  1342,
    1343,  1344,  1345,   615,   616,  1928,   989,  1899,  1929,   822,
     990,  1900,  1901,  1948,  1361,  1950,   799,   638,   639,  1961,
    1962,  1368,  1965,  1370,  1963,  1979,  -494,  1980,   612,  1987,
    1986,   616,  2134,  1915,  1915,  1915,  2007,   614,  1380,  2004,
    2005,   421,  2008,  2009,  2016,  1915,  2019,  2020,  1765,  2418,
    1764,  2421,  2027,  2026,  2030,   957,  2033,  2362,  2042,   958,
    2044,   617,  2046,  2055,   886,   615,   959,   960,   421,  2056,
    1411,  2129,   684,   962,  2057,   964,  2174,  2062,   966,   967,
     968,   969,   970,  2063,  2064,  2065,  1065,   973,   617,  2067,
    2068,  2108,  2109,   616,  2114,  2122,  -381,  2188,  2142,  2130,
    2150,  2147,  2154,    13,    14,   991,    15,    16,  2190,  2153,
    2155,    20,  2159,   618,  2156,  2157,  2158,  2169,  2175,    23,
    2210,  2235,  2232,  2236,    27,  1738,  2192,    30,  2247,  1944,
     640,  2196,  2416,  2239,   651,    37,  2248,    38,  -224,    40,
     618,  2206,  2255,  2216,   637,   638,   639,  2272,  2211,  1770,
     617,  2285,  2222,  2280,  2299,  2300,   612,  2301,  2302,  2303,
    -843,  2305,    59,  2307,  2327,   614,  2341,   991,  2333,  2346,
    1839,  1480,  2348,    70,  2351,  2352,  2266,  2365,  1479,  2354,
    2358,   607,  2398,  2364,  2372,   608,   609,   610,   611,  1494,
    2374,  2375,  2376,   615,  2377,  2378,  2237,    85,   612,  2381,
    2382,  2383,   618,  2389,  2393,   613,  2400,   614,  2397,  2403,
      93,  1867,   886,  1515,   834,    13,    14,  2405,    15,    16,
    2432,   616,  2435,    20,  2444,  2449,  2445,  2457,   102,  2451,
    2460,    23,  1008,  2462,   104,   615,    27,  2466,  2471,    30,
    2475,  2477,   108,  2478,   110,  2479,   112,    37,   114,    38,
    2486,    40,  2487,  1904,  2497,   119,  2500,  2510,   640,  2526,
    2534,  2518,  1915,   616,  1915,  1915,  1915,  1915,  1915,  1915,
    2530,  2539,   130,   131,    59,  2554,  2555,  2556,   617,  1561,
    2567,   578,  2278,  2549,  1753,    70,  2115,  1283,  2193,   607,
     143,  1589,  1880,   608,   609,   610,   611,   604,  1523,  1460,
     421,  1883,  2353,   930,  2116,   939,   612,   942,  1055,    85,
    1608,   155,  1908,   613,   156,   614,  2356,  1320,  2258,  2481,
     617,  1321,    93,  2136,  2128,  2251,  1751,  2003,  1498,  2298,
     618,   815,  2022,  2191,  2311,  1733,  1727,  1409,  1604,  1426,
     102,  1684,  1669,   615,  1455,  1971,   104,   436,  2152,  1972,
    1637,  2566,  2165,   788,   108,  1056,   110,   600,   112,   601,
     114,  1674,  1704,   602,   603,  1415,  1160,   119,  1934,  1935,
    1382,   616,   618,  1019,  1441,  1469,  1189,  1915,  1644,  1773,
    1516,  1021,  2521,  2386,   130,   131,  1023,  1686,  1689,  2277,
    1650,  1022,  2194,  2408,  1399,  1239,  1239,  1239,  1168,  1239,
    1239,  1024,   143,  1844,  2503,  1400,  1454,  1419,   421,  1410,
    2163,  2453,  2189,  2417,   827,   827,  2522,   787,  2538,  2560,
     787,  1239,  2562,   155,  2196,   957,   156,  2392,   617,   958,
     787,  1750,  2017,  1028,  2201,   845,   959,   960,  1716,  1673,
    1044,  1108,   687,   962,  2167, -1190,  1845,  2202, -1190, -1190,
   -1190, -1190, -1190,   735,  1685,  2367,  2401,   973,  2402,  2048,
    2038,  1693,  2052,  2035,  2219,  2054,  2050,  2221,  2396,  2229,
    1549,   886,  1245,  2345,  1570,  2234,  1574,  1703,  1586,  1706,
     618,  1578,  2243,     0,     0,     0,  2410,     0,     0,     0,
       0,     0,   886,     0,     0,     0,  1109,   748,  1109,  2433,
       0,   798,     0,     0,   642,  1008,  1721,     0,  2441,  1061,
       0,   799,   638,   639,   607,     0,     0,  1732,   608,   609,
     610,   611,     0,   612,     0,  2446,   748,     0,     0,     0,
    1746,   612,   614,   748,     0,  1752,     0,  1758,   613,     0,
     614,   808,     0,     0,     0,  1856,  1856,  1887,     0,     0,
       0,     0,   607,     0,     0,     0,   608,   609,   610,   611,
     615,     0,     0,     0,  1239,  1239,  1239,     0,   615,   612,
       0,     0,     0,     0,     0,     0,   613,     0,   614,     0,
    1290,     0,     0,     0,     0,     0,     0,     0,   616,     0,
       0,     0,     0,     0,     0,     0,   616,     0,     0,     0,
       0,  2446,     0,  2504,     0,     0,   615,  2117,     0,     0,
       0,  1872,   607,     0,     0,     0,   608,   609,   610,   611,
       0,     0,     0,  1291,     0,   640,     0,     0,     0,   612,
       0,     0,  1888,   421,   616,     0,   613,     0,   614,     0,
       0,     0,     0,     0,  2540,   617,     0,     0,     0,  2541,
       0,     0,   938,   617,     0,  1293,     0,     0,  2368,     0,
       0,     0,  2541,   607,  2561,  2564,   615,   608,   609,   610,
     611,   421,     0,  1932,   822,  1361,     0,  2564,     0,  1294,
     612,  1295,     0,     0,     0,     0,     0,   613,     0,   614,
       0,   617,     0,  1479,   616,     0,   607,   618,     0,     0,
     608,   609,   610,   611,  1952,   618,     0,  1954,     0,     0,
       0,     0,     0,   612,  1296,  1958,   748,   615,     0,  1297,
     613,     0,   614,  1298,     0,     0,     0,  1299,     0,     0,
    1300,   421,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   618,     0,   616,     0,  1981,     0,  1984,
     615,   617,  1301,     0,   833,     0,     0,   607,     0,     0,
       0,   608,   609,   610,   611,     0,  1302,     0,     0,     0,
       0,     0,  1303,     0,   612,     0,     0,     0,   616,     0,
       0,   613,   421,   614,     0,   833,     0,     0,   607,     0,
       0,     0,   608,   609,   610,   611,     0,     0,     0,     0,
     787,     0,   617,   618,     0,   612,   787,     0,  1091,     0,
       0,   615,   613,     0,   614,   421,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2204,  1110,     0,     0,     0,
       0,     0,     0,     0,     0,   617,     0,     0,     0,   616,
    1142,     0,   615,     0,     0,     0,     0,     0,  1148,  1149,
       0,     0,   991,  1155,   618,     0,     0,     0,     0,  1043,
       0,     0,   607,     0,     0,     0,   608,   609,   610,   611,
     616,     0,     0,     0,     0,     0,   421,     0,     0,   612,
       0,  1110,     0,     0,     0,     0,   613,   618,   614,  1182,
       0,     0,  1479,     0,     0,   607,   617,     0,     0,   608,
     609,   610,   611,  2110,  2111,     0,     0,   421,     0,     0,
       0,  2118,   612,     0,     0,     0,   615,  1239,  1204,   613,
    1207,   614,   787,     0,     0,     0,     0,   617,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   748,
     748,     0,     0,     0,   616,     0,   787,     0,   618,   615,
    1253,  1155,  2149,     0,     0,     0,     0,     0,  1644,     0,
       0,     0,  1720,     0,     0,   607,     0,     0,     0,   608,
     609,   610,   611,     0,     0,     0,     0,   616,     0,   618,
       0,   421,   612,  2168,     0,     0,     0,     0,     0,   613,
       0,   614,  2173,     0,     0,  1745,     0,     0,   607,     0,
       0,   617,   608,   609,   610,   611,     0,     0,     0,  2183,
    2184,     0,     0,     0,   421,   612,     0,  1239,     0,   615,
       0,     0,   613,     0,   614,   607,     0,     0,     0,   608,
    1011,   610,   611,     0,   617,     0,     0,  1746,   975,     0,
       0,     0,   612,  1352,  1352,   834,     0,   616,     0,   613,
       0,   614,   615,   618,  1983,  2213,     0,   607,     0,     0,
       0,   608,   609,   610,   611,     0,     0,     0,     0,   748,
     748,  2223,     0,  2224,   612,     0,     0,     0,     0,   615,
     616,   613,     0,   614,   421,     0,   618,     0,  2342,  1239,
       0,     0,     0,     0,     0,  2233,  1253,     0,   957,     0,
       0,     0,   958,     0,   617,     0,     0,   616,     0,   959,
     960,   615,     0,     0,     0,   961,   962,   421,   964,  1420,
       0,   966,   967,   968,   969,   970,     0,     0,   972,     0,
     973,   974,     0,     0,     0,  2244,     0,   617,     0,   616,
       0,     0,   957,     0,   421,     0,   958,   607,     0,     0,
       0,     0,     0,   959,   960,     0,   618,   748,     0,   961,
     962,   963,   964,   965,   617,   966,   967,   968,   969,   970,
     971,     0,   972,     0,   973,   974,   421,     0,     0,     0,
       0,  2265,     0,     0,     0,     0,  2267,     0,  1136,   618,
       0,     0,   975,     0,     0,     0,   617,  2276,  1958,     0,
       0,     0,  2281,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2284,     0,     0,     0,   618,  2297,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1239,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   957,   975,
    1722,     0,   958,   607,     0,     0,  1239,  1110,   618,   959,
     960,   975,     0,  2443,  1723,   961,   962,   963,   964,     0,
       0,   966,   967,   968,   969,   970,   971,     0,   972,     0,
     973,   974,     0,     0,     0,     0,     0,  1604,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   975,   975,
     975,   975,     0,   975,     0,     0,  1118,     0,     0,     0,
    1119,   607,  2369,     0,     0,     0,     0,  1120,  1121,     0,
       0,     0,     0,  1122,  1123,  1124,  1125,     0,   886,  1126,
    1127,  1128,  1129,  1130,  1131,  1132,  1133,     0,  1134,  1135,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   975,     0,
     975,   975,   975,   975,     0,     0,     0,     0,  1607,     0,
       0,     0,     0,     0,     0,     0,  2407,  2267,     0,     0,
    2409,     0,  2413,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2425,  2426,
       0,  2430,     0,     0,     0,     0,     0,     0,     0,     0,
     957,  2440,  1186,     0,   958,   607,     0,  2442,     0,   975,
       0,   959,   960,     0,     0,     0,     0,   961,   962,   963,
     964,  2369,   748,   966,   967,   968,   969,   970,   971,     0,
     972,   975,   973,   974,     0,     0,     0,     0,     0,     0,
       0,   975,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2480,  2482,     0,
       0,     0,   975,     0,     0,     0,     0,     0,     0,   834,
       0,     0,  2494,     0,     0,     0,  2496,     0,   975,     0,
       0,     0,   975,   975,     0,     0,     0,     0,  1091,     0,
    1091,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   886,     0,  1110,
    1110,     0,     0,  2482,     0,     0,     0,  2523,     0,     0,
    1718,  2527,     0,     0,     0,  1758,   748,     0,  1728,     0,
       0,  1729,     0,     0,     0,     0,     0,  1758,  2537,  2523,
     975,     0,     0,   808,     0,     0,     0,  1110,  1110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   748,
       0,     0,     0,     0,     0,     0,  1794,     0,     0,     0,
       0,     0,     0,     0,     0,   748,   748,   748,     0,   748,
     748,     0,     0,   748,     0,     0,     0,     0,   975,   975,
       0,     0,     0,     0,     0,     0,     0,  1253,     0,     0,
    1253,   748,     0,     0,  1110,  1110,  1110,     0,  1155,  1155,
    1253,     0,     0,     0,   957,  1155,  1155,  1249,   958,   607,
       0,     0,     0,     0,     0,   959,   960,     0,     0,     0,
       0,   961,   962,   963,   964,     0,     0,   966,   967,   968,
     969,   970,   971,     0,   972,   957,   973,   974,  1250,   958,
     607,     0,     0,  1906,     0,     0,   959,   960,     0,     0,
       0,     0,   961,   962,   963,   964,     0,     0,   966,   967,
     968,   969,   970,   971,     0,   972,   957,   973,   974,  1251,
     958,   607,     0,     0,     0,   748,     0,   959,   960,     0,
       0,     0,     0,   961,   962,   963,   964,     0,     0,   966,
     967,   968,   969,   970,   971,     0,   972,     0,   973,   974,
       0,     0,     0,     0,   975,   975,   975,   975,   975,   975,
     975,   975,   975,   975,   975,   975,   975,   975,   975,   975,
     975,   975,   975,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   748,   748,   748,     0,   975,     0,
       0,     0,     0,     0,   957,   975,     0,   975,   958,   607,
       0,     0,     0,     0,     0,   959,   960,   975,     0,     0,
    1325,   961,   962,   963,   964,     0,     0,   966,   967,   968,
     969,   970,   971,     0,   972,   957,   973,   974,     0,   958,
     607,     0,     0,  1110,     0,     0,   959,   960,   975,     0,
       0,  1404,   961,   962,   963,   964,     0,     0,   966,   967,
     968,   969,   970,   971,     0,   972,     0,   973,   974,   957,
       0,  1412,     0,   958,   607,     0,     0,     0,     0,     0,
     959,   960,     0,     0,     0,     0,   961,   962,   963,   964,
       0,     0,   966,   967,   968,   969,   970,   971,     0,   972,
       0,   973,   974,     0,     0,     0,     0,     0,     0,   957,
       0,  1427,     0,   958,   607,     0,     0,   975,     0,     0,
     959,   960,     0,     0,     0,     0,   961,   962,   963,   964,
       0,   975,   966,   967,   968,   969,   970,   971,     0,   972,
       0,   973,   974,   957,     0,     0,     0,   958,   607,     0,
       0,     0,   975,     0,   959,   960,     0,     0,     0,  1439,
     961,   962,   963,   964,     0,     0,   966,   967,   968,   969,
     970,   971,     0,   972,     0,   973,   974,     0,     0,     0,
    1352,  1352,  1352,  1352,  1352,   957,     0,     0,     0,   958,
     607,     0,     0,     0,     0,     0,   959,   960,   975,     0,
       0,  1442,   961,   962,   963,   964,     0,     0,   966,   967,
     968,   969,   970,   971,     0,   972,     0,   973,   974,     0,
       0,     0,     0,     0,     0,     0,     0,   957,     0,     0,
    1253,   958,   607,     0,     0,     0,  1420,     0,   959,   960,
       0,   975,     0,  1443,   961,   962,   963,   964,     0,     0,
     966,   967,   968,   969,   970,   971,     0,   972,     0,   973,
     974,     0,     0,     0,     0,     0,     0,     0,     0,  2186,
       0,     0,     0,     0,   975,     0,     0,     0,     0,     0,
       0,   975,     0,     0,     0,     0,     0,   975,   957,     0,
       0,   808,   958,   607,     0,     0,     0,     0,     0,   959,
     960,     0,  1110,     0,  1478,   961,   962,   963,   964,     0,
     975,   966,   967,   968,   969,   970,   971,     0,   972,     0,
     973,   974,   975,  2220,     0,     0,     0,     0,     0,     0,
     975,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     975,     0,     0,   975,     0,     0,     0,   748,  2231,     0,
       0,     0,  1253,     0,     0,     0,     0,     0,   975,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   975,
       0,     0,     0,     0,   957,     0,  1253,     0,   958,   607,
       0,     0,     0,   975,     0,   959,   960,     0,     0,   975,
    1525,   961,   962,   963,   964,   975,     0,   966,   967,   968,
     969,   970,   971,     0,   972,   957,   973,   974,     0,   958,
     607,     0,     0,     0,  1906,     0,   959,   960,     0,     0,
       0,  1526,   961,   962,   963,   964,     0,     0,   966,   967,
     968,   969,   970,   971,     0,   972,     0,   973,   974,     0,
       0,   957,     0,     0,  2271,   958,   607,   748,     0,  2274,
       0,     0,   959,   960,     0,     0,     0,  1654,   961,   962,
     963,   964,     0,     0,   966,   967,   968,   969,   970,   971,
       0,   972,   957,   973,   974,     0,   958,   607,     0,     0,
       0,     0,     0,   959,   960,     0,     0,     0,  1926,   961,
     962,   963,   964,     0,     0,   966,   967,   968,   969,   970,
     971,     0,   972,     0,   973,   974,     0,     0,     0,   975,
     957,     0,  1722,     0,   958,   607,     0,     0,   748,   748,
       0,   959,   960,     0,     0,   975,     0,   961,   962,   963,
     964,     0,     0,   966,   967,   968,   969,   970,   971,     0,
     972,     0,   973,   974,     0,     0,     0,   957,     0,     0,
       0,   958,   607,     0,     0,     0,     0,     0,   959,   960,
       0,     0,     0,  1964,   961,   962,   963,   964,     0,   975,
     966,   967,   968,   969,   970,   971,     0,   972,     0,   973,
     974,     0,     0,     0,     0,     0,  1110,     0,     0,   975,
    1110,   975,     0,     0,     0,   975,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   957,     0,  1982,     0,   958,
     607,     0,     0,     0,     0,     0,   959,   960,   975,     0,
       0,   975,   961,   962,   963,   964,     0,     0,   966,   967,
     968,   969,   970,   971,     0,   972,     0,   973,   974,     0,
       0,     0,  1136,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1110,   748,  1110,
    1110,  1110,     0,   957,     0,     0,  2186,   958,   607,     0,
       0,     0,     0,     0,   959,   960,   748,     0,     0,  2013,
     961,   962,   963,   964,     0,     0,   966,   967,   968,   969,
     970,   971,     0,   972,   957,   973,   974,     0,   958,   607,
       0,     0,     0,     0,     0,   959,   960,     0,     0,     0,
    2105,   961,   962,   963,   964,  1110,     0,   966,   967,   968,
     969,   970,   971,     0,   972,     0,   973,   974,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1110,
    1110,     0,     0,  1110,     0,     0,     0,   975,   975,   957,
    2186,  2170,     0,   958,   607,   975,     0,     0,     0,     0,
     959,   960,     0,     0,     0,     0,   961,   962,   963,   964,
       0,     0,   966,   967,   968,   969,   970,   971,     0,   972,
       0,   973,   974,     0,     0,     0,   975,     0,     0,     0,
       0,  1110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   975,     0,   957,     0,  2185,
     975,   958,   607,     0,     0,     0,     0,     0,   959,   960,
     975,   975,     0,     0,   961,   962,   963,   964,     0,     0,
     966,   967,   968,   969,   970,   971,     0,   972,     0,   973,
     974,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     975,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     975,   975,     0,     0,     0,     0,     0,   957,     0,     0,
     975,   958,   607,     0,     0,     0,     0,     0,   959,   960,
       0,   975,     0,  2249,   961,   962,   963,   964,     0,     0,
     966,   967,   968,   969,   970,   971,     0,   972,     0,   973,
     974,     0,   975,     0,   975,     0,     0,     0,     0,     0,
       0,     0,   957,   975,     0,     0,   958,   607,   975,     0,
       0,   975,     0,   959,   960,     0,     0,     0,  2264,   961,
     962,   963,   964,     0,   975,   966,   967,   968,   969,   970,
     971,     0,   972,   957,   973,   974,  2275,   958,   607,     0,
       0,     0,     0,     0,   959,   960,     0,     0,     0,     0,
     961,   962,   963,   964,     0,     0,   966,   967,   968,   969,
     970,   971,     0,   972,     0,   973,   974,   957,     0,     0,
       0,   958,   607,     0,     0,     0,     0,     0,   959,   960,
       0,     0,     0,  2279,   961,   962,   963,   964,     0,     0,
     966,   967,   968,   969,   970,   971,   975,   972,   957,   973,
     974,     0,   958,   607,     0,     0,     0,     0,     0,   959,
     960,     0,     0,     0,  2338,   961,   962,   963,   964,     0,
       0,   966,   967,   968,   969,   970,   971,     0,   972,     0,
     973,   974,     0,     0,   975,     0,   975,     0,     0,     0,
     975,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   975,   975,   957,     0,     0,   975,   958,   607,
       0,     0,     0,     0,     0,   959,   960,   975,     0,   975,
    2339,   961,   962,   963,   964,     0,     0,   966,   967,   968,
     969,   970,   971,     0,   972,     0,   973,   974,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   975,     0,   975,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   975,     0,   975,     0,     0,     0,     0,     0,   377,
     378,   379,   380,     0,   382,     0,   383,     0,   385,   386,
       0,   387,     0,     0,     0,   389,     0,   391,   392,     0,
     975,   394,   395,   396,   975,   398,     0,   400,   401,     0,
       0,   408,     0,     0,   975,     0,   411,   412,   413,   414,
     415,   416,   417,   418,     0,   419,   420,     0,     0,   425,
     426,   427,     0,   429,     0,   431,     0,     0,   434,   435,
       0,     0,     0,     0,     0,     0,   442,   443,     0,     0,
     446,     0,     0,     0,     0,     0,     0,   452,     0,   454,
       0,   455,   456,     0,     0,     0,   461,   462,   463,     0,
       0,   465,     0,     0,   467,   468,     0,   470,   471,   472,
       0,     0,     0,     0,   477,   478,     0,     0,   480,     0,
     482,   483,   484,     0,   486,   487,     0,     0,   489,     0,
     491,   492,   493,   494,   495,   496,     0,     0,     0,     0,
       0,     0,   504,   505,   506,     0,     0,     0,     0,   511,
     512,   513,     0,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,     0,
     542,     0,   544,     0,   545,     0,   546,   547,     0,   549,
     550,   551,   552,   553,   554,   555,   556,   957,     0,     0,
       9,   958,   607,     0,     0,     0,     0,    10,   959,   960,
       0,     0,     0,  2350,   961,   962,   963,   964,     0,     0,
     966,   967,   968,   969,   970,   971,     0,   972,     0,   973,
     974,     0,     0,     0,     0,     0,     0,    11,    12,    13,
      14,     0,    15,    16,    17,    18,    19,    20,     0,   634,
      21,    22,   647,     0,   650,    23,    24,    25,     0,    26,
      27,    28,    29,    30,    31,     0,    32,    33,    34,    35,
      36,    37,     0,    38,    39,    40,    41,    42,    43,     0,
       0,    44,    45,    46,    47,    48,     0,     0,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
       0,    71,     0,    72,    73,     0,    74,    75,    76,     0,
       0,    77,     0,     0,    78,    79,     0,    80,    81,    82,
      83,     0,    84,    85,    86,    87,    88,    89,    90,    91,
      92,     0,     0,     0,     0,     0,    93,    94,    95,    96,
       0,     0,     0,     0,    97,     0,     0,    98,    99,     0,
       0,   100,   101,     0,   102,     0,     0,     0,   103,     0,
     104,     0,   105,     0,     0,     0,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,     0,   116,   117,   118,
       0,   119,     0,   120,   121,     0,   122,     0,   123,   124,
     125,   126,     0,     0,   127,   128,   129,     0,   130,   131,
     132,     0,   133,   134,   135,     0,   136,     0,   137,   138,
     139,   140,   141,     0,   142,     0,   143,   144,     0,     0,
     145,   146,   147,     0,     0,   148,   149,     0,   150,   151,
       0,   152,   153,     0,     0,     0,   154,   155,     0,     0,
     156,     0,     0,   157,     0,     0,     0,   158,   159,     0,
       0,   160,   161,   162,     0,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,     0,   174,     0,     0,
     175,     0,     0,     0,   176,   177,   178,   179,   180,     0,
     181,   182,     0,     0,   183,   184,   185,   186,     0,     0,
       0,     0,   187,   188,   189,   190,   191,   192,     0,     0,
       0,     0,     0,     0,     0,   193,     0,     0,   194,   195,
     196,   197,   198,     0,     0,     0,   199,   200,   201,   202,
     203,   204,   957,   205,   206,  2359,   958,   607,   207,     0,
       0,     0,     0,   959,   960,     0,     0,     0,     0,   961,
     962,   963,   964,     0,     0,   966,   967,   968,   969,   970,
     971,     0,   972,     0,   973,   974,     0,     0,     0,     0,
       0,     0,   957,     0,     0,     0,   958,   607,     0,     0,
       0,     0,     0,   959,   960,     0,     0,     0,  2366,   961,
     962,   963,   964,   947,   948,   966,   967,   968,   969,   970,
     971,     0,   972,   957,   973,   974,  2384,   958,   607,     0,
       0,     0,     0,     0,   959,   960,     0,     0,     0,     0,
     961,   962,   963,   964,     0,     0,   966,   967,   968,   969,
     970,   971,     0,   972,   957,   973,   974,  2450,   958,   607,
       0,     0,     0,     0,     0,   959,   960,     0,     0,     0,
       0,   961,   962,   963,   964,     0,     0,   966,   967,   968,
     969,   970,   971,     0,   972,   957,   973,   974,     0,   958,
     607,     0,     0,     0,     0,     0,   959,   960,     0,     0,
       0,  2452,   961,   962,   963,   964,     0,     0,   966,   967,
     968,   969,   970,   971,     0,   972,   957,   973,   974,     0,
     958,   607,     0,     0,     0,     0,     0,   959,   960,     0,
       0,     0,  2464,   961,   962,   963,   964,     0,     0,   966,
     967,   968,   969,   970,   971,     0,   972,   957,   973,   974,
    2465,   958,   607,     0,     0,     0,     0,     0,   959,   960,
       0,     0,     0,     0,   961,   962,   963,   964,     0,     0,
     966,   967,   968,   969,   970,   971,     0,   972,   957,   973,
     974,  2469,   958,   607,     0,     0,     0,     0,     0,   959,
     960,     0,     0,     0,     0,   961,   962,   963,   964,     0,
       0,   966,   967,   968,   969,   970,   971,     0,   972,   957,
     973,   974,     0,   958,   607,     0,     0,     0,     0,     0,
     959,   960,     0,     0,     0,  2474,   961,   962,   963,   964,
       0,     0,   966,   967,   968,   969,   970,   971,     0,   972,
     957,   973,   974,     0,   958,   607,     0,     0,     0,     0,
       0,   959,   960,     0,     0,     0,  2476,   961,   962,   963,
     964,     0,     0,   966,   967,   968,   969,   970,   971,     0,
     972,   957,   973,   974,  2514,   958,   607,     0,     0,     0,
       0,     0,   959,   960,     0,     0,     0,     0,   961,   962,
     963,   964,     0,     0,   966,   967,   968,   969,   970,   971,
       0,   972,     0,   973,   974,   957,     0,  2531,     0,   958,
     607,     0,     0,     0,     0,     0,   959,   960,     0,     0,
       0,     0,   961,   962,   963,   964,     0,     0,   966,   967,
     968,   969,   970,   971,     0,   972,   957,   973,   974,     0,
     958,   607,     0,     0,     0,     0,     0,   959,   960,     0,
       0,     0,     0,   961,   962,   963,   964,     0,     0,   966,
     967,   968,   969,   970,   971,     0,   972,   957,   973,   974,
       0,   958,     0,     0,     0,     0,     0,     0,   959,   960,
       0,     0,     0,     0,   961,   962,   963,   964,     0,     0,
     966,   967,   968,   969,   970,   971,     0,   972,     0,   973,
     974
};

static const yytype_int16 yycheck[] =
{
      50,   486,   387,   378,   392,   541,   483,   407,  1144,   493,
     494,   495,   496,   630,   763,   887,   256,   401,  1037,   634,
     375,   261,  1466,   887,    62,    63,   981,   411,   750,   413,
     931,    69,  1603,   656,   418,   419,   420,   645,   987,   209,
    1504,  1317,   426,   430,  1571,   429,  1573,   431,  1346,  1866,
    1633,  1609,  1609,   888,   655,   656,   467,  1524,   258,   609,
      98,   261,   262,  1500,  1077,    63,  2018,   877,   118,  1620,
     743,   472,   122,    76,   388,  1379,  1011,   845,   433,   845,
    1160,   442,   480,  1317,    15,  1536,  1629,   175,  1907,  1979,
       7,  1634,    94,   468,   388,   450,    99,  1536,     8,     7,
     980,   981,     8,   116,  1675,   655,   656,     7,  1572,   464,
    1568,   191,   116,   116,   469,  1536,  1536,     8,   473,   519,
     475,   521,    71,     8,    15,  1536,  1536,  1536,   528,   529,
     530,   182,    15,   488,   534,   535,   536,   537,    41,   539,
     540,   144,    15,    15,    23,   500,    12,   502,   182,  2383,
     673,   878,    18,    21,   509,    15,    16,    17,    37,  1172,
      15,  1033,    28,   129,   477,    31,  1185,   205,    34,  1033,
      15,     5,   315,     8,     5,    41,     7,   129,     5,    45,
       0,     1,     8,    49,  1056,    20,   224,   169,    64,     8,
     917,     8,   800,  1534,    20,  1536,    37,  1538,     5,   116,
     513,    67,   282,   231,   232,    71,    72,   350,   116,   237,
     116,    77,    78,    15,    21,     8,   116,    83,    84,   129,
      86,    87,    88,    89,    58,    91,   208,    20,   230,    15,
       8,    21,   472,  2467,   100,   323,   637,     8,   129,   105,
     641,   107,    20,   116,   257,   111,   129,   648,   633,   115,
     129,   117,    86,  1711,  1712,  1713,   129,   129,   124,   208,
     574,   129,   128,     5,   315,  1563,   132,   318,   134,   129,
     584,   585,   586,   587,   129,   141,   142,   149,   763,   145,
     146,   116,   284,     8,   318,   151,   809,   153,   129,   149,
     116,   157,   126,   295,   588,    37,  1197,   116,   129,   116,
     282,     8,   129,   137,   149,   690,   209,   169,   692,     8,
    2129,   266,    37,    20,    15,   246,  1452,  1534,   184,  1536,
     186,  1538,   129,   116,     8,   228,   724,   193,  1911,   129,
     150,   165,   287,   818,   647,   373,   374,   650,   116,   129,
     257,   379,   380,   381,   382,   116,   384,   385,  1652,   257,
     388,   257,   390,   391,   392,   393,   696,   257,   396,  1910,
     674,   399,  1311,   401,   751,  1908,   166,   982,   406,   254,
      47,   409,   712,   411,  1825,   413,  1610,  1611,    15,   417,
     418,   419,   420,   697,   257,    15,  1825,   995,   426,   997,
     428,   429,  2282,   431,     8,     8,  1004,   637,   799,   437,
     438,   641,  1351,     8,  1825,  1825,   444,   445,   648,   116,
    1011,   449,   812,   811,  1825,  1825,  1825,   116,   456,   417,
     282,   459,   257,    15,   258,  1444,  1099,   788,  1196,  1195,
    1310,   257,   116,   471,    92,  1184,   474,   257,   257,   489,
     257,     8,   480,   481,   482,   483,  1465,   485,   486,  1384,
    1385,  1386,   129,   840,   492,   493,   494,   495,   496,     8,
     498,  1011,     8,   501,   257,   503,   504,     8,     3,   507,
      37,  1812,   510,    15,  1091,  1424,   514,     8,   406,   257,
     794,     3,    15,    18,  1825,   798,   257,   800,  1501,    15,
    1831,   149,   129,  1116,   544,   148,     8,   191,   548,   129,
     177,     8,   116,   843,    26,   543,    37,   557,   558,   559,
    2462,   116,   562,    20,   854,  1116,     5,   928,     7,   569,
    1600,  1601,     3,  1912,  1913,   839,   576,   180,   842,   129,
     568,   871,     8,   571,   572,   573,   574,   129,   404,   128,
      21,   579,   580,   201,   929,   583,   584,   585,   586,   587,
     257,  1849,   480,   591,   592,  2019,  1164,  2140,   257,   799,
    2027,  2451,   565,   566,  2122,  2122,  1116,   116,   157,   769,
     116,  2008,   172,   257,   577,   116,     8,  1534,   918,  1536,
    2131,  1538,     8,  1540,  1534,   191,  1536,   129,  1538,   759,
    1540,   976,   932,    15,   288,  1812,     8,   998,   999,  1000,
    1001,  1002,   208,   129,   116,   299,  2064,     8,  1825,   116,
      16,    17,    64,     5,  1831,   665,  2506,     9,     5,   657,
     658,   659,   660,   661,   662,   663,  1902,  2209,   666,    16,
      17,  1907,   211,   683,     8,    22,   674,    24,   147,   148,
     116,   128,   508,   257,    15,    37,    33,    21,    35,     5,
      37,   679,   257,     9,   692,  2237,     8,   695,   183,   697,
    2477,  2478,   241,  1048,     3,     5,   191,  1067,  1902,    21,
     157,   180,  2255,  1058,     8,    15,   282,   129,  1078,   285,
    1020,    37,   720,   208,   116,  1025,    92,    26,    23,    23,
     116,     8,  1564,   743,   129,  1567,   257,   149,    15,  1648,
    1564,  1324,    37,    37,   116,  1577,  2164,   745,   257,   747,
     760,   257,   750,  1577,   149,   116,   257,  1466,  1467,    15,
    1655,  1656,  1657,  1324,   774,   763,  1066,     3,  1450,     8,
     217,   781,  1542,  1543,  1544,   773,  1546,  1547,  1687,    15,
    1575,  1576,    21,   149,   782,   257,   784,  1582,  1583,    43,
     257,   789,    84,   791,  2143,  2144,   794,     8,   998,   999,
    1000,  1001,  1002,  1371,  1372,  1373,  1374,  1375,     8,   807,
     191,  1171,   159,    67,  1324,   162,  1326,     8,  2236,     8,
     818,   257,  2353,  1384,  1385,  1386,   824,   208,    82,  2554,
    2555,    63,    21,    87,    88,   201,    68,   847,     5,     8,
      94,   839,  2567,   244,   842,  1205,     7,     8,    15,     8,
     848,  1211,    21,     8,     8,  1215,     8,  1217,    90,    91,
       8,  1221,  1571,  1223,  1573,   257,    21,    21,   856,    21,
     880,   257,   860,    21,  1384,  1385,  1386,   865,     8,     8,
     868,   869,     3,  2307,     8,   257,     3,     8,     7,     8,
       8,  2378,    21,  2129,   904,  1812,   257,    21,    15,   191,
     247,   282,  1812,    21,   285,    18,     8,     8,  1825,   290,
     908,   909,   144,    26,  1831,  1825,   208,   298,  1835,    21,
      21,  1831,   154,     3,     7,  1835,   924,     8,    22,   330,
      24,  1445,    15,  1447,    95,    15,  1283,   947,  2518,    33,
      21,    35,     8,     8,   345,   346,   347,   910,   946,   937,
    2530,   939,  2376,     8,     8,    21,    21,  2375,   305,   306,
     307,     8,   925,   124,     8,     8,    21,     5,   200,     3,
    2374,     9,     8,   265,   228,  2393,     5,    21,    16,    17,
       9,    15,  1897,  1898,  1899,  1900,  1901,    16,    17,   256,
     282,  1291,     8,   285,   261,  2253,     8,   289,   290,    37,
      15,     8,     8,     8,     8,   259,   298,   299,    37,  1309,
       8,     8,   304,  1358,    21,    21,    21,    21,     3,  1364,
    1030,     7,  1931,    21,  1885,  1360,     8,    15,    84,     8,
      15,  1029,     8,     8,   195,   129,  2460,  1035,  1947,    21,
    1314,   202,    21,  1041,  1953,    21,  1955,     7,     8,   303,
       3,  1760,  1734,  2457,     3,     8,  1054,  1897,  1898,  1899,
    1900,  1901,     8,  2159,   158,   159,    15,   161,   162,  1404,
       8,   256,  1647,     8,     8,    21,   261,     8,     8,    63,
    1440,  1079,  1417,    21,    68,  1430,  1084,    21,     8,  1099,
      21,    21,     8,     7,  1655,  1656,  1657,  1107,   192,  1443,
     926,    21,  1100,    16,    17,    21,    90,    91,    21,     8,
      15,    16,    17,     8,     8,  1947,    89,  1115,     8,     8,
       8,  1953,    27,  1947,     8,     8,    41,    21,  1433,  1489,
    1435,    36,    21,    21,     8,   191,     8,    21,  1438,     5,
     234,  1151,    15,     9,     8,  1655,  1656,  1657,    15,   122,
      16,    17,   208,   247,    59,    21,    71,    23,   251,    64,
     144,  1476,     5,     8,   147,   148,     9,   434,   149,  1529,
     154,    37,  1532,    16,    17,  1535,    21,  1537,    21,  1539,
      23,  1541,   155,   191,  1194,     8,   194,    92,    22,     8,
      24,     8,   149,     8,    37,    15,   463,   180,    21,    33,
    1026,    35,    21,   470,    21,   472,    21,    15,  1523,   265,
       8,    15,   185,  2145,  2146,  2147,   200,  1562,  1206,     7,
     135,    15,     8,    21,  1212,     8,   282,  1237,  1216,   285,
    1218,  1219,  1220,   289,  1222,    21,  1224,  2069,    21,  1249,
    1250,  1251,     8,   299,   149,   218,     8,   231,   304,     8,
       8,  1261,     8,     8,   169,    21,  1266,     8,     8,    21,
     244,  2093,  1272,    21,  2360,    21,    21,   351,   352,  2093,
    1280,    21,    15,     5,    15,     8,   191,     9,  1774,   252,
    1776,  1777,     8,    37,    16,    17,  1284,  1285,    21,    21,
    1651,    23,  1788,   208,   209,    21,   201,  1642,    15,     8,
       8,    15,  1798,    15,  1800,    37,   221,     8,   223,   224,
    1308,   226,    21,    21,   229,    15,  1314,     8,     7,     8,
    1318,  1666,  2301,    15,   158,   159,     8,   161,   162,    15,
      21,   314,   315,  1678,    15,   318,   319,  1682,     5,    21,
      15,  2250,     9,     5,     8,   316,   317,     9,    15,    16,
      17,   124,  1929,  1697,    16,    17,    15,    21,   192,   452,
      27,    23,    15,     8,  1664,    15,  2275,   282,  1936,    36,
     637,    15,     8,    15,   641,    37,    21,    15,    15,    16,
      17,   648,     8,     8,    15,    21,   653,    15,     8,     8,
      27,  1389,    15,     8,   487,    21,    21,    64,    15,    36,
     234,    21,    21,     8,   497,   320,    21,   322,    15,     5,
       8,     7,    15,   247,    10,     8,    21,     7,    14,    15,
      16,    17,   124,    21,  1784,    92,  1726,    64,    21,  1789,
    1418,    27,    15,     8,  1432,  1433,    15,  1435,    34,   239,
      36,     8,  1802,     8,     3,  1443,    21,  1445,    21,  1447,
       8,  1651,  1450,    15,    21,    92,    21,   550,   551,   552,
     553,   554,   129,    21,  1824,     8,  1292,     8,    64,   246,
    1830,   246,     8,     8,  1834,     8,    15,     8,    21,    26,
      21,     8,   149,     8,  1482,    21,    21,     8,    21,  1499,
      21,     8,   129,  1491,    21,     7,    92,    15,     8,  1497,
      21,     8,     8,   240,    21,  1493,     8,    15,  1518,  1507,
    1520,    21,   149,     8,    21,    21,   609,   610,   611,    21,
     613,  2500,    15,    63,     8,     8,  1524,   620,    68,     8,
       8,     8,   799,   129,   201,  1545,     8,    21,    21,   348,
     349,   634,    21,    21,    21,     7,  1556,    16,    17,    21,
      90,    91,    15,   149,    16,    17,     8,     5,    15,  1569,
     858,   859,    10,   861,   201,    15,    14,    15,    16,    17,
       8,  1581,   149,   338,   175,  1585,   341,   342,   343,    27,
    1655,  1656,  1657,   676,   124,  1595,    34,  1597,    36,  1610,
    1611,    15,  1590,     8,  2303,   247,   248,     8,   691,  1006,
    1007,  2550,  2551,    15,   144,   201,  2435,  2436,     8,   876,
     877,   866,   867,  1948,   154,     8,    64,    26,    15,     7,
     887,    62,  1620,    15,     8,    10,   719,    21,    15,    14,
      15,    16,    17,   726,     8,  1633,  1951,    15,   287,   732,
     733,     8,    27,   314,    92,     8,     8,   213,     8,    34,
      15,    36,     9,    44,  1652,  2232,  2016,  1655,  1656,  1657,
     200,    64,   129,    21,     9,  2374,     8,  1665,  2377,  2378,
    2030,  2019,     8,     8,    15,  2035,    37,    67,  2038,    64,
      26,   129,    15,    15,    15,   778,    15,    15,  2048,    15,
    2050,    15,  2052,   233,  2054,     8,    87,     8,   129,  1697,
       7,   149,    93,    15,   244,     7,    21,    92,    26,     7,
      18,    21,    21,     7,    37,    15,     8,     8,   166,  1717,
      15,    26,    15,  2432,     8,    21,    15,    15,   119,    15,
      15,   998,   999,  1000,  1001,  1002,  1734,    15,    21,  1006,
    1007,    15,     8,    15,   129,    21,    21,  2456,  2457,     5,
      15,    15,   143,   201,   145,    15,     5,    15,   851,   852,
       9,    15,    15,    15,   149,    15,  1033,    16,    17,    15,
    1768,  1769,  2209,    22,    23,  2120,    25,    15,    15,    28,
      29,    30,    31,    32,    15,  2130,    15,   178,    37,  1056,
      15,    15,   183,    15,    62,  1793,   187,     5,    21,  2508,
     191,     9,    10,   194,     8,     7,    14,    15,    16,    17,
       8,     8,     8,     8,    15,    15,   201,     7,   255,    27,
     239,    15,   166,    16,     5,   216,    34,  1094,    36,    10,
      21,    15,    15,    14,    15,    16,    17,    15,   208,   230,
       8,    21,     7,    15,   330,   236,    27,   315,  2292,  2293,
     331,    15,    15,    34,    15,    36,    64,     7,     5,     8,
     246,    15,    15,   246,   957,   958,   959,   960,   961,   962,
     963,   964,   965,   966,   967,   968,   969,   970,   971,   972,
     973,   974,   975,    64,    92,    21,     5,   246,    21,   982,
       9,   246,   246,     8,   987,     7,    15,    16,    17,    21,
      21,   994,     8,   996,    21,    15,    26,    21,    27,     8,
     173,    92,  1910,  1911,  1912,  1913,   255,    36,  1011,    15,
      15,   129,     8,     7,    21,  1923,    15,    15,   208,  2374,
      71,  2376,     8,    18,    15,     5,    15,  2272,    15,     9,
      15,   149,    15,    21,  1037,    64,    16,    17,   129,    21,
    1043,     5,  1950,    23,    21,    25,  1966,    21,    28,    29,
      30,    31,    32,    21,    15,    15,  1059,    37,   149,    21,
      26,     8,    21,    92,    21,     8,    15,  1987,     7,    15,
      20,     9,    26,    45,    46,   166,    48,    49,    26,    21,
      21,    53,    15,   201,    21,    21,    21,    21,    15,    61,
       8,    15,    21,    15,    66,  2003,    26,    69,     7,  2007,
     129,  2009,  2372,   353,     5,    77,    21,    79,    15,    81,
     201,  2019,    26,  2033,    15,    16,    17,     8,  2026,  2027,
     149,    15,  2042,   254,    21,    21,    27,    15,     8,   132,
       7,    21,   104,     7,    21,    36,    21,   166,    37,     8,
    2060,  1144,     8,   115,     7,     7,     5,    15,     7,    21,
      21,    10,     8,   255,    15,    14,    15,    16,    17,  1162,
      15,    15,    15,    64,    15,    15,  2086,   139,    27,    15,
      15,    15,   201,    15,     7,    34,     8,    36,    21,     7,
     152,  2101,  1185,  1186,  1187,    45,    46,    21,    48,    49,
       8,    92,     7,    53,   352,    21,   351,     7,   170,    15,
       7,    61,  1379,    15,   176,    64,    66,    21,    78,    69,
     329,    15,   184,    15,   186,     8,   188,    77,   190,    79,
       7,    81,     7,  2131,    21,   197,    15,    15,   129,    21,
       8,    17,  2140,    92,  2142,  2143,  2144,  2145,  2146,  2147,
      17,    15,   214,   215,   104,     7,     7,    15,   149,  1252,
       7,   222,  2172,   128,     5,   115,  1882,   909,  2005,    10,
     232,  1285,  1595,    14,    15,    16,    17,   239,  1198,  1103,
     129,  1599,  2250,   582,  1883,   590,    27,   593,   710,   139,
    1316,   253,  1629,    34,   256,    36,  2255,   946,  2142,    40,
     149,   946,   152,  1910,  1902,  2122,  1507,  1735,  1167,  2191,
     201,  2209,  2210,  2003,  2210,  1491,  1483,  1039,  1311,  1059,
     170,  1427,  1406,    64,  1101,  1708,   176,    75,  1931,  1710,
    1323,  2556,  1953,   463,   184,   711,   186,   246,   188,   246,
     190,  1413,  1450,   246,   246,  1048,   792,   197,  1648,  1651,
    1011,    92,   201,   657,  1084,  1115,   838,  2255,  1351,  1526,
    1187,   659,  2506,  2302,   214,   215,   661,  1429,  1431,  2171,
    1363,   660,  2007,  2360,  1027,  1542,  1543,  1544,   807,  1546,
    1547,   662,   232,  1550,  2479,  1029,  1100,  1054,   129,  1041,
    1950,  2414,  1989,  2373,  2292,  2293,  2508,  1564,  2532,  2552,
    1567,  1568,  2554,   253,  2302,     5,   256,  2310,   149,     9,
    1577,  1505,  1760,   666,  2010,   504,    16,    17,  1467,  1412,
    1413,   761,   382,    23,  1955,    25,  1556,  2014,    28,    29,
      30,    31,    32,   415,  1427,  2282,  2346,    37,  2348,  1812,
    1792,  1434,  1831,  1787,  2039,  1835,  1825,  2040,  2333,  2060,
    1237,  1444,   878,  2240,  1261,  2069,  1266,  1450,  1280,  1452,
     201,  1272,  2101,    -1,    -1,    -1,  2364,    -1,    -1,    -1,
      -1,    -1,  1465,    -1,    -1,    -1,  2374,   434,  2376,  2389,
      -1,     5,    -1,    -1,  1651,  1652,  1479,    -1,  2398,     5,
      -1,    15,    16,    17,    10,    -1,    -1,  1490,    14,    15,
      16,    17,    -1,    27,    -1,  2403,   463,    -1,    -1,    -1,
    1503,    27,    36,   470,    -1,  1508,    -1,  1510,    34,    -1,
      36,   478,    -1,    -1,    -1,  2435,  2436,     5,    -1,    -1,
      -1,    -1,    10,    -1,    -1,    -1,    14,    15,    16,    17,
      64,    -1,    -1,    -1,  1711,  1712,  1713,    -1,    64,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,  2479,    -1,  2481,    -1,    -1,    64,     5,    -1,    -1,
      -1,  1584,    10,    -1,    -1,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    87,    -1,   129,    -1,    -1,    -1,    27,
      -1,    -1,  1605,   129,    92,    -1,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,  2534,   149,    -1,    -1,    -1,  2539,
      -1,    -1,   589,   149,    -1,   119,    -1,    -1,     5,    -1,
      -1,    -1,  2552,    10,  2554,  2555,    64,    14,    15,    16,
      17,   129,    -1,  1646,  1647,  1648,    -1,  2567,    -1,   143,
      27,   145,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      -1,   149,    -1,     7,    92,    -1,    10,   201,    -1,    -1,
      14,    15,    16,    17,  1677,   201,    -1,  1680,    -1,    -1,
      -1,    -1,    -1,    27,   178,  1688,   653,    64,    -1,   183,
      34,    -1,    36,   187,    -1,    -1,    -1,   191,    -1,    -1,
     194,   129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   201,    -1,    92,    -1,  1720,    -1,  1722,
      64,   149,   216,    -1,     7,    -1,    -1,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    -1,   230,    -1,    -1,    -1,
      -1,    -1,   236,    -1,    27,    -1,    -1,    -1,    92,    -1,
      -1,    34,   129,    36,    -1,     7,    -1,    -1,    10,    -1,
      -1,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
    1947,    -1,   149,   201,    -1,    27,  1953,    -1,   745,    -1,
      -1,    64,    34,    -1,    36,   129,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,   763,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    92,
     777,    -1,    64,    -1,    -1,    -1,    -1,    -1,   785,   786,
      -1,    -1,   166,   790,   201,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    10,    -1,    -1,    -1,    14,    15,    16,    17,
      92,    -1,    -1,    -1,    -1,    -1,   129,    -1,    -1,    27,
      -1,   818,    -1,    -1,    -1,    -1,    34,   201,    36,   826,
      -1,    -1,     7,    -1,    -1,    10,   149,    -1,    -1,    14,
      15,    16,    17,  1876,  1877,    -1,    -1,   129,    -1,    -1,
      -1,  1884,    27,    -1,    -1,    -1,    64,  2064,   855,    34,
     857,    36,  2069,    -1,    -1,    -1,    -1,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   876,
     877,    -1,    -1,    -1,    92,    -1,  2093,    -1,   201,    64,
     887,   888,  1925,    -1,    -1,    -1,    -1,    -1,  1931,    -1,
      -1,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    92,    -1,   201,
      -1,   129,    27,  1956,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    36,  1965,    -1,    -1,     7,    -1,    -1,    10,    -1,
      -1,   149,    14,    15,    16,    17,    -1,    -1,    -1,  1982,
    1983,    -1,    -1,    -1,   129,    27,    -1,  2164,    -1,    64,
      -1,    -1,    34,    -1,    36,    10,    -1,    -1,    -1,    14,
      15,    16,    17,    -1,   149,    -1,    -1,  2010,   621,    -1,
      -1,    -1,    27,   980,   981,  2018,    -1,    92,    -1,    34,
      -1,    36,    64,   201,     7,  2028,    -1,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,  1006,
    1007,  2044,    -1,  2046,    27,    -1,    -1,    -1,    -1,    64,
      92,    34,    -1,    36,   129,    -1,   201,    -1,  2235,  2236,
      -1,    -1,    -1,    -1,    -1,  2068,  1033,    -1,     5,    -1,
      -1,    -1,     9,    -1,   149,    -1,    -1,    92,    -1,    16,
      17,    64,    -1,    -1,    -1,    22,    23,   129,    25,  1056,
      -1,    28,    29,    30,    31,    32,    -1,    -1,    35,    -1,
      37,    38,    -1,    -1,    -1,  2108,    -1,   149,    -1,    92,
      -1,    -1,     5,    -1,   129,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    16,    17,    -1,   201,  1094,    -1,    22,
      23,    24,    25,    26,   149,    28,    29,    30,    31,    32,
      33,    -1,    35,    -1,    37,    38,   129,    -1,    -1,    -1,
      -1,  2154,    -1,    -1,    -1,    -1,  2159,    -1,   771,   201,
      -1,    -1,   775,    -1,    -1,    -1,   149,  2170,  2171,    -1,
      -1,    -1,  2175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2185,    -1,    -1,    -1,   201,  2190,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2375,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,   822,
       7,    -1,     9,    10,    -1,    -1,  2393,  1184,   201,    16,
      17,   834,    -1,  2400,    21,    22,    23,    24,    25,    -1,
      -1,    28,    29,    30,    31,    32,    33,    -1,    35,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,  2250,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   881,   882,
     883,   884,    -1,   886,    -1,    -1,     5,    -1,    -1,    -1,
       9,    10,  2285,    -1,    -1,    -1,    -1,    16,    17,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,  2301,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   951,    -1,
     953,   954,   955,   956,    -1,    -1,    -1,    -1,  1315,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2359,  2360,    -1,    -1,
    2363,    -1,  2365,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2381,  2382,
      -1,  2384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,  2394,     7,    -1,     9,    10,    -1,  2400,    -1,  1012,
      -1,    16,    17,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,  2414,  1379,    28,    29,    30,    31,    32,    33,    -1,
      35,  1034,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1044,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2450,  2451,    -1,
      -1,    -1,  1065,    -1,    -1,    -1,    -1,    -1,    -1,  2462,
      -1,    -1,  2465,    -1,    -1,    -1,  2469,    -1,  1081,    -1,
      -1,    -1,  1085,  1086,    -1,    -1,    -1,    -1,  1445,    -1,
    1447,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2500,    -1,  1466,
    1467,    -1,    -1,  2506,    -1,    -1,    -1,  2510,    -1,    -1,
    1477,  2514,    -1,    -1,    -1,  2518,  1483,    -1,  1485,    -1,
      -1,  1488,    -1,    -1,    -1,    -1,    -1,  2530,  2531,  2532,
    1143,    -1,    -1,  1500,    -1,    -1,    -1,  1504,  1505,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1526,
      -1,    -1,    -1,    -1,    -1,    -1,  1533,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1542,  1543,  1544,    -1,  1546,
    1547,    -1,    -1,  1550,    -1,    -1,    -1,    -1,  1201,  1202,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1564,    -1,    -1,
    1567,  1568,    -1,    -1,  1571,  1572,  1573,    -1,  1575,  1576,
    1577,    -1,    -1,    -1,     5,  1582,  1583,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    -1,    28,    29,    30,
      31,    32,    33,    -1,    35,     5,    37,    38,     8,     9,
      10,    -1,    -1,  1620,    -1,    -1,    16,    17,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    -1,    28,    29,
      30,    31,    32,    33,    -1,    35,     5,    37,    38,     8,
       9,    10,    -1,    -1,    -1,  1652,    -1,    16,    17,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    -1,    28,
      29,    30,    31,    32,    33,    -1,    35,    -1,    37,    38,
      -1,    -1,    -1,    -1,  1327,  1328,  1329,  1330,  1331,  1332,
    1333,  1334,  1335,  1336,  1337,  1338,  1339,  1340,  1341,  1342,
    1343,  1344,  1345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1711,  1712,  1713,    -1,  1361,    -1,
      -1,    -1,    -1,    -1,     5,  1368,    -1,  1370,     9,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,  1380,    -1,    -1,
      21,    22,    23,    24,    25,    -1,    -1,    28,    29,    30,
      31,    32,    33,    -1,    35,     5,    37,    38,    -1,     9,
      10,    -1,    -1,  1760,    -1,    -1,    16,    17,  1411,    -1,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,    29,
      30,    31,    32,    33,    -1,    35,    -1,    37,    38,     5,
      -1,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      16,    17,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    -1,    28,    29,    30,    31,    32,    33,    -1,    35,
      -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,     7,    -1,     9,    10,    -1,    -1,  1480,    -1,    -1,
      16,    17,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,  1494,    28,    29,    30,    31,    32,    33,    -1,    35,
      -1,    37,    38,     5,    -1,    -1,    -1,     9,    10,    -1,
      -1,    -1,  1515,    -1,    16,    17,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    28,    29,    30,    31,
      32,    33,    -1,    35,    -1,    37,    38,    -1,    -1,    -1,
    1897,  1898,  1899,  1900,  1901,     5,    -1,    -1,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    16,    17,  1561,    -1,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,    29,
      30,    31,    32,    33,    -1,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,
    1947,     9,    10,    -1,    -1,    -1,  1953,    -1,    16,    17,
      -1,  1604,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      28,    29,    30,    31,    32,    33,    -1,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1986,
      -1,    -1,    -1,    -1,  1637,    -1,    -1,    -1,    -1,    -1,
      -1,  1644,    -1,    -1,    -1,    -1,    -1,  1650,     5,    -1,
      -1,  2008,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,
      17,    -1,  2019,    -1,    21,    22,    23,    24,    25,    -1,
    1673,    28,    29,    30,    31,    32,    33,    -1,    35,    -1,
      37,    38,  1685,  2040,    -1,    -1,    -1,    -1,    -1,    -1,
    1693,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1703,    -1,    -1,  1706,    -1,    -1,    -1,  2064,  2065,    -1,
      -1,    -1,  2069,    -1,    -1,    -1,    -1,    -1,  1721,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1732,
      -1,    -1,    -1,    -1,     5,    -1,  2093,    -1,     9,    10,
      -1,    -1,    -1,  1746,    -1,    16,    17,    -1,    -1,  1752,
      21,    22,    23,    24,    25,  1758,    -1,    28,    29,    30,
      31,    32,    33,    -1,    35,     5,    37,    38,    -1,     9,
      10,    -1,    -1,    -1,  2131,    -1,    16,    17,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,    29,
      30,    31,    32,    33,    -1,    35,    -1,    37,    38,    -1,
      -1,     5,    -1,    -1,  2161,     9,    10,  2164,    -1,  2166,
      -1,    -1,    16,    17,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    -1,    -1,    28,    29,    30,    31,    32,    33,
      -1,    35,     5,    37,    38,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    -1,    -1,    28,    29,    30,    31,    32,
      33,    -1,    35,    -1,    37,    38,    -1,    -1,    -1,  1872,
       5,    -1,     7,    -1,     9,    10,    -1,    -1,  2235,  2236,
      -1,    16,    17,    -1,    -1,  1888,    -1,    22,    23,    24,
      25,    -1,    -1,    28,    29,    30,    31,    32,    33,    -1,
      35,    -1,    37,    38,    -1,    -1,    -1,     5,    -1,    -1,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    -1,  1932,
      28,    29,    30,    31,    32,    33,    -1,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,  2303,    -1,    -1,  1952,
    2307,  1954,    -1,    -1,    -1,  1958,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    16,    17,  1981,    -1,
      -1,  1984,    22,    23,    24,    25,    -1,    -1,    28,    29,
      30,    31,    32,    33,    -1,    35,    -1,    37,    38,    -1,
      -1,    -1,  2005,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2374,  2375,  2376,
    2377,  2378,    -1,     5,    -1,    -1,  2383,     9,    10,    -1,
      -1,    -1,    -1,    -1,    16,    17,  2393,    -1,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    28,    29,    30,    31,
      32,    33,    -1,    35,     5,    37,    38,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,
      21,    22,    23,    24,    25,  2432,    -1,    28,    29,    30,
      31,    32,    33,    -1,    35,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2456,
    2457,    -1,    -1,  2460,    -1,    -1,    -1,  2110,  2111,     5,
    2467,     7,    -1,     9,    10,  2118,    -1,    -1,    -1,    -1,
      16,    17,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    -1,    28,    29,    30,    31,    32,    33,    -1,    35,
      -1,    37,    38,    -1,    -1,    -1,  2149,    -1,    -1,    -1,
      -1,  2508,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2168,    -1,     5,    -1,     7,
    2173,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
    2183,  2184,    -1,    -1,    22,    23,    24,    25,    -1,    -1,
      28,    29,    30,    31,    32,    33,    -1,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2223,  2224,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,
    2233,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      -1,  2244,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      28,    29,    30,    31,    32,    33,    -1,    35,    -1,    37,
      38,    -1,  2265,    -1,  2267,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,  2276,    -1,    -1,     9,    10,  2281,    -1,
      -1,  2284,    -1,    16,    17,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    -1,  2297,    28,    29,    30,    31,    32,
      33,    -1,    35,     5,    37,    38,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    -1,    28,    29,    30,    31,
      32,    33,    -1,    35,    -1,    37,    38,     5,    -1,    -1,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      28,    29,    30,    31,    32,    33,  2369,    35,     5,    37,
      38,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,
      17,    -1,    -1,    -1,    21,    22,    23,    24,    25,    -1,
      -1,    28,    29,    30,    31,    32,    33,    -1,    35,    -1,
      37,    38,    -1,    -1,  2407,    -1,  2409,    -1,    -1,    -1,
    2413,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2425,  2426,     5,    -1,    -1,  2430,     9,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,  2440,    -1,  2442,
      21,    22,    23,    24,    25,    -1,    -1,    28,    29,    30,
      31,    32,    33,    -1,    35,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2480,    -1,  2482,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2494,    -1,  2496,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    -1,    19,    -1,    21,    -1,    23,    24,
      -1,    26,    -1,    -1,    -1,    30,    -1,    32,    33,    -1,
    2523,    36,    37,    38,  2527,    40,    -1,    42,    43,    -1,
      -1,    46,    -1,    -1,  2537,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    60,    61,    -1,    -1,    64,
      65,    66,    -1,    68,    -1,    70,    -1,    -1,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    94,
      -1,    96,    97,    -1,    -1,    -1,   101,   102,   103,    -1,
      -1,   106,    -1,    -1,   109,   110,    -1,   112,   113,   114,
      -1,    -1,    -1,    -1,   119,   120,    -1,    -1,   123,    -1,
     125,   126,   127,    -1,   129,   130,    -1,    -1,   133,    -1,
     135,   136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,
      -1,    -1,   147,   148,   149,    -1,    -1,    -1,    -1,   154,
     155,   156,    -1,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
     185,    -1,   187,    -1,   189,    -1,   191,   192,    -1,   194,
     195,   196,   197,   198,   199,   200,   201,     5,    -1,    -1,
       6,     9,    10,    -1,    -1,    -1,    -1,    13,    16,    17,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      28,    29,    30,    31,    32,    33,    -1,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,
      46,    -1,    48,    49,    50,    51,    52,    53,    -1,   254,
      56,    57,   257,    -1,   259,    61,    62,    63,    -1,    65,
      66,    67,    68,    69,    70,    -1,    72,    73,    74,    75,
      76,    77,    -1,    79,    80,    81,    82,    83,    84,    -1,
      -1,    87,    88,    89,    90,    91,    -1,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      -1,   117,    -1,   119,   120,    -1,   122,   123,   124,    -1,
      -1,   127,    -1,    -1,   130,   131,    -1,   133,   134,   135,
     136,    -1,   138,   139,   140,   141,   142,   143,   144,   145,
     146,    -1,    -1,    -1,    -1,    -1,   152,   153,   154,   155,
      -1,    -1,    -1,    -1,   160,    -1,    -1,   163,   164,    -1,
      -1,   167,   168,    -1,   170,    -1,    -1,    -1,   174,    -1,
     176,    -1,   178,    -1,    -1,    -1,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,    -1,   193,   194,   195,
      -1,   197,    -1,   199,   200,    -1,   202,    -1,   204,   205,
     206,   207,    -1,    -1,   210,   211,   212,    -1,   214,   215,
     216,    -1,   218,   219,   220,    -1,   222,    -1,   224,   225,
     226,   227,   228,    -1,   230,    -1,   232,   233,    -1,    -1,
     236,   237,   238,    -1,    -1,   241,   242,    -1,   244,   245,
      -1,   247,   248,    -1,    -1,    -1,   252,   253,    -1,    -1,
     256,    -1,    -1,   259,    -1,    -1,    -1,   263,   264,    -1,
      -1,   267,   268,   269,    -1,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,    -1,   283,    -1,    -1,
     286,    -1,    -1,    -1,   290,   291,   292,   293,   294,    -1,
     296,   297,    -1,    -1,   300,   301,   302,   303,    -1,    -1,
      -1,    -1,   308,   309,   310,   311,   312,   313,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   321,    -1,    -1,   324,   325,
     326,   327,   328,    -1,    -1,    -1,   332,   333,   334,   335,
     336,   337,     5,   339,   340,     8,     9,    10,   344,    -1,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    -1,    28,    29,    30,    31,    32,
      33,    -1,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,    -1,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,    22,
      23,    24,    25,   598,   599,    28,    29,    30,    31,    32,
      33,    -1,    35,     5,    37,    38,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    -1,    28,    29,    30,    31,
      32,    33,    -1,    35,     5,    37,    38,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    -1,    28,    29,    30,
      31,    32,    33,    -1,    35,     5,    37,    38,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,    29,
      30,    31,    32,    33,    -1,    35,     5,    37,    38,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    -1,    -1,    28,
      29,    30,    31,    32,    33,    -1,    35,     5,    37,    38,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    -1,
      28,    29,    30,    31,    32,    33,    -1,    35,     5,    37,
      38,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,
      17,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      -1,    28,    29,    30,    31,    32,    33,    -1,    35,     5,
      37,    38,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      16,    17,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      -1,    -1,    28,    29,    30,    31,    32,    33,    -1,    35,
       5,    37,    38,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    16,    17,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    -1,    -1,    28,    29,    30,    31,    32,    33,    -1,
      35,     5,    37,    38,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    16,    17,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    -1,    28,    29,    30,    31,    32,    33,
      -1,    35,    -1,    37,    38,     5,    -1,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    -1,    28,    29,
      30,    31,    32,    33,    -1,    35,     5,    37,    38,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    -1,    28,
      29,    30,    31,    32,    33,    -1,    35,     5,    37,    38,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    -1,
      28,    29,    30,    31,    32,    33,    -1,    35,    -1,    37,
      38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   357,     0,     1,   150,   257,   358,   359,   116,     6,
      13,    43,    44,    45,    46,    48,    49,    50,    51,    52,
      53,    56,    57,    61,    62,    63,    65,    66,    67,    68,
      69,    70,    72,    73,    74,    75,    76,    77,    79,    80,
      81,    82,    83,    84,    87,    88,    89,    90,    91,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   117,   119,   120,   122,   123,   124,   127,   130,   131,
     133,   134,   135,   136,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   152,   153,   154,   155,   160,   163,   164,
     167,   168,   170,   174,   176,   178,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   193,   194,   195,   197,
     199,   200,   202,   204,   205,   206,   207,   210,   211,   212,
     214,   215,   216,   218,   219,   220,   222,   224,   225,   226,
     227,   228,   230,   232,   233,   236,   237,   238,   241,   242,
     244,   245,   247,   248,   252,   253,   256,   259,   263,   264,
     267,   268,   269,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   283,   286,   290,   291,   292,   293,
     294,   296,   297,   300,   301,   302,   303,   308,   309,   310,
     311,   312,   313,   321,   324,   325,   326,   327,   328,   332,
     333,   334,   335,   336,   337,   339,   340,   344,   360,   362,
     365,   377,   378,   382,   383,   384,   390,   391,   392,   393,
     395,   396,   398,   400,   401,   402,   403,   410,   411,   412,
     413,   414,   415,   419,   420,   421,   425,   426,   464,   466,
     479,   522,   523,   525,   526,   532,   533,   534,   535,   542,
     543,   544,   545,   547,   550,   554,   555,   556,   557,   558,
     559,   565,   566,   567,   578,   579,   580,   582,   585,   588,
     593,   594,   596,   598,   600,   603,   604,   628,   629,   640,
     641,   642,   643,   648,   651,   654,   657,   658,   707,   708,
     709,   710,   711,   712,   713,   714,   720,   722,   724,   726,
     728,   729,   730,   731,   732,   735,   737,   738,   739,   742,
     743,   747,   748,   750,   751,   752,   753,   754,   755,   756,
     759,   764,   769,   771,   772,   773,   774,   776,   777,   778,
     779,   780,   781,   798,   801,   802,   803,   804,   810,   813,
     818,   819,   820,   823,   824,   825,   826,   827,   828,   829,
     830,   831,   832,   833,   834,   835,   836,   837,   842,   843,
     844,   845,   846,   856,   857,   858,   860,   861,   862,   863,
     864,   869,   886,    15,   489,   489,   551,   551,   551,   551,
     551,   489,   551,   551,   361,   551,   551,   551,   489,   551,
     489,   551,   551,   489,   551,   551,   551,   488,   551,   489,
     551,   551,     7,    15,   490,    15,   489,   611,   551,   489,
     374,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   129,   367,   531,   531,   551,   551,   551,   489,   551,
     367,   551,   489,   489,   551,   551,   488,   361,   489,   489,
      64,   373,   551,   551,   489,   489,   551,   489,   489,   489,
     489,   489,   551,   428,   551,   551,   551,   367,   465,   361,
     489,   551,   551,   551,   489,   551,   489,   551,   551,   489,
     551,   551,   551,   489,   361,   489,   374,   551,   551,   374,
     551,   489,   551,   551,   551,   489,   551,   551,   489,   551,
     489,   551,   551,   551,   551,   551,   551,    15,   489,   589,
     489,   361,   489,   489,   551,   551,   551,    15,     8,   489,
     489,   551,   551,   551,   489,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   489,   551,   489,   551,   551,   551,   551,   489,   551,
     551,   551,   551,   551,   551,   551,   551,    15,    15,    15,
     367,   884,    15,   257,   577,   124,   233,   398,    15,   370,
     577,     8,     8,     8,     8,     7,     8,   124,   362,   385,
       8,   367,   399,     8,     8,     8,     8,     8,   546,     8,
     546,     8,     8,     8,     8,   546,   577,     7,   218,   252,
     523,   525,   534,   535,   239,   543,   543,    10,    14,    15,
      16,    17,    27,    34,    36,    64,    92,   149,   201,   367,
     379,   495,   496,   498,   499,   500,   501,   507,   508,   509,
     510,   511,   514,    15,   551,     5,     9,    15,    16,    17,
     129,   497,   499,   507,   561,   575,   576,   551,    15,   561,
     551,     5,   560,   561,   576,   561,     8,     8,     8,     8,
       8,     8,     8,     8,     7,     8,     8,     5,     7,   367,
     638,   639,   367,   631,   490,    15,    15,   149,   478,   367,
     367,   740,   741,     8,   367,   655,   656,   741,   367,   369,
     367,    15,   527,   573,    23,    37,   367,   417,   418,    15,
     367,   601,   367,   669,   669,   367,   652,   653,   367,   530,
     427,    15,   367,   581,   149,   746,   530,     7,   473,   474,
     489,   612,   613,   367,   607,   613,    15,   552,   367,   583,
     584,   530,    15,    15,   530,   746,   531,   530,   530,   530,
     530,   367,   530,   370,   530,    15,   422,   490,   498,   499,
      15,   364,   367,   367,   649,   650,   480,   481,   482,   483,
       8,   670,   736,    15,   367,   595,   367,   586,   587,   574,
      15,    15,   367,   490,    15,   495,   749,    15,    15,   367,
     723,   725,     8,   367,    37,   416,    15,   499,   500,   490,
      15,    15,   552,   478,   490,   499,   367,   715,     5,    15,
     575,   576,   490,   367,   368,   490,   574,    15,   498,   632,
     633,   607,   611,   367,   599,   367,   695,   695,    15,   367,
     597,   715,   495,   506,   490,   374,    15,   367,   701,   701,
     701,   701,   701,     7,   495,   590,   591,   367,   592,   490,
     363,   367,   490,   367,   721,   723,   367,   489,   490,   367,
     467,    15,    15,   574,   367,    15,   613,    15,   613,   613,
     613,   613,   784,   840,   613,   613,   613,   613,   613,   613,
     784,   367,   374,   847,   848,   849,    15,    15,   374,   859,
      15,   495,   495,   495,   495,   494,   495,    15,    15,   374,
     870,   871,   872,   873,   874,   374,   877,   878,   879,   880,
     881,   374,   882,   883,     8,   374,   887,   888,   361,   361,
     124,     5,    21,   367,   371,   372,   366,   374,   367,   367,
     367,   418,     7,   374,   361,   124,   367,   367,     5,    15,
     405,   406,   367,   418,   418,   418,   418,   417,   498,   416,
     367,   367,   422,   429,   430,   432,   433,   551,   551,   239,
     408,   495,   496,   495,   495,   495,   495,     5,     9,    16,
      17,    22,    23,    24,    25,    26,    28,    29,    30,    31,
      32,    33,    35,    37,    38,   379,    15,   246,     3,    15,
     246,   246,    15,   504,   505,    21,   548,   573,   506,     5,
       9,   166,   562,   563,   564,   575,    26,   575,     5,     9,
      23,    37,   497,   574,   575,   574,     8,    15,   499,   568,
     569,    15,   495,   496,   511,   570,   571,   572,   570,   581,
     367,   595,   597,   599,   601,   367,     7,   374,   721,     8,
      21,   633,   418,   520,   495,   240,   546,    15,   374,    15,
     472,     8,   573,     7,   495,   528,   529,   530,    15,   367,
     472,   418,   477,   478,     8,   429,   520,   472,    15,     8,
      21,     5,     7,   475,   476,   495,   367,     8,    21,     5,
      58,    86,   126,   137,   165,   258,   614,   610,   611,   175,
     602,   495,   149,   541,     8,   495,   495,   366,   367,   423,
     424,   498,   503,   367,    26,   367,   536,   537,   539,   370,
       8,     8,    15,   231,   398,   484,   374,     8,   736,   367,
     498,   705,   715,   733,   734,     8,   561,    26,     5,     9,
      16,    17,    22,    23,    24,    25,    28,    29,    30,    31,
      32,    33,    34,    35,    37,    38,   379,   380,   381,   367,
     374,   388,   498,   495,    15,   374,   367,   367,   498,   498,
     521,     8,   670,   727,   367,   498,   659,   367,   462,   463,
     541,   418,    18,   574,   575,   574,   394,   397,   638,   633,
       7,   611,   613,   705,   715,   716,   717,   417,   418,   456,
     457,    62,   498,   760,    15,    15,     7,     8,    21,   589,
     418,   370,   418,   472,     8,   668,   692,    21,   374,   367,
       8,   495,   495,   472,   498,   546,   805,   498,   287,   817,
     817,   546,   814,   817,    15,   546,   782,   546,   821,   782,
     782,   546,   799,   546,   811,   472,   147,   148,   180,   314,
     315,   318,   319,   375,   850,   851,   852,     8,    21,   499,
     674,   853,    21,   853,   375,   851,   374,   757,   758,     8,
       8,     8,     8,   498,   501,   502,   775,   659,   183,   191,
     208,     8,    21,    41,   209,   228,     8,    21,   338,   341,
     342,   343,     8,    21,   374,   244,   330,   345,   346,   347,
       8,    21,   367,   363,   361,     8,    21,   213,   375,   472,
      44,    87,    93,   119,   143,   145,   178,   183,   187,   191,
     194,   216,   230,   236,   386,   387,   389,   367,   361,   489,
     552,   573,   399,   472,   546,   546,     8,    37,    15,   367,
     435,   440,   374,    15,   515,    21,     8,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   573,    64,   129,   491,
     493,   573,   498,   509,   512,    64,   512,   506,     8,    21,
       5,   495,   549,   564,     8,    21,     5,     9,   495,    21,
     495,   575,   575,   575,   575,   575,    21,   568,   568,     8,
     495,   496,   571,   572,     8,     8,     8,   472,   472,   489,
      43,    67,    82,    87,    88,    94,   228,   259,   303,   642,
     639,   374,   502,   518,    21,   367,    15,   494,    67,   473,
     656,   495,     7,     8,    21,   548,    37,     8,    21,   653,
     498,   501,   517,   519,   573,   744,   475,     7,   472,   613,
      15,    15,    15,    15,    15,    15,   602,   613,   367,    21,
     553,   584,    21,    21,    15,     8,    21,     8,   505,   499,
       8,   538,    26,   366,   650,   481,   129,   485,   486,   487,
     403,   169,   208,   282,   374,    15,     7,     8,    21,   587,
     570,    21,    21,   147,   148,   180,    21,    18,    21,     7,
     495,   513,   175,   323,    37,     8,    21,   374,     8,    21,
      26,     8,    21,   553,   495,    21,   458,   459,   458,    21,
       7,   613,   602,    15,     7,     8,    21,     8,    15,    15,
      26,   702,   703,   705,   494,   495,   591,   374,     8,   692,
       8,   668,   399,   389,   376,    21,    21,    21,   613,   546,
      21,   613,   546,   841,   613,   546,   613,   546,   613,   546,
     613,   546,    15,    15,    15,    15,    15,    15,   374,   849,
       8,    21,    21,   182,   315,   318,     8,    21,   374,   374,
     374,   495,    15,    15,     8,    21,    21,    15,    15,    15,
     871,    15,    15,    15,   878,    15,    15,    15,   883,   351,
     352,    15,    15,    15,    15,    15,   888,   370,   367,   372,
      15,   404,   405,   472,   489,    15,     7,     8,   367,   472,
      15,   509,     5,   407,   495,   564,   418,   498,   432,    15,
      16,    17,    27,    36,    59,    64,    92,   149,   201,   431,
     433,   443,   444,   445,   446,   447,   448,   449,   450,   435,
     440,   441,   442,    15,   436,   437,    62,   495,   570,   496,
     491,    21,     8,   492,   495,   513,   564,     7,   573,   478,
     495,   573,     8,   569,    21,     8,     8,     8,   496,   572,
     496,   572,   496,   572,   367,   255,     8,    21,   478,   477,
      21,     7,    21,   495,   528,    21,   478,   546,     8,    21,
     564,   745,     8,    21,   476,   495,   614,   573,    15,   616,
     367,   615,   615,   495,   615,   472,   613,   239,   530,   494,
     424,   424,   367,   495,   537,    21,   495,   513,     8,    21,
      16,    15,    15,    15,   494,   733,   734,   490,   498,   765,
       7,   495,     7,    21,    21,   367,   609,   499,   498,   498,
     613,   660,   495,   463,   546,     8,    47,   177,   367,   461,
     374,   630,   632,   602,     7,     7,   495,   718,   719,   716,
     717,   457,   495,     5,   616,   761,   762,   768,   495,   626,
       8,    21,    15,    21,    71,   208,   374,   374,   490,   172,
     367,   470,   471,   499,   191,   208,   282,   285,   290,   298,
     785,   786,   787,   794,   806,   807,   808,   613,   266,   815,
     816,   817,   613,    37,   498,   838,   839,    84,   265,   289,
     299,   304,   783,   785,   786,   787,   788,   789,   790,   792,
     793,   794,   613,   785,   786,   787,   788,   789,   790,   792,
     793,   794,   807,   808,   822,   613,   785,   786,   787,   794,
     800,   613,   785,   786,   812,   613,   853,   853,   853,   374,
     854,   855,   853,   853,   499,   758,   330,   315,   331,   573,
     491,   502,   502,   875,   876,   674,   374,   696,   702,   716,
     702,   659,   659,   502,   885,    15,    15,   374,   889,   890,
     659,   659,   495,   374,   891,   367,    18,    26,   409,    15,
     388,     7,   374,   404,   553,   553,   408,     5,   495,   446,
     447,   448,   451,   447,   449,   447,   449,   246,   246,   246,
     246,   246,     8,    37,   367,   434,   498,     5,   436,   437,
       8,    15,    16,    17,   149,   367,   434,   438,   439,   452,
     453,   454,   455,    15,   437,    15,    21,   516,    21,    21,
     505,   573,   495,   506,   549,   563,   575,   539,   540,   496,
     540,   540,   540,   472,   367,   634,   637,   573,     8,    21,
       7,   408,   495,   573,   495,   573,   564,   627,   495,   617,
     618,    21,    21,    21,    21,     8,     8,   254,   524,   530,
      21,   486,   487,   674,   674,   674,    21,    21,   367,    15,
      21,   495,     7,     7,   495,   472,   173,     8,   664,   665,
     666,   667,   668,   670,   671,   672,   675,   677,   678,   679,
     692,   700,   539,   459,    15,    15,   460,   255,     8,     7,
       8,    21,    21,    21,     8,    21,    21,   703,   704,    15,
      15,   367,   367,   468,   469,   471,    18,     8,    26,   784,
      15,   784,   784,    15,   613,   806,   784,   613,   815,   367,
       8,    21,    15,   784,    15,   784,    15,   613,   783,   613,
     822,   613,   800,   613,   812,    21,    21,    21,   316,   317,
       8,    21,    21,    21,    15,    15,   491,    21,    26,     8,
      21,    21,    22,    24,    33,    35,   158,   159,   161,   162,
     192,   234,   247,   697,   698,   699,     8,    21,    21,    21,
      21,    21,    21,     8,    21,   374,   865,   866,   865,   315,
     350,     8,    21,    21,    21,    21,   348,   349,     8,    21,
     495,   495,   644,   645,    21,   387,   409,     5,   495,   399,
       8,    21,     8,   512,   512,   512,   512,   512,   443,     5,
      15,   433,   444,   437,   367,   434,   442,   452,   453,   453,
       8,    21,     7,    16,    17,     5,    37,     9,   452,   495,
      20,   505,   492,    21,    26,    21,    21,    21,    21,    15,
     502,   564,   478,   655,   490,   517,   564,   745,   495,    21,
       7,     8,    21,   495,   374,    15,    21,    21,    21,     7,
     766,   767,   768,   495,   495,     7,   498,   661,   374,   666,
      26,   461,    26,   380,   634,   632,   367,   605,   606,   607,
     608,   719,   762,   613,    78,   590,   367,   669,   716,   693,
       8,   367,   471,   495,   613,   795,   374,   613,   613,   840,
     498,   838,   374,   495,   495,   613,   613,   613,   613,   855,
     674,   498,    21,   495,   876,    15,    15,   374,   502,   353,
       8,    21,    21,   890,   495,     8,    21,     7,    21,    21,
     573,   451,   444,   573,   434,    26,    21,   452,   439,   453,
     453,   454,   454,   454,    21,   495,     5,   495,   513,   635,
     636,   498,     8,   674,   498,     8,   495,   618,   374,    21,
     254,   495,     8,    21,   495,    15,    41,   135,   191,   209,
     221,   223,   224,   226,   229,   320,   322,   495,   460,    21,
      21,    15,     8,   132,   763,    21,    21,     7,    21,   695,
     697,   469,     5,    16,    17,    22,    24,    33,    35,    37,
     159,   162,   247,   305,   306,   307,   797,    21,    94,   230,
     284,   295,   809,    37,   191,   288,   299,   791,    21,    21,
      21,    21,   499,   674,   697,   866,     8,   867,     8,   868,
      21,     7,     7,   407,    21,   491,   438,   452,    21,     8,
       8,    21,   478,   564,   255,    15,    21,   767,     5,   495,
     662,   663,    15,   680,    15,    15,    15,    15,    15,   701,
     701,    15,    15,    15,     8,   494,   606,   705,   706,    15,
     716,   694,   694,     7,     8,    21,   841,    21,     8,    21,
       8,   374,   374,     7,   408,    21,    21,   495,   636,   495,
     367,   619,   620,   495,     8,    21,   613,   680,   715,   733,
     674,   715,   716,   705,   702,   495,   495,   673,   661,   676,
     495,    21,     8,   374,    21,     7,     8,    21,   674,   796,
     495,   374,   495,   499,   352,   351,   367,   646,   647,    21,
       8,    15,    21,   663,   148,   180,   681,     7,    21,    21,
       7,    21,    15,    21,    21,     8,    21,     8,    21,     8,
     705,    78,   696,   696,    21,   329,    21,    15,    15,     8,
     495,    40,   495,   621,   622,   768,     7,     7,   682,   683,
     705,   733,   716,   590,   495,   661,   495,    21,    21,    21,
      15,   865,   865,   647,   367,   623,     8,    21,     8,    21,
      15,    21,    21,    21,     8,   494,    21,    21,    17,   624,
     625,   622,   683,   495,   684,   685,    21,   495,    21,   626,
      17,     7,     8,    21,     8,   770,   626,   495,   685,    15,
     374,   374,   686,   687,   688,   689,   690,   182,   318,   128,
     157,   217,     8,    21,     7,     7,    15,   691,   691,   691,
     687,   374,   689,   690,   374,   690,   493,     7,    21,   690
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 787 "gram1.y"
    { (yyval.bf_node) = BFNULL; ;}
    break;

  case 3:
#line 789 "gram1.y"
    { (yyval.bf_node) = set_stat_list((yyvsp[(1) - (3)].bf_node),(yyvsp[(2) - (3)].bf_node)); ;}
    break;

  case 4:
#line 793 "gram1.y"
    { lastwasbranch = NO;  (yyval.bf_node) = BFNULL; ;}
    break;

  case 5:
#line 795 "gram1.y"
    {
	       if ((yyvsp[(2) - (3)].bf_node) != BFNULL) 
               {	    
	          (yyvsp[(2) - (3)].bf_node)->label = (yyvsp[(1) - (3)].label);
	          (yyval.bf_node) = (yyvsp[(2) - (3)].bf_node);
	 	  if (is_openmp_stmt) {            /*OMP*/
			is_openmp_stmt = 0;
			if((yyvsp[(2) - (3)].bf_node)) {                        /*OMP*/
				if ((yyvsp[(2) - (3)].bf_node)->decl_specs != -BIT_OPENMP) (yyvsp[(2) - (3)].bf_node)->decl_specs = BIT_OPENMP; /*OMP*/
			}                               /*OMP*/
		  }                                       /*OMP*/
               }
	    ;}
    break;

  case 6:
#line 809 "gram1.y"
    { PTR_BFND p;

	     if(lastwasbranch && ! thislabel)
               /*if (warn_all)
		 warn("statement cannot be reached", 36);*/
	     lastwasbranch = thiswasbranch;
	     thiswasbranch = NO;
	     if((yyvsp[(2) - (3)].bf_node)) (yyvsp[(2) - (3)].bf_node)->label = (yyvsp[(1) - (3)].label);
	     if((yyvsp[(1) - (3)].label) && (yyvsp[(2) - (3)].bf_node)) (yyvsp[(1) - (3)].label)->statbody = (yyvsp[(2) - (3)].bf_node); /*8.11.06 podd*/
	     if((yyvsp[(1) - (3)].label)) {
		/*$1->statbody = $2;*/ /*8.11.06 podd*/
		if((yyvsp[(1) - (3)].label)->labtype == LABFORMAT)
		  err("label already that of a format",39);
		else
		  (yyvsp[(1) - (3)].label)->labtype = LABEXEC;
	     }
	     if (is_openmp_stmt) {            /*OMP*/
			is_openmp_stmt = 0;
			if((yyvsp[(2) - (3)].bf_node)) {                        /*OMP*/
				if ((yyvsp[(2) - (3)].bf_node)->decl_specs != -BIT_OPENMP) (yyvsp[(2) - (3)].bf_node)->decl_specs = BIT_OPENMP; /*OMP*/
			}                               /*OMP*/
	     }                                       /*OMP*/
             for (p = pred_bfnd; (yyvsp[(1) - (3)].label) && 
		  ((p->variant == FOR_NODE)||(p->variant == WHILE_NODE)) &&
                  (p->entry.for_node.doend) &&
		  (p->entry.for_node.doend->stateno == (yyvsp[(1) - (3)].label)->stateno);
		  p = p->control_parent)
                ++end_group;
	     (yyval.bf_node) = (yyvsp[(2) - (3)].bf_node);
     ;}
    break;

  case 7:
#line 840 "gram1.y"
    { /* PTR_LLND p; */
			doinclude( (yyvsp[(3) - (3)].charp) );
/*			p = make_llnd(fi, STRING_VAL, LLNULL, LLNULL, SMNULL);
			p->entry.string_val = $3;
			p->type = global_string;
			$$ = get_bfnd(fi, INCLUDE_STAT, SMNULL, p, LLNULL); */
			(yyval.bf_node) = BFNULL;
		;}
    break;

  case 8:
#line 849 "gram1.y"
    {
	      err("Unclassifiable statement", 10);
	      flline();
	      (yyval.bf_node) = BFNULL;
	    ;}
    break;

  case 9:
#line 855 "gram1.y"
    { PTR_CMNT p;
              PTR_BFND bif; 
	    
              if (last_bfnd && last_bfnd->control_parent &&((last_bfnd->control_parent->variant == LOGIF_NODE)
	         ||(last_bfnd->control_parent->variant == FORALL_STAT)))
  	         bif = last_bfnd->control_parent;
              else
                 bif = last_bfnd;
              p=bif->entry.Template.cmnt_ptr;
              if(p)
                 p->string = StringConcatenation(p->string,commentbuf);
              else
              {
                 p = make_comment(fi,commentbuf, FULL);
                 bif->entry.Template.cmnt_ptr = p;
              }
 	      (yyval.bf_node) = BFNULL;         
            ;}
    break;

  case 10:
#line 875 "gram1.y"
    { 
	      flline();	 needkwd = NO;	inioctl = NO;
/*!!!*/
              opt_kwd_ = NO; intonly = NO; opt_kwd_hedr = NO; opt_kwd_r = NO; as_op_kwd_= NO; optcorner = NO;
	      yyerrok; yyclearin;  (yyval.bf_node) = BFNULL;
	    ;}
    break;

  case 11:
#line 884 "gram1.y"
    {
	    if(yystno)
	      {
	      (yyval.label) = thislabel =	make_label_node(fi,yystno);
	      thislabel->scope = cur_scope();
	      if (thislabel->labdefined && (thislabel->scope == cur_scope()))
		 errstr("Label %s already defined",convic(thislabel->stateno),40);
	      else
		 thislabel->labdefined = YES;
	      }
	    else
	      (yyval.label) = thislabel = LBNULL;
	    ;}
    break;

  case 12:
#line 900 "gram1.y"
    { PTR_BFND p;

	        if (pred_bfnd != global_bfnd)
		    err("Misplaced PROGRAM statement", 33);
		p = get_bfnd(fi,PROG_HEDR, (yyvsp[(3) - (3)].symbol), LLNULL, LLNULL, LLNULL);
		(yyvsp[(3) - (3)].symbol)->entry.prog_decl.prog_hedr=p;
 		set_blobs(p, global_bfnd, NEW_GROUP1);
	        add_scope_level(p, NO);
	        position = IN_PROC;
	    ;}
    break;

  case 13:
#line 912 "gram1.y"
    {  PTR_BFND q = BFNULL;

	      (yyvsp[(3) - (3)].symbol)->variant = PROCEDURE_NAME;
	      (yyvsp[(3) - (3)].symbol)->decl = YES;   /* variable declaration has been seen. */
	      q = get_bfnd(fi,BLOCK_DATA, (yyvsp[(3) - (3)].symbol), LLNULL, LLNULL, LLNULL);
	      set_blobs(q, global_bfnd, NEW_GROUP1);
              add_scope_level(q, NO);
	    ;}
    break;

  case 14:
#line 922 "gram1.y"
    { 
              install_param_list((yyvsp[(3) - (4)].symbol), (yyvsp[(4) - (4)].symbol), LLNULL, PROCEDURE_NAME); 
	      /* if there is only a control end the control parent is not set */
              
	     ;}
    break;

  case 15:
#line 929 "gram1.y"
    { install_param_list((yyvsp[(4) - (5)].symbol), (yyvsp[(5) - (5)].symbol), LLNULL, PROCEDURE_NAME); 
              if((yyvsp[(1) - (5)].ll_node)->variant == RECURSIVE_OP) 
                   (yyvsp[(4) - (5)].symbol)->attr = (yyvsp[(4) - (5)].symbol)->attr | RECURSIVE_BIT;
              pred_bfnd->entry.Template.ll_ptr3 = (yyvsp[(1) - (5)].ll_node);
            ;}
    break;

  case 16:
#line 935 "gram1.y"
    {
              install_param_list((yyvsp[(3) - (5)].symbol), (yyvsp[(4) - (5)].symbol), (yyvsp[(5) - (5)].ll_node), FUNCTION_NAME);  
  	      pred_bfnd->entry.Template.ll_ptr1 = (yyvsp[(5) - (5)].ll_node);
            ;}
    break;

  case 17:
#line 940 "gram1.y"
    {
              install_param_list((yyvsp[(1) - (3)].symbol), (yyvsp[(2) - (3)].symbol), (yyvsp[(3) - (3)].ll_node), FUNCTION_NAME); 
	      pred_bfnd->entry.Template.ll_ptr1 = (yyvsp[(3) - (3)].ll_node);
	    ;}
    break;

  case 18:
#line 945 "gram1.y"
    {PTR_BFND p, bif;
	     PTR_SYMB q = SMNULL;
             PTR_LLND l = LLNULL;

	     if(parstate==OUTSIDE || procclass==CLMAIN || procclass==CLBLOCK)
	        err("Misplaced ENTRY statement", 35);

	     bif = cur_scope();
	     if (bif->variant == FUNC_HEDR) {
	        q = make_function((yyvsp[(2) - (4)].hash_entry), bif->entry.Template.symbol->type, YES);
	        l = construct_entry_list(q, (yyvsp[(3) - (4)].symbol), FUNCTION_NAME); 
             }
             else if ((bif->variant == PROC_HEDR) || 
                      (bif->variant == PROS_HEDR) || /* added for FORTRAN M */
                      (bif->variant == PROG_HEDR)) {
	             q = make_procedure((yyvsp[(2) - (4)].hash_entry), YES);
  	             l = construct_entry_list(q, (yyvsp[(3) - (4)].symbol), PROCEDURE_NAME); 
             }
	     p = get_bfnd(fi,ENTRY_STAT, q, l, (yyvsp[(4) - (4)].ll_node), LLNULL);
	     set_blobs(p, pred_bfnd, SAME_GROUP);
             q->decl = YES;   /*4.02.03*/
             q->entry.proc_decl.proc_hedr = p; /*5.02.03*/
	    ;}
    break;

  case 19:
#line 969 "gram1.y"
    { PTR_SYMB s;
	      PTR_BFND p;
/*
	      s = make_global_entity($3, MODULE_NAME, global_default, NO);
	      s->decl = YES;  
	      p = get_bfnd(fi, MODULE_STMT, s, LLNULL, LLNULL, LLNULL);
	      s->entry.Template.func_hedr = p;
	      set_blobs(p, pred_bfnd, NEW_GROUP1);
              add_scope_level(p, NO);
*/
	      /*position = IN_MODULE;*/


               s = make_module((yyvsp[(3) - (3)].hash_entry));
	       s->decl = YES;   /* variable declaration has been seen. */
	        if (pred_bfnd != global_bfnd)
		    err("Misplaced MODULE statement", 33);
              p = get_bfnd(fi, MODULE_STMT, s, LLNULL, LLNULL, LLNULL);
	      s->entry.Template.func_hedr = p; /* !!!????*/
	      set_blobs(p, global_bfnd, NEW_GROUP1);
	      add_scope_level(p, NO);	
	      position =  IN_MODULE;    /*IN_PROC*/
              privateall = 0;
            ;}
    break;

  case 20:
#line 995 "gram1.y"
    { newprog(); 
	      if (position == IN_OUTSIDE)
	           position = IN_PROC;
              else if (position != IN_INTERNAL_PROC){ 
                if(!is_interface_stat(pred_bfnd))
	           position--;
              }
              else {
                if(!is_interface_stat(pred_bfnd))
                  err("Internal procedures can not contain procedures",304);
              }
	    ;}
    break;

  case 21:
#line 1010 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi, RECURSIVE_OP, LLNULL, LLNULL, SMNULL); ;}
    break;

  case 22:
#line 1012 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi, PURE_OP, LLNULL, LLNULL, SMNULL); ;}
    break;

  case 23:
#line 1014 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi, ELEMENTAL_OP, LLNULL, LLNULL, SMNULL); ;}
    break;

  case 24:
#line 1018 "gram1.y"
    { PTR_BFND p;

	      (yyval.symbol) = make_procedure((yyvsp[(1) - (1)].hash_entry), LOCAL);
	      (yyval.symbol)->decl = YES;   /* variable declaration has been seen. */
             /* if (pred_bfnd != global_bfnd)
		 {
	         err("Misplaced SUBROUTINE statement", 34);
		 }  
              */
	      p = get_bfnd(fi,PROC_HEDR, (yyval.symbol), LLNULL, LLNULL, LLNULL);
              (yyval.symbol)->entry.proc_decl.proc_hedr = p;
	      set_blobs(p, pred_bfnd, NEW_GROUP1);
              add_scope_level(p, NO);
            ;}
    break;

  case 25:
#line 1035 "gram1.y"
    { PTR_BFND p;

	      (yyval.symbol) = make_function((yyvsp[(1) - (1)].hash_entry), TYNULL, LOCAL);
	      (yyval.symbol)->decl = YES;   /* variable declaration has been seen. */
             /* if (pred_bfnd != global_bfnd)
	         err("Misplaced FUNCTION statement", 34); */
	      p = get_bfnd(fi,FUNC_HEDR, (yyval.symbol), LLNULL, LLNULL, LLNULL);
              (yyval.symbol)->entry.func_decl.func_hedr = p;
	      set_blobs(p, pred_bfnd, NEW_GROUP1);
              add_scope_level(p, NO);
            ;}
    break;

  case 26:
#line 1049 "gram1.y"
    { PTR_BFND p;
             PTR_LLND l;

	      (yyval.symbol) = make_function((yyvsp[(4) - (4)].hash_entry), (yyvsp[(1) - (4)].data_type), LOCAL);
	      (yyval.symbol)->decl = YES;   /* variable declaration has been seen. */
              l = make_llnd(fi, TYPE_OP, LLNULL, LLNULL, SMNULL);
              l->type = (yyvsp[(1) - (4)].data_type);
	      p = get_bfnd(fi,FUNC_HEDR, (yyval.symbol), LLNULL, l, LLNULL);
              (yyval.symbol)->entry.func_decl.func_hedr = p;
            /*  if (pred_bfnd != global_bfnd)
	         err("Misplaced FUNCTION statement", 34);*/
	      set_blobs(p, pred_bfnd, NEW_GROUP1);
              add_scope_level(p, NO);
/*
	      $$ = make_function($4, $1, LOCAL);
	      $$->decl = YES;
	      p = get_bfnd(fi,FUNC_HEDR, $$, LLNULL, LLNULL, LLNULL);
              if (pred_bfnd != global_bfnd)
	         errstr("cftn.gram: misplaced SUBROUTINE statement.");
	      set_blobs(p, pred_bfnd, NEW_GROUP1);
              add_scope_level(p, NO);
*/
           ;}
    break;

  case 27:
#line 1073 "gram1.y"
    { PTR_BFND p;
             PTR_LLND l;
	      (yyval.symbol) = make_function((yyvsp[(5) - (5)].hash_entry), (yyvsp[(1) - (5)].data_type), LOCAL);
	      (yyval.symbol)->decl = YES;   /* variable declaration has been seen. */
              if((yyvsp[(2) - (5)].ll_node)->variant == RECURSIVE_OP)
	         (yyval.symbol)->attr = (yyval.symbol)->attr | RECURSIVE_BIT;
              l = make_llnd(fi, TYPE_OP, LLNULL, LLNULL, SMNULL);
              l->type = (yyvsp[(1) - (5)].data_type);
             /* if (pred_bfnd != global_bfnd)
	         err("Misplaced FUNCTION statement", 34);*/
	      p = get_bfnd(fi,FUNC_HEDR, (yyval.symbol), LLNULL, l, (yyvsp[(2) - (5)].ll_node));
              (yyval.symbol)->entry.func_decl.func_hedr = p;
	      set_blobs(p, pred_bfnd, NEW_GROUP1);
              add_scope_level(p, NO);
            ;}
    break;

  case 28:
#line 1089 "gram1.y"
    { PTR_BFND p;

	      (yyval.symbol) = make_function((yyvsp[(4) - (4)].hash_entry), TYNULL, LOCAL);
	      (yyval.symbol)->decl = YES;   /* variable declaration has been seen. */
              if((yyvsp[(1) - (4)].ll_node)->variant == RECURSIVE_OP)
	        (yyval.symbol)->attr = (yyval.symbol)->attr | RECURSIVE_BIT;
              /*if (pred_bfnd != global_bfnd)
	         err("Misplaced FUNCTION statement",34);*/
	      p = get_bfnd(fi,FUNC_HEDR, (yyval.symbol), LLNULL, LLNULL, (yyvsp[(1) - (4)].ll_node));
              (yyval.symbol)->entry.func_decl.func_hedr = p;
	      set_blobs(p, pred_bfnd, NEW_GROUP1);
              add_scope_level(p, NO);
            ;}
    break;

  case 29:
#line 1103 "gram1.y"
    { PTR_BFND p;
              PTR_LLND l;
	      (yyval.symbol) = make_function((yyvsp[(5) - (5)].hash_entry), (yyvsp[(2) - (5)].data_type), LOCAL);
	      (yyval.symbol)->decl = YES;   /* variable declaration has been seen. */
              if((yyvsp[(1) - (5)].ll_node)->variant == RECURSIVE_OP)
	        (yyval.symbol)->attr = (yyval.symbol)->attr | RECURSIVE_BIT;
              l = make_llnd(fi, TYPE_OP, LLNULL, LLNULL, SMNULL);
              l->type = (yyvsp[(2) - (5)].data_type);
             /* if (pred_bfnd != global_bfnd)
	          err("Misplaced FUNCTION statement",34);*/
	      p = get_bfnd(fi,FUNC_HEDR, (yyval.symbol), LLNULL, l, (yyvsp[(1) - (5)].ll_node));
              (yyval.symbol)->entry.func_decl.func_hedr = p;
	      set_blobs(p, pred_bfnd, NEW_GROUP1);
              add_scope_level(p, NO);
            ;}
    break;

  case 30:
#line 1121 "gram1.y"
    { (yyval.ll_node) = LLNULL; ;}
    break;

  case 31:
#line 1123 "gram1.y"
    { PTR_SYMB s;
              s = make_scalar((yyvsp[(4) - (5)].hash_entry), TYNULL, LOCAL);
              (yyval.ll_node) = make_llnd(fi, VAR_REF, LLNULL, LLNULL, s);
            ;}
    break;

  case 32:
#line 1130 "gram1.y"
    { (yyval.hash_entry) = look_up_sym(yytext); ;}
    break;

  case 33:
#line 1133 "gram1.y"
    { (yyval.symbol) = make_program(look_up_sym("_MAIN")); ;}
    break;

  case 34:
#line 1135 "gram1.y"
    {
              (yyval.symbol) = make_program((yyvsp[(1) - (1)].hash_entry));
	      (yyval.symbol)->decl = YES;   /* variable declaration has been seen. */
            ;}
    break;

  case 35:
#line 1141 "gram1.y"
    { (yyval.symbol) = make_program(look_up_sym("_BLOCK")); ;}
    break;

  case 36:
#line 1143 "gram1.y"
    {
              (yyval.symbol) = make_program((yyvsp[(1) - (1)].hash_entry)); 
	      (yyval.symbol)->decl = YES;   /* variable declaration has been seen. */
	    ;}
    break;

  case 37:
#line 1150 "gram1.y"
    { (yyval.symbol) = SMNULL; ;}
    break;

  case 38:
#line 1152 "gram1.y"
    { (yyval.symbol) = SMNULL; ;}
    break;

  case 39:
#line 1154 "gram1.y"
    { (yyval.symbol) = (yyvsp[(2) - (3)].symbol); ;}
    break;

  case 41:
#line 1159 "gram1.y"
    { (yyval.symbol) = set_id_list((yyvsp[(1) - (3)].symbol), (yyvsp[(3) - (3)].symbol)); ;}
    break;

  case 42:
#line 1163 "gram1.y"
    {
	      (yyval.symbol) = make_scalar((yyvsp[(1) - (1)].hash_entry), TYNULL, IO);
            ;}
    break;

  case 43:
#line 1167 "gram1.y"
    { (yyval.symbol) = make_scalar(look_up_sym("*"), TYNULL, IO); ;}
    break;

  case 44:
#line 1173 "gram1.y"
    { char *s;

	      s = copyn(yyleng+1, yytext);
	      s[yyleng] = '\0';
	      (yyval.charp) = s;
	    ;}
    break;

  case 45:
#line 1182 "gram1.y"
    { needkwd = 1; ;}
    break;

  case 46:
#line 1186 "gram1.y"
    { needkwd = NO; ;}
    break;

  case 47:
#line 1191 "gram1.y"
    { colon_flag = YES; ;}
    break;

  case 61:
#line 1212 "gram1.y"
    {
	      saveall = YES;
	      (yyval.bf_node) = get_bfnd(fi,SAVE_DECL, SMNULL, LLNULL, LLNULL, LLNULL);
	    ;}
    break;

  case 62:
#line 1217 "gram1.y"
    {
	      (yyval.bf_node) = get_bfnd(fi,SAVE_DECL, SMNULL, (yyvsp[(4) - (4)].ll_node), LLNULL, LLNULL);
            ;}
    break;

  case 63:
#line 1222 "gram1.y"
    { PTR_LLND p;

	      p = make_llnd(fi,STMT_STR, LLNULL, LLNULL, SMNULL);
	      p->entry.string_val = copys(stmtbuf);
	      (yyval.bf_node) = get_bfnd(fi,FORMAT_STAT, SMNULL, p, LLNULL, LLNULL);
             ;}
    break;

  case 64:
#line 1229 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,PARAM_DECL, SMNULL, (yyvsp[(4) - (5)].ll_node), LLNULL, LLNULL); ;}
    break;

  case 77:
#line 1245 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi, INTERFACE_STMT, SMNULL, LLNULL, LLNULL, LLNULL); 
             /* add_scope_level($$, NO); */    
            ;}
    break;

  case 78:
#line 1249 "gram1.y"
    { PTR_SYMB s;

	      s = make_procedure((yyvsp[(3) - (3)].hash_entry), LOCAL);
	      s->variant = INTERFACE_NAME;
	      (yyval.bf_node) = get_bfnd(fi, INTERFACE_STMT, s, LLNULL, LLNULL, LLNULL);
              /*add_scope_level($$, NO);*/
	    ;}
    break;

  case 79:
#line 1257 "gram1.y"
    { PTR_SYMB s;

	      s = make_function((yyvsp[(4) - (5)].hash_entry), global_default, LOCAL);
	      s->variant = INTERFACE_NAME;
	      (yyval.bf_node) = get_bfnd(fi, INTERFACE_OPERATOR, s, LLNULL, LLNULL, LLNULL);
              /*add_scope_level($$, NO);*/
	    ;}
    break;

  case 80:
#line 1265 "gram1.y"
    { PTR_SYMB s;


	      s = make_procedure(look_up_sym("="), LOCAL);
	      s->variant = INTERFACE_NAME;
	      (yyval.bf_node) = get_bfnd(fi, INTERFACE_ASSIGNMENT, s, LLNULL, LLNULL, LLNULL);
              /*add_scope_level($$, NO);*/
	    ;}
    break;

  case 81:
#line 1274 "gram1.y"
    { parstate = INDCL;
              (yyval.bf_node) = get_bfnd(fi, CONTROL_END, SMNULL, LLNULL, LLNULL, LLNULL); 
	      /*process_interface($$);*/ /*podd 01.02.03*/
              /*delete_beyond_scope_level(pred_bfnd);*/
	    ;}
    break;

  case 82:
#line 1282 "gram1.y"
    { (yyval.hash_entry) = look_up_sym(yytext); ;}
    break;

  case 83:
#line 1286 "gram1.y"
    { (yyval.hash_entry) = (yyvsp[(1) - (1)].hash_entry); ;}
    break;

  case 84:
#line 1288 "gram1.y"
    { (yyval.hash_entry) = (yyvsp[(1) - (1)].hash_entry); ;}
    break;

  case 85:
#line 1292 "gram1.y"
    { (yyval.hash_entry) = look_up_op(PLUS); ;}
    break;

  case 86:
#line 1294 "gram1.y"
    { (yyval.hash_entry) = look_up_op(MINUS); ;}
    break;

  case 87:
#line 1296 "gram1.y"
    { (yyval.hash_entry) = look_up_op(ASTER); ;}
    break;

  case 88:
#line 1298 "gram1.y"
    { (yyval.hash_entry) = look_up_op(DASTER); ;}
    break;

  case 89:
#line 1300 "gram1.y"
    { (yyval.hash_entry) = look_up_op(SLASH); ;}
    break;

  case 90:
#line 1302 "gram1.y"
    { (yyval.hash_entry) = look_up_op(DSLASH); ;}
    break;

  case 91:
#line 1304 "gram1.y"
    { (yyval.hash_entry) = look_up_op(AND); ;}
    break;

  case 92:
#line 1306 "gram1.y"
    { (yyval.hash_entry) = look_up_op(OR); ;}
    break;

  case 93:
#line 1308 "gram1.y"
    { (yyval.hash_entry) = look_up_op(XOR); ;}
    break;

  case 94:
#line 1310 "gram1.y"
    { (yyval.hash_entry) = look_up_op(NOT); ;}
    break;

  case 95:
#line 1312 "gram1.y"
    { (yyval.hash_entry) = look_up_op(EQ); ;}
    break;

  case 96:
#line 1314 "gram1.y"
    { (yyval.hash_entry) = look_up_op(NE); ;}
    break;

  case 97:
#line 1316 "gram1.y"
    { (yyval.hash_entry) = look_up_op(GT); ;}
    break;

  case 98:
#line 1318 "gram1.y"
    { (yyval.hash_entry) = look_up_op(GE); ;}
    break;

  case 99:
#line 1320 "gram1.y"
    { (yyval.hash_entry) = look_up_op(LT); ;}
    break;

  case 100:
#line 1322 "gram1.y"
    { (yyval.hash_entry) = look_up_op(LE); ;}
    break;

  case 101:
#line 1324 "gram1.y"
    { (yyval.hash_entry) = look_up_op(NEQV); ;}
    break;

  case 102:
#line 1326 "gram1.y"
    { (yyval.hash_entry) = look_up_op(EQV); ;}
    break;

  case 103:
#line 1331 "gram1.y"
    {
             PTR_SYMB s;
         
             type_var = s = make_derived_type((yyvsp[(4) - (4)].hash_entry), TYNULL, LOCAL);	
             (yyval.bf_node) = get_bfnd(fi, STRUCT_DECL, s, LLNULL, LLNULL, LLNULL);
             add_scope_level((yyval.bf_node), NO);
	   ;}
    break;

  case 104:
#line 1340 "gram1.y"
    { PTR_SYMB s;
         
             type_var = s = make_derived_type((yyvsp[(7) - (7)].hash_entry), TYNULL, LOCAL);	
	     s->attr = s->attr | type_opt;
             (yyval.bf_node) = get_bfnd(fi, STRUCT_DECL, s, (yyvsp[(5) - (7)].ll_node), LLNULL, LLNULL);
             add_scope_level((yyval.bf_node), NO);
	   ;}
    break;

  case 105:
#line 1350 "gram1.y"
    {
	     (yyval.bf_node) = get_bfnd(fi, CONTROL_END, SMNULL, LLNULL, LLNULL, LLNULL);
	     if (type_var != SMNULL)
               process_type(type_var, (yyval.bf_node));
             type_var = SMNULL;
	     delete_beyond_scope_level(pred_bfnd);
           ;}
    break;

  case 106:
#line 1358 "gram1.y"
    {
             (yyval.bf_node) = get_bfnd(fi, CONTROL_END, SMNULL, LLNULL, LLNULL, LLNULL);
	     if (type_var != SMNULL)
               process_type(type_var, (yyval.bf_node));
             type_var = SMNULL;
	     delete_beyond_scope_level(pred_bfnd);	
           ;}
    break;

  case 107:
#line 1368 "gram1.y"
    { 
	      PTR_LLND q, r, l;
	     /* PTR_SYMB s;*/
	      PTR_TYPE t;
	      int type_opts;

	      vartype = (yyvsp[(1) - (7)].data_type);
              if((yyvsp[(6) - (7)].ll_node) && vartype->variant != T_STRING)
                errstr("Non character entity  %s  has length specification",(yyvsp[(3) - (7)].hash_entry)->ident,41);
              t = make_type_node(vartype, (yyvsp[(6) - (7)].ll_node));
	      type_opts = type_options;
	      if ((yyvsp[(5) - (7)].ll_node)) type_opts = type_opts | DIMENSION_BIT;
	      if ((yyvsp[(5) - (7)].ll_node))
		 q = deal_with_options((yyvsp[(3) - (7)].hash_entry), t, type_opts, (yyvsp[(5) - (7)].ll_node), ndim, (yyvsp[(7) - (7)].ll_node), (yyvsp[(5) - (7)].ll_node));
	      else q = deal_with_options((yyvsp[(3) - (7)].hash_entry), t, type_opts, attr_dims, attr_ndim, (yyvsp[(7) - (7)].ll_node), (yyvsp[(5) - (7)].ll_node));
	      r = make_llnd(fi, EXPR_LIST, q, LLNULL, SMNULL);
	      l = make_llnd(fi, TYPE_OP, LLNULL, LLNULL, SMNULL);
	      l->type = vartype;
	      (yyval.bf_node) = get_bfnd(fi,VAR_DECL, SMNULL, r, l, (yyvsp[(2) - (7)].ll_node));
	    ;}
    break;

  case 108:
#line 1389 "gram1.y"
    { 
	      PTR_LLND q, r;
	    /*  PTR_SYMB s;*/
              PTR_TYPE t;
	      int type_opts;
              if((yyvsp[(5) - (6)].ll_node) && vartype->variant != T_STRING)
                errstr("Non character entity  %s  has length specification",(yyvsp[(3) - (6)].hash_entry)->ident,41);
              t = make_type_node(vartype, (yyvsp[(5) - (6)].ll_node));
	      type_opts = type_options;
	      if ((yyvsp[(4) - (6)].ll_node)) type_opts = type_opts | DIMENSION_BIT;
	      if ((yyvsp[(4) - (6)].ll_node))
		 q = deal_with_options((yyvsp[(3) - (6)].hash_entry), t, type_opts, (yyvsp[(4) - (6)].ll_node), ndim, (yyvsp[(6) - (6)].ll_node), (yyvsp[(4) - (6)].ll_node));
	      else q = deal_with_options((yyvsp[(3) - (6)].hash_entry), t, type_opts, attr_dims, attr_ndim, (yyvsp[(6) - (6)].ll_node), (yyvsp[(4) - (6)].ll_node));
	      r = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
	      add_to_lowLevelList(r, (yyvsp[(1) - (6)].bf_node)->entry.Template.ll_ptr1);
       	    ;}
    break;

  case 109:
#line 1408 "gram1.y"
    { (yyval.ll_node) = LLNULL; ;}
    break;

  case 110:
#line 1410 "gram1.y"
    { (yyval.ll_node) = LLNULL; ;}
    break;

  case 111:
#line 1412 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(3) - (5)].ll_node); ;}
    break;

  case 112:
#line 1416 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node), LLNULL, EXPR_LIST); ;}
    break;

  case 113:
#line 1418 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (4)].ll_node), (yyvsp[(4) - (4)].ll_node), EXPR_LIST); ;}
    break;

  case 114:
#line 1422 "gram1.y"
    { type_options = type_options | PARAMETER_BIT; 
              (yyval.ll_node) = make_llnd(fi, PARAMETER_OP, LLNULL, LLNULL, SMNULL);
            ;}
    break;

  case 115:
#line 1426 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 116:
#line 1428 "gram1.y"
    { type_options = type_options | ALLOCATABLE_BIT;
              (yyval.ll_node) = make_llnd(fi, ALLOCATABLE_OP, LLNULL, LLNULL, SMNULL);
	    ;}
    break;

  case 117:
#line 1432 "gram1.y"
    { type_options = type_options | DIMENSION_BIT;
	      attr_ndim = ndim;
	      attr_dims = (yyvsp[(2) - (2)].ll_node);
              (yyval.ll_node) = make_llnd(fi, DIMENSION_OP, (yyvsp[(2) - (2)].ll_node), LLNULL, SMNULL);
            ;}
    break;

  case 118:
#line 1438 "gram1.y"
    { type_options = type_options | EXTERNAL_BIT;
              (yyval.ll_node) = make_llnd(fi, EXTERNAL_OP, LLNULL, LLNULL, SMNULL);
            ;}
    break;

  case 119:
#line 1442 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(3) - (4)].ll_node); ;}
    break;

  case 120:
#line 1444 "gram1.y"
    { type_options = type_options | INTRINSIC_BIT;
              (yyval.ll_node) = make_llnd(fi, INTRINSIC_OP, LLNULL, LLNULL, SMNULL);
            ;}
    break;

  case 121:
#line 1448 "gram1.y"
    { type_options = type_options | OPTIONAL_BIT;
              (yyval.ll_node) = make_llnd(fi, OPTIONAL_OP, LLNULL, LLNULL, SMNULL);
            ;}
    break;

  case 122:
#line 1452 "gram1.y"
    { type_options = type_options | POINTER_BIT;
              (yyval.ll_node) = make_llnd(fi, POINTER_OP, LLNULL, LLNULL, SMNULL);
            ;}
    break;

  case 123:
#line 1456 "gram1.y"
    { type_options = type_options | SAVE_BIT; 
              (yyval.ll_node) = make_llnd(fi, SAVE_OP, LLNULL, LLNULL, SMNULL);
            ;}
    break;

  case 124:
#line 1460 "gram1.y"
    { type_options = type_options | SAVE_BIT; 
              (yyval.ll_node) = make_llnd(fi, STATIC_OP, LLNULL, LLNULL, SMNULL);
            ;}
    break;

  case 125:
#line 1464 "gram1.y"
    { type_options = type_options | TARGET_BIT; 
              (yyval.ll_node) = make_llnd(fi, TARGET_OP, LLNULL, LLNULL, SMNULL);
            ;}
    break;

  case 126:
#line 1470 "gram1.y"
    { type_options = type_options | IN_BIT;  type_opt = IN_BIT; 
              (yyval.ll_node) = make_llnd(fi, IN_OP, LLNULL, LLNULL, SMNULL);
            ;}
    break;

  case 127:
#line 1474 "gram1.y"
    { type_options = type_options | OUT_BIT;  type_opt = OUT_BIT; 
              (yyval.ll_node) = make_llnd(fi, OUT_OP, LLNULL, LLNULL, SMNULL);
            ;}
    break;

  case 128:
#line 1478 "gram1.y"
    { type_options = type_options | INOUT_BIT;  type_opt = INOUT_BIT;
              (yyval.ll_node) = make_llnd(fi, INOUT_OP, LLNULL, LLNULL, SMNULL);
            ;}
    break;

  case 129:
#line 1484 "gram1.y"
    { type_options = type_options | PUBLIC_BIT; 
              type_opt = PUBLIC_BIT;
              (yyval.ll_node) = make_llnd(fi, PUBLIC_OP, LLNULL, LLNULL, SMNULL);
            ;}
    break;

  case 130:
#line 1489 "gram1.y"
    { type_options =  type_options | PRIVATE_BIT;
               type_opt = PRIVATE_BIT;
              (yyval.ll_node) = make_llnd(fi, PRIVATE_OP, LLNULL, LLNULL, SMNULL);
            ;}
    break;

  case 131:
#line 1496 "gram1.y"
    { 
	      PTR_LLND q, r;
	      PTR_SYMB s;

              s = make_scalar((yyvsp[(7) - (7)].hash_entry), TYNULL, LOCAL);
	      s->attr = s->attr | type_opt;	
	      q = make_llnd(fi,VAR_REF, LLNULL, LLNULL, s);
	      r = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
	      (yyval.bf_node) = get_bfnd(fi, INTENT_STMT, SMNULL, r, (yyvsp[(4) - (7)].ll_node), LLNULL);
	    ;}
    break;

  case 132:
#line 1507 "gram1.y"
    { 
	      PTR_LLND q, r;
	      PTR_SYMB s;

              s = make_scalar((yyvsp[(3) - (3)].hash_entry), TYNULL, LOCAL);	
	      s->attr = s->attr | type_opt;
	      q = make_llnd(fi,VAR_REF, LLNULL, LLNULL, s);
	      r = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
	      add_to_lowLevelList(r, (yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr1);
  	    ;}
    break;

  case 133:
#line 1520 "gram1.y"
    { 
	      PTR_LLND q, r;
	      PTR_SYMB s;

              s = make_scalar((yyvsp[(4) - (4)].hash_entry), TYNULL, LOCAL);	
	      s->attr = s->attr | OPTIONAL_BIT;
	      q = make_llnd(fi,VAR_REF, LLNULL, LLNULL, s);
	      r = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
	      (yyval.bf_node) = get_bfnd(fi, OPTIONAL_STMT, SMNULL, r, LLNULL, LLNULL);
	    ;}
    break;

  case 134:
#line 1531 "gram1.y"
    { 
	      PTR_LLND q, r;
	      PTR_SYMB s;

              s = make_scalar((yyvsp[(3) - (3)].hash_entry), TYNULL, LOCAL);	
	      s->attr = s->attr | OPTIONAL_BIT;
	      q = make_llnd(fi,VAR_REF, LLNULL, LLNULL, s);
	      r = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
	      add_to_lowLevelList(r, (yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr1);
  	    ;}
    break;

  case 135:
#line 1544 "gram1.y"
    { 
	      PTR_LLND r;
	      PTR_SYMB s;

              s = (yyvsp[(4) - (4)].ll_node)->entry.Template.symbol; 
              s->attr = s->attr | SAVE_BIT;
	      r = make_llnd(fi,EXPR_LIST, (yyvsp[(4) - (4)].ll_node), LLNULL, SMNULL);
	      (yyval.bf_node) = get_bfnd(fi, STATIC_STMT, SMNULL, r, LLNULL, LLNULL);
	    ;}
    break;

  case 136:
#line 1554 "gram1.y"
    { 
	      PTR_LLND r;
	      PTR_SYMB s;

              s = (yyvsp[(3) - (3)].ll_node)->entry.Template.symbol;
              s->attr = s->attr | SAVE_BIT;
	      r = make_llnd(fi,EXPR_LIST, (yyvsp[(3) - (3)].ll_node), LLNULL, SMNULL);
	      add_to_lowLevelList(r, (yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr1);
  	    ;}
    break;

  case 137:
#line 1567 "gram1.y"
    {
	      privateall = 1;
	      (yyval.bf_node) = get_bfnd(fi, PRIVATE_STMT, SMNULL, LLNULL, LLNULL, LLNULL);
	    ;}
    break;

  case 138:
#line 1572 "gram1.y"
    {
	      /*type_options = type_options | PRIVATE_BIT;*/
	      (yyval.bf_node) = get_bfnd(fi, PRIVATE_STMT, SMNULL, (yyvsp[(5) - (5)].ll_node), LLNULL, LLNULL);
            ;}
    break;

  case 139:
#line 1578 "gram1.y"
    {type_opt = PRIVATE_BIT;;}
    break;

  case 140:
#line 1582 "gram1.y"
    { 
	      (yyval.bf_node) = get_bfnd(fi, SEQUENCE_STMT, SMNULL, LLNULL, LLNULL, LLNULL);
            ;}
    break;

  case 141:
#line 1587 "gram1.y"
    {
	      /*saveall = YES;*/ /*14.03.03*/
	      (yyval.bf_node) = get_bfnd(fi, PUBLIC_STMT, SMNULL, LLNULL, LLNULL, LLNULL);
	    ;}
    break;

  case 142:
#line 1592 "gram1.y"
    {
	      /*type_options = type_options | PUBLIC_BIT;*/
	      (yyval.bf_node) = get_bfnd(fi, PUBLIC_STMT, SMNULL, (yyvsp[(5) - (5)].ll_node), LLNULL, LLNULL);
            ;}
    break;

  case 143:
#line 1598 "gram1.y"
    {type_opt = PUBLIC_BIT;;}
    break;

  case 144:
#line 1602 "gram1.y"
    {
	      type_options = 0;
              /* following block added by dbg */
	      ndim = 0;
	      attr_ndim = 0;
	      attr_dims = LLNULL;
	      /* end section added by dbg */
              (yyval.data_type) = make_type_node((yyvsp[(1) - (4)].data_type), (yyvsp[(3) - (4)].ll_node));
            ;}
    break;

  case 145:
#line 1612 "gram1.y"
    { PTR_TYPE t;

	      type_options = 0;
	      ndim = 0;
	      attr_ndim = 0;
	      attr_dims = LLNULL;
              t = lookup_type((yyvsp[(3) - (5)].hash_entry));
	      vartype = t;
	      (yyval.data_type) = make_type_node(t, LLNULL);
            ;}
    break;

  case 146:
#line 1625 "gram1.y"
    {opt_kwd_hedr = YES;;}
    break;

  case 147:
#line 1630 "gram1.y"
    { PTR_TYPE p;
	      PTR_LLND q;
	      PTR_SYMB s;
              s = (yyvsp[(2) - (2)].hash_entry)->id_attr;
	      if (s)
		   s->attr = (yyvsp[(1) - (2)].token);
	      else {
		p = undeftype ? global_unknown : impltype[*(yyvsp[(2) - (2)].hash_entry)->ident - 'a'];
                s = install_entry((yyvsp[(2) - (2)].hash_entry), SOFT);
		s->attr = (yyvsp[(1) - (2)].token);
                set_type(s, p, LOCAL);
	      }
	      q = make_llnd(fi,VAR_REF, LLNULL, LLNULL, (yyvsp[(2) - (2)].hash_entry)->id_attr);
	      q = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
	      (yyval.bf_node) = get_bfnd(fi,ATTR_DECL, SMNULL, q, LLNULL, LLNULL);
	    ;}
    break;

  case 148:
#line 1649 "gram1.y"
    { PTR_TYPE p;
	      PTR_LLND q, r;
	      PTR_SYMB s;
	      int att;

	      att = (yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr1->entry.Template.ll_ptr1->
		    entry.Template.symbol->attr;
              s = (yyvsp[(3) - (3)].hash_entry)->id_attr;
	      if (s)
		   s->attr = att;
	      else {
		p = undeftype ? global_unknown : impltype[*(yyvsp[(3) - (3)].hash_entry)->ident - 'a'];
                s = install_entry((yyvsp[(3) - (3)].hash_entry), SOFT);
		s->attr = att;
                set_type(s, p, LOCAL);
	      }
	      q = make_llnd(fi,VAR_REF, LLNULL, LLNULL, (yyvsp[(3) - (3)].hash_entry)->id_attr);
	      for (r = (yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr1;
		   r->entry.list.next;
		   r = r->entry.list.next) ;
	      r->entry.list.next = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);

	    ;}
    break;

  case 149:
#line 1675 "gram1.y"
    { (yyval.token) = ATT_GLOBAL; ;}
    break;

  case 150:
#line 1677 "gram1.y"
    { (yyval.token) = ATT_CLUSTER; ;}
    break;

  case 151:
#line 1689 "gram1.y"
    {
/*		  varleng = ($1<0 || $1==TYLONG ? 0 : typesize[$1]); */
		  vartype = (yyvsp[(1) - (1)].data_type);
		;}
    break;

  case 152:
#line 1696 "gram1.y"
    { (yyval.data_type) = global_int; ;}
    break;

  case 153:
#line 1697 "gram1.y"
    { (yyval.data_type) = global_float; ;}
    break;

  case 154:
#line 1698 "gram1.y"
    { (yyval.data_type) = global_complex; ;}
    break;

  case 155:
#line 1699 "gram1.y"
    { (yyval.data_type) = global_double; ;}
    break;

  case 156:
#line 1700 "gram1.y"
    { (yyval.data_type) = global_dcomplex; ;}
    break;

  case 157:
#line 1701 "gram1.y"
    { (yyval.data_type) = global_bool; ;}
    break;

  case 158:
#line 1702 "gram1.y"
    { (yyval.data_type) = global_string; ;}
    break;

  case 159:
#line 1707 "gram1.y"
    { (yyval.ll_node) = LLNULL; ;}
    break;

  case 160:
#line 1709 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 161:
#line 1713 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi, LEN_OP, (yyvsp[(3) - (5)].ll_node), LLNULL, SMNULL); ;}
    break;

  case 162:
#line 1715 "gram1.y"
    { PTR_LLND l;

                 l = make_llnd(fi, KEYWORD_VAL, LLNULL, LLNULL, SMNULL); 
                 l->entry.string_val = (char *)"*";
                 (yyval.ll_node) = make_llnd(fi, LEN_OP, l,l, SMNULL);
                ;}
    break;

  case 163:
#line 1722 "gram1.y"
    {(yyval.ll_node) = make_llnd(fi, LEN_OP, (yyvsp[(5) - (6)].ll_node), (yyvsp[(5) - (6)].ll_node), SMNULL);;}
    break;

  case 164:
#line 1726 "gram1.y"
    { (yyval.ll_node) = LLNULL; ;}
    break;

  case 165:
#line 1728 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 166:
#line 1730 "gram1.y"
    { /*$$ = make_llnd(fi, PAREN_OP, $2, LLNULL, SMNULL);*/  (yyval.ll_node) = (yyvsp[(3) - (5)].ll_node);  ;}
    break;

  case 167:
#line 1738 "gram1.y"
    { if((yyvsp[(7) - (9)].ll_node)->variant==LENGTH_OP && (yyvsp[(3) - (9)].ll_node)->variant==(yyvsp[(7) - (9)].ll_node)->variant)
                (yyvsp[(7) - (9)].ll_node)->variant=KIND_OP;
                (yyval.ll_node) = make_llnd(fi, CONS, (yyvsp[(3) - (9)].ll_node), (yyvsp[(7) - (9)].ll_node), SMNULL); 
            ;}
    break;

  case 168:
#line 1745 "gram1.y"
    { if(vartype->variant == T_STRING)
                (yyval.ll_node) = make_llnd(fi,LENGTH_OP,(yyvsp[(1) - (1)].ll_node),LLNULL,SMNULL);
              else
                (yyval.ll_node) = make_llnd(fi,KIND_OP,(yyvsp[(1) - (1)].ll_node),LLNULL,SMNULL);
            ;}
    break;

  case 169:
#line 1751 "gram1.y"
    { PTR_LLND l;
	      l = make_llnd(fi, KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
	      l->entry.string_val = (char *)"*";
              (yyval.ll_node) = make_llnd(fi,LENGTH_OP,l,LLNULL,SMNULL);
            ;}
    break;

  case 170:
#line 1757 "gram1.y"
    { /* $$ = make_llnd(fi, SPEC_PAIR, $2, LLNULL, SMNULL); */
	     char *q;
             q = (yyvsp[(1) - (2)].ll_node)->entry.string_val;
  	     if (strcmp(q, "len") == 0)
               (yyval.ll_node) = make_llnd(fi,LENGTH_OP,(yyvsp[(2) - (2)].ll_node),LLNULL,SMNULL);
             else
                (yyval.ll_node) = make_llnd(fi,KIND_OP,(yyvsp[(2) - (2)].ll_node),LLNULL,SMNULL);              
            ;}
    break;

  case 171:
#line 1766 "gram1.y"
    { PTR_LLND l;
	      l = make_llnd(fi, KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
	      l->entry.string_val = (char *)"*";
              (yyval.ll_node) = make_llnd(fi,LENGTH_OP,l,LLNULL,SMNULL);
            ;}
    break;

  case 172:
#line 1774 "gram1.y"
    {endioctl();;}
    break;

  case 173:
#line 1787 "gram1.y"
    { (yyval.ll_node) = LLNULL; ;}
    break;

  case 174:
#line 1789 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(2) - (2)].ll_node); ;}
    break;

  case 175:
#line 1792 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi, POINTST_OP, LLNULL, (yyvsp[(2) - (2)].ll_node), SMNULL); ;}
    break;

  case 176:
#line 1796 "gram1.y"
    { PTR_SYMB s;
	      PTR_LLND q, r;
	      if(! (yyvsp[(5) - (5)].ll_node)) {
		err("No dimensions in DIMENSION statement", 42);
	      }
              if(statement_kind == 1) /*DVM-directive*/
                err("No shape specification", 65);                
	      s = make_array((yyvsp[(4) - (5)].hash_entry), TYNULL, (yyvsp[(5) - (5)].ll_node), ndim, LOCAL);
	      s->attr = s->attr | DIMENSION_BIT;
	      q = make_llnd(fi,ARRAY_REF, (yyvsp[(5) - (5)].ll_node), LLNULL, s);
	      s->type->entry.ar_decl.ranges = (yyvsp[(5) - (5)].ll_node);
	      r = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
	      (yyval.bf_node) = get_bfnd(fi,DIM_STAT, SMNULL, r, LLNULL, LLNULL);
	    ;}
    break;

  case 177:
#line 1811 "gram1.y"
    {  PTR_SYMB s;
	      PTR_LLND q, r;
	      if(! (yyvsp[(4) - (4)].ll_node)) {
		err("No dimensions in DIMENSION statement", 42);
	      }
	      s = make_array((yyvsp[(3) - (4)].hash_entry), TYNULL, (yyvsp[(4) - (4)].ll_node), ndim, LOCAL);
	      s->attr = s->attr | DIMENSION_BIT;
	      q = make_llnd(fi,ARRAY_REF, (yyvsp[(4) - (4)].ll_node), LLNULL, s);
	      s->type->entry.ar_decl.ranges = (yyvsp[(4) - (4)].ll_node);
	      r = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
	      add_to_lowLevelList(r, (yyvsp[(1) - (4)].bf_node)->entry.Template.ll_ptr1);
	;}
    break;

  case 178:
#line 1827 "gram1.y"
    {/* PTR_SYMB s;*/
	      PTR_LLND r;

	         /*if(!$5) {
		   err("No dimensions in ALLOCATABLE statement",305);		
	           }
	          s = make_array($4, TYNULL, $5, ndim, LOCAL);
	          s->attr = s->attr | ALLOCATABLE_BIT;
	          q = make_llnd(fi,ARRAY_REF, $5, LLNULL, s);
	          s->type->entry.ar_decl.ranges = $5;
                  r = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
                */
              (yyvsp[(4) - (4)].ll_node)->entry.Template.symbol->attr = (yyvsp[(4) - (4)].ll_node)->entry.Template.symbol->attr | ALLOCATABLE_BIT;
	      r = make_llnd(fi,EXPR_LIST, (yyvsp[(4) - (4)].ll_node), LLNULL, SMNULL);
	      (yyval.bf_node) = get_bfnd(fi, ALLOCATABLE_STMT, SMNULL, r, LLNULL, LLNULL);
	    ;}
    break;

  case 179:
#line 1845 "gram1.y"
    {  /*PTR_SYMB s;*/
	      PTR_LLND r;

	        /*  if(! $4) {
		      err("No dimensions in ALLOCATABLE statement",305);
		
	            }
	           s = make_array($3, TYNULL, $4, ndim, LOCAL);
	           s->attr = s->attr | ALLOCATABLE_BIT;
	           q = make_llnd(fi,ARRAY_REF, $4, LLNULL, s);
	           s->type->entry.ar_decl.ranges = $4;
	           r = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
                */
              (yyvsp[(3) - (3)].ll_node)->entry.Template.symbol->attr = (yyvsp[(3) - (3)].ll_node)->entry.Template.symbol->attr | ALLOCATABLE_BIT;
              r = make_llnd(fi,EXPR_LIST, (yyvsp[(3) - (3)].ll_node), LLNULL, SMNULL);
	      add_to_lowLevelList(r, (yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr1);
	;}
    break;

  case 180:
#line 1865 "gram1.y"
    { PTR_SYMB s;
	      PTR_LLND  r;
           
	          /*  if(! $5) {
		      err("No dimensions in POINTER statement",306);	    
	              } 
	             s = make_array($4, TYNULL, $5, ndim, LOCAL);
	             s->attr = s->attr | POINTER_BIT;
	             q = make_llnd(fi,ARRAY_REF, $5, LLNULL, s);
	             s->type->entry.ar_decl.ranges = $5;
                   */

                  /*s = make_pointer( $4->entry.Template.symbol->parent, TYNULL, LOCAL);*/ /*17.02.03*/
                 /*$4->entry.Template.symbol->attr = $4->entry.Template.symbol->attr | POINTER_BIT;*/
              s = (yyvsp[(4) - (4)].ll_node)->entry.Template.symbol; /*17.02.03*/
              s->attr = s->attr | POINTER_BIT;
	      r = make_llnd(fi,EXPR_LIST, (yyvsp[(4) - (4)].ll_node), LLNULL, SMNULL);
	      (yyval.bf_node) = get_bfnd(fi, POINTER_STMT, SMNULL, r, LLNULL, LLNULL);
	    ;}
    break;

  case 181:
#line 1885 "gram1.y"
    {  PTR_SYMB s;
	      PTR_LLND r;

     	        /*  if(! $4) {
	        	err("No dimensions in POINTER statement",306);
	            }
	           s = make_array($3, TYNULL, $4, ndim, LOCAL);
	           s->attr = s->attr | POINTER_BIT;
	           q = make_llnd(fi,ARRAY_REF, $4, LLNULL, s);
	           s->type->entry.ar_decl.ranges = $4;
                */

                /*s = make_pointer( $3->entry.Template.symbol->parent, TYNULL, LOCAL);*/ /*17.02.03*/
                /*$3->entry.Template.symbol->attr = $3->entry.Template.symbol->attr | POINTER_BIT;*/
              s = (yyvsp[(3) - (3)].ll_node)->entry.Template.symbol; /*17.02.03*/
              s->attr = s->attr | POINTER_BIT;
	      r = make_llnd(fi,EXPR_LIST, (yyvsp[(3) - (3)].ll_node), LLNULL, SMNULL);
	      add_to_lowLevelList(r, (yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr1);
	;}
    break;

  case 182:
#line 1907 "gram1.y"
    {/* PTR_SYMB s;*/
	      PTR_LLND r;


	     /* if(! $5) {
		err("No dimensions in TARGET statement",307);
	      }
	      s = make_array($4, TYNULL, $5, ndim, LOCAL);
	      s->attr = s->attr | TARGET_BIT;
	      q = make_llnd(fi,ARRAY_REF, $5, LLNULL, s);
	      s->type->entry.ar_decl.ranges = $5;
             */
              (yyvsp[(4) - (4)].ll_node)->entry.Template.symbol->attr = (yyvsp[(4) - (4)].ll_node)->entry.Template.symbol->attr | TARGET_BIT;
	      r = make_llnd(fi,EXPR_LIST, (yyvsp[(4) - (4)].ll_node), LLNULL, SMNULL);
	      (yyval.bf_node) = get_bfnd(fi, TARGET_STMT, SMNULL, r, LLNULL, LLNULL);
	    ;}
    break;

  case 183:
#line 1924 "gram1.y"
    {  /*PTR_SYMB s;*/
	      PTR_LLND r;

	     /* if(! $4) {
		err("No dimensions in TARGET statement",307);
	      }
	      s = make_array($3, TYNULL, $4, ndim, LOCAL);
	      s->attr = s->attr | TARGET_BIT;
	      q = make_llnd(fi,ARRAY_REF, $4, LLNULL, s);
	      s->type->entry.ar_decl.ranges = $4;
              */
              (yyvsp[(3) - (3)].ll_node)->entry.Template.symbol->attr = (yyvsp[(3) - (3)].ll_node)->entry.Template.symbol->attr | TARGET_BIT;
	      r = make_llnd(fi,EXPR_LIST, (yyvsp[(3) - (3)].ll_node), LLNULL, SMNULL);
	      add_to_lowLevelList(r, (yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr1);
	;}
    break;

  case 184:
#line 1942 "gram1.y"
    { PTR_LLND p, q;

              p = make_llnd(fi,EXPR_LIST, (yyvsp[(3) - (3)].ll_node), LLNULL, SMNULL);
	      q = make_llnd(fi,COMM_LIST, p, LLNULL, SMNULL);
	      (yyval.bf_node) = get_bfnd(fi,COMM_STAT, SMNULL, q, LLNULL, LLNULL);
	    ;}
    break;

  case 185:
#line 1949 "gram1.y"
    { PTR_LLND p, q;

              p = make_llnd(fi,EXPR_LIST, (yyvsp[(4) - (4)].ll_node), LLNULL, SMNULL);
	      q = make_llnd(fi,COMM_LIST, p, LLNULL, (yyvsp[(3) - (4)].symbol));
	      (yyval.bf_node) = get_bfnd(fi,COMM_STAT, SMNULL, q, LLNULL, LLNULL);
	    ;}
    break;

  case 186:
#line 1956 "gram1.y"
    { PTR_LLND p, q;

              p = make_llnd(fi,EXPR_LIST, (yyvsp[(5) - (5)].ll_node), LLNULL, SMNULL);
	      q = make_llnd(fi,COMM_LIST, p, LLNULL, (yyvsp[(3) - (5)].symbol));
	      add_to_lowList(q, (yyvsp[(1) - (5)].bf_node)->entry.Template.ll_ptr1);
	    ;}
    break;

  case 187:
#line 1963 "gram1.y"
    { PTR_LLND p, r;

              p = make_llnd(fi,EXPR_LIST, (yyvsp[(3) - (3)].ll_node), LLNULL, SMNULL);
	      /*q = make_llnd(fi,COMM_LIST, p, LLNULL, SMNULL);*/
	      for (r = (yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr1;
		   r->entry.list.next;
		   r = r->entry.list.next);
	      add_to_lowLevelList(p, r->entry.Template.ll_ptr1);
	    ;}
    break;

  case 188:
#line 1976 "gram1.y"
    { PTR_LLND q, r;

              q = make_llnd(fi,EXPR_LIST, (yyvsp[(4) - (4)].ll_node), LLNULL, SMNULL);
	      r = make_llnd(fi,NAMELIST_LIST, q, LLNULL, (yyvsp[(3) - (4)].symbol));
	      (yyval.bf_node) = get_bfnd(fi,NAMELIST_STAT, SMNULL, r, LLNULL, LLNULL);
	    ;}
    break;

  case 189:
#line 1983 "gram1.y"
    { PTR_LLND q, r;

              q = make_llnd(fi,EXPR_LIST, (yyvsp[(5) - (5)].ll_node), LLNULL, SMNULL);
	      r = make_llnd(fi,NAMELIST_LIST, q, LLNULL, (yyvsp[(3) - (5)].symbol));
	      add_to_lowList(r, (yyvsp[(1) - (5)].bf_node)->entry.Template.ll_ptr1);
	    ;}
    break;

  case 190:
#line 1990 "gram1.y"
    { PTR_LLND q, r;

              q = make_llnd(fi,EXPR_LIST, (yyvsp[(3) - (3)].ll_node), LLNULL, SMNULL);
	      for (r = (yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr1;
		   r->entry.list.next;
		   r = r->entry.list.next);
	      add_to_lowLevelList(q, r->entry.Template.ll_ptr1);
	    ;}
    break;

  case 191:
#line 2001 "gram1.y"
    { (yyval.symbol) =  make_local_entity((yyvsp[(2) - (3)].hash_entry), NAMELIST_NAME,global_default,LOCAL); ;}
    break;

  case 192:
#line 2005 "gram1.y"
    { (yyval.symbol) = NULL; /*make_common(look_up_sym("*"));*/ ;}
    break;

  case 193:
#line 2007 "gram1.y"
    { (yyval.symbol) = make_common((yyvsp[(2) - (3)].hash_entry)); ;}
    break;

  case 194:
#line 2012 "gram1.y"
    {  PTR_SYMB s;
	
	      if((yyvsp[(2) - (2)].ll_node)) {
		s = make_array((yyvsp[(1) - (2)].hash_entry), TYNULL, (yyvsp[(2) - (2)].ll_node), ndim, LOCAL);
                s->attr = s->attr | DIMENSION_BIT;
		s->type->entry.ar_decl.ranges = (yyvsp[(2) - (2)].ll_node);
		(yyval.ll_node) = make_llnd(fi,ARRAY_REF, (yyvsp[(2) - (2)].ll_node), LLNULL, s);
	      }
	      else {
		s = make_scalar((yyvsp[(1) - (2)].hash_entry), TYNULL, LOCAL);	
		(yyval.ll_node) = make_llnd(fi,VAR_REF, LLNULL, LLNULL, s);
	      }

          ;}
    break;

  case 195:
#line 2030 "gram1.y"
    { PTR_LLND p, q;
              PTR_SYMB s;

	      s = make_external((yyvsp[(4) - (4)].hash_entry), TYNULL);
	      s->attr = s->attr | EXTERNAL_BIT;
              q = make_llnd(fi, VAR_REF, LLNULL, LLNULL, s);
	      p = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
	      (yyval.bf_node) = get_bfnd(fi,EXTERN_STAT, SMNULL, p, LLNULL, LLNULL);
	    ;}
    break;

  case 196:
#line 2041 "gram1.y"
    { PTR_LLND p, q;
              PTR_SYMB s;

	      s = make_external((yyvsp[(3) - (3)].hash_entry), TYNULL);
	      s->attr = s->attr | EXTERNAL_BIT;
              p = make_llnd(fi, VAR_REF, LLNULL, LLNULL, s);
	      q = make_llnd(fi,EXPR_LIST, p, LLNULL, SMNULL);
	      add_to_lowLevelList(q, (yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr1);
	    ;}
    break;

  case 197:
#line 2053 "gram1.y"
    { PTR_LLND p, q;
              PTR_SYMB s;

	      s = make_intrinsic((yyvsp[(4) - (4)].hash_entry), TYNULL); /*make_function($3, TYNULL, NO);*/
	      s->attr = s->attr | INTRINSIC_BIT;
              q = make_llnd(fi, VAR_REF, LLNULL, LLNULL, s);
	      p = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
	      (yyval.bf_node) = get_bfnd(fi,INTRIN_STAT, SMNULL, p,
			     LLNULL, LLNULL);
	    ;}
    break;

  case 198:
#line 2065 "gram1.y"
    { PTR_LLND p, q;
              PTR_SYMB s;

	      s = make_intrinsic((yyvsp[(3) - (3)].hash_entry), TYNULL); /* make_function($3, TYNULL, NO);*/
	      s->attr = s->attr | INTRINSIC_BIT;
              p = make_llnd(fi, VAR_REF, LLNULL, LLNULL, s);
	      q = make_llnd(fi,EXPR_LIST, p, LLNULL, SMNULL);
	      add_to_lowLevelList(q, (yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr1);
	    ;}
    break;

  case 199:
#line 2079 "gram1.y"
    {
	      (yyval.bf_node) = get_bfnd(fi,EQUI_STAT, SMNULL, (yyvsp[(3) - (3)].ll_node),
			     LLNULL, LLNULL);
	    ;}
    break;

  case 200:
#line 2085 "gram1.y"
    { 
	      add_to_lowLevelList((yyvsp[(3) - (3)].ll_node), (yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr1);
	    ;}
    break;

  case 201:
#line 2092 "gram1.y"
    {
	      (yyval.ll_node) = make_llnd(fi,EQUI_LIST, (yyvsp[(2) - (3)].ll_node), LLNULL, SMNULL);
           ;}
    break;

  case 202:
#line 2098 "gram1.y"
    { PTR_LLND p;
	      p = make_llnd(fi,EXPR_LIST, (yyvsp[(3) - (3)].ll_node), LLNULL, SMNULL);
	      (yyval.ll_node) = make_llnd(fi,EXPR_LIST, (yyvsp[(1) - (3)].ll_node), p, SMNULL);
	    ;}
    break;

  case 203:
#line 2104 "gram1.y"
    { PTR_LLND p;

	      p = make_llnd(fi,EXPR_LIST, (yyvsp[(3) - (3)].ll_node), LLNULL, SMNULL);
	      add_to_lowLevelList(p, (yyvsp[(1) - (3)].ll_node));
	    ;}
    break;

  case 204:
#line 2112 "gram1.y"
    {  PTR_SYMB s;
           s=make_scalar((yyvsp[(1) - (1)].hash_entry),TYNULL,LOCAL);
           (yyval.ll_node) = make_llnd(fi,VAR_REF, LLNULL, LLNULL, s);
           s->attr = s->attr | EQUIVALENCE_BIT;
            /*$$=$1; $$->entry.Template.symbol->attr = $$->entry.Template.symbol->attr | EQUIVALENCE_BIT; */
        ;}
    break;

  case 205:
#line 2119 "gram1.y"
    {  PTR_SYMB s;
           s=make_array((yyvsp[(1) - (4)].hash_entry),TYNULL,LLNULL,0,LOCAL);
           (yyval.ll_node) = make_llnd(fi,ARRAY_REF, (yyvsp[(3) - (4)].ll_node), LLNULL, s);
           s->attr = s->attr | EQUIVALENCE_BIT;
            /*$$->entry.Template.symbol->attr = $$->entry.Template.symbol->attr | EQUIVALENCE_BIT; */
        ;}
    break;

  case 207:
#line 2138 "gram1.y"
    { PTR_LLND p;
              data_stat = NO;
	      p = make_llnd(fi,STMT_STR, LLNULL, LLNULL,
			    SMNULL);
              p->entry.string_val = copys(stmtbuf);
	      (yyval.bf_node) = get_bfnd(fi,DATA_DECL, SMNULL, p, LLNULL, LLNULL);
            ;}
    break;

  case 210:
#line 2152 "gram1.y"
    {data_stat = YES;;}
    break;

  case 211:
#line 2156 "gram1.y"
    {
	      if (parstate == OUTSIDE)
	         { PTR_BFND p;

		   p = get_bfnd(fi,PROG_HEDR,
                                make_program(look_up_sym("_MAIN")),
                                LLNULL, LLNULL, LLNULL);
		   set_blobs(p, global_bfnd, NEW_GROUP1);
	           add_scope_level(p, NO);
		   position = IN_PROC; 
	  	   /*parstate = INDCL;*/
                 }
	      if(parstate < INDCL)
		{
		  /* enddcl();*/
		  parstate = INDCL;
		}
	    ;}
    break;

  case 222:
#line 2201 "gram1.y"
    {;;}
    break;

  case 223:
#line 2205 "gram1.y"
    { (yyval.symbol)= make_scalar((yyvsp[(1) - (1)].hash_entry), TYNULL, LOCAL);;}
    break;

  case 224:
#line 2209 "gram1.y"
    { (yyval.symbol)= make_scalar((yyvsp[(1) - (1)].hash_entry), TYNULL, LOCAL); 
              (yyval.symbol)->attr = (yyval.symbol)->attr | DATA_BIT; 
            ;}
    break;

  case 225:
#line 2215 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi, DATA_SUBS, (yyvsp[(2) - (3)].ll_node), LLNULL, SMNULL); ;}
    break;

  case 226:
#line 2219 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi, DATA_RANGE, (yyvsp[(2) - (5)].ll_node), (yyvsp[(4) - (5)].ll_node), SMNULL); ;}
    break;

  case 227:
#line 2223 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 228:
#line 2225 "gram1.y"
    { (yyval.ll_node) = add_to_lowLevelList((yyvsp[(3) - (3)].ll_node), (yyvsp[(1) - (3)].ll_node)); ;}
    break;

  case 229:
#line 2229 "gram1.y"
    { (yyval.ll_node) = LLNULL; ;}
    break;

  case 230:
#line 2231 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 231:
#line 2235 "gram1.y"
    {(yyval.ll_node)= make_llnd(fi, DATA_IMPL_DO, (yyvsp[(2) - (7)].ll_node), (yyvsp[(6) - (7)].ll_node), (yyvsp[(4) - (7)].symbol)); ;}
    break;

  case 232:
#line 2239 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 233:
#line 2241 "gram1.y"
    { (yyval.ll_node) = add_to_lowLevelList((yyvsp[(3) - (3)].ll_node), (yyvsp[(1) - (3)].ll_node)); ;}
    break;

  case 234:
#line 2245 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi, DATA_ELT, (yyvsp[(2) - (2)].ll_node), LLNULL, (yyvsp[(1) - (2)].symbol)); ;}
    break;

  case 235:
#line 2247 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi, DATA_ELT, (yyvsp[(2) - (2)].ll_node), LLNULL, (yyvsp[(1) - (2)].symbol)); ;}
    break;

  case 236:
#line 2249 "gram1.y"
    {
              (yyvsp[(2) - (3)].ll_node)->entry.Template.ll_ptr2 = (yyvsp[(3) - (3)].ll_node);
              (yyval.ll_node) = make_llnd(fi, DATA_ELT, (yyvsp[(2) - (3)].ll_node), LLNULL, (yyvsp[(1) - (3)].symbol)); 
            ;}
    break;

  case 237:
#line 2254 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi, DATA_ELT, (yyvsp[(1) - (1)].ll_node), LLNULL, SMNULL); ;}
    break;

  case 251:
#line 2278 "gram1.y"
    {if((yyvsp[(2) - (6)].ll_node)->entry.Template.symbol->variant != TYPE_NAME)
               errstr("Undefined type %s",(yyvsp[(2) - (6)].ll_node)->entry.Template.symbol->ident,319); 
           ;}
    break;

  case 268:
#line 2323 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,ICON_EXPR, (yyvsp[(1) - (1)].ll_node), LLNULL, SMNULL); ;}
    break;

  case 269:
#line 2325 "gram1.y"
    {
              PTR_LLND p;

              p = intrinsic_op_node("+", UNARY_ADD_OP, (yyvsp[(2) - (2)].ll_node), LLNULL);
              (yyval.ll_node) = make_llnd(fi,ICON_EXPR, p, LLNULL, SMNULL);
            ;}
    break;

  case 270:
#line 2332 "gram1.y"
    {
              PTR_LLND p;
 
              p = intrinsic_op_node("-", MINUS_OP, (yyvsp[(2) - (2)].ll_node), LLNULL);
              (yyval.ll_node) = make_llnd(fi,ICON_EXPR, p, LLNULL, SMNULL);
            ;}
    break;

  case 271:
#line 2339 "gram1.y"
    {
              PTR_LLND p;
 
              p = intrinsic_op_node("+", ADD_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node));
              (yyval.ll_node) = make_llnd(fi,ICON_EXPR, p, LLNULL, SMNULL);
            ;}
    break;

  case 272:
#line 2346 "gram1.y"
    {
              PTR_LLND p;
 
              p = intrinsic_op_node("-", SUBT_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node));
              (yyval.ll_node) = make_llnd(fi,ICON_EXPR, p, LLNULL, SMNULL);
            ;}
    break;

  case 273:
#line 2355 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 274:
#line 2357 "gram1.y"
    { (yyval.ll_node) = intrinsic_op_node("*", MULT_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node)); ;}
    break;

  case 275:
#line 2359 "gram1.y"
    { (yyval.ll_node) = intrinsic_op_node("/", DIV_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node)); ;}
    break;

  case 276:
#line 2363 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 277:
#line 2365 "gram1.y"
    { (yyval.ll_node) = intrinsic_op_node("**", EXP_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node)); ;}
    break;

  case 278:
#line 2369 "gram1.y"
    {
              PTR_LLND p;

              p = make_llnd(fi,INT_VAL, LLNULL, LLNULL, SMNULL);
              p->entry.ival = atoi(yytext);
              p->type = global_int;
              (yyval.ll_node) = make_llnd(fi,EXPR_LIST, p, LLNULL, SMNULL);
            ;}
    break;

  case 279:
#line 2378 "gram1.y"
    {
              PTR_LLND p;
 
              p = make_llnd(fi,VAR_REF, LLNULL, LLNULL, (yyvsp[(1) - (1)].symbol));
              (yyval.ll_node) = make_llnd(fi,EXPR_LIST, p, LLNULL, SMNULL);
            ;}
    break;

  case 280:
#line 2385 "gram1.y"
    {
              (yyval.ll_node) = make_llnd(fi,EXPR_LIST, (yyvsp[(2) - (3)].ll_node), LLNULL, SMNULL);
            ;}
    break;

  case 281:
#line 2392 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,EXPR_LIST, (yyvsp[(1) - (1)].ll_node), LLNULL, SMNULL); ;}
    break;

  case 282:
#line 2394 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), EXPR_LIST); ;}
    break;

  case 283:
#line 2398 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);
             (yyval.ll_node)->entry.Template.symbol->attr = (yyval.ll_node)->entry.Template.symbol->attr | SAVE_BIT;
           ;}
    break;

  case 284:
#line 2402 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,COMM_LIST, LLNULL, LLNULL, (yyvsp[(1) - (1)].symbol)); 
            (yyval.ll_node)->entry.Template.symbol->attr = (yyval.ll_node)->entry.Template.symbol->attr | SAVE_BIT;
          ;}
    break;

  case 285:
#line 2408 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(2) - (3)].ll_node), LLNULL, EXPR_LIST); ;}
    break;

  case 286:
#line 2410 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (5)].ll_node), (yyvsp[(4) - (5)].ll_node), EXPR_LIST); ;}
    break;

  case 287:
#line 2414 "gram1.y"
    { as_op_kwd_ = YES; ;}
    break;

  case 288:
#line 2418 "gram1.y"
    { as_op_kwd_ = NO; ;}
    break;

  case 289:
#line 2423 "gram1.y"
    { 
             PTR_SYMB s; 
             s = make_scalar((yyvsp[(1) - (1)].hash_entry), TYNULL, LOCAL);	
	     s->attr = s->attr | type_opt;
	     (yyval.ll_node) = make_llnd(fi,VAR_REF, LLNULL, LLNULL, s);
            ;}
    break;

  case 290:
#line 2430 "gram1.y"
    { PTR_SYMB s;
	      s = make_function((yyvsp[(3) - (4)].hash_entry), global_default, LOCAL);
	      s->variant = INTERFACE_NAME;
              s->attr = s->attr | type_opt;
              (yyval.ll_node) = make_llnd(fi,OPERATOR_OP, LLNULL, LLNULL, s);
	    ;}
    break;

  case 291:
#line 2437 "gram1.y"
    { PTR_SYMB s;
	      s = make_procedure(look_up_sym("="), LOCAL);
	      s->variant = INTERFACE_NAME;
              s->attr = s->attr | type_opt;
              (yyval.ll_node) = make_llnd(fi,ASSIGNMENT_OP, LLNULL, LLNULL, s);
	    ;}
    break;

  case 292:
#line 2447 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node), LLNULL, EXPR_LIST); ;}
    break;

  case 293:
#line 2449 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), EXPR_LIST); ;}
    break;

  case 294:
#line 2453 "gram1.y"
    { PTR_SYMB p;

                /* The check if name and expr have compatible types has
                   not been done yet. */ 
		p = make_constant((yyvsp[(1) - (3)].hash_entry), TYNULL);
 	        p->attr = p->attr | PARAMETER_BIT;
                p->entry.const_value = (yyvsp[(3) - (3)].ll_node);
		(yyval.ll_node) = make_llnd(fi,CONST_REF, LLNULL, LLNULL, p);
	    ;}
    break;

  case 295:
#line 2465 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi, MODULE_PROC_STMT, SMNULL, (yyvsp[(2) - (2)].ll_node), LLNULL, LLNULL); ;}
    break;

  case 296:
#line 2468 "gram1.y"
    { PTR_SYMB s;
 	      PTR_LLND q;

	      s = make_function((yyvsp[(1) - (1)].hash_entry), TYNULL, LOCAL);
	      s->variant = ROUTINE_NAME;
              q = make_llnd(fi, VAR_REF, LLNULL, LLNULL, s);
	      (yyval.ll_node) = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
	    ;}
    break;

  case 297:
#line 2477 "gram1.y"
    { PTR_LLND p, q;
              PTR_SYMB s;

	      s = make_function((yyvsp[(3) - (3)].hash_entry), TYNULL, LOCAL);
	      s->variant = ROUTINE_NAME;
              p = make_llnd(fi, VAR_REF, LLNULL, LLNULL, s);
	      q = make_llnd(fi,EXPR_LIST, p, LLNULL, SMNULL);
	      add_to_lowLevelList(q, (yyvsp[(1) - (3)].ll_node));
	    ;}
    break;

  case 298:
#line 2490 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi, USE_STMT, (yyvsp[(3) - (3)].symbol), LLNULL, LLNULL, LLNULL);
              /*add_scope_level($3->entry.Template.func_hedr, YES);*/ /*17.06.01*/
              copy_module_scope((yyvsp[(3) - (3)].symbol),LLNULL); /*17.03.03*/
              colon_flag = NO;
            ;}
    break;

  case 299:
#line 2496 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi, USE_STMT, (yyvsp[(3) - (6)].symbol), (yyvsp[(6) - (6)].ll_node), LLNULL, LLNULL); 
              /*add_scope_level(module_scope, YES); *//* 17.06.01*/
              copy_module_scope((yyvsp[(3) - (6)].symbol),(yyvsp[(6) - (6)].ll_node)); /*17.03.03 */
              colon_flag = NO;
            ;}
    break;

  case 300:
#line 2502 "gram1.y"
    { PTR_LLND l;

	      l = make_llnd(fi, ONLY_NODE, LLNULL, LLNULL, SMNULL);
              (yyval.bf_node) = get_bfnd(fi, USE_STMT, (yyvsp[(3) - (6)].symbol), l, LLNULL, LLNULL);
            ;}
    break;

  case 301:
#line 2508 "gram1.y"
    { PTR_LLND l;

	      l = make_llnd(fi, ONLY_NODE, (yyvsp[(7) - (7)].ll_node), LLNULL, SMNULL);
              (yyval.bf_node) = get_bfnd(fi, USE_STMT, (yyvsp[(3) - (7)].symbol), l, LLNULL, LLNULL);
            ;}
    break;

  case 302:
#line 2516 "gram1.y"
    {
              if ((yyvsp[(1) - (1)].hash_entry)->id_attr == SMNULL)
	         warn1("Unknown module %s", (yyvsp[(1) - (1)].hash_entry)->ident,308);
              (yyval.symbol) = make_global_entity((yyvsp[(1) - (1)].hash_entry), MODULE_NAME, global_default, NO);
	      module_scope = (yyval.symbol)->entry.Template.func_hedr;
           
            ;}
    break;

  case 303:
#line 2526 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node), LLNULL, EXPR_LIST); ;}
    break;

  case 304:
#line 2528 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), EXPR_LIST); ;}
    break;

  case 305:
#line 2532 "gram1.y"
    {  (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 306:
#line 2534 "gram1.y"
    {  PTR_HASH oldhash,copyhash;
	       PTR_SYMB oldsym, newsym;
	       PTR_LLND m;

	       oldhash = just_look_up_sym_in_scope(module_scope, (yyvsp[(1) - (1)].hash_entry)->ident);
	       if (oldhash == HSNULL) {
                  errstr("Unknown identifier %s.", (yyvsp[(1) - (1)].hash_entry)->ident,309);
	          (yyval.ll_node)= LLNULL;
	       }
	       else {
                 oldsym = oldhash->id_attr;
                 copyhash=just_look_up_sym_in_scope(cur_scope(), (yyvsp[(1) - (1)].hash_entry)->ident);
	         if( copyhash && copyhash->id_attr && copyhash->id_attr->entry.Template.tag==module_scope->id)
                 {
                   newsym = copyhash->id_attr;
                   newsym->entry.Template.tag = 0;
                 }
                 else
                 {
	           newsym = make_local_entity((yyvsp[(1) - (1)].hash_entry), oldsym->variant, oldsym->type,LOCAL);
	           /* copies data in entry.Template structure and attr */
	           copy_sym_data(oldsym, newsym);	         
	             /*newsym->entry.Template.base_name = oldsym;*//*19.03.03*/
                 }
	  	/* l = make_llnd(fi, VAR_REF, LLNULL, LLNULL, oldsym);*/
		 m = make_llnd(fi, VAR_REF, LLNULL, LLNULL, newsym);
		 (yyval.ll_node) = make_llnd(fi, RENAME_NODE, m, LLNULL, oldsym);
 	      }
            ;}
    break;

  case 307:
#line 2567 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node), LLNULL, EXPR_LIST); ;}
    break;

  case 308:
#line 2569 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), EXPR_LIST); ;}
    break;

  case 309:
#line 2573 "gram1.y"
    {  PTR_HASH oldhash,copyhash;
	       PTR_SYMB oldsym, newsym;
	       PTR_LLND l, m;

	       oldhash = just_look_up_sym_in_scope(module_scope, (yyvsp[(3) - (3)].hash_entry)->ident);
	       if (oldhash == HSNULL) {
                  errstr("Unknown identifier %s", (yyvsp[(3) - (3)].hash_entry)->ident,309);
	          (yyval.ll_node)= LLNULL;
	       }
	       else {
                 oldsym = oldhash->id_attr;
                 copyhash = just_look_up_sym_in_scope(cur_scope(), (yyvsp[(3) - (3)].hash_entry)->ident);
	         if(copyhash && copyhash->id_attr && copyhash->id_attr->entry.Template.tag==module_scope->id)
                 {
                    delete_symbol(copyhash->id_attr);
                    copyhash->id_attr = SMNULL;
                 }
                   newsym = make_local_entity((yyvsp[(1) - (3)].hash_entry), oldsym->variant, oldsym->type, LOCAL);
	           /* copies data in entry.Template structure and attr */
	           copy_sym_data(oldsym, newsym);	
                         
	           /*newsym->entry.Template.base_name = oldsym;*//*19.03.03*/
	  	 l  = make_llnd(fi, VAR_REF, LLNULL, LLNULL, oldsym);
		 m  = make_llnd(fi, VAR_REF, LLNULL, LLNULL, newsym);
		 (yyval.ll_node) = make_llnd(fi, RENAME_NODE, m, l, SMNULL);
 	      }
            ;}
    break;

  case 310:
#line 2611 "gram1.y"
    { ndim = 0;	explicit_shape = 1; (yyval.ll_node) = LLNULL; ;}
    break;

  case 311:
#line 2613 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(2) - (3)].ll_node); ;}
    break;

  case 312:
#line 2616 "gram1.y"
    { ndim = 0; explicit_shape = 1;;}
    break;

  case 313:
#line 2617 "gram1.y"
    {
	      (yyval.ll_node) = make_llnd(fi,EXPR_LIST, (yyvsp[(2) - (2)].ll_node), LLNULL, SMNULL);
	      (yyval.ll_node)->type = global_default;
	    ;}
    break;

  case 314:
#line 2622 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), EXPR_LIST); ;}
    break;

  case 315:
#line 2626 "gram1.y"
    {
	      if(ndim == maxdim)
		err("Too many dimensions", 43);
	      else if(ndim < maxdim)
		(yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);
	      ++ndim;
	    ;}
    break;

  case 316:
#line 2634 "gram1.y"
    {
	      if(ndim == maxdim)
		err("Too many dimensions", 43);
	      else if(ndim < maxdim)
		(yyval.ll_node) = make_llnd(fi, DDOT, LLNULL, LLNULL, SMNULL);
	      ++ndim;
              explicit_shape = 0;
	    ;}
    break;

  case 317:
#line 2643 "gram1.y"
    {
	      if(ndim == maxdim)
		err("Too many dimensions", 43);
	      else if(ndim < maxdim)
		(yyval.ll_node) = make_llnd(fi,DDOT, (yyvsp[(1) - (2)].ll_node), LLNULL, SMNULL);
	      ++ndim;
              explicit_shape = 0;
	    ;}
    break;

  case 318:
#line 2652 "gram1.y"
    {
	      if(ndim == maxdim)
		err("Too many dimensions", 43);
	      else if(ndim < maxdim)
		(yyval.ll_node) = make_llnd(fi,DDOT, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), SMNULL);
	      ++ndim;
	    ;}
    break;

  case 319:
#line 2662 "gram1.y"
    {
	      (yyval.ll_node) = make_llnd(fi,STAR_RANGE, LLNULL, LLNULL, SMNULL);
	      (yyval.ll_node)->type = global_default;
              explicit_shape = 0;
	    ;}
    break;

  case 321:
#line 2671 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node), LLNULL, EXPR_LIST); ;}
    break;

  case 322:
#line 2673 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), EXPR_LIST); ;}
    break;

  case 323:
#line 2677 "gram1.y"
    {PTR_LABEL p;
	     p = make_label_node(fi,convci(yyleng, yytext));
	     p->scope = cur_scope();
	     (yyval.ll_node) = make_llnd_label(fi,LABEL_REF, p);
	  ;}
    break;

  case 324:
#line 2685 "gram1.y"
    { /*PTR_LLND l;*/

          /*   l = make_llnd(fi, EXPR_LIST, $3, LLNULL, SMNULL);*/
             (yyval.bf_node) = get_bfnd(fi,IMPL_DECL, SMNULL, (yyvsp[(3) - (3)].ll_node), LLNULL, LLNULL);
             redefine_func_arg_type();
           ;}
    break;

  case 325:
#line 2700 "gram1.y"
    { /*undeftype = YES;
	    setimpl(TYNULL, (int)'a', (int)'z'); FB COMMENTED---> NOT QUITE RIGHT BUT AVOID PB WITH COMMON*/
	    (yyval.bf_node) = get_bfnd(fi,IMPL_DECL, SMNULL, LLNULL, LLNULL, LLNULL);
	  ;}
    break;

  case 326:
#line 2707 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node), LLNULL, EXPR_LIST); ;}
    break;

  case 327:
#line 2709 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), EXPR_LIST); ;}
    break;

  case 328:
#line 2713 "gram1.y"
    { 

            (yyval.ll_node) = make_llnd(fi, IMPL_TYPE, (yyvsp[(3) - (4)].ll_node), LLNULL, SMNULL);
            (yyval.ll_node)->type = vartype;
          ;}
    break;

  case 329:
#line 2728 "gram1.y"
    { implkwd = YES; ;}
    break;

  case 330:
#line 2729 "gram1.y"
    { vartype = (yyvsp[(2) - (2)].data_type); ;}
    break;

  case 331:
#line 2733 "gram1.y"
    { (yyval.data_type) = (yyvsp[(2) - (2)].data_type); ;}
    break;

  case 332:
#line 2735 "gram1.y"
    { (yyval.data_type) = (yyvsp[(1) - (1)].data_type);;}
    break;

  case 333:
#line 2747 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node), LLNULL, EXPR_LIST); ;}
    break;

  case 334:
#line 2749 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), EXPR_LIST); ;}
    break;

  case 335:
#line 2753 "gram1.y"
    {
	      setimpl(vartype, (int)(yyvsp[(1) - (1)].charv), (int)(yyvsp[(1) - (1)].charv));
	      (yyval.ll_node) = make_llnd(fi,CHAR_VAL, LLNULL, LLNULL, SMNULL);
	      (yyval.ll_node)->entry.cval = (yyvsp[(1) - (1)].charv);
	    ;}
    break;

  case 336:
#line 2759 "gram1.y"
    { PTR_LLND p,q;
	      
	      setimpl(vartype, (int)(yyvsp[(1) - (3)].charv), (int)(yyvsp[(3) - (3)].charv));
	      p = make_llnd(fi,CHAR_VAL, LLNULL, LLNULL, SMNULL);
	      p->entry.cval = (yyvsp[(1) - (3)].charv);
	      q = make_llnd(fi,CHAR_VAL, LLNULL, LLNULL, SMNULL);
	      q->entry.cval = (yyvsp[(3) - (3)].charv);
	      (yyval.ll_node)= make_llnd(fi,DDOT, p, q, SMNULL);
	    ;}
    break;

  case 337:
#line 2771 "gram1.y"
    {
	      if(yyleng!=1 || yytext[0]<'a' || yytext[0]>'z')
		{
		  err("IMPLICIT item must be single letter", 37);
		  (yyval.charv) = '\0';
		}
	      else (yyval.charv) = yytext[0];
	    ;}
    break;

  case 338:
#line 2782 "gram1.y"
    {
	      if (parstate == OUTSIDE)
	         { PTR_BFND p;

		   p = get_bfnd(fi,PROG_HEDR,
                                make_program(look_up_sym("_MAIN")),
                                LLNULL, LLNULL, LLNULL);
		   set_blobs(p, global_bfnd, NEW_GROUP1);
	           add_scope_level(p, NO);
		   position = IN_PROC; 
	  	   parstate = INSIDE;
                 }
	  
	    ;}
    break;

  case 339:
#line 2799 "gram1.y"
    { switch(parstate)
		{
                case OUTSIDE:  
			{ PTR_BFND p;

			  p = get_bfnd(fi,PROG_HEDR,
                                       make_program(look_up_sym("_MAIN")),
                                       LLNULL, LLNULL, LLNULL);
			  set_blobs(p, global_bfnd, NEW_GROUP1);
			  add_scope_level(p, NO);
			  position = IN_PROC; 
	  		  parstate = INDCL; }
	                  break;
                case INSIDE:    parstate = INDCL;
                case INDCL:     break;

                case INDATA:
                         /*  err(
                     "Statement order error: declaration after DATA or function statement", 
                                 29);*/
                              break;

                default:
                           err("Declaration among executables", 30);
                }
        ;}
    break;

  case 342:
#line 2837 "gram1.y"
    { (yyval.ll_node) = LLNULL; endioctl(); ;}
    break;

  case 343:
#line 2839 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);  endioctl();;}
    break;

  case 344:
#line 2843 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 345:
#line 2845 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 346:
#line 2847 "gram1.y"
    { PTR_LLND l;
	      l = make_llnd(fi, KEYWORD_ARG, (yyvsp[(1) - (2)].ll_node), (yyvsp[(2) - (2)].ll_node), SMNULL);
	      l->type = (yyvsp[(2) - (2)].ll_node)->type;
              (yyval.ll_node) = l; 
	    ;}
    break;

  case 347:
#line 2858 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(2) - (2)].ll_node), LLNULL, EXPR_LIST);
              endioctl(); 
            ;}
    break;

  case 348:
#line 2862 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (4)].ll_node), (yyvsp[(4) - (4)].ll_node), EXPR_LIST);
              endioctl(); 
            ;}
    break;

  case 349:
#line 2868 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node), LLNULL, EXPR_LIST); ;}
    break;

  case 350:
#line 2870 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), EXPR_LIST); ;}
    break;

  case 351:
#line 2874 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 352:
#line 2876 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(2) - (3)].ll_node); ;}
    break;

  case 353:
#line 2878 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 354:
#line 2882 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 355:
#line 2884 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 356:
#line 2888 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 357:
#line 2890 "gram1.y"
    { (yyval.ll_node) = intrinsic_op_node("+", ADD_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node)); ;}
    break;

  case 358:
#line 2892 "gram1.y"
    { (yyval.ll_node) = intrinsic_op_node("-", SUBT_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node)); ;}
    break;

  case 359:
#line 2894 "gram1.y"
    { (yyval.ll_node) = intrinsic_op_node("*", MULT_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node)); ;}
    break;

  case 360:
#line 2896 "gram1.y"
    { (yyval.ll_node) = intrinsic_op_node("/", DIV_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node)); ;}
    break;

  case 361:
#line 2898 "gram1.y"
    { (yyval.ll_node) = intrinsic_op_node("**", EXP_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node)); ;}
    break;

  case 362:
#line 2900 "gram1.y"
    { (yyval.ll_node) = defined_op_node((yyvsp[(1) - (2)].hash_entry), (yyvsp[(2) - (2)].ll_node), LLNULL); ;}
    break;

  case 363:
#line 2902 "gram1.y"
    { (yyval.ll_node) = intrinsic_op_node("+", UNARY_ADD_OP, (yyvsp[(2) - (2)].ll_node), LLNULL); ;}
    break;

  case 364:
#line 2904 "gram1.y"
    { (yyval.ll_node) = intrinsic_op_node("-", MINUS_OP, (yyvsp[(2) - (2)].ll_node), LLNULL); ;}
    break;

  case 365:
#line 2906 "gram1.y"
    { (yyval.ll_node) = intrinsic_op_node(".eq.", EQ_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node)); ;}
    break;

  case 366:
#line 2908 "gram1.y"
    { (yyval.ll_node) = intrinsic_op_node(".gt.", GT_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node)); ;}
    break;

  case 367:
#line 2910 "gram1.y"
    { (yyval.ll_node) = intrinsic_op_node(".lt.", LT_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node)); ;}
    break;

  case 368:
#line 2912 "gram1.y"
    { (yyval.ll_node) = intrinsic_op_node(".ge.", GTEQL_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node)); ;}
    break;

  case 369:
#line 2914 "gram1.y"
    { (yyval.ll_node) = intrinsic_op_node(".ge.", LTEQL_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node)); ;}
    break;

  case 370:
#line 2916 "gram1.y"
    { (yyval.ll_node) = intrinsic_op_node(".ne.", NOTEQL_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node)); ;}
    break;

  case 371:
#line 2918 "gram1.y"
    { (yyval.ll_node) = intrinsic_op_node(".eqv.", EQV_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node)); ;}
    break;

  case 372:
#line 2920 "gram1.y"
    { (yyval.ll_node) = intrinsic_op_node(".neqv.", NEQV_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node)); ;}
    break;

  case 373:
#line 2922 "gram1.y"
    { (yyval.ll_node) = intrinsic_op_node(".xor.", XOR_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node)); ;}
    break;

  case 374:
#line 2924 "gram1.y"
    { (yyval.ll_node) = intrinsic_op_node(".or.", OR_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node)); ;}
    break;

  case 375:
#line 2926 "gram1.y"
    { (yyval.ll_node) = intrinsic_op_node(".and.", AND_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node)); ;}
    break;

  case 376:
#line 2928 "gram1.y"
    { (yyval.ll_node) = intrinsic_op_node(".not.", NOT_OP, (yyvsp[(2) - (2)].ll_node), LLNULL); ;}
    break;

  case 377:
#line 2930 "gram1.y"
    { (yyval.ll_node) = intrinsic_op_node("//", CONCAT_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node)); ;}
    break;

  case 378:
#line 2932 "gram1.y"
    { (yyval.ll_node) = defined_op_node((yyvsp[(2) - (3)].hash_entry), (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node)); ;}
    break;

  case 379:
#line 2935 "gram1.y"
    { (yyval.token) = ADD_OP; ;}
    break;

  case 380:
#line 2936 "gram1.y"
    { (yyval.token) = SUBT_OP; ;}
    break;

  case 381:
#line 2948 "gram1.y"
    { PTR_SYMB s;
	      PTR_TYPE t;
	     /* PTR_LLND l;*/

       	      if (!(s = (yyvsp[(1) - (1)].hash_entry)->id_attr))
              {
	         s = make_scalar((yyvsp[(1) - (1)].hash_entry), TYNULL, LOCAL);
	     	 s->decl = SOFT;
	      } 
	
	      switch (s->variant)
              {
	      case CONST_NAME:
		   (yyval.ll_node) = make_llnd(fi,CONST_REF,LLNULL,LLNULL, s);
		   t = s->type;
	           if ((t != TYNULL) &&
                       ((t->variant == T_ARRAY) ||  (t->variant == T_STRING) ))
                                 (yyval.ll_node)->variant = ARRAY_REF;

                   (yyval.ll_node)->type = t;
	           break;
	      case DEFAULT:   /* if common region with same name has been
                                 declared. */
		   s = make_scalar((yyvsp[(1) - (1)].hash_entry), TYNULL, LOCAL);
	     	   s->decl = SOFT;

	      case VARIABLE_NAME:
                   (yyval.ll_node) = make_llnd(fi,VAR_REF,LLNULL,LLNULL, s);
	           t = s->type;
	           if (t != TYNULL) {
                     if ((t->variant == T_ARRAY) ||  (t->variant == T_STRING) ||
                         ((t->variant == T_POINTER) && (t->entry.Template.base_type->variant == T_ARRAY) ) )
                         (yyval.ll_node)->variant = ARRAY_REF;

/*  	              if (t->variant == T_DERIVED_TYPE)
                         $$->variant = RECORD_REF; */
	           }
                   (yyval.ll_node)->type = t;
	           break;
	      case TYPE_NAME:
  	           (yyval.ll_node) = make_llnd(fi,TYPE_REF,LLNULL,LLNULL, s);
	           (yyval.ll_node)->type = s->type;
	           break;
	      case INTERFACE_NAME:
  	           (yyval.ll_node) = make_llnd(fi, INTERFACE_REF,LLNULL,LLNULL, s);
	           (yyval.ll_node)->type = s->type;
	           break;
              case FUNCTION_NAME:
                   if(isResultVar(s)) {
                     (yyval.ll_node) = make_llnd(fi,VAR_REF,LLNULL,LLNULL, s);
	             t = s->type;
	             if (t != TYNULL) {
                       if ((t->variant == T_ARRAY) ||  (t->variant == T_STRING) ||
                         ((t->variant == T_POINTER) && (t->entry.Template.base_type->variant == T_ARRAY) ) )
                         (yyval.ll_node)->variant = ARRAY_REF;
	             }
                     (yyval.ll_node)->type = t;
	             break;
                   }                                        
	      default:
  	           (yyval.ll_node) = make_llnd(fi,VAR_REF,LLNULL,LLNULL, s);
	           (yyval.ll_node)->type = s->type;
	           break;
	      }
             /* if ($$->variant == T_POINTER) {
	         l = $$;
	         $$ = make_llnd(fi, DEREF_OP, l, LLNULL, SMNULL);
	         $$->type = l->type->entry.Template.base_type;
	      }
              */ /*11.02.03*/
           ;}
    break;

  case 382:
#line 3022 "gram1.y"
    { PTR_SYMB  s;
	      (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); 
              s= (yyval.ll_node)->entry.Template.symbol;
              if ((((yyvsp[(1) - (1)].ll_node)->variant == VAR_REF) || ((yyvsp[(1) - (1)].ll_node)->variant == ARRAY_REF))  && (s->scope !=cur_scope()))  /*global_bfnd*/
              {
	          if(((s->variant == FUNCTION_NAME) && (!isResultVar(s))) || (s->variant == PROCEDURE_NAME) || (s->variant == ROUTINE_NAME))
                  { s = (yyval.ll_node)->entry.Template.symbol =  make_scalar(s->parent, TYNULL, LOCAL);
		    (yyval.ll_node)->type = s->type;  
		  }
              }
            ;}
    break;

  case 383:
#line 3034 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 384:
#line 3036 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 385:
#line 3040 "gram1.y"
    { int num_triplets;
	      PTR_SYMB s;  /*, sym;*/
	      /* PTR_LLND l; */
	      PTR_TYPE tp;
	      /* l = $1; */
	      s = (yyvsp[(1) - (5)].ll_node)->entry.Template.symbol;
            
	      /* Handle variable to function conversion. */
	      if (((yyvsp[(1) - (5)].ll_node)->variant == VAR_REF) && 
	          (((s->variant == VARIABLE_NAME) && (s->type) &&
                    (s->type->variant != T_ARRAY)) ||
  	            (s->variant == ROUTINE_NAME))) {
	        s = (yyvsp[(1) - (5)].ll_node)->entry.Template.symbol =  make_function(s->parent, TYNULL, NO);
	        (yyvsp[(1) - (5)].ll_node)->variant = FUNC_CALL;
              }
	      if (((yyvsp[(1) - (5)].ll_node)->variant == VAR_REF) && (s->variant == FUNCTION_NAME)) { 
                if(isResultVar(s))
	          (yyvsp[(1) - (5)].ll_node)->variant = ARRAY_REF;
                else
                  (yyvsp[(1) - (5)].ll_node)->variant = FUNC_CALL;
              }
	      if (((yyvsp[(1) - (5)].ll_node)->variant == VAR_REF) && (s->variant == PROGRAM_NAME)) {
                 errstr("The name '%s' is invalid in this context",s->ident,285);
                 (yyvsp[(1) - (5)].ll_node)->variant = FUNC_CALL;
              }
              /* l = $1; */
	      num_triplets = is_array_section_ref((yyvsp[(4) - (5)].ll_node));
	      switch ((yyvsp[(1) - (5)].ll_node)->variant)
              {
	      case TYPE_REF:
                   (yyvsp[(1) - (5)].ll_node)->variant = STRUCTURE_CONSTRUCTOR;                  
                   (yyvsp[(1) - (5)].ll_node)->entry.Template.ll_ptr1 = (yyvsp[(4) - (5)].ll_node);
                   (yyval.ll_node) = (yyvsp[(1) - (5)].ll_node);
                   (yyval.ll_node)->type =  lookup_type(s->parent); 
	          /* $$ = make_llnd(fi, STRUCTURE_CONSTRUCTOR, $1, $4, SMNULL);
	           $$->type = $1->type;*//*18.02.03*/
	           break;
	      case INTERFACE_REF:
	       /*  sym = resolve_overloading(s, $4);
	           if (sym != SMNULL)
	  	   {
	              l = make_llnd(fi, FUNC_CALL, $4, LLNULL, sym);
	              l->type = sym->type;
	              $$ = $1; $$->variant = OVERLOADED_CALL;
	              $$->entry.Template.ll_ptr1 = l;
	              $$->type = sym->type;
	           }
	           else {
	             errstr("can't resolve call %s", s->ident,310);
	           }
	           break;
                 */ /*podd 01.02.03*/

                   (yyvsp[(1) - (5)].ll_node)->variant = FUNC_CALL;

	      case FUNC_CALL:
                   (yyvsp[(1) - (5)].ll_node)->entry.Template.ll_ptr1 = (yyvsp[(4) - (5)].ll_node);
                   (yyval.ll_node) = (yyvsp[(1) - (5)].ll_node);
                   if(s->type) 
                     (yyval.ll_node)->type = s->type;
                   else
                     (yyval.ll_node)->type = global_default;
	           late_bind_if_needed((yyval.ll_node));
	           break;
	      case DEREF_OP:
              case ARRAY_REF:
	           /* array element */
	           if (num_triplets == 0) {
                       if ((yyvsp[(4) - (5)].ll_node) == LLNULL) {
                           s = (yyvsp[(1) - (5)].ll_node)->entry.Template.symbol = make_function(s->parent, TYNULL, NO);
                           s->entry.func_decl.num_output = 1;
                           (yyvsp[(1) - (5)].ll_node)->variant = FUNC_CALL;
                           (yyval.ll_node) = (yyvsp[(1) - (5)].ll_node);
                       } else if ((yyvsp[(1) - (5)].ll_node)->type->variant == T_STRING) {
                           PTR_LLND temp = (yyvsp[(4) - (5)].ll_node);
                           int num_input = 0;

                           while (temp) {
                             ++num_input;
                             temp = temp->entry.Template.ll_ptr2;
                           }
                           (yyvsp[(1) - (5)].ll_node)->entry.Template.ll_ptr1 = (yyvsp[(4) - (5)].ll_node);
                           s = (yyvsp[(1) - (5)].ll_node)->entry.Template.symbol = make_function(s->parent, TYNULL, NO);
                           s->entry.func_decl.num_output = 1;
                           s->entry.func_decl.num_input = num_input;
                           (yyvsp[(1) - (5)].ll_node)->variant = FUNC_CALL;
                           (yyval.ll_node) = (yyvsp[(1) - (5)].ll_node);
                       } else {
       	                   (yyvsp[(1) - (5)].ll_node)->entry.Template.ll_ptr1 = (yyvsp[(4) - (5)].ll_node);
	                   (yyval.ll_node) = (yyvsp[(1) - (5)].ll_node);
                           (yyval.ll_node)->type = (yyvsp[(1) - (5)].ll_node)->type->entry.ar_decl.base_type;
                       }
                   }
                   /* substring */
	           else if ((num_triplets == 1) && 
                            ((yyvsp[(1) - (5)].ll_node)->type->variant == T_STRING)) {
    	           /*
                     $1->entry.Template.ll_ptr1 = $4;
	             $$ = $1; $$->type = global_string;
                   */
	                  (yyval.ll_node) = make_llnd(fi, 
			  ARRAY_OP, LLNULL, LLNULL, SMNULL);
    	                  (yyval.ll_node)->entry.Template.ll_ptr1 = (yyvsp[(1) - (5)].ll_node);
       	                  (yyval.ll_node)->entry.Template.ll_ptr2 = (yyvsp[(4) - (5)].ll_node)->entry.Template.ll_ptr1;
	                  (yyval.ll_node)->type = global_string;
                   }           
                   /* array section */
                   else {
    	             (yyvsp[(1) - (5)].ll_node)->entry.Template.ll_ptr1 = (yyvsp[(4) - (5)].ll_node);
	             (yyval.ll_node) = (yyvsp[(1) - (5)].ll_node); tp = make_type(fi, T_ARRAY);     /**18.03.17*/
                     tp->entry.ar_decl.base_type = (yyvsp[(1) - (5)].ll_node)->type->entry.ar_decl.base_type; /**18.03.17 $1->type */
	             tp->entry.ar_decl.num_dimensions = num_triplets;
	             (yyval.ll_node)->type = tp;
                   }
	           break;
	      default:
                    if((yyvsp[(1) - (5)].ll_node)->entry.Template.symbol)
                      errstr("Can't subscript %s",(yyvsp[(1) - (5)].ll_node)->entry.Template.symbol->ident, 44);
                    else
	              err("Can't subscript",44);
             }
             /*if ($$->variant == T_POINTER) {
	        l = $$;
	        $$ = make_llnd(fi, DEREF_OP, l, LLNULL, SMNULL);
	        $$->type = l->type->entry.Template.base_type;
	     }
              */  /*11.02.03*/

	     endioctl(); 
           ;}
    break;

  case 386:
#line 3171 "gram1.y"
    { int num_triplets;
	      PTR_SYMB s;
	      PTR_LLND l;

	      s = (yyvsp[(1) - (6)].ll_node)->entry.Template.symbol;
/*              if ($1->type->variant == T_POINTER) {
	         l = $1;
	         $1 = make_llnd(fi, DEREF_OP, l, LLNULL, SMNULL);
	         $1->type = l->type->entry.Template.base_type;
	      } */
	      if (((yyvsp[(1) - (6)].ll_node)->type->variant != T_ARRAY) ||
                  ((yyvsp[(1) - (6)].ll_node)->type->entry.ar_decl.base_type->variant != T_STRING)) {
	         errstr("Can't take substring of %s", s->ident, 45);
              }
              else {
  	        num_triplets = is_array_section_ref((yyvsp[(4) - (6)].ll_node));
	           /* array element */
                if (num_triplets == 0) {
                   (yyvsp[(1) - (6)].ll_node)->entry.Template.ll_ptr1 = (yyvsp[(4) - (6)].ll_node);
                  /* $1->entry.Template.ll_ptr2 = $6;*/
	          /* $$ = $1;*/
                   l=(yyvsp[(1) - (6)].ll_node);
                   /*$$->type = $1->type->entry.ar_decl.base_type;*/
                   l->type = global_string;  /**18.03.17* $1->type->entry.ar_decl.base_type;*/
                }
                /* array section */
                else {
    	           (yyvsp[(1) - (6)].ll_node)->entry.Template.ll_ptr1 = (yyvsp[(4) - (6)].ll_node);
    	           /*$1->entry.Template.ll_ptr2 = $6;
	           $$ = $1; $$->type = make_type(fi, T_ARRAY);
                   $$->type->entry.ar_decl.base_type = $1->type;
	           $$->type->entry.ar_decl.num_dimensions = num_triplets;
                  */
                   l = (yyvsp[(1) - (6)].ll_node); l->type = make_type(fi, T_ARRAY);
                   l->type->entry.ar_decl.base_type = global_string;   /**18.03.17* $1->type*/
	           l->type->entry.ar_decl.num_dimensions = num_triplets;
               }
                (yyval.ll_node) = make_llnd(fi, ARRAY_OP, l, (yyvsp[(6) - (6)].ll_node), SMNULL);
	        (yyval.ll_node)->type = l->type;
              
              /* if ($$->variant == T_POINTER) {
	          l = $$;
	          $$ = make_llnd(fi, DEREF_OP, l, LLNULL, SMNULL);
	          $$->type = l->type->entry.Template.base_type;
	       }
               */  /*11.02.03*/
             }
             endioctl();
          ;}
    break;

  case 387:
#line 3221 "gram1.y"
    {  int num_triplets;
	      PTR_LLND l,l1,l2;
              PTR_TYPE tp;

         /*   if ($1->variant == T_POINTER) {
	         l = $1;
	         $1 = make_llnd(fi, DEREF_OP, l, LLNULL, SMNULL);
	         $1->type = l->type->entry.Template.base_type;
	      } */

              num_triplets = is_array_section_ref((yyvsp[(3) - (4)].ll_node));
              (yyval.ll_node) = (yyvsp[(1) - (4)].ll_node);
              l2 = (yyvsp[(1) - (4)].ll_node)->entry.Template.ll_ptr2;  
              l1 = (yyvsp[(1) - (4)].ll_node)->entry.Template.ll_ptr1;                
              if(l2 && l2->type->variant == T_STRING)/*substring*/
                if(num_triplets == 1){
	           l = make_llnd(fi, ARRAY_OP, LLNULL, LLNULL, SMNULL);
    	           l->entry.Template.ll_ptr1 = l2;
       	           l->entry.Template.ll_ptr2 = (yyvsp[(3) - (4)].ll_node)->entry.Template.ll_ptr1;
	           l->type = global_string; 
                   (yyval.ll_node)->entry.Template.ll_ptr2 = l;                                          
                } else
                   err("Can't subscript",44);
              else if (l2 && l2->type->variant == T_ARRAY) {
                 if(num_triplets > 0) { /*array section*/
                   tp = make_type(fi,T_ARRAY);
                   tp->entry.ar_decl.base_type = (yyvsp[(1) - (4)].ll_node)->type->entry.ar_decl.base_type;
                   tp->entry.ar_decl.num_dimensions = num_triplets;
                   (yyval.ll_node)->type = tp;
                   l2->entry.Template.ll_ptr1 = (yyvsp[(3) - (4)].ll_node);
                   l2->type = (yyval.ll_node)->type;   
                  }                 
                 else {  /*array element*/
                   l2->type = l2->type->entry.ar_decl.base_type;
                   l2->entry.Template.ll_ptr1 = (yyvsp[(3) - (4)].ll_node);   
                   if(l1->type->variant != T_ARRAY)  
                     (yyval.ll_node)->type = l2->type;
                 }
              } else 
                   {err("Can't subscript",44); /*fprintf(stderr,"%d  %d",$1->variant,l2);*/}
                   /*errstr("Can't subscript %s",l2->entry.Template.symbol->ident,441);*/
         ;}
    break;

  case 388:
#line 3265 "gram1.y"
    { int num_triplets;
	      PTR_LLND l,q;

          /*     if ($1->variant == T_POINTER) {
	         l = $1;
	         $1 = make_llnd(fi, DEREF_OP, l, LLNULL, SMNULL);
	         $1->type = l->type->entry.Template.base_type;
	      } */

              (yyval.ll_node) = (yyvsp[(1) - (5)].ll_node);
	      if (((yyvsp[(1) - (5)].ll_node)->type->variant != T_ARRAY) &&
                  ((yyvsp[(1) - (5)].ll_node)->type->entry.ar_decl.base_type->variant != T_STRING)) {
	         err("Can't take substring",45);
              }
              else {
  	        num_triplets = is_array_section_ref((yyvsp[(3) - (5)].ll_node));
                l = (yyvsp[(1) - (5)].ll_node)->entry.Template.ll_ptr2;
                if(l) {
                /* array element */
	        if (num_triplets == 0) {
                   l->entry.Template.ll_ptr1 = (yyvsp[(3) - (5)].ll_node);       	           
                   l->type = global_string;
                }
                /* array section */
                else {	
    	             l->entry.Template.ll_ptr1 = (yyvsp[(3) - (5)].ll_node);
	             l->type = make_type(fi, T_ARRAY);
                     l->type->entry.ar_decl.base_type = global_string;
	             l->type->entry.ar_decl.num_dimensions = num_triplets;
                }
	        q = make_llnd(fi, ARRAY_OP, l, (yyvsp[(5) - (5)].ll_node), SMNULL);
	        q->type = l->type;
                (yyval.ll_node)->entry.Template.ll_ptr2 = q;
                if((yyvsp[(1) - (5)].ll_node)->entry.Template.ll_ptr1->type->variant != T_ARRAY)  
                     (yyval.ll_node)->type = q->type;
               }
             }
          ;}
    break;

  case 389:
#line 3307 "gram1.y"
    { PTR_TYPE t;
	      PTR_SYMB  field;
	    /*  PTR_BFND at_scope;*/
              PTR_LLND l;


/*              if ($1->variant == T_POINTER) {
	         l = $1;
	         $1 = make_llnd(fi, DEREF_OP, l, LLNULL, SMNULL);
	         $1->type = l->type->entry.Template.base_type;
	      } */

	      t = (yyvsp[(1) - (3)].ll_node)->type; 
	      
	      if (( ( ((yyvsp[(1) - (3)].ll_node)->variant == VAR_REF) 
	          ||  ((yyvsp[(1) - (3)].ll_node)->variant == CONST_REF) 
                  ||  ((yyvsp[(1) - (3)].ll_node)->variant == ARRAY_REF)
                  ||  ((yyvsp[(1) - (3)].ll_node)->variant == RECORD_REF)) && (t->variant == T_DERIVED_TYPE)) 
	          ||((((yyvsp[(1) - (3)].ll_node)->variant == ARRAY_REF) || ((yyvsp[(1) - (3)].ll_node)->variant == RECORD_REF)) && (t->variant == T_ARRAY) &&
                      (t = t->entry.ar_decl.base_type) && (t->variant == T_DERIVED_TYPE))) 
                {
                 t->name = lookup_type_symbol(t->name);
	         if ((field = component(t->name, yytext))) {                   
	            l =  make_llnd(fi, VAR_REF, LLNULL, LLNULL, field);
                    l->type = field->type;
                    if(field->type->variant == T_ARRAY || field->type->variant == T_STRING)
                      l->variant = ARRAY_REF; 
                    (yyval.ll_node) = make_llnd(fi, RECORD_REF, (yyvsp[(1) - (3)].ll_node), l, SMNULL);
                    if((yyvsp[(1) - (3)].ll_node)->type->variant != T_ARRAY)
                       (yyval.ll_node)->type = field->type;
                    else {
                       (yyval.ll_node)->type = make_type(fi,T_ARRAY);
                       if(field->type->variant != T_ARRAY) 
	                 (yyval.ll_node)->type->entry.ar_decl.base_type = field->type;
                       else
                         (yyval.ll_node)->type->entry.ar_decl.base_type = field->type->entry.ar_decl.base_type;
	               (yyval.ll_node)->type->entry.ar_decl.num_dimensions = t->entry.ar_decl.num_dimensions;
                       }
                 }
                  else  
                    errstr("Illegal component  %s", yytext,311);
              }                     
               else 
                    errstr("Can't take component  %s", yytext,311);
             ;}
    break;

  case 390:
#line 3365 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);;}
    break;

  case 391:
#line 3367 "gram1.y"
    {(yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);;}
    break;

  case 392:
#line 3369 "gram1.y"
    {  int num_triplets;
               PTR_TYPE tp;
              /* PTR_LLND l;*/
	      if ((yyvsp[(1) - (5)].ll_node)->type->variant == T_ARRAY)
              {
  	         num_triplets = is_array_section_ref((yyvsp[(4) - (5)].ll_node));
	         /* array element */
	         if (num_triplets == 0) {
       	            (yyvsp[(1) - (5)].ll_node)->entry.Template.ll_ptr1 = (yyvsp[(4) - (5)].ll_node);
       	            (yyval.ll_node) = (yyvsp[(1) - (5)].ll_node);
                    (yyval.ll_node)->type = (yyvsp[(1) - (5)].ll_node)->type->entry.ar_decl.base_type;
                 }
                 /* substring */
	       /*  else if ((num_triplets == 1) && 
                          ($1->type->variant == T_STRING)) {
    	                  $1->entry.Template.ll_ptr1 = $4;
	                  $$ = $1; $$->type = global_string;
                 }   */ /*podd*/        
                 /* array section */
                 else {
    	             (yyvsp[(1) - (5)].ll_node)->entry.Template.ll_ptr1 = (yyvsp[(4) - (5)].ll_node);
	             (yyval.ll_node) = (yyvsp[(1) - (5)].ll_node); tp = make_type(fi, T_ARRAY);
                     tp->entry.ar_decl.base_type = (yyvsp[(1) - (5)].ll_node)->type->entry.ar_decl.base_type;  /**18.03.17* $1->type */
	             tp->entry.ar_decl.num_dimensions = num_triplets;
                     (yyval.ll_node)->type = tp;
                 }
             } 
             else err("can't subscript",44);

            /* if ($$->variant == T_POINTER) {
	        l = $$;
	        $$ = make_llnd(fi, DEREF_OP, l, LLNULL, SMNULL);
	        $$->type = l->type->entry.Template.base_type;
	     }
             */  /*11.02.03*/

            endioctl();
           ;}
    break;

  case 393:
#line 3409 "gram1.y"
    {  int num_triplets;
	      PTR_LLND l,l1,l2;

         /*   if ($1->variant == T_POINTER) {
	         l = $1;
	         $1 = make_llnd(fi, DEREF_OP, l, LLNULL, SMNULL);
	         $1->type = l->type->entry.Template.base_type;
	      } */

              num_triplets = is_array_section_ref((yyvsp[(3) - (4)].ll_node));
              (yyval.ll_node) = (yyvsp[(1) - (4)].ll_node);
              l2 = (yyvsp[(1) - (4)].ll_node)->entry.Template.ll_ptr2;  
              l1 = (yyvsp[(1) - (4)].ll_node)->entry.Template.ll_ptr1;                
              if(l2 && l2->type->variant == T_STRING)/*substring*/
                if(num_triplets == 1){
	           l = make_llnd(fi, ARRAY_OP, LLNULL, LLNULL, SMNULL);
    	           l->entry.Template.ll_ptr1 = l2;
       	           l->entry.Template.ll_ptr2 = (yyvsp[(3) - (4)].ll_node)->entry.Template.ll_ptr1;
	           l->type = global_string; 
                   (yyval.ll_node)->entry.Template.ll_ptr2 = l;                                          
                } else
                   err("Can't subscript",44);
              else if (l2 && l2->type->variant == T_ARRAY) {
                 if(num_triplets > 0) { /*array section*/
                   (yyval.ll_node)->type = make_type(fi,T_ARRAY);
                   (yyval.ll_node)->type->entry.ar_decl.base_type = l2->type->entry.ar_decl.base_type;
                   (yyval.ll_node)->type->entry.ar_decl.num_dimensions = num_triplets;
                   l2->entry.Template.ll_ptr1 = (yyvsp[(3) - (4)].ll_node);
                   l2->type = (yyval.ll_node)->type;   
                  }                 
                 else {  /*array element*/
                   l2->type = l2->type->entry.ar_decl.base_type;
                   l2->entry.Template.ll_ptr1 = (yyvsp[(3) - (4)].ll_node);   
                   if(l1->type->variant != T_ARRAY)  
                     (yyval.ll_node)->type = l2->type;
                 }
              } else 
                   err("Can't subscript",44);
         ;}
    break;

  case 394:
#line 3451 "gram1.y"
    { 
	      if ((yyvsp[(1) - (2)].ll_node)->type->variant == T_STRING) {
                 (yyvsp[(1) - (2)].ll_node)->entry.Template.ll_ptr1 = (yyvsp[(2) - (2)].ll_node);
                 (yyval.ll_node) = (yyvsp[(1) - (2)].ll_node); (yyval.ll_node)->type = global_string;
              }
              else errstr("can't subscript of %s", (yyvsp[(1) - (2)].ll_node)->entry.Template.symbol->ident,44);
            ;}
    break;

  case 395:
#line 3461 "gram1.y"
    { (yyval.ll_node) = LLNULL; ;}
    break;

  case 396:
#line 3463 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 397:
#line 3467 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi, DDOT, (yyvsp[(2) - (5)].ll_node), (yyvsp[(4) - (5)].ll_node), SMNULL); ;}
    break;

  case 398:
#line 3471 "gram1.y"
    { (yyval.ll_node) = LLNULL; ;}
    break;

  case 399:
#line 3473 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 400:
#line 3477 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);;}
    break;

  case 401:
#line 3479 "gram1.y"
    { PTR_TYPE t;
               t = make_type_node((yyvsp[(1) - (3)].ll_node)->type, (yyvsp[(3) - (3)].ll_node));
               (yyval.ll_node) = (yyvsp[(1) - (3)].ll_node);
               (yyval.ll_node)->type = t;
             ;}
    break;

  case 402:
#line 3485 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 403:
#line 3487 "gram1.y"
    { PTR_TYPE t;
               t = make_type_node((yyvsp[(1) - (3)].ll_node)->type, (yyvsp[(3) - (3)].ll_node));
               (yyval.ll_node) = (yyvsp[(1) - (3)].ll_node);
               (yyval.ll_node)->type = t;
             ;}
    break;

  case 404:
#line 3493 "gram1.y"
    {
              if ((yyvsp[(2) - (2)].ll_node) != LLNULL)
		 (yyval.ll_node) = make_llnd(fi, ARRAY_OP, (yyvsp[(1) - (2)].ll_node), (yyvsp[(2) - (2)].ll_node), SMNULL); 
	      else 
                 (yyval.ll_node) = (yyvsp[(1) - (2)].ll_node);
             ;}
    break;

  case 405:
#line 3503 "gram1.y"
    {
	      (yyval.ll_node) = make_llnd(fi,BOOL_VAL, LLNULL, LLNULL, SMNULL);
	      (yyval.ll_node)->entry.bval = 1;
	      (yyval.ll_node)->type = global_bool;
	    ;}
    break;

  case 406:
#line 3509 "gram1.y"
    {
	      (yyval.ll_node) = make_llnd(fi,BOOL_VAL, LLNULL, LLNULL, SMNULL);
	      (yyval.ll_node)->entry.bval = 0;
	      (yyval.ll_node)->type = global_bool;
	    ;}
    break;

  case 407:
#line 3516 "gram1.y"
    {
	      (yyval.ll_node) = make_llnd(fi,FLOAT_VAL, LLNULL, LLNULL, SMNULL);
	      (yyval.ll_node)->entry.string_val = copys(yytext);
	      (yyval.ll_node)->type = global_float;
	    ;}
    break;

  case 408:
#line 3522 "gram1.y"
    {
	      (yyval.ll_node) = make_llnd(fi,DOUBLE_VAL, LLNULL, LLNULL, SMNULL);
	      (yyval.ll_node)->entry.string_val = copys(yytext);
	      (yyval.ll_node)->type = global_double;
	    ;}
    break;

  case 409:
#line 3530 "gram1.y"
    {
	      (yyval.ll_node) = make_llnd(fi,INT_VAL, LLNULL, LLNULL, SMNULL);
	      (yyval.ll_node)->entry.ival = atoi(yytext);
	      (yyval.ll_node)->type = global_int;
	    ;}
    break;

  case 410:
#line 3538 "gram1.y"
    { PTR_TYPE t;
	      PTR_LLND p,q;
	      (yyval.ll_node) = make_llnd(fi,STRING_VAL, LLNULL, LLNULL, SMNULL);
	      (yyval.ll_node)->entry.string_val = copys(yytext);
              if(yyquote=='\"') 
	        t = global_string_2;
              else
	        t = global_string;

	      p = make_llnd(fi,INT_VAL, LLNULL, LLNULL, SMNULL);
	      p->entry.ival = yyleng;
	      p->type = global_int;
              q = make_llnd(fi, LEN_OP, p, LLNULL, SMNULL); 
              (yyval.ll_node)->type = make_type_node(t, q);
	    ;}
    break;

  case 411:
#line 3554 "gram1.y"
    { PTR_TYPE t;
	      (yyval.ll_node) = make_llnd(fi,STRING_VAL, LLNULL, LLNULL, SMNULL);
	      (yyval.ll_node)->entry.string_val = copys(yytext);
              if(yyquote=='\"') 
	        t = global_string_2;
              else
	        t = global_string;
	      (yyval.ll_node)->type = make_type_node(t, (yyvsp[(1) - (3)].ll_node));
            ;}
    break;

  case 412:
#line 3564 "gram1.y"
    { PTR_TYPE t;
	      (yyval.ll_node) = make_llnd(fi,STRING_VAL, LLNULL, LLNULL, SMNULL);
	      (yyval.ll_node)->entry.string_val = copys(yytext);
              if(yyquote=='\"') 
	        t = global_string_2;
              else
	        t = global_string;
	      (yyval.ll_node)->type = make_type_node(t, (yyvsp[(1) - (3)].ll_node));
            ;}
    break;

  case 413:
#line 3577 "gram1.y"
    {
	      (yyval.ll_node) = make_llnd(fi,COMPLEX_VAL, (yyvsp[(2) - (5)].ll_node), (yyvsp[(4) - (5)].ll_node), SMNULL);
	      (yyval.ll_node)->type = global_complex;
	    ;}
    break;

  case 414:
#line 3584 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);;}
    break;

  case 415:
#line 3586 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 416:
#line 3609 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,DDOT,(yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),SMNULL); ;}
    break;

  case 417:
#line 3611 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,DDOT,(yyvsp[(1) - (2)].ll_node),LLNULL,SMNULL); ;}
    break;

  case 418:
#line 3613 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,DDOT,make_llnd(fi,DDOT,(yyvsp[(1) - (5)].ll_node),(yyvsp[(3) - (5)].ll_node),SMNULL),(yyvsp[(5) - (5)].ll_node),SMNULL); ;}
    break;

  case 419:
#line 3615 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,DDOT,make_llnd(fi,DDOT,(yyvsp[(1) - (4)].ll_node),LLNULL,SMNULL),(yyvsp[(4) - (4)].ll_node),SMNULL); ;}
    break;

  case 420:
#line 3617 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,DDOT, make_llnd(fi,DDOT,LLNULL,(yyvsp[(2) - (4)].ll_node),SMNULL),(yyvsp[(4) - (4)].ll_node),SMNULL); ;}
    break;

  case 421:
#line 3619 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,DDOT,make_llnd(fi,DDOT,LLNULL,LLNULL,SMNULL),(yyvsp[(3) - (3)].ll_node),SMNULL); ;}
    break;

  case 422:
#line 3621 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,DDOT,LLNULL,(yyvsp[(2) - (2)].ll_node),SMNULL); ;}
    break;

  case 423:
#line 3623 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,DDOT,LLNULL,LLNULL,SMNULL); ;}
    break;

  case 424:
#line 3626 "gram1.y"
    {in_vec=YES;;}
    break;

  case 425:
#line 3626 "gram1.y"
    {in_vec=NO;;}
    break;

  case 426:
#line 3627 "gram1.y"
    { PTR_TYPE array_type;
             (yyval.ll_node) = make_llnd (fi,CONSTRUCTOR_REF,(yyvsp[(4) - (6)].ll_node),LLNULL,SMNULL); 
             /*$$->type = $2->type;*/ /*28.02.03*/
             array_type = make_type(fi, T_ARRAY);
	     array_type->entry.ar_decl.num_dimensions = 1;
             if((yyvsp[(4) - (6)].ll_node)->type->variant == T_ARRAY)
	       array_type->entry.ar_decl.base_type = (yyvsp[(4) - (6)].ll_node)->type->entry.ar_decl.base_type;
             else
               array_type->entry.ar_decl.base_type = (yyvsp[(4) - (6)].ll_node)->type;
             (yyval.ll_node)->type = array_type;
           ;}
    break;

  case 427:
#line 3641 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 428:
#line 3643 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 429:
#line 3666 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node), LLNULL, EXPR_LIST); ;}
    break;

  case 430:
#line 3668 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (4)].ll_node), (yyvsp[(4) - (4)].ll_node), EXPR_LIST); endioctl(); ;}
    break;

  case 431:
#line 3670 "gram1.y"
    { stat_alloc = make_llnd(fi, SPEC_PAIR, (yyvsp[(4) - (5)].ll_node), (yyvsp[(5) - (5)].ll_node), SMNULL);
                  endioctl();
                ;}
    break;

  case 432:
#line 3686 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node), LLNULL, EXPR_LIST); ;}
    break;

  case 433:
#line 3688 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (4)].ll_node), (yyvsp[(4) - (4)].ll_node), EXPR_LIST); endioctl(); ;}
    break;

  case 434:
#line 3690 "gram1.y"
    { stat_alloc = make_llnd(fi, SPEC_PAIR, (yyvsp[(4) - (5)].ll_node), (yyvsp[(5) - (5)].ll_node), SMNULL);
             endioctl();
           ;}
    break;

  case 435:
#line 3703 "gram1.y"
    {stat_alloc = LLNULL;;}
    break;

  case 436:
#line 3707 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node), LLNULL, EXPR_LIST); ;}
    break;

  case 437:
#line 3709 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), EXPR_LIST); ;}
    break;

  case 438:
#line 3717 "gram1.y"
    { (yyval.bf_node) = (yyvsp[(1) - (1)].bf_node); ;}
    break;

  case 439:
#line 3719 "gram1.y"
    { (yyval.bf_node) = (yyvsp[(1) - (1)].bf_node); ;}
    break;

  case 440:
#line 3721 "gram1.y"
    { (yyval.bf_node) = (yyvsp[(1) - (1)].bf_node); ;}
    break;

  case 441:
#line 3723 "gram1.y"
    {
              (yyval.bf_node) = (yyvsp[(2) - (2)].bf_node);
              (yyval.bf_node)->entry.Template.ll_ptr3 = (yyvsp[(1) - (2)].ll_node);
            ;}
    break;

  case 442:
#line 3777 "gram1.y"
    { PTR_BFND biff;

	      (yyval.bf_node) = get_bfnd(fi,CONTROL_END, SMNULL, LLNULL, LLNULL, LLNULL); 
	      bind(); 
	      biff = cur_scope();
	      if ((biff->variant == FUNC_HEDR) || (biff->variant == PROC_HEDR)
		  || (biff->variant == PROS_HEDR) 
	          || (biff->variant == PROG_HEDR)
                  || (biff->variant == BLOCK_DATA)) {
                if(biff->control_parent == global_bfnd) position = IN_OUTSIDE;
		else if(!is_interface_stat(biff->control_parent)) position++;
              } else if  (biff->variant == MODULE_STMT)
                position = IN_OUTSIDE;
	      else err("Unexpected END statement read", 52);
             /* FB ADDED set the control parent so the empty function unparse right*/
              if ((yyval.bf_node))
                (yyval.bf_node)->control_parent = biff;
              delete_beyond_scope_level(pred_bfnd);
            ;}
    break;

  case 443:
#line 3799 "gram1.y"
    {
              make_extend((yyvsp[(3) - (3)].symbol));
              (yyval.bf_node) = BFNULL; 
              /* delete_beyond_scope_level(pred_bfnd); */
             ;}
    break;

  case 444:
#line 3812 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,CONTROL_END, SMNULL, LLNULL, LLNULL, LLNULL); 
	    bind(); 
	    delete_beyond_scope_level(pred_bfnd);
	    position = IN_OUTSIDE;
          ;}
    break;

  case 445:
#line 3821 "gram1.y"
    { (yyval.bf_node) = (yyvsp[(1) - (1)].bf_node); ;}
    break;

  case 446:
#line 3824 "gram1.y"
    {
              (yyval.bf_node) = (yyvsp[(2) - (2)].bf_node);
              (yyval.bf_node)->entry.Template.ll_ptr3 = (yyvsp[(1) - (2)].ll_node);
            ;}
    break;

  case 447:
#line 3874 "gram1.y"
    { thiswasbranch = NO;
              (yyvsp[(1) - (2)].bf_node)->variant = LOGIF_NODE;
              (yyval.bf_node) = make_logif((yyvsp[(1) - (2)].bf_node), (yyvsp[(2) - (2)].bf_node));
	      set_blobs((yyvsp[(1) - (2)].bf_node), pred_bfnd, SAME_GROUP);
	    ;}
    break;

  case 448:
#line 3880 "gram1.y"
    {
              (yyval.bf_node) = (yyvsp[(1) - (2)].bf_node);
	      set_blobs((yyval.bf_node), pred_bfnd, NEW_GROUP1); 
            ;}
    break;

  case 449:
#line 3885 "gram1.y"
    {
              (yyval.bf_node) = (yyvsp[(2) - (3)].bf_node);
              (yyval.bf_node)->entry.Template.ll_ptr3 = (yyvsp[(1) - (3)].ll_node);
	      set_blobs((yyval.bf_node), pred_bfnd, NEW_GROUP1); 
            ;}
    break;

  case 450:
#line 3903 "gram1.y"
    { make_elseif((yyvsp[(4) - (7)].ll_node),(yyvsp[(7) - (7)].symbol)); lastwasbranch = NO; (yyval.bf_node) = BFNULL;;}
    break;

  case 451:
#line 3905 "gram1.y"
    { make_else((yyvsp[(3) - (3)].symbol)); lastwasbranch = NO; (yyval.bf_node) = BFNULL; ;}
    break;

  case 452:
#line 3907 "gram1.y"
    { make_endif((yyvsp[(3) - (3)].symbol)); (yyval.bf_node) = BFNULL; ;}
    break;

  case 453:
#line 3909 "gram1.y"
    { (yyval.bf_node) = (yyvsp[(1) - (1)].bf_node); ;}
    break;

  case 454:
#line 3911 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi, CONTAINS_STMT, SMNULL, LLNULL, LLNULL, LLNULL); ;}
    break;

  case 455:
#line 3914 "gram1.y"
    { thiswasbranch = NO;
              (yyvsp[(1) - (2)].bf_node)->variant = FORALL_STAT;
              (yyval.bf_node) = make_logif((yyvsp[(1) - (2)].bf_node), (yyvsp[(2) - (2)].bf_node));
	      set_blobs((yyvsp[(1) - (2)].bf_node), pred_bfnd, SAME_GROUP);
	    ;}
    break;

  case 456:
#line 3920 "gram1.y"
    { (yyval.bf_node) = (yyvsp[(1) - (1)].bf_node); ;}
    break;

  case 457:
#line 3922 "gram1.y"
    { (yyval.bf_node) = (yyvsp[(2) - (2)].bf_node); (yyval.bf_node)->entry.Template.ll_ptr3 = (yyvsp[(1) - (2)].ll_node);;}
    break;

  case 458:
#line 3924 "gram1.y"
    { make_endforall((yyvsp[(3) - (3)].symbol)); (yyval.bf_node) = BFNULL; ;}
    break;

  case 459:
#line 3927 "gram1.y"
    { (yyval.bf_node) = (yyvsp[(1) - (1)].bf_node); ;}
    break;

  case 460:
#line 3929 "gram1.y"
    { (yyval.bf_node) = (yyvsp[(1) - (1)].bf_node); ;}
    break;

  case 461:
#line 3931 "gram1.y"
    { (yyval.bf_node) = (yyvsp[(1) - (1)].bf_node); ;}
    break;

  case 462:
#line 3958 "gram1.y"
    { 	     
	     /*  if($5 && $5->labdefined)
		 execerr("no backward DO loops", (char *)NULL); */
	       (yyval.bf_node) = make_do(WHILE_NODE, LBNULL, SMNULL, (yyvsp[(4) - (5)].ll_node), LLNULL, LLNULL);
	       /*$$->entry.Template.ll_ptr3 = $1;*/	     
           ;}
    break;

  case 463:
#line 3967 "gram1.y"
    {
               if( (yyvsp[(4) - (7)].label) && (yyvsp[(4) - (7)].label)->labdefined)
		  err("No backward DO loops", 46);
	        (yyval.bf_node) = make_do(WHILE_NODE, (yyvsp[(4) - (7)].label), SMNULL, (yyvsp[(7) - (7)].ll_node), LLNULL, LLNULL);            
	    ;}
    break;

  case 464:
#line 3975 "gram1.y"
    { (yyval.ll_node) = LLNULL; ;}
    break;

  case 465:
#line 3977 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(5) - (6)].ll_node);;}
    break;

  case 466:
#line 3979 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(3) - (4)].ll_node);;}
    break;

  case 467:
#line 3984 "gram1.y"
    {  
               if( (yyvsp[(4) - (11)].label) && (yyvsp[(4) - (11)].label)->labdefined)
		  err("No backward DO loops", 46);
	        (yyval.bf_node) = make_do(FOR_NODE, (yyvsp[(4) - (11)].label), (yyvsp[(7) - (11)].symbol), (yyvsp[(9) - (11)].ll_node), (yyvsp[(11) - (11)].ll_node), LLNULL);            
	    ;}
    break;

  case 468:
#line 3991 "gram1.y"
    {
               if( (yyvsp[(4) - (13)].label) && (yyvsp[(4) - (13)].label)->labdefined)
		  err("No backward DO loops", 46);
	        (yyval.bf_node) = make_do(FOR_NODE, (yyvsp[(4) - (13)].label), (yyvsp[(7) - (13)].symbol), (yyvsp[(9) - (13)].ll_node), (yyvsp[(11) - (13)].ll_node), (yyvsp[(13) - (13)].ll_node));            
	    ;}
    break;

  case 469:
#line 3999 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi, CASE_NODE, (yyvsp[(4) - (4)].symbol), (yyvsp[(3) - (4)].ll_node), LLNULL, LLNULL); ;}
    break;

  case 470:
#line 4001 "gram1.y"
    { /*PTR_LLND p;*/
	     /* p = make_llnd(fi, DEFAULT, LLNULL, LLNULL, SMNULL); */
	      (yyval.bf_node) = get_bfnd(fi, DEFAULT_NODE, (yyvsp[(3) - (3)].symbol), LLNULL, LLNULL, LLNULL); ;}
    break;

  case 471:
#line 4005 "gram1.y"
    { make_endselect((yyvsp[(3) - (3)].symbol)); (yyval.bf_node) = BFNULL; ;}
    break;

  case 472:
#line 4008 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi, SWITCH_NODE, SMNULL, (yyvsp[(6) - (7)].ll_node), LLNULL, LLNULL) ; ;}
    break;

  case 473:
#line 4010 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi, SWITCH_NODE, SMNULL, (yyvsp[(7) - (8)].ll_node), LLNULL, (yyvsp[(1) - (8)].ll_node)) ; ;}
    break;

  case 474:
#line 4014 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(2) - (3)].ll_node); ;}
    break;

  case 475:
#line 4020 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 476:
#line 4022 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi, DDOT, (yyvsp[(1) - (2)].ll_node), LLNULL, SMNULL); ;}
    break;

  case 477:
#line 4024 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi, DDOT, LLNULL, (yyvsp[(2) - (2)].ll_node), SMNULL); ;}
    break;

  case 478:
#line 4026 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi, DDOT, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), SMNULL); ;}
    break;

  case 479:
#line 4030 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi, EXPR_LIST, (yyvsp[(1) - (1)].ll_node), LLNULL, SMNULL); ;}
    break;

  case 480:
#line 4032 "gram1.y"
    { PTR_LLND p;
	      
	      p = make_llnd(fi, EXPR_LIST, (yyvsp[(3) - (3)].ll_node), LLNULL, SMNULL);
	      add_to_lowLevelList(p, (yyvsp[(1) - (3)].ll_node));
	    ;}
    break;

  case 481:
#line 4040 "gram1.y"
    { (yyval.symbol) = SMNULL; ;}
    break;

  case 482:
#line 4042 "gram1.y"
    { (yyval.symbol) = make_local_entity((yyvsp[(1) - (1)].hash_entry), CONSTRUCT_NAME, global_default,
                                     LOCAL); ;}
    break;

  case 483:
#line 4048 "gram1.y"
    {(yyval.hash_entry) = HSNULL;;}
    break;

  case 484:
#line 4050 "gram1.y"
    { (yyval.hash_entry) = (yyvsp[(1) - (1)].hash_entry);;}
    break;

  case 485:
#line 4054 "gram1.y"
    {(yyval.hash_entry) = look_up_sym(yytext);;}
    break;

  case 486:
#line 4058 "gram1.y"
    { PTR_SYMB s;
	             s = make_local_entity( (yyvsp[(1) - (2)].hash_entry), CONSTRUCT_NAME, global_default, LOCAL);             
                    (yyval.ll_node) = make_llnd(fi, VAR_REF, LLNULL, LLNULL, s);
                   ;}
    break;

  case 487:
#line 4079 "gram1.y"
    { (yyval.bf_node) = make_if((yyvsp[(4) - (5)].ll_node)); ;}
    break;

  case 488:
#line 4082 "gram1.y"
    { (yyval.bf_node) = make_forall((yyvsp[(4) - (6)].ll_node),(yyvsp[(5) - (6)].ll_node)); ;}
    break;

  case 489:
#line 4086 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi, EXPR_LIST, (yyvsp[(1) - (1)].ll_node), LLNULL, SMNULL); ;}
    break;

  case 490:
#line 4088 "gram1.y"
    { PTR_LLND p;	      
	      p = make_llnd(fi, EXPR_LIST, (yyvsp[(3) - (3)].ll_node), LLNULL, SMNULL);
	      add_to_lowLevelList(p, (yyvsp[(1) - (3)].ll_node));
	    ;}
    break;

  case 491:
#line 4095 "gram1.y"
    {(yyval.ll_node) = make_llnd(fi, FORALL_OP, (yyvsp[(3) - (3)].ll_node), LLNULL, (yyvsp[(1) - (3)].symbol)); ;}
    break;

  case 492:
#line 4099 "gram1.y"
    { (yyval.ll_node)=LLNULL;;}
    break;

  case 493:
#line 4101 "gram1.y"
    { (yyval.ll_node)=(yyvsp[(2) - (2)].ll_node);;}
    break;

  case 494:
#line 4117 "gram1.y"
    { PTR_SYMB  s;
      	      if (!(s = (yyvsp[(1) - (1)].hash_entry)->id_attr))
              {
	         s = make_scalar((yyvsp[(1) - (1)].hash_entry), TYNULL, LOCAL);
	     	 s->decl = SOFT;
	      }
              (yyval.symbol) = s; 
	 ;}
    break;

  case 495:
#line 4130 "gram1.y"
    { PTR_SYMB s;
              PTR_LLND l;
              int vrnt;

            /*  s = make_scalar($1, TYNULL, LOCAL);*/ /*16.02.03*/
              s = (yyvsp[(1) - (5)].symbol);
	      if (s->variant != CONST_NAME) {
                if(in_vec) 
                   vrnt=SEQ;
                else
                   vrnt=DDOT;     
                l = make_llnd(fi, SEQ, make_llnd(fi, vrnt, (yyvsp[(3) - (5)].ll_node), (yyvsp[(5) - (5)].ll_node), SMNULL),
                              LLNULL, SMNULL);
		(yyval.ll_node) = make_llnd(fi,IOACCESS, LLNULL, l, s);
		do_name_err = NO;
	      }
	      else {
		err("Symbolic constant not allowed as DO variable", 47);
		do_name_err = YES;
	      }
	    ;}
    break;

  case 496:
#line 4153 "gram1.y"
    { PTR_SYMB s;
              PTR_LLND l;
              int vrnt;
              /*s = make_scalar($1, TYNULL, LOCAL);*/ /*16.02.03*/
              s = (yyvsp[(1) - (7)].symbol);
	      if( s->variant != CONST_NAME ) {
                if(in_vec) 
                   vrnt=SEQ;
                else
                   vrnt=DDOT;     
                l = make_llnd(fi, SEQ, make_llnd(fi, vrnt, (yyvsp[(3) - (7)].ll_node), (yyvsp[(5) - (7)].ll_node), SMNULL), (yyvsp[(7) - (7)].ll_node),
                              SMNULL);
		(yyval.ll_node) = make_llnd(fi,IOACCESS, LLNULL, l, s);
		do_name_err = NO;
	      }
	      else {
		err("Symbolic constant not allowed as DO variable", 47);
		do_name_err = YES;
	      }
	    ;}
    break;

  case 497:
#line 4176 "gram1.y"
    { (yyval.label) = LBNULL; ;}
    break;

  case 498:
#line 4178 "gram1.y"
    {
	       (yyval.label)  = make_label_node(fi,convci(yyleng, yytext));
	       (yyval.label)->scope = cur_scope();
	    ;}
    break;

  case 499:
#line 4185 "gram1.y"
    { make_endwhere((yyvsp[(3) - (3)].symbol)); (yyval.bf_node) = BFNULL; ;}
    break;

  case 500:
#line 4187 "gram1.y"
    { make_elsewhere((yyvsp[(3) - (3)].symbol)); lastwasbranch = NO; (yyval.bf_node) = BFNULL; ;}
    break;

  case 501:
#line 4189 "gram1.y"
    { make_elsewhere_mask((yyvsp[(4) - (6)].ll_node),(yyvsp[(6) - (6)].symbol)); lastwasbranch = NO; (yyval.bf_node) = BFNULL; ;}
    break;

  case 502:
#line 4191 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi, WHERE_BLOCK_STMT, SMNULL, (yyvsp[(4) - (5)].ll_node), LLNULL, LLNULL); ;}
    break;

  case 503:
#line 4193 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi, WHERE_BLOCK_STMT, SMNULL, (yyvsp[(5) - (6)].ll_node), LLNULL, (yyvsp[(1) - (6)].ll_node)); ;}
    break;

  case 504:
#line 4198 "gram1.y"
    { PTR_LLND p, r;
             PTR_SYMB s1, s2 = SMNULL, s3, arg_list;
	     PTR_HASH hash_entry;

	   /*  if (just_look_up_sym("=") != HSNULL) {
	        p = intrinsic_op_node("=", EQUAL, $2, $4);
   	        $$ = get_bfnd(fi, OVERLOADED_ASSIGN_STAT, SMNULL, p, $2, $4);
             }	      
             else */ if ((yyvsp[(2) - (4)].ll_node)->variant == FUNC_CALL) {
                if(parstate==INEXEC){
                  	  err("Declaration among executables", 30);
                 /*   $$=BFNULL;*/
 	         (yyval.bf_node) = get_bfnd(fi,STMTFN_STAT, SMNULL, (yyvsp[(2) - (4)].ll_node), LLNULL, LLNULL);
                } 
                else {	         
  	         (yyvsp[(2) - (4)].ll_node)->variant = STMTFN_DECL;
		 /* $2->entry.Template.ll_ptr2 = $4; */
                 if( (yyvsp[(2) - (4)].ll_node)->entry.Template.ll_ptr1) {
		   r = (yyvsp[(2) - (4)].ll_node)->entry.Template.ll_ptr1->entry.Template.ll_ptr1;
                   if(r->variant != VAR_REF && r->variant != ARRAY_REF){
                     err("A dummy argument of a statement function must be a scalar identifier", 333);
                     s1 = SMNULL;
                   }
                   else                       
		     s1 = r ->entry.Template.symbol;
                 } else
                   s1 = SMNULL;
		 if (s1)
	            s1->scope = cur_scope();
 	         (yyval.bf_node) = get_bfnd(fi,STMTFN_STAT, SMNULL, (yyvsp[(2) - (4)].ll_node), LLNULL, LLNULL);
	         add_scope_level((yyval.bf_node), NO);
                 arg_list = SMNULL;
		 if (s1) 
                 {
	            /*arg_list = SMNULL;*/
                    p = (yyvsp[(2) - (4)].ll_node)->entry.Template.ll_ptr1;
                    while (p != LLNULL)
                    {
		    /*   if (p->entry.Template.ll_ptr1->variant != VAR_REF) {
			  errstr("cftn.gram:1: illegal statement function %s.", $2->entry.Template.symbol->ident);
			  break;
		       } 
                    */
                       r = p->entry.Template.ll_ptr1;
                       if(r->variant != VAR_REF && r->variant != ARRAY_REF){
                         err("A dummy argument of a statement function must be a scalar identifier", 333);
                         break;
                       }
	               hash_entry = look_up_sym(r->entry.Template.symbol->parent->ident);
	               s3 = make_scalar(hash_entry, s1->type, IO);
                       replace_symbol_in_expr(s3,(yyvsp[(4) - (4)].ll_node));
	               if (arg_list == SMNULL) 
                          s2 = arg_list = s3;
             	       else 
                       {
                          s2->id_list = s3;
                          s2 = s3;
                       }
                       p = p->entry.Template.ll_ptr2;
                    }
                 }
  		    (yyvsp[(2) - (4)].ll_node)->entry.Template.ll_ptr1 = (yyvsp[(4) - (4)].ll_node);
		    install_param_list((yyvsp[(2) - (4)].ll_node)->entry.Template.symbol,
				       arg_list, LLNULL, FUNCTION_NAME);
	            delete_beyond_scope_level((yyval.bf_node));
		 
		/* else
		    errstr("cftn.gram: Illegal statement function declaration %s.", $2->entry.Template.symbol->ident); */
               }
	     }
	     else {
		(yyval.bf_node) = get_bfnd(fi,ASSIGN_STAT,SMNULL, (yyvsp[(2) - (4)].ll_node), (yyvsp[(4) - (4)].ll_node), LLNULL);
                 parstate = INEXEC;
             }
	  ;}
    break;

  case 505:
#line 4274 "gram1.y"
    { /*PTR_SYMB s;*/
	
	      /*s = make_scalar($2, TYNULL, LOCAL);*/
  	      (yyval.bf_node) = get_bfnd(fi, POINTER_ASSIGN_STAT, SMNULL, (yyvsp[(3) - (5)].ll_node), (yyvsp[(5) - (5)].ll_node), LLNULL);
	    ;}
    break;

  case 506:
#line 4286 "gram1.y"
    { PTR_SYMB p;

	      p = make_scalar((yyvsp[(5) - (5)].hash_entry), TYNULL, LOCAL);
	      p->variant = LABEL_VAR;
  	      (yyval.bf_node) = get_bfnd(fi,ASSLAB_STAT, p, (yyvsp[(3) - (5)].ll_node),LLNULL,LLNULL);
            ;}
    break;

  case 507:
#line 4293 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,CONT_STAT,SMNULL,LLNULL,LLNULL,LLNULL); ;}
    break;

  case 509:
#line 4296 "gram1.y"
    { inioctl = NO; ;}
    break;

  case 510:
#line 4298 "gram1.y"
    { PTR_LLND	p;

	      p = make_llnd(fi,EXPR_LIST, (yyvsp[(10) - (10)].ll_node), LLNULL, SMNULL);
	      p = make_llnd(fi,EXPR_LIST, (yyvsp[(8) - (10)].ll_node), p, SMNULL);
	      (yyval.bf_node)= get_bfnd(fi,ARITHIF_NODE, SMNULL, (yyvsp[(4) - (10)].ll_node),
			    make_llnd(fi,EXPR_LIST, (yyvsp[(6) - (10)].ll_node), p, SMNULL), LLNULL);
	      thiswasbranch = YES;
            ;}
    break;

  case 511:
#line 4307 "gram1.y"
    {
	      (yyval.bf_node) = subroutine_call((yyvsp[(1) - (1)].symbol), LLNULL, LLNULL, PLAIN);
/*	      match_parameters($1, LLNULL);
	      $$= get_bfnd(fi,PROC_STAT, $1, LLNULL, LLNULL, LLNULL);
*/	      endioctl(); 
            ;}
    break;

  case 512:
#line 4314 "gram1.y"
    {
	      (yyval.bf_node) = subroutine_call((yyvsp[(1) - (3)].symbol), LLNULL, LLNULL, PLAIN);
/*	      match_parameters($1, LLNULL);
	      $$= get_bfnd(fi,PROC_STAT,$1,LLNULL,LLNULL,LLNULL);
*/	      endioctl(); 
	    ;}
    break;

  case 513:
#line 4321 "gram1.y"
    {
	      (yyval.bf_node) = subroutine_call((yyvsp[(1) - (4)].symbol), (yyvsp[(3) - (4)].ll_node), LLNULL, PLAIN);
/*	      match_parameters($1, $3);
	      $$= get_bfnd(fi,PROC_STAT,$1,$3,LLNULL,LLNULL);
*/	      endioctl(); 
	    ;}
    break;

  case 514:
#line 4329 "gram1.y"
    {
	      (yyval.bf_node) = get_bfnd(fi,RETURN_STAT,SMNULL,(yyvsp[(3) - (3)].ll_node),LLNULL,LLNULL);
	      thiswasbranch = YES;
	    ;}
    break;

  case 515:
#line 4334 "gram1.y"
    {
	      (yyval.bf_node) = get_bfnd(fi,(yyvsp[(1) - (3)].token),SMNULL,(yyvsp[(3) - (3)].ll_node),LLNULL,LLNULL);
	      thiswasbranch = ((yyvsp[(1) - (3)].token) == STOP_STAT);
	    ;}
    break;

  case 516:
#line 4339 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi, CYCLE_STMT, (yyvsp[(3) - (3)].symbol), LLNULL, LLNULL, LLNULL); ;}
    break;

  case 517:
#line 4342 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi, EXIT_STMT, (yyvsp[(3) - (3)].symbol), LLNULL, LLNULL, LLNULL); ;}
    break;

  case 518:
#line 4345 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi, ALLOCATE_STMT,  SMNULL, (yyvsp[(5) - (6)].ll_node), stat_alloc, LLNULL); ;}
    break;

  case 519:
#line 4348 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi, DEALLOCATE_STMT, SMNULL, (yyvsp[(5) - (6)].ll_node), stat_alloc , LLNULL); ;}
    break;

  case 520:
#line 4351 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi, NULLIFY_STMT, SMNULL, (yyvsp[(4) - (5)].ll_node), LLNULL, LLNULL); ;}
    break;

  case 521:
#line 4354 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi, WHERE_NODE, SMNULL, (yyvsp[(4) - (8)].ll_node), (yyvsp[(6) - (8)].ll_node), (yyvsp[(8) - (8)].ll_node)); ;}
    break;

  case 522:
#line 4372 "gram1.y"
    {(yyval.ll_node) = LLNULL;;}
    break;

  case 523:
#line 4376 "gram1.y"
    {
	      (yyval.bf_node)=get_bfnd(fi,GOTO_NODE,SMNULL,LLNULL,LLNULL,(PTR_LLND)(yyvsp[(3) - (3)].ll_node));
	      thiswasbranch = YES;
	    ;}
    break;

  case 524:
#line 4381 "gram1.y"
    { PTR_SYMB p;

	      if((yyvsp[(3) - (3)].hash_entry)->id_attr)
		p = (yyvsp[(3) - (3)].hash_entry)->id_attr;
	      else {
	        p = make_scalar((yyvsp[(3) - (3)].hash_entry), TYNULL, LOCAL);
		p->variant = LABEL_VAR;
	      }

	      if(p->variant == LABEL_VAR) {
		  (yyval.bf_node) = get_bfnd(fi,ASSGOTO_NODE,p,LLNULL,LLNULL,LLNULL);
		  thiswasbranch = YES;
	      }
	      else {
		  err("Must go to assigned variable", 48);
		  (yyval.bf_node) = BFNULL;
	      }
	    ;}
    break;

  case 525:
#line 4400 "gram1.y"
    { PTR_SYMB p;

	      if((yyvsp[(3) - (7)].hash_entry)->id_attr)
		p = (yyvsp[(3) - (7)].hash_entry)->id_attr;
	      else {
	        p = make_scalar((yyvsp[(3) - (7)].hash_entry), TYNULL, LOCAL);
		p->variant = LABEL_VAR;
	      }

	      if (p->variant == LABEL_VAR) {
		 (yyval.bf_node) = get_bfnd(fi,ASSGOTO_NODE,p,(yyvsp[(6) - (7)].ll_node),LLNULL,LLNULL);
		 thiswasbranch = YES;
	      }
	      else {
		err("Must go to assigned variable",48);
		(yyval.bf_node) = BFNULL;
	      }
	    ;}
    break;

  case 526:
#line 4419 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,COMGOTO_NODE, SMNULL, (yyvsp[(4) - (7)].ll_node), (yyvsp[(7) - (7)].ll_node), LLNULL); ;}
    break;

  case 529:
#line 4427 "gram1.y"
    { (yyval.symbol) = make_procedure((yyvsp[(3) - (4)].hash_entry), YES); ;}
    break;

  case 530:
#line 4431 "gram1.y"
    { 
              (yyval.ll_node) = set_ll_list((yyvsp[(2) - (2)].ll_node), LLNULL, EXPR_LIST);
              endioctl();
            ;}
    break;

  case 531:
#line 4436 "gram1.y"
    { 
               (yyval.ll_node) = set_ll_list((yyvsp[(1) - (4)].ll_node), (yyvsp[(4) - (4)].ll_node), EXPR_LIST);
               endioctl();
            ;}
    break;

  case 532:
#line 4443 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 533:
#line 4445 "gram1.y"
    { (yyval.ll_node)  = make_llnd(fi, KEYWORD_ARG, (yyvsp[(1) - (2)].ll_node), (yyvsp[(2) - (2)].ll_node), SMNULL); ;}
    break;

  case 534:
#line 4447 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,LABEL_ARG,(yyvsp[(2) - (2)].ll_node),LLNULL,SMNULL); ;}
    break;

  case 535:
#line 4450 "gram1.y"
    { (yyval.token) = PAUSE_NODE; ;}
    break;

  case 536:
#line 4451 "gram1.y"
    { (yyval.token) = STOP_STAT; ;}
    break;

  case 537:
#line 4462 "gram1.y"
    { if(parstate == OUTSIDE)
		{ PTR_BFND p;

		  p = get_bfnd(fi,PROG_HEDR, make_program(look_up_sym("_MAIN")), LLNULL, LLNULL, LLNULL);
		  set_blobs(p, global_bfnd, NEW_GROUP1);
		  add_scope_level(p, NO);
		  position = IN_PROC; 
		}
		if(parstate < INDATA) enddcl();
		parstate = INEXEC;
		yystno = 0;
	      ;}
    break;

  case 538:
#line 4477 "gram1.y"
    { intonly = YES; ;}
    break;

  case 539:
#line 4481 "gram1.y"
    { intonly = NO; ;}
    break;

  case 540:
#line 4489 "gram1.y"
    { (yyvsp[(1) - (2)].bf_node)->entry.Template.ll_ptr2 = (yyvsp[(2) - (2)].ll_node);
		  (yyval.bf_node) = (yyvsp[(1) - (2)].bf_node); ;}
    break;

  case 541:
#line 4492 "gram1.y"
    { PTR_LLND p, q = LLNULL;

		  q = make_llnd(fi, KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
		  q->entry.string_val = (char *)"unit";
		  q->type = global_string;
		  p = make_llnd(fi, SPEC_PAIR, q, (yyvsp[(2) - (2)].ll_node), SMNULL);
		  (yyvsp[(1) - (2)].bf_node)->entry.Template.ll_ptr2 = p;
		  endioctl();
		  (yyval.bf_node) = (yyvsp[(1) - (2)].bf_node); ;}
    break;

  case 542:
#line 4502 "gram1.y"
    { PTR_LLND p, q, r;

		  p = make_llnd(fi, KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
		  p->entry.string_val = (char *)"*";
		  p->type = global_string;
		  q = make_llnd(fi, KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
		  q->entry.string_val = (char *)"unit";
		  q->type = global_string;
		  r = make_llnd(fi, SPEC_PAIR, p, q, SMNULL);
		  (yyvsp[(1) - (2)].bf_node)->entry.Template.ll_ptr2 = r;
		  endioctl();
		  (yyval.bf_node) = (yyvsp[(1) - (2)].bf_node); ;}
    break;

  case 543:
#line 4515 "gram1.y"
    { PTR_LLND p, q, r;

		  p = make_llnd(fi, KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
		  p->entry.string_val = (char *)"**";
		  p->type = global_string;
		  q = make_llnd(fi, KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
		  q->entry.string_val = (char *)"unit";
		  q->type = global_string;
		  r = make_llnd(fi, SPEC_PAIR, p, q, SMNULL);
		  (yyvsp[(1) - (2)].bf_node)->entry.Template.ll_ptr2 = r;
		  endioctl();
		  (yyval.bf_node) = (yyvsp[(1) - (2)].bf_node); ;}
    break;

  case 544:
#line 4528 "gram1.y"
    { (yyvsp[(1) - (2)].bf_node)->entry.Template.ll_ptr2 = (yyvsp[(2) - (2)].ll_node);
		  (yyval.bf_node) = (yyvsp[(1) - (2)].bf_node); ;}
    break;

  case 545:
#line 4531 "gram1.y"
    { (yyval.bf_node) = (yyvsp[(1) - (1)].bf_node); ;}
    break;

  case 546:
#line 4533 "gram1.y"
    { (yyvsp[(1) - (2)].bf_node)->entry.Template.ll_ptr2 = (yyvsp[(2) - (2)].ll_node);
		  (yyval.bf_node) = (yyvsp[(1) - (2)].bf_node); ;}
    break;

  case 547:
#line 4536 "gram1.y"
    { (yyvsp[(1) - (2)].bf_node)->entry.Template.ll_ptr2 = (yyvsp[(2) - (2)].ll_node);
		  (yyval.bf_node) = (yyvsp[(1) - (2)].bf_node); ;}
    break;

  case 548:
#line 4539 "gram1.y"
    { (yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr2 = (yyvsp[(2) - (3)].ll_node);
		  (yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr1 = (yyvsp[(3) - (3)].ll_node);
		  (yyval.bf_node) = (yyvsp[(1) - (3)].bf_node); ;}
    break;

  case 549:
#line 4543 "gram1.y"
    { (yyvsp[(1) - (4)].bf_node)->entry.Template.ll_ptr2 = (yyvsp[(2) - (4)].ll_node);
		  (yyvsp[(1) - (4)].bf_node)->entry.Template.ll_ptr1 = (yyvsp[(4) - (4)].ll_node);
		  (yyval.bf_node) = (yyvsp[(1) - (4)].bf_node); ;}
    break;

  case 550:
#line 4552 "gram1.y"
    { (yyvsp[(1) - (2)].bf_node)->entry.Template.ll_ptr2 = (yyvsp[(2) - (2)].ll_node);
		  (yyval.bf_node) = (yyvsp[(1) - (2)].bf_node); ;}
    break;

  case 551:
#line 4555 "gram1.y"
    { (yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr2 = (yyvsp[(2) - (3)].ll_node);
		  (yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr1 = (yyvsp[(3) - (3)].ll_node);
		  (yyval.bf_node) = (yyvsp[(1) - (3)].bf_node); ;}
    break;

  case 552:
#line 4559 "gram1.y"
    { (yyval.bf_node) = (yyvsp[(1) - (1)].bf_node); ;}
    break;

  case 553:
#line 4561 "gram1.y"
    { (yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr1 = (yyvsp[(3) - (3)].ll_node);
		  (yyval.bf_node) = (yyvsp[(1) - (3)].bf_node); ;}
    break;

  case 554:
#line 4567 "gram1.y"
    { (yyval.bf_node) = (yyvsp[(1) - (3)].bf_node); ;}
    break;

  case 555:
#line 4571 "gram1.y"
    {(yyval.bf_node) = get_bfnd(fi, BACKSPACE_STAT, SMNULL, LLNULL, LLNULL, LLNULL);;}
    break;

  case 556:
#line 4573 "gram1.y"
    {(yyval.bf_node) = get_bfnd(fi, REWIND_STAT, SMNULL, LLNULL, LLNULL, LLNULL);;}
    break;

  case 557:
#line 4575 "gram1.y"
    {(yyval.bf_node) = get_bfnd(fi, ENDFILE_STAT, SMNULL, LLNULL, LLNULL, LLNULL);;}
    break;

  case 558:
#line 4582 "gram1.y"
    { (yyval.bf_node) = (yyvsp[(1) - (3)].bf_node); ;}
    break;

  case 559:
#line 4586 "gram1.y"
    {(yyval.bf_node) = get_bfnd(fi, OPEN_STAT, SMNULL, LLNULL, LLNULL, LLNULL);;}
    break;

  case 560:
#line 4588 "gram1.y"
    {(yyval.bf_node) = get_bfnd(fi, CLOSE_STAT, SMNULL, LLNULL, LLNULL, LLNULL);;}
    break;

  case 561:
#line 4592 "gram1.y"
    {  (yyval.bf_node) = get_bfnd(fi, INQUIRE_STAT, SMNULL, LLNULL, (yyvsp[(4) - (4)].ll_node), LLNULL);;}
    break;

  case 562:
#line 4594 "gram1.y"
    {  (yyval.bf_node) = get_bfnd(fi, INQUIRE_STAT, SMNULL, (yyvsp[(5) - (5)].ll_node), (yyvsp[(4) - (5)].ll_node), LLNULL);;}
    break;

  case 563:
#line 4598 "gram1.y"
    { PTR_LLND p;
		  PTR_LLND q = LLNULL;

		  if ((yyvsp[(1) - (1)].ll_node)->variant == INT_VAL)
 	          {
		        PTR_LABEL r;

			r = make_label_node(fi, (long) (yyvsp[(1) - (1)].ll_node)->entry.ival);
			r->scope = cur_scope();
			p = make_llnd_label(fi, LABEL_REF, r);
		  }
		  else p = (yyvsp[(1) - (1)].ll_node); 
		  q = make_llnd(fi, KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
		  q->entry.string_val = (char *)"fmt";
		  q->type = global_string;
		  (yyval.ll_node) = make_llnd(fi, SPEC_PAIR, q, p, SMNULL);
		  endioctl();
		;}
    break;

  case 564:
#line 4617 "gram1.y"
    { PTR_LLND p;
		  PTR_LLND q;

		  p = make_llnd(fi, KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
		  p->entry.string_val = (char *)"*";
		  p->type = global_string;
		  q = make_llnd(fi, KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
		  q->entry.string_val = (char *)"fmt";
		  q->type = global_string;
		  (yyval.ll_node) = make_llnd(fi, SPEC_PAIR, q, p, SMNULL);
		  endioctl();
		;}
    break;

  case 565:
#line 4633 "gram1.y"
    { PTR_LLND p;

		  p = make_llnd(fi, KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
		  p->entry.string_val = (char *)"unit";
		  p->type = global_string;
		  (yyval.ll_node) = make_llnd(fi, SPEC_PAIR, p, (yyvsp[(2) - (3)].ll_node), SMNULL);
		  endioctl();
		;}
    break;

  case 566:
#line 4644 "gram1.y"
    { 
		  (yyval.ll_node) = (yyvsp[(2) - (3)].ll_node);
		  endioctl();
		 ;}
    break;

  case 567:
#line 4651 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); endioctl();;}
    break;

  case 568:
#line 4653 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (4)].ll_node), (yyvsp[(4) - (4)].ll_node), EXPR_LIST); endioctl();;}
    break;

  case 569:
#line 4657 "gram1.y"
    { PTR_LLND p;
		  PTR_LLND q;
 
		  nioctl++;
		  if ((nioctl == 2) && ((yyvsp[(1) - (1)].ll_node)->variant == INT_VAL))
 	          {
		        PTR_LABEL r;

			r = make_label_node(fi, (long) (yyvsp[(1) - (1)].ll_node)->entry.ival);
			r->scope = cur_scope();
			p = make_llnd_label(fi, LABEL_REF, r);
		  }
		  else p = (yyvsp[(1) - (1)].ll_node); 
		  q = make_llnd(fi, KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
		  if (nioctl == 1)
		        q->entry.string_val = (char *)"unit"; 
		  else {
                     if(((yyvsp[(1) - (1)].ll_node)->variant == VAR_REF) && (yyvsp[(1) - (1)].ll_node)->entry.Template.symbol->variant == NAMELIST_NAME)
                       q->entry.string_val = (char *)"nml";
                     else
                       q->entry.string_val = (char *)"fmt";
                  }
		  q->type = global_string;
		  (yyval.ll_node) = make_llnd(fi, SPEC_PAIR, q, p, SMNULL);
		;}
    break;

  case 570:
#line 4683 "gram1.y"
    { PTR_LLND p;
		  PTR_LLND q;

		  nioctl++;
		  p = make_llnd(fi, KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
		  p->entry.string_val = (char *)"*";
		  p->type = global_string;
		  q = make_llnd(fi, KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
		  if (nioctl == 1)
		        q->entry.string_val = (char *)"unit"; 
		  else  q->entry.string_val = (char *)"fmt";
		  q->type = global_string;
		  (yyval.ll_node) = make_llnd(fi, SPEC_PAIR, q, p, SMNULL);
		;}
    break;

  case 571:
#line 4698 "gram1.y"
    { PTR_LLND p;
		  PTR_LLND q;

		  nioctl++;
		  p = make_llnd(fi, KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
		  p->entry.string_val = (char *)"**";
		  p->type = global_string;
		  q = make_llnd(fi, KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
		  if (nioctl == 1)
		        q->entry.string_val = (char *)"unit"; 
		  else  q->entry.string_val = (char *)"fmt";
		  q->type = global_string;
		  (yyval.ll_node) = make_llnd(fi, SPEC_PAIR, q, p, SMNULL);
		;}
    break;

  case 572:
#line 4713 "gram1.y"
    { 
		  PTR_LLND p;
		  char *q;

		  q = (yyvsp[(1) - (2)].ll_node)->entry.string_val;
  		  if ((strcmp(q, "end") == 0) || (strcmp(q, "err") == 0) || (strcmp(q, "eor") == 0) || ((strcmp(q,"fmt") == 0) && ((yyvsp[(2) - (2)].ll_node)->variant == INT_VAL)))
 	          {
		        PTR_LABEL r;

			r = make_label_node(fi, (long) (yyvsp[(2) - (2)].ll_node)->entry.ival);
			r->scope = cur_scope();
			p = make_llnd_label(fi, LABEL_REF, r);
		  }
		  else p = (yyvsp[(2) - (2)].ll_node);

		  (yyval.ll_node) = make_llnd(fi, SPEC_PAIR, (yyvsp[(1) - (2)].ll_node), p, SMNULL); ;}
    break;

  case 573:
#line 4730 "gram1.y"
    { PTR_LLND p;
                  
		  p = make_llnd(fi, KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
		  p->entry.string_val = (char *)"*";
		  p->type = global_string;
		  (yyval.ll_node) = make_llnd(fi, SPEC_PAIR, (yyvsp[(1) - (2)].ll_node), p, SMNULL);
		;}
    break;

  case 574:
#line 4738 "gram1.y"
    { PTR_LLND p;
		  p = make_llnd(fi, KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
		  p->entry.string_val = (char *)"*";
		  p->type = global_string;
		  (yyval.ll_node) = make_llnd(fi, SPEC_PAIR, (yyvsp[(1) - (2)].ll_node), p, SMNULL);
		;}
    break;

  case 575:
#line 4747 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi, KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
		  (yyval.ll_node)->entry.string_val = copys(yytext);
		  (yyval.ll_node)->type = global_string;
	        ;}
    break;

  case 576:
#line 4755 "gram1.y"
    {(yyval.bf_node) = get_bfnd(fi, READ_STAT, SMNULL, LLNULL, LLNULL, LLNULL);;}
    break;

  case 577:
#line 4760 "gram1.y"
    {(yyval.bf_node) = get_bfnd(fi, WRITE_STAT, SMNULL, LLNULL, LLNULL, LLNULL);;}
    break;

  case 578:
#line 4765 "gram1.y"
    {
	    PTR_LLND p, q, l;

	    if ((yyvsp[(3) - (4)].ll_node)->variant == INT_VAL)
		{
		        PTR_LABEL r;

			r = make_label_node(fi, (long) (yyvsp[(3) - (4)].ll_node)->entry.ival);
			r->scope = cur_scope();
			p = make_llnd_label(fi, LABEL_REF, r);
		}
	    else p = (yyvsp[(3) - (4)].ll_node);
	    
            q = make_llnd(fi, KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
	    q->entry.string_val = (char *)"fmt";
            q->type = global_string;
            l = make_llnd(fi, SPEC_PAIR, q, p, SMNULL);

            (yyval.bf_node) = get_bfnd(fi, PRINT_STAT, SMNULL, LLNULL, l, LLNULL);
	    endioctl();
	   ;}
    break;

  case 579:
#line 4787 "gram1.y"
    { PTR_LLND p, q, r;
		
	     p = make_llnd(fi, KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
	     p->entry.string_val = (char *)"*";
	     p->type = global_string;
	     q = make_llnd(fi, KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
	     q->entry.string_val = (char *)"fmt";
             q->type = global_string;
             r = make_llnd(fi, SPEC_PAIR, q, p, SMNULL);
	     (yyval.bf_node) = get_bfnd(fi, PRINT_STAT, SMNULL, LLNULL, r, LLNULL);
	     endioctl();
           ;}
    break;

  case 580:
#line 4803 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node), LLNULL, EXPR_LIST);;}
    break;

  case 581:
#line 4805 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), EXPR_LIST);;}
    break;

  case 582:
#line 4809 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 583:
#line 4811 "gram1.y"
    {
		  (yyvsp[(4) - (5)].ll_node)->entry.Template.ll_ptr1 = (yyvsp[(2) - (5)].ll_node);
		  (yyval.ll_node) = (yyvsp[(4) - (5)].ll_node);
		;}
    break;

  case 584:
#line 4818 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node), LLNULL, EXPR_LIST);  (yyval.ll_node)->type = (yyvsp[(1) - (1)].ll_node)->type;;}
    break;

  case 585:
#line 4820 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 586:
#line 4822 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 587:
#line 4826 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), EXPR_LIST); (yyval.ll_node)->type = (yyvsp[(1) - (3)].ll_node)->type;;}
    break;

  case 588:
#line 4828 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), EXPR_LIST); (yyval.ll_node)->type = (yyvsp[(1) - (3)].ll_node)->type;;}
    break;

  case 589:
#line 4830 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), EXPR_LIST); (yyval.ll_node)->type = (yyvsp[(1) - (3)].ll_node)->type;;}
    break;

  case 590:
#line 4832 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), EXPR_LIST); (yyval.ll_node)->type = (yyvsp[(1) - (3)].ll_node)->type;;}
    break;

  case 591:
#line 4834 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), EXPR_LIST); (yyval.ll_node)->type = (yyvsp[(1) - (3)].ll_node)->type;;}
    break;

  case 592:
#line 4836 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), EXPR_LIST); (yyval.ll_node)->type = (yyvsp[(1) - (3)].ll_node)->type;;}
    break;

  case 593:
#line 4840 "gram1.y"
    { (yyval.ll_node) =  set_ll_list((yyvsp[(1) - (1)].ll_node), LLNULL, EXPR_LIST);
	          (yyval.ll_node)->type = global_complex; ;}
    break;

  case 594:
#line 4843 "gram1.y"
    { (yyval.ll_node) =  set_ll_list((yyvsp[(2) - (3)].ll_node), LLNULL, EXPR_LIST);
                  (yyval.ll_node)->type = (yyvsp[(2) - (3)].ll_node)->type; ;}
    break;

  case 595:
#line 4846 "gram1.y"
    {
		  (yyvsp[(4) - (5)].ll_node)->entry.Template.ll_ptr1 = (yyvsp[(2) - (5)].ll_node);
		  (yyval.ll_node) =  set_ll_list((yyvsp[(4) - (5)].ll_node), LLNULL, EXPR_LIST);
                  (yyval.ll_node)->type = (yyvsp[(2) - (5)].ll_node)->type; 
		;}
    break;

  case 596:
#line 4852 "gram1.y"
    {
		  (yyvsp[(4) - (5)].ll_node)->entry.Template.ll_ptr1 = (yyvsp[(2) - (5)].ll_node);
		  (yyval.ll_node) =  set_ll_list((yyvsp[(4) - (5)].ll_node), LLNULL, EXPR_LIST);
                  (yyval.ll_node)->type = (yyvsp[(2) - (5)].ll_node)->type; 
		;}
    break;

  case 597:
#line 4858 "gram1.y"
    {
		  (yyvsp[(4) - (5)].ll_node)->entry.Template.ll_ptr1 = (yyvsp[(2) - (5)].ll_node);
		  (yyval.ll_node) =  set_ll_list((yyvsp[(4) - (5)].ll_node), LLNULL, EXPR_LIST);
                  (yyval.ll_node)->type = (yyvsp[(2) - (5)].ll_node)->type; 
		;}
    break;

  case 598:
#line 4866 "gram1.y"
    { inioctl = YES; ;}
    break;

  case 599:
#line 4870 "gram1.y"
    { startioctl();;}
    break;

  case 600:
#line 4878 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 601:
#line 4880 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(2) - (3)].ll_node); ;}
    break;

  case 602:
#line 4884 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 603:
#line 4886 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 604:
#line 4888 "gram1.y"
    {
	      (yyval.ll_node) = make_llnd(fi,(yyvsp[(2) - (3)].token), (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), SMNULL);
	      set_expr_type((yyval.ll_node));
	    ;}
    break;

  case 605:
#line 4893 "gram1.y"
    {
	      (yyval.ll_node) = make_llnd(fi,MULT_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), SMNULL);
	      set_expr_type((yyval.ll_node));
	    ;}
    break;

  case 606:
#line 4898 "gram1.y"
    {
	      (yyval.ll_node) = make_llnd(fi,DIV_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), SMNULL);
	      set_expr_type((yyval.ll_node));
	    ;}
    break;

  case 607:
#line 4903 "gram1.y"
    {
	      (yyval.ll_node) = make_llnd(fi,EXP_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), SMNULL);
	      set_expr_type((yyval.ll_node));
	    ;}
    break;

  case 608:
#line 4908 "gram1.y"
    {
	      if((yyvsp[(1) - (2)].token) == SUBT_OP)
		{
		  (yyval.ll_node) = make_llnd(fi,SUBT_OP, (yyvsp[(2) - (2)].ll_node), LLNULL, SMNULL);
		  set_expr_type((yyval.ll_node));
		}
	      else	(yyval.ll_node) = (yyvsp[(2) - (2)].ll_node);
	    ;}
    break;

  case 609:
#line 4917 "gram1.y"
    {
	      (yyval.ll_node) = make_llnd(fi,CONCAT_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), SMNULL);
	      set_expr_type((yyval.ll_node));
	    ;}
    break;

  case 610:
#line 4922 "gram1.y"
    { (yyval.ll_node) = LLNULL; ;}
    break;

  case 611:
#line 4927 "gram1.y"
    { comments = cur_comment = CMNULL; ;}
    break;

  case 612:
#line 4929 "gram1.y"
    { PTR_CMNT p;
	    p = make_comment(fi,*commentbuf, HALF);
	    if (cur_comment)
               cur_comment->next = p;
            else {
	       if ((pred_bfnd->control_parent->variant == LOGIF_NODE) ||(pred_bfnd->control_parent->variant == FORALL_STAT))

	           pred_bfnd->control_parent->entry.Template.cmnt_ptr = p;

	       else last_bfnd->entry.Template.cmnt_ptr = p;
            }
	    comments = cur_comment = CMNULL;
          ;}
    break;

  case 676:
#line 5012 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,HPF_TEMPLATE_STAT, SMNULL, (yyvsp[(3) - (3)].ll_node), LLNULL, LLNULL); ;}
    break;

  case 677:
#line 5014 "gram1.y"
    { PTR_SYMB s;
                if((yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr2)
                {
                  s = (yyvsp[(3) - (3)].ll_node)->entry.Template.ll_ptr1->entry.Template.symbol;
                  s->attr = s->attr | COMMON_BIT;
                }
	        add_to_lowLevelList((yyvsp[(3) - (3)].ll_node), (yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr1);
	      ;}
    break;

  case 678:
#line 5025 "gram1.y"
    {PTR_SYMB s;
	      PTR_LLND q;
	    /* 27.06.18
	      if(! explicit_shape)   
                err("Explicit shape specification is required", 50);
	    */  
	      s = make_array((yyvsp[(1) - (2)].hash_entry), TYNULL, (yyvsp[(2) - (2)].ll_node), ndim, LOCAL);
              if(s->attr & TEMPLATE_BIT)
                errstr( "Multiple declaration of identifier  %s ", s->ident, 73);
              if((s->attr & PROCESSORS_BIT) || (s->attr & TASK_BIT) || (s->attr & DVM_POINTER_BIT))
                errstr( "Inconsistent declaration of identifier  %s ", s->ident, 16);
              else
	        s->attr = s->attr | TEMPLATE_BIT;
              if((yyvsp[(2) - (2)].ll_node)) s->attr = s->attr | DIMENSION_BIT;  
	      q = make_llnd(fi,ARRAY_REF, (yyvsp[(2) - (2)].ll_node), LLNULL, s);
	      s->type->entry.ar_decl.ranges = (yyvsp[(2) - (2)].ll_node);
	      (yyval.ll_node) = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
	     ;}
    break;

  case 679:
#line 5046 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_DYNAMIC_DIR, SMNULL, (yyvsp[(3) - (3)].ll_node), LLNULL, LLNULL);;}
    break;

  case 680:
#line 5050 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 681:
#line 5052 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 682:
#line 5056 "gram1.y"
    {  PTR_SYMB s;
	      s = make_array((yyvsp[(1) - (1)].hash_entry), TYNULL, LLNULL, 0, LOCAL);
              if(s->attr &  DYNAMIC_BIT)
                errstr( "Multiple declaration of identifier  %s ", s->ident, 73);
              if((s->attr & PROCESSORS_BIT) || (s->attr & TASK_BIT) || (s->attr & HEAP_BIT)) 
                errstr("Inconsistent declaration of identifier  %s", s->ident, 16); 
              else
                s->attr = s->attr | DYNAMIC_BIT;        
	      (yyval.ll_node) = make_llnd(fi,ARRAY_REF, LLNULL, LLNULL, s);
	   ;}
    break;

  case 683:
#line 5069 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_INHERIT_DIR, SMNULL, (yyvsp[(3) - (3)].ll_node), LLNULL, LLNULL);;}
    break;

  case 684:
#line 5073 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 685:
#line 5075 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 686:
#line 5079 "gram1.y"
    {  PTR_SYMB s;
	      s = make_array((yyvsp[(1) - (1)].hash_entry), TYNULL, LLNULL, 0, LOCAL);
              if((s->attr & PROCESSORS_BIT) ||(s->attr & TASK_BIT)  || (s->attr & TEMPLATE_BIT) || (s->attr & ALIGN_BIT) || (s->attr & DISTRIBUTE_BIT)) 
                errstr("Inconsistent declaration of identifier  %s", s->ident, 16); 
              else
                s->attr = s->attr | INHERIT_BIT;        
	      (yyval.ll_node) = make_llnd(fi,ARRAY_REF, LLNULL, LLNULL, s);
	   ;}
    break;

  case 687:
#line 5090 "gram1.y"
    { PTR_LLND q;
             q = set_ll_list((yyvsp[(3) - (4)].ll_node),LLNULL,EXPR_LIST);
              /* (void)fprintf(stderr,"hpf.gram: shadow\n");*/ 
	     (yyval.bf_node) = get_bfnd(fi,DVM_SHADOW_DIR,SMNULL,q,(yyvsp[(4) - (4)].ll_node),LLNULL);
            ;}
    break;

  case 688:
#line 5101 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(2) - (3)].ll_node);;}
    break;

  case 689:
#line 5105 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 690:
#line 5107 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 691:
#line 5111 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);;}
    break;

  case 692:
#line 5113 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,DDOT, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), SMNULL);;}
    break;

  case 693:
#line 5115 "gram1.y"
    {
            if(parstate!=INEXEC) 
               err("Illegal shadow width specification", 56);  
            (yyval.ll_node) = make_llnd(fi,SHADOW_NAMES_OP, (yyvsp[(3) - (4)].ll_node), LLNULL, SMNULL);
          ;}
    break;

  case 694:
#line 5130 "gram1.y"
    {  PTR_SYMB s;
	      s = make_array((yyvsp[(1) - (1)].hash_entry), TYNULL, LLNULL, 0, LOCAL);
              if(s->attr & SHADOW_BIT)
                errstr( "Multiple declaration of identifier  %s ", s->ident, 73);
              if((s->attr & PROCESSORS_BIT) ||(s->attr & TASK_BIT)  || (s->attr & TEMPLATE_BIT) || (s->attr & HEAP_BIT)) 
                      errstr( "Inconsistent declaration of identifier %s", s->ident, 16); 
              else
        	      s->attr = s->attr | SHADOW_BIT;  
	      (yyval.ll_node) = make_llnd(fi,ARRAY_REF, LLNULL, LLNULL, s);
	   ;}
    break;

  case 695:
#line 5142 "gram1.y"
    { PTR_SYMB s;
	      PTR_LLND q, r;
	      if(! explicit_shape) {
              err("Explicit shape specification is required", 50);
		/* $$ = BFNULL;*/
	      }
	      s = make_array((yyvsp[(3) - (4)].hash_entry), TYNULL, (yyvsp[(4) - (4)].ll_node), ndim, LOCAL);
              if(s->attr &  PROCESSORS_BIT)
                errstr( "Multiple declaration of identifier  %s ", s->ident, 73);
              if((s->attr & ALIGN_BIT) ||(s->attr & DISTRIBUTE_BIT) ||(s->attr & TEMPLATE_BIT) || (s->attr & DYNAMIC_BIT) ||(s->attr & SHADOW_BIT) || (s->attr & TASK_BIT) || (s->attr & DVM_POINTER_BIT) || (s->attr & INHERIT_BIT))
                errstr("Inconsistent declaration of identifier %s", s->ident, 16);
              else
	        s->attr = s->attr | PROCESSORS_BIT;
              if((yyvsp[(4) - (4)].ll_node)) s->attr = s->attr | DIMENSION_BIT;
	      q = make_llnd(fi,ARRAY_REF, (yyvsp[(4) - (4)].ll_node), LLNULL, s);
	      s->type->entry.ar_decl.ranges = (yyvsp[(4) - (4)].ll_node);
	      r = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
	      (yyval.bf_node) = get_bfnd(fi,HPF_PROCESSORS_STAT, SMNULL, r, LLNULL, LLNULL);
	    ;}
    break;

  case 696:
#line 5162 "gram1.y"
    { PTR_SYMB s;
	      PTR_LLND q, r;
	      if(! explicit_shape) {
              err("Explicit shape specification is required", 50);
		/* $$ = BFNULL;*/
	      }
	      s = make_array((yyvsp[(3) - (4)].hash_entry), TYNULL, (yyvsp[(4) - (4)].ll_node), ndim, LOCAL);
              if(s->attr &  PROCESSORS_BIT)
                errstr( "Multiple declaration of identifier  %s ", s->ident, 73);
              if((s->attr & ALIGN_BIT) ||(s->attr & DISTRIBUTE_BIT) ||(s->attr & TEMPLATE_BIT) || (s->attr & DYNAMIC_BIT) ||(s->attr & SHADOW_BIT) || (s->attr & TASK_BIT) || (s->attr & DVM_POINTER_BIT) || (s->attr & INHERIT_BIT))
                errstr("Inconsistent declaration of identifier %s", s->ident, 16);
              else
	        s->attr = s->attr | PROCESSORS_BIT;
              if((yyvsp[(4) - (4)].ll_node)) s->attr = s->attr | DIMENSION_BIT;
	      q = make_llnd(fi,ARRAY_REF, (yyvsp[(4) - (4)].ll_node), LLNULL, s);
	      s->type->entry.ar_decl.ranges = (yyvsp[(4) - (4)].ll_node);
	      r = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
	      (yyval.bf_node) = get_bfnd(fi,HPF_PROCESSORS_STAT, SMNULL, r, LLNULL, LLNULL);
	    ;}
    break;

  case 697:
#line 5182 "gram1.y"
    {  PTR_SYMB s;
	      PTR_LLND q, r;
	      if(! explicit_shape) {
		err("Explicit shape specification is required", 50);
		/*$$ = BFNULL;*/
	      }
	      s = make_array((yyvsp[(3) - (4)].hash_entry), TYNULL, (yyvsp[(4) - (4)].ll_node), ndim, LOCAL);
              if(s->attr &  PROCESSORS_BIT)
                errstr( "Multiple declaration of identifier  %s ", s->ident, 73);
              if((s->attr & ALIGN_BIT) ||(s->attr & DISTRIBUTE_BIT) ||(s->attr & TEMPLATE_BIT) || (s->attr & DYNAMIC_BIT) ||(s->attr & SHADOW_BIT) || (s->attr & TASK_BIT) || (s->attr &  DVM_POINTER_BIT) || (s->attr & INHERIT_BIT) )
                errstr("Inconsistent declaration of identifier  %s", s->ident, 16);
              else
	        s->attr = s->attr | PROCESSORS_BIT;
              if((yyvsp[(4) - (4)].ll_node)) s->attr = s->attr | DIMENSION_BIT;
	      q = make_llnd(fi,ARRAY_REF, (yyvsp[(4) - (4)].ll_node), LLNULL, s);
	      s->type->entry.ar_decl.ranges = (yyvsp[(4) - (4)].ll_node);
	      r = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
	      add_to_lowLevelList(r, (yyvsp[(1) - (4)].bf_node)->entry.Template.ll_ptr1);
	;}
    break;

  case 698:
#line 5204 "gram1.y"
    {  PTR_LLND q,r;
                   q = make_llnd(fi,VAR_REF, LLNULL, LLNULL, (yyvsp[(3) - (3)].symbol));
                   r = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
	           (yyval.bf_node) = get_bfnd(fi,DVM_INDIRECT_GROUP_DIR, SMNULL, r, LLNULL, LLNULL);
                ;}
    break;

  case 699:
#line 5210 "gram1.y"
    {  PTR_LLND q,r;
                   q = make_llnd(fi,VAR_REF, LLNULL, LLNULL, (yyvsp[(3) - (3)].symbol));
                   r = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
                   add_to_lowLevelList(r, (yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr1);
	           ;
                ;}
    break;

  case 700:
#line 5219 "gram1.y"
    {(yyval.symbol) = make_local_entity((yyvsp[(1) - (1)].hash_entry), REF_GROUP_NAME,global_default,LOCAL);
          if((yyval.symbol)->attr &  INDIRECT_BIT)
                errstr( "Multiple declaration of identifier  %s ", (yyval.symbol)->ident, 73);
           (yyval.symbol)->attr = (yyval.symbol)->attr | INDIRECT_BIT;
          ;}
    break;

  case 701:
#line 5227 "gram1.y"
    {  PTR_LLND q,r;
                   q = make_llnd(fi,VAR_REF, LLNULL, LLNULL, (yyvsp[(3) - (3)].symbol));
                   r = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
	           (yyval.bf_node) = get_bfnd(fi,DVM_REMOTE_GROUP_DIR, SMNULL, r, LLNULL, LLNULL);
                ;}
    break;

  case 702:
#line 5233 "gram1.y"
    {  PTR_LLND q,r;
                   q = make_llnd(fi,VAR_REF, LLNULL, LLNULL, (yyvsp[(3) - (3)].symbol));
                   r = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
                   add_to_lowLevelList(r, (yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr1);
                ;}
    break;

  case 703:
#line 5241 "gram1.y"
    {(yyval.symbol) = make_local_entity((yyvsp[(1) - (1)].hash_entry), REF_GROUP_NAME,global_default,LOCAL);
           if((yyval.symbol)->attr &  INDIRECT_BIT)
                errstr( "Inconsistent declaration of identifier  %s ", (yyval.symbol)->ident, 16);
          ;}
    break;

  case 704:
#line 5248 "gram1.y"
    {  PTR_LLND q,r;
                   q = make_llnd(fi,VAR_REF, LLNULL, LLNULL, (yyvsp[(3) - (3)].symbol));
                   r = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
	           (yyval.bf_node) = get_bfnd(fi,DVM_REDUCTION_GROUP_DIR, SMNULL, r, LLNULL, LLNULL);
                ;}
    break;

  case 705:
#line 5254 "gram1.y"
    {  PTR_LLND q,r;
                   q = make_llnd(fi,VAR_REF, LLNULL, LLNULL, (yyvsp[(3) - (3)].symbol));
                   r = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
                   add_to_lowLevelList(r, (yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr1);
	           ;
                ;}
    break;

  case 706:
#line 5263 "gram1.y"
    {(yyval.symbol) = make_local_entity((yyvsp[(1) - (1)].hash_entry), REDUCTION_GROUP_NAME,global_default,LOCAL);;}
    break;

  case 707:
#line 5267 "gram1.y"
    {  PTR_LLND q,r;
                   q = make_llnd(fi,VAR_REF, LLNULL, LLNULL, (yyvsp[(3) - (3)].symbol));
                   r = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
	           (yyval.bf_node) = get_bfnd(fi,DVM_CONSISTENT_GROUP_DIR, SMNULL, r, LLNULL, LLNULL);
                ;}
    break;

  case 708:
#line 5273 "gram1.y"
    {  PTR_LLND q,r;
                   q = make_llnd(fi,VAR_REF, LLNULL, LLNULL, (yyvsp[(3) - (3)].symbol));
                   r = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
                   add_to_lowLevelList(r, (yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr1);	           
                ;}
    break;

  case 709:
#line 5281 "gram1.y"
    {(yyval.symbol) = make_local_entity((yyvsp[(1) - (1)].hash_entry), CONSISTENT_GROUP_NAME,global_default,LOCAL);;}
    break;

  case 710:
#line 5295 "gram1.y"
    { PTR_SYMB s;
            if(parstate == INEXEC){
              if (!(s = (yyvsp[(2) - (3)].hash_entry)->id_attr))
              {
	         s = make_array((yyvsp[(2) - (3)].hash_entry), TYNULL, LLNULL, 0, LOCAL);
	     	 s->decl = SOFT;
	      } 
            } else
              s = make_array((yyvsp[(2) - (3)].hash_entry), TYNULL, LLNULL, 0, LOCAL);

              (yyval.ll_node) = make_llnd(fi,ARRAY_REF, (yyvsp[(3) - (3)].ll_node), LLNULL, s);
            ;}
    break;

  case 711:
#line 5308 "gram1.y"
    { (yyval.ll_node) = LLNULL; opt_kwd_ = NO;;}
    break;

  case 712:
#line 5314 "gram1.y"
    { PTR_LLND q;
             if(!(yyvsp[(4) - (5)].ll_node))
               err("Distribution format list is omitted", 51);
            /* if($6)
               err("NEW_VALUE specification in DISTRIBUTE directive");*/
             q = set_ll_list((yyvsp[(3) - (5)].ll_node),LLNULL,EXPR_LIST);
	     (yyval.bf_node) = get_bfnd(fi,DVM_DISTRIBUTE_DIR,SMNULL,q,(yyvsp[(4) - (5)].ll_node),(yyvsp[(5) - (5)].ll_node));
            ;}
    break;

  case 713:
#line 5330 "gram1.y"
    { PTR_LLND q;
                /*  if(!$4)
                  {err("Distribution format is omitted", 51); errcnt--;}
                 */
              q = set_ll_list((yyvsp[(3) - (6)].ll_node),LLNULL,EXPR_LIST);
                 /* r = LLNULL;
                   if($6){
                     r = set_ll_list($6,LLNULL,EXPR_LIST);
                     if($7) r = set_ll_list(r,$7,EXPR_LIST);
                   } else
                     if($7) r = set_ll_list(r,$7,EXPR_LIST);
                 */
	      (yyval.bf_node) = get_bfnd(fi,DVM_REDISTRIBUTE_DIR,SMNULL,q,(yyvsp[(4) - (6)].ll_node),(yyvsp[(6) - (6)].ll_node));;}
    break;

  case 714:
#line 5345 "gram1.y"
    {
                 /* r = LLNULL;
                    if($5){
                      r = set_ll_list($5,LLNULL,EXPR_LIST);
                      if($6) r = set_ll_list(r,$6,EXPR_LIST);
                    } else
                      if($6) r = set_ll_list(r,$6,EXPR_LIST);
                  */
	      (yyval.bf_node) = get_bfnd(fi,DVM_REDISTRIBUTE_DIR,SMNULL,(yyvsp[(8) - (8)].ll_node) ,(yyvsp[(3) - (8)].ll_node),(yyvsp[(5) - (8)].ll_node) );
             ;}
    break;

  case 715:
#line 5373 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 716:
#line 5375 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 717:
#line 5379 "gram1.y"
    {(yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);;}
    break;

  case 718:
#line 5381 "gram1.y"
    {(yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);;}
    break;

  case 719:
#line 5385 "gram1.y"
    {  PTR_SYMB s;
 
          if(parstate == INEXEC){
            if (!(s = (yyvsp[(1) - (1)].hash_entry)->id_attr))
              {
	         s = make_array((yyvsp[(1) - (1)].hash_entry), TYNULL, LLNULL, 0, LOCAL);
	     	 s->decl = SOFT;
	      } 
            if(s->attr & PROCESSORS_BIT)
              errstr( "Illegal use of PROCESSORS name %s ", s->ident, 53);
            if(s->attr & TASK_BIT)
              errstr( "Illegal use of task array name %s ", s->ident, 71);

          } else {
            s = make_array((yyvsp[(1) - (1)].hash_entry), TYNULL, LLNULL, 0, LOCAL);
            if(s->attr & DISTRIBUTE_BIT)
              errstr( "Multiple declaration of identifier  %s ", s->ident, 73);
            else if( (s->attr & PROCESSORS_BIT) || (s->attr & TASK_BIT) || (s->attr & INHERIT_BIT))
              errstr("Inconsistent declaration of identifier  %s",s->ident, 16);
            else
              s->attr = s->attr | DISTRIBUTE_BIT;
          } 
         if(s->attr & ALIGN_BIT)
               errstr("A distributee may not have the ALIGN attribute:%s",s->ident, 54);
          (yyval.ll_node) = make_llnd(fi,ARRAY_REF, LLNULL, LLNULL, s);               	  
	;}
    break;

  case 720:
#line 5414 "gram1.y"
    {  PTR_SYMB s;
          s = make_array((yyvsp[(1) - (4)].hash_entry), TYNULL, LLNULL, 0, LOCAL);
        
          if(parstate != INEXEC) 
               errstr( "Illegal distributee:%s", s->ident, 312);
          else {
            if(s->attr & PROCESSORS_BIT)
               errstr( "Illegal use of PROCESSORS name %s ", s->ident, 53);  
            if(s->attr & TASK_BIT)
               errstr( "Illegal use of task array name %s ", s->ident, 71);        
            if(s->attr & ALIGN_BIT)
               errstr("A distributee may not have the ALIGN attribute:%s",s->ident, 54);
            if(!(s->attr & DVM_POINTER_BIT))
               errstr("Illegal distributee:%s", s->ident, 312);
          /*s->attr = s->attr | DISTRIBUTE_BIT;*/
	  (yyval.ll_node) = make_llnd(fi,ARRAY_REF, (yyvsp[(3) - (4)].ll_node), LLNULL, s); 
          }
        
	;}
    break;

  case 721:
#line 5437 "gram1.y"
    {  PTR_SYMB s;
          if((s=(yyvsp[(1) - (1)].hash_entry)->id_attr) == SMNULL)
            s = make_array((yyvsp[(1) - (1)].hash_entry), TYNULL, LLNULL, 0, LOCAL);
          if((parstate == INEXEC) && !(s->attr & PROCESSORS_BIT))
               errstr( "'%s' is not processor array ", s->ident, 67);
	  (yyval.symbol) = s;
	;}
    break;

  case 722:
#line 5457 "gram1.y"
    { (yyval.ll_node) = LLNULL;  ;}
    break;

  case 723:
#line 5459 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (2)].ll_node);;}
    break;

  case 724:
#line 5463 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(2) - (3)].ll_node);;}
    break;

  case 725:
#line 5484 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(2) - (2)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 726:
#line 5486 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (4)].ll_node),(yyvsp[(4) - (4)].ll_node),EXPR_LIST); ;}
    break;

  case 727:
#line 5489 "gram1.y"
    { opt_kwd_ = YES; ;}
    break;

  case 728:
#line 5498 "gram1.y"
    {  
               (yyval.ll_node) = make_llnd(fi,BLOCK_OP, LLNULL, LLNULL, SMNULL);
        ;}
    break;

  case 729:
#line 5502 "gram1.y"
    {  err("Distribution format BLOCK(n) is not permitted in FDVM", 55);
          (yyval.ll_node) = make_llnd(fi,BLOCK_OP, (yyvsp[(4) - (5)].ll_node), LLNULL, SMNULL);
          endioctl();
        ;}
    break;

  case 730:
#line 5507 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,BLOCK_OP, LLNULL, LLNULL, (yyvsp[(3) - (4)].symbol)); ;}
    break;

  case 731:
#line 5509 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,BLOCK_OP,  (yyvsp[(5) - (6)].ll_node),  LLNULL,  (yyvsp[(3) - (6)].symbol)); ;}
    break;

  case 732:
#line 5511 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,BLOCK_OP,  LLNULL, (yyvsp[(3) - (4)].ll_node),  SMNULL); ;}
    break;

  case 733:
#line 5513 "gram1.y"
    { 
          (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
          (yyval.ll_node)->entry.string_val = (char *) "*";
          (yyval.ll_node)->type = global_string;
        ;}
    break;

  case 734:
#line 5519 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,INDIRECT_OP, LLNULL, LLNULL, (yyvsp[(3) - (4)].symbol)); ;}
    break;

  case 735:
#line 5521 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,INDIRECT_OP, (yyvsp[(3) - (4)].ll_node), LLNULL, SMNULL); ;}
    break;

  case 736:
#line 5525 "gram1.y"
    {  PTR_SYMB s;
	      s = make_array((yyvsp[(1) - (1)].hash_entry), TYNULL, LLNULL, 0, LOCAL);
              if((s->attr & PROCESSORS_BIT) ||(s->attr & TASK_BIT)  || (s->attr & TEMPLATE_BIT)) 
                errstr("Inconsistent declaration of identifier  %s", s->ident, 16); 
       
	      (yyval.symbol) = s;
	   ;}
    break;

  case 737:
#line 5535 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,DERIVED_OP, (yyvsp[(2) - (6)].ll_node), (yyvsp[(6) - (6)].ll_node), SMNULL); ;}
    break;

  case 738:
#line 5539 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 739:
#line 5541 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 740:
#line 5546 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);;}
    break;

  case 741:
#line 5548 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,DDOT, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), SMNULL);;}
    break;

  case 742:
#line 5552 "gram1.y"
    { 
              (yyval.ll_node) = make_llnd(fi,ARRAY_REF, LLNULL, LLNULL, (yyvsp[(1) - (1)].symbol));
	    ;}
    break;

  case 743:
#line 5556 "gram1.y"
    { 
              (yyval.ll_node) = make_llnd(fi,ARRAY_REF, (yyvsp[(3) - (4)].ll_node), LLNULL, (yyvsp[(1) - (4)].symbol));
	    ;}
    break;

  case 744:
#line 5562 "gram1.y"
    { 
              if (!((yyval.symbol) = (yyvsp[(1) - (1)].hash_entry)->id_attr))
              {
	         (yyval.symbol) = make_array((yyvsp[(1) - (1)].hash_entry), TYNULL, LLNULL,0,LOCAL);
	         (yyval.symbol)->decl = SOFT;
	      } 
            ;}
    break;

  case 745:
#line 5572 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 746:
#line 5574 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 747:
#line 5578 "gram1.y"
    {  (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);;}
    break;

  case 748:
#line 5580 "gram1.y"
    {  (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);;}
    break;

  case 749:
#line 5582 "gram1.y"
    {
                      (yyvsp[(2) - (3)].ll_node)->entry.Template.ll_ptr1 = (yyvsp[(3) - (3)].ll_node); 
                      (yyval.ll_node) = (yyvsp[(2) - (3)].ll_node);   
                   ;}
    break;

  case 750:
#line 5589 "gram1.y"
    { PTR_SYMB s;
            s = make_scalar((yyvsp[(1) - (1)].hash_entry),TYNULL,LOCAL);
	    (yyval.ll_node) = make_llnd(fi,DUMMY_REF, LLNULL, LLNULL, s);
            /*$$->type = global_int;*/
          ;}
    break;

  case 751:
#line 5606 "gram1.y"
    {  (yyval.ll_node) = LLNULL; ;}
    break;

  case 752:
#line 5608 "gram1.y"
    {  (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 753:
#line 5612 "gram1.y"
    {  (yyval.ll_node) = set_ll_list((yyvsp[(2) - (2)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 754:
#line 5614 "gram1.y"
    {  (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 755:
#line 5618 "gram1.y"
    {  if((yyvsp[(1) - (1)].ll_node)->type->variant != T_STRING)
                 errstr( "Illegal type of shadow_name", 627);
               (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); 
            ;}
    break;

  case 756:
#line 5625 "gram1.y"
    { char *q;
          nioctl = 1;
          q = (yyvsp[(1) - (2)].ll_node)->entry.string_val;
          if((!strcmp(q,"shadow")) && ((yyvsp[(2) - (2)].ll_node)->variant == INT_VAL))                          (yyval.ll_node) = make_llnd(fi,SPEC_PAIR, (yyvsp[(1) - (2)].ll_node), (yyvsp[(2) - (2)].ll_node), SMNULL);
          else
          {  err("Illegal shadow width specification", 56);
             (yyval.ll_node) = LLNULL;
          }
        ;}
    break;

  case 757:
#line 5635 "gram1.y"
    { char *ql, *qh;
          PTR_LLND p1, p2;
          nioctl = 2;
          ql = (yyvsp[(1) - (5)].ll_node)->entry.string_val;
          qh = (yyvsp[(4) - (5)].ll_node)->entry.string_val;
          if((!strcmp(ql,"low_shadow")) && ((yyvsp[(2) - (5)].ll_node)->variant == INT_VAL) && (!strcmp(qh,"high_shadow")) && ((yyvsp[(5) - (5)].ll_node)->variant == INT_VAL)) 
              {
                 p1 = make_llnd(fi,SPEC_PAIR, (yyvsp[(1) - (5)].ll_node), (yyvsp[(2) - (5)].ll_node), SMNULL);
                 p2 = make_llnd(fi,SPEC_PAIR, (yyvsp[(4) - (5)].ll_node), (yyvsp[(5) - (5)].ll_node), SMNULL);
                 (yyval.ll_node) = make_llnd(fi,CONS, p1, p2, SMNULL);
              } 
          else
          {  err("Illegal shadow width specification", 56);
             (yyval.ll_node) = LLNULL;
          }
        ;}
    break;

  case 758:
#line 5664 "gram1.y"
    { PTR_LLND q;
              q = set_ll_list((yyvsp[(3) - (4)].ll_node),LLNULL,EXPR_LIST);
              (yyval.bf_node) = (yyvsp[(4) - (4)].bf_node);
              (yyval.bf_node)->entry.Template.ll_ptr1 = q;
            ;}
    break;

  case 759:
#line 5679 "gram1.y"
    { PTR_LLND q;
              q = set_ll_list((yyvsp[(3) - (4)].ll_node),LLNULL,EXPR_LIST);
              (yyval.bf_node) = (yyvsp[(4) - (4)].bf_node);
              (yyval.bf_node)->variant = DVM_REALIGN_DIR; 
              (yyval.bf_node)->entry.Template.ll_ptr1 = q;
            ;}
    break;

  case 760:
#line 5686 "gram1.y"
    {
              (yyval.bf_node) = (yyvsp[(3) - (6)].bf_node);
              (yyval.bf_node)->variant = DVM_REALIGN_DIR; 
              (yyval.bf_node)->entry.Template.ll_ptr1 = (yyvsp[(6) - (6)].ll_node);
            ;}
    break;

  case 761:
#line 5704 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 762:
#line 5706 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 763:
#line 5710 "gram1.y"
    {  PTR_SYMB s;
          s = make_array((yyvsp[(1) - (1)].hash_entry), TYNULL, LLNULL, 0, LOCAL);
          if((s->attr & ALIGN_BIT)) 
                errstr( "Multiple declaration of identifier  %s ", s->ident, 73);
          if((s->attr & PROCESSORS_BIT) || (s->attr & TASK_BIT) || (s->attr & INHERIT_BIT)) 
                errstr( "Inconsistent declaration of identifier  %s", s->ident, 16); 
          else  if(s->attr & DISTRIBUTE_BIT)
               errstr( "An alignee may not have the DISTRIBUTE attribute:'%s'", s->ident,57);             else
                s->attr = s->attr | ALIGN_BIT;     
	  (yyval.ll_node) = make_llnd(fi,ARRAY_REF, LLNULL, LLNULL, s);
	;}
    break;

  case 764:
#line 5724 "gram1.y"
    {PTR_SYMB s;
        s = (yyvsp[(1) - (1)].ll_node)->entry.Template.symbol;
        if(s->attr & PROCESSORS_BIT)
               errstr( "Illegal use of PROCESSORS name %s ", s->ident, 53);
        else  if(s->attr & TASK_BIT)
              errstr( "Illegal use of task array name %s ", s->ident, 71);
        else if( !(s->attr & DIMENSION_BIT) && !(s->attr & DVM_POINTER_BIT))
            errstr("The alignee %s isn't an array", s->ident, 58);
        else {
            /*  if(!(s->attr & DYNAMIC_BIT))
                 errstr("'%s' hasn't the DYNAMIC attribute", s->ident, 59);
             */
              if(!(s->attr & ALIGN_BIT) && !(s->attr & INHERIT_BIT))
                 errstr("'%s' hasn't the ALIGN attribute", s->ident, 60);
              if(s->attr & DISTRIBUTE_BIT)
                 errstr("An alignee may not have the DISTRIBUTE attribute: %s", s->ident, 57);

/*               if(s->entry.var_decl.local == IO)
 *                 errstr("An alignee may not be the dummy argument");
*/
          }
	  (yyval.ll_node) = make_llnd(fi,ARRAY_REF, LLNULL, LLNULL, s);
	;}
    break;

  case 765:
#line 5750 "gram1.y"
    { /* PTR_LLND r;
              if($7) {
                r = set_ll_list($6,LLNULL,EXPR_LIST);
                r = set_ll_list(r,$7,EXPR_LIST);
              }
              else
                r = $6;
              */
            (yyval.bf_node) = get_bfnd(fi,DVM_ALIGN_DIR,SMNULL,LLNULL,(yyvsp[(2) - (6)].ll_node),(yyvsp[(6) - (6)].ll_node));
           ;}
    break;

  case 766:
#line 5763 "gram1.y"
    {
           (yyval.ll_node) = make_llnd(fi,ARRAY_REF, (yyvsp[(3) - (4)].ll_node), LLNULL, (yyvsp[(1) - (4)].symbol));        
          ;}
    break;

  case 767:
#line 5779 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 768:
#line 5781 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 769:
#line 5784 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);;}
    break;

  case 770:
#line 5786 "gram1.y"
    {
                  (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
                  (yyval.ll_node)->entry.string_val = (char *) "*";
                  (yyval.ll_node)->type = global_string;
                 ;}
    break;

  case 771:
#line 5792 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);;}
    break;

  case 772:
#line 5796 "gram1.y"
    { 
         /* if(parstate == INEXEC){ *for REALIGN directive*
              if (!($$ = $1->id_attr))
              {
	         $$ = make_array($1, TYNULL, LLNULL,0,LOCAL);
	     	 $$->decl = SOFT;
	      } 
          } else
             $$ = make_array($1, TYNULL, LLNULL, 0, LOCAL);
          */
          if (!((yyval.symbol) = (yyvsp[(1) - (1)].hash_entry)->id_attr))
          {
	       (yyval.symbol) = make_array((yyvsp[(1) - (1)].hash_entry), TYNULL, LLNULL,0,LOCAL);
	       (yyval.symbol)->decl = SOFT;
	  } 
          (yyval.symbol)->attr = (yyval.symbol)->attr | ALIGN_BASE_BIT;
          if((yyval.symbol)->attr & PROCESSORS_BIT)
               errstr( "Illegal use of PROCESSORS name %s ", (yyval.symbol)->ident, 53);
          else  if((yyval.symbol)->attr & TASK_BIT)
               errstr( "Illegal use of task array name %s ", (yyval.symbol)->ident, 71);
          else
          if((parstate == INEXEC) /* for  REALIGN directive */
             &&   !((yyval.symbol)->attr & DIMENSION_BIT) && !((yyval.symbol)->attr & DVM_POINTER_BIT))
            errstr("The align-target %s isn't declared as array", (yyval.symbol)->ident, 61); 
         ;}
    break;

  case 773:
#line 5824 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 774:
#line 5826 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 775:
#line 5830 "gram1.y"
    { PTR_SYMB s;
            s = make_scalar((yyvsp[(1) - (1)].hash_entry),TYNULL,LOCAL);
            if(s->type->variant != T_INT || s->attr & PARAMETER_BIT)             
              errstr("The align-dummy %s isn't a scalar integer variable", s->ident, 62); 
	   (yyval.ll_node) = make_llnd(fi,VAR_REF, LLNULL, LLNULL, s);
           (yyval.ll_node)->type = global_int;
         ;}
    break;

  case 776:
#line 5838 "gram1.y"
    {  
          (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
          (yyval.ll_node)->entry.string_val = (char *) "*";
          (yyval.ll_node)->type = global_string;
        ;}
    break;

  case 777:
#line 5844 "gram1.y"
    {   (yyval.ll_node) = make_llnd(fi,DDOT, LLNULL, LLNULL, SMNULL); ;}
    break;

  case 778:
#line 5847 "gram1.y"
    { PTR_SYMB s;
	             PTR_LLND q, r, p;
                     int numdim;
                     if(type_options & PROCESSORS_BIT) {    /* 27.06.18 || (type_options & TEMPLATE_BIT)){ */
                       if(! explicit_shape) {
                         err("Explicit shape specification is required", 50);
		         /*$$ = BFNULL;*/
	               }
                     } 

                    /*  else {
                       if($6)
                         err("Shape specification is not permitted", 263);
                     } */

                     if(type_options & DIMENSION_BIT)
                       { p = attr_dims; numdim = attr_ndim;}
                     else
                       { p = LLNULL; numdim = 0; }
                     if((yyvsp[(6) - (6)].ll_node))          /*dimension information after the object name*/
                     { p = (yyvsp[(6) - (6)].ll_node); numdim = ndim;} /*overrides the DIMENSION attribute */
	             s = make_array((yyvsp[(5) - (6)].hash_entry), TYNULL, p, numdim, LOCAL);

                     if((type_options & COMMON_BIT) && !(type_options & TEMPLATE_BIT))
                     {
                        err("Illegal combination of attributes", 63);
                        type_options = type_options & (~COMMON_BIT);
                     }
                     if((type_options & PROCESSORS_BIT) &&((type_options & ALIGN_BIT) ||(type_options & DISTRIBUTE_BIT) ||(type_options & TEMPLATE_BIT) || (type_options & DYNAMIC_BIT) ||(type_options & SHADOW_BIT) ))
                        err("Illegal combination of attributes", 63);
                     else  if((type_options & PROCESSORS_BIT) && ((s->attr & ALIGN_BIT) ||(s->attr & DISTRIBUTE_BIT) ||(s->attr & TEMPLATE_BIT) || (s->attr & DYNAMIC_BIT) ||(s->attr & SHADOW_BIT)) )
                     {  errstr("Inconsistent declaration of  %s", s->ident, 16);
                        type_options = type_options & (~PROCESSORS_BIT);
                     }
                     else if ((s->attr & PROCESSORS_BIT) && ((type_options & ALIGN_BIT) ||(type_options & DISTRIBUTE_BIT) ||(type_options & TEMPLATE_BIT) || (type_options & DYNAMIC_BIT) ||(type_options & SHADOW_BIT))) 
                        errstr("Inconsistent declaration of  %s", s->ident, 16);
                     else if ((s->attr & INHERIT_BIT) && ((type_options & ALIGN_BIT) ||(type_options & DISTRIBUTE_BIT)))
                        errstr("Inconsistent declaration of  %s", s->ident, 16);
                     if(( s->attr & DISTRIBUTE_BIT) &&  (type_options & DISTRIBUTE_BIT))
                           errstr( "Multiple declaration of identifier  %s ", s->ident, 73);
                     if(( s->attr & ALIGN_BIT) &&  (type_options & ALIGN_BIT))
                           errstr( "Multiple declaration of identifier  %s ", s->ident, 73);
                     if(( s->attr & SHADOW_BIT) &&  (type_options & SHADOW_BIT))
                           errstr( "Multiple declaration of identifier  %s ", s->ident, 73);
                     if(( s->attr & TEMPLATE_BIT) &&  (type_options & TEMPLATE_BIT))
                           errstr( "Multiple declaration of identifier  %s ", s->ident, 73);
                     if(( s->attr & PROCESSORS_BIT) &&  (type_options & PROCESSORS_BIT))
                           errstr( "Multiple declaration of identifier  %s ", s->ident, 73);
	             s->attr = s->attr | type_options;
                     if((yyvsp[(6) - (6)].ll_node)) s->attr = s->attr | DIMENSION_BIT;
                     if((s->attr & DISTRIBUTE_BIT) && (s->attr & ALIGN_BIT))
                       errstr("%s has the DISTRIBUTE and ALIGN attribute",s->ident, 64);
	             q = make_llnd(fi,ARRAY_REF, (yyvsp[(6) - (6)].ll_node), LLNULL, s);
	             if(p) s->type->entry.ar_decl.ranges = p;
	             r = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
	             (yyval.bf_node) = get_bfnd(fi,DVM_VAR_DECL, SMNULL, r, LLNULL,(yyvsp[(1) - (6)].ll_node));
	            ;}
    break;

  case 779:
#line 5905 "gram1.y"
    { PTR_SYMB s;
	             PTR_LLND q, r, p;
                     int numdim;
                    if(type_options & PROCESSORS_BIT) { /*23.10.18  || (type_options & TEMPLATE_BIT)){ */
                       if(! explicit_shape) {
                         err("Explicit shape specification is required", 50);
		         /*$$ = BFNULL;*/
	               }
                     } 
                    /* else {
                       if($4)
                         err("Shape specification is not permitted", 263);
                     } */
                     if(type_options & DIMENSION_BIT)
                       { p = attr_dims; numdim = attr_ndim;}
                     else
                       { p = LLNULL; numdim = 0; }
                     if((yyvsp[(4) - (4)].ll_node))                   /*dimension information after the object name*/
                     { p = (yyvsp[(4) - (4)].ll_node); numdim = ndim;}/*overrides the DIMENSION attribute */
	             s = make_array((yyvsp[(3) - (4)].hash_entry), TYNULL, p, numdim, LOCAL);

                     if((type_options & COMMON_BIT) && !(type_options & TEMPLATE_BIT))
                     {
                        err("Illegal combination of attributes", 63);
                        type_options = type_options & (~COMMON_BIT);
                     }
                     if((type_options & PROCESSORS_BIT) &&((type_options & ALIGN_BIT) ||(type_options & DISTRIBUTE_BIT) ||(type_options & TEMPLATE_BIT) || (type_options & DYNAMIC_BIT) ||(type_options & SHADOW_BIT) ))
                       err("Illegal combination of attributes", 63);
                     else  if((type_options & PROCESSORS_BIT) && ((s->attr & ALIGN_BIT) ||(s->attr & DISTRIBUTE_BIT) ||(s->attr & TEMPLATE_BIT) || (s->attr & DYNAMIC_BIT) ||(s->attr & SHADOW_BIT)) )
                     {  errstr("Inconsistent declaration of identifier %s", s->ident, 16);
                        type_options = type_options & (~PROCESSORS_BIT);
                     }
                     else if ((s->attr & PROCESSORS_BIT) && ((type_options & ALIGN_BIT) ||(type_options & DISTRIBUTE_BIT) ||(type_options & TEMPLATE_BIT) || (type_options & DYNAMIC_BIT) ||(type_options & SHADOW_BIT))) 
                          errstr("Inconsistent declaration of identifier  %s", s->ident,16);
                     else if ((s->attr & INHERIT_BIT) && ((type_options & ALIGN_BIT) ||(type_options & DISTRIBUTE_BIT)))
                          errstr("Inconsistent declaration of identifier %s", s->ident, 16);
                     if(( s->attr & DISTRIBUTE_BIT) &&  (type_options & DISTRIBUTE_BIT))
                          errstr( "Multiple declaration of identifier  %s ", s->ident, 73);
                     if(( s->attr & ALIGN_BIT) &&  (type_options & ALIGN_BIT))
                          errstr( "Multiple declaration of identifier  %s ", s->ident, 73);
                     if(( s->attr & SHADOW_BIT) &&  (type_options & SHADOW_BIT))
                          errstr( "Multiple declaration of identifier  %s ", s->ident, 73);
                     if(( s->attr & TEMPLATE_BIT) &&  (type_options & TEMPLATE_BIT))
                          errstr( "Multiple declaration of identifier  %s ", s->ident, 73);
                     if(( s->attr & PROCESSORS_BIT) &&  (type_options & PROCESSORS_BIT))
                          errstr( "Multiple declaration of identifier  %s ", s->ident, 73);   
	             s->attr = s->attr | type_options;
                     if((yyvsp[(4) - (4)].ll_node)) s->attr = s->attr | DIMENSION_BIT;
                     if((s->attr & DISTRIBUTE_BIT) && (s->attr & ALIGN_BIT))
                           errstr("%s has the DISTRIBUTE and ALIGN attribute",s->ident, 64);
	             q = make_llnd(fi,ARRAY_REF, (yyvsp[(4) - (4)].ll_node), LLNULL, s);
	             if(p) s->type->entry.ar_decl.ranges = p;
	             r = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);
	             add_to_lowLevelList(r, (yyvsp[(1) - (4)].bf_node)->entry.Template.ll_ptr1);
	            ;}
    break;

  case 780:
#line 5969 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); type_options = type_opt; ;}
    break;

  case 781:
#line 5971 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (4)].ll_node),(yyvsp[(4) - (4)].ll_node),EXPR_LIST); type_options = type_options | type_opt;;}
    break;

  case 782:
#line 5974 "gram1.y"
    { type_opt = TEMPLATE_BIT;
               (yyval.ll_node) = make_llnd(fi,TEMPLATE_OP,LLNULL,LLNULL,SMNULL);
               ;}
    break;

  case 783:
#line 5978 "gram1.y"
    { type_opt = PROCESSORS_BIT;
                (yyval.ll_node) = make_llnd(fi,PROCESSORS_OP,LLNULL,LLNULL,SMNULL);
               ;}
    break;

  case 784:
#line 5982 "gram1.y"
    { type_opt = PROCESSORS_BIT;
                (yyval.ll_node) = make_llnd(fi,PROCESSORS_OP,LLNULL,LLNULL,SMNULL);
               ;}
    break;

  case 785:
#line 5986 "gram1.y"
    { type_opt = DYNAMIC_BIT;
                (yyval.ll_node) = make_llnd(fi,DYNAMIC_OP,LLNULL,LLNULL,SMNULL);
               ;}
    break;

  case 786:
#line 6003 "gram1.y"
    {
                if(! explicit_shape) {
                  err("Explicit shape specification is required", 50);
                }
                if(! (yyvsp[(3) - (4)].ll_node)) {
                  err("No shape specification", 65);
	        }
                type_opt = DIMENSION_BIT;
                attr_ndim = ndim; attr_dims = (yyvsp[(3) - (4)].ll_node);
                (yyval.ll_node) = make_llnd(fi,DIMENSION_OP,(yyvsp[(3) - (4)].ll_node),LLNULL,SMNULL);
	       ;}
    break;

  case 787:
#line 6015 "gram1.y"
    { type_opt = SHADOW_BIT;
                  (yyval.ll_node) = make_llnd(fi,SHADOW_OP,(yyvsp[(2) - (2)].ll_node),LLNULL,SMNULL);
                 ;}
    break;

  case 788:
#line 6019 "gram1.y"
    { type_opt = ALIGN_BIT;
                  (yyval.ll_node) = make_llnd(fi,ALIGN_OP,(yyvsp[(3) - (7)].ll_node),(yyvsp[(7) - (7)].ll_node),SMNULL);
                 ;}
    break;

  case 789:
#line 6023 "gram1.y"
    { type_opt = ALIGN_BIT;
                  (yyval.ll_node) = make_llnd(fi,ALIGN_OP,LLNULL,SMNULL,SMNULL);
                ;}
    break;

  case 790:
#line 6033 "gram1.y"
    { 
                 type_opt = DISTRIBUTE_BIT;
                 (yyval.ll_node) = make_llnd(fi,DISTRIBUTE_OP,(yyvsp[(2) - (4)].ll_node),(yyvsp[(4) - (4)].ll_node),SMNULL);
                ;}
    break;

  case 791:
#line 6038 "gram1.y"
    { 
                 type_opt = DISTRIBUTE_BIT;
                 (yyval.ll_node) = make_llnd(fi,DISTRIBUTE_OP,LLNULL,LLNULL,SMNULL);
                ;}
    break;

  case 792:
#line 6043 "gram1.y"
    {
                 type_opt = COMMON_BIT;
                 (yyval.ll_node) = make_llnd(fi,COMMON_OP, LLNULL, LLNULL, SMNULL);
                ;}
    break;

  case 793:
#line 6050 "gram1.y"
    { 
	      PTR_LLND  l;
	      l = make_llnd(fi, TYPE_OP, LLNULL, LLNULL, SMNULL);
	      l->type = (yyvsp[(1) - (11)].data_type);
	      (yyval.bf_node) = get_bfnd(fi,DVM_POINTER_DIR, SMNULL, (yyvsp[(11) - (11)].ll_node),(yyvsp[(7) - (11)].ll_node), l);
	    ;}
    break;

  case 794:
#line 6058 "gram1.y"
    {ndim = 0;;}
    break;

  case 795:
#line 6059 "gram1.y"
    { PTR_LLND  q;
             if(ndim == maxdim)
		err("Too many dimensions", 43);
	      else if(ndim < maxdim)
		q = make_llnd(fi,DDOT,LLNULL,LLNULL,SMNULL);
	      ++ndim;
              (yyval.ll_node) = set_ll_list(q, LLNULL, EXPR_LIST);
	       /*$$ = make_llnd(fi,EXPR_LIST, q, LLNULL, SMNULL);*/
	       /*$$->type = global_default;*/
	    ;}
    break;

  case 796:
#line 6070 "gram1.y"
    { PTR_LLND  q;
             if(ndim == maxdim)
		err("Too many dimensions", 43);
	      else if(ndim < maxdim)
		q = make_llnd(fi,DDOT,LLNULL,LLNULL,SMNULL);
	      ++ndim;
              (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node), q, EXPR_LIST);
            ;}
    break;

  case 797:
#line 6081 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 798:
#line 6083 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 799:
#line 6087 "gram1.y"
    {PTR_SYMB s;
           /* s = make_scalar($1,TYNULL,LOCAL);*/
            s = make_array((yyvsp[(1) - (1)].hash_entry),TYNULL,LLNULL,0,LOCAL);
            s->attr = s->attr | DVM_POINTER_BIT;
            if((s->attr & PROCESSORS_BIT) || (s->attr & TASK_BIT) || (s->attr & INHERIT_BIT))
               errstr( "Inconsistent declaration of identifier %s", s->ident, 16);     
            (yyval.ll_node) = make_llnd(fi,VAR_REF,LLNULL,LLNULL,s);
            ;}
    break;

  case 800:
#line 6098 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_HEAP_DIR, SMNULL, (yyvsp[(3) - (3)].ll_node), LLNULL, LLNULL);;}
    break;

  case 801:
#line 6102 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 802:
#line 6104 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 803:
#line 6108 "gram1.y"
    {  PTR_SYMB s;
	      s = make_array((yyvsp[(1) - (1)].hash_entry), TYNULL, LLNULL, 0, LOCAL);
              s->attr = s->attr | HEAP_BIT;
              if((s->attr & PROCESSORS_BIT) ||(s->attr & TASK_BIT)  || (s->attr & TEMPLATE_BIT) || (s->attr & ALIGN_BIT) || (s->attr & DISTRIBUTE_BIT) || (s->attr & INHERIT_BIT) || (s->attr & DYNAMIC_BIT) || (s->attr & SHADOW_BIT) || (s->attr & DVM_POINTER_BIT)) 
                errstr("Inconsistent declaration of identifier  %s", s->ident, 16); 
      
	      (yyval.ll_node) = make_llnd(fi,ARRAY_REF, LLNULL, LLNULL, s);
	   ;}
    break;

  case 804:
#line 6119 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_CONSISTENT_DIR, SMNULL, (yyvsp[(3) - (3)].ll_node), LLNULL, LLNULL);;}
    break;

  case 805:
#line 6123 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 806:
#line 6125 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 807:
#line 6129 "gram1.y"
    {  PTR_SYMB s;
	      s = make_array((yyvsp[(1) - (1)].hash_entry), TYNULL, LLNULL, 0, LOCAL);
              s->attr = s->attr | CONSISTENT_BIT;
              if((s->attr & PROCESSORS_BIT) ||(s->attr & TASK_BIT)  || (s->attr & TEMPLATE_BIT) || (s->attr & ALIGN_BIT) || (s->attr & DISTRIBUTE_BIT) || (s->attr & INHERIT_BIT) || (s->attr & DYNAMIC_BIT) || (s->attr & SHADOW_BIT) || (s->attr & DVM_POINTER_BIT)) 
                errstr("Inconsistent declaration of identifier  %s", s->ident, 16); 
      
	      (yyval.ll_node) = make_llnd(fi,ARRAY_REF, LLNULL, LLNULL, s);
	   ;}
    break;

  case 808:
#line 6141 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_ASYNCID_DIR, SMNULL, (yyvsp[(3) - (3)].ll_node), LLNULL, LLNULL);;}
    break;

  case 809:
#line 6143 "gram1.y"
    { PTR_LLND p;
              p = make_llnd(fi,COMM_LIST, LLNULL, LLNULL, SMNULL);              
              (yyval.bf_node) = get_bfnd(fi,DVM_ASYNCID_DIR, SMNULL, (yyvsp[(8) - (8)].ll_node), p, LLNULL);
            ;}
    break;

  case 810:
#line 6150 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 811:
#line 6152 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 812:
#line 6156 "gram1.y"
    {  PTR_SYMB s;
              if((yyvsp[(2) - (2)].ll_node)){
                  s = make_array((yyvsp[(1) - (2)].hash_entry), global_default, (yyvsp[(2) - (2)].ll_node), ndim, LOCAL);
		  s->variant = ASYNC_ID;
                  s->attr = s->attr | DIMENSION_BIT;
                  s->type->entry.ar_decl.ranges = (yyvsp[(2) - (2)].ll_node);
                  (yyval.ll_node) = make_llnd(fi,ARRAY_REF, (yyvsp[(2) - (2)].ll_node), LLNULL, s);
              } else {
              s = make_local_entity((yyvsp[(1) - (2)].hash_entry), ASYNC_ID, global_default, LOCAL);
	      (yyval.ll_node) = make_llnd(fi,VAR_REF, LLNULL, LLNULL, s);
              }
	   ;}
    break;

  case 813:
#line 6172 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_NEW_VALUE_DIR,SMNULL, LLNULL, LLNULL,LLNULL);;}
    break;

  case 814:
#line 6182 "gram1.y"
    {  if((yyvsp[(6) - (7)].ll_node) &&  (yyvsp[(6) - (7)].ll_node)->entry.Template.symbol->attr & TASK_BIT)
                        (yyval.bf_node) = get_bfnd(fi,DVM_PARALLEL_TASK_DIR,SMNULL,(yyvsp[(6) - (7)].ll_node),(yyvsp[(7) - (7)].ll_node),(yyvsp[(4) - (7)].ll_node));
                    else
                        (yyval.bf_node) = get_bfnd(fi,DVM_PARALLEL_ON_DIR,SMNULL,(yyvsp[(6) - (7)].ll_node),(yyvsp[(7) - (7)].ll_node),(yyvsp[(4) - (7)].ll_node));
                 ;}
    break;

  case 815:
#line 6191 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 816:
#line 6193 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 817:
#line 6197 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(3) - (3)].ll_node);;}
    break;

  case 818:
#line 6200 "gram1.y"
    { (yyval.ll_node) = LLNULL; opt_kwd_ = NO;;}
    break;

  case 819:
#line 6205 "gram1.y"
    {
          if((yyvsp[(1) - (4)].ll_node)->type->variant != T_ARRAY) 
             errstr("'%s' isn't array", (yyvsp[(1) - (4)].ll_node)->entry.Template.symbol->ident, 66);
          (yyvsp[(1) - (4)].ll_node)->entry.Template.ll_ptr1 = (yyvsp[(3) - (4)].ll_node);
          (yyval.ll_node) = (yyvsp[(1) - (4)].ll_node);
          (yyval.ll_node)->type = (yyvsp[(1) - (4)].ll_node)->type->entry.ar_decl.base_type;
        ;}
    break;

  case 820:
#line 6215 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 821:
#line 6217 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 822:
#line 6221 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);;}
    break;

  case 823:
#line 6223 "gram1.y"
    {
             (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
             (yyval.ll_node)->entry.string_val = (char *) "*";
             (yyval.ll_node)->type = global_string;
            ;}
    break;

  case 824:
#line 6231 "gram1.y"
    {  (yyval.ll_node) = LLNULL;;}
    break;

  case 825:
#line 6233 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);;}
    break;

  case 826:
#line 6237 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 827:
#line 6239 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (2)].ll_node),(yyvsp[(2) - (2)].ll_node),EXPR_LIST); ;}
    break;

  case 839:
#line 6257 "gram1.y"
    { if((yyvsp[(5) - (8)].symbol)->attr & INDIRECT_BIT)
                            errstr("'%s' is not remote group name", (yyvsp[(5) - (8)].symbol)->ident, 68);
                          (yyval.ll_node) = make_llnd(fi,REMOTE_ACCESS_OP,(yyvsp[(7) - (8)].ll_node),LLNULL,(yyvsp[(5) - (8)].symbol));
                        ;}
    break;

  case 840:
#line 6262 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,REMOTE_ACCESS_OP,(yyvsp[(5) - (6)].ll_node),LLNULL,SMNULL);;}
    break;

  case 841:
#line 6266 "gram1.y"
    {
                          (yyval.ll_node) = make_llnd(fi,CONSISTENT_OP,(yyvsp[(7) - (8)].ll_node),LLNULL,(yyvsp[(5) - (8)].symbol));
                        ;}
    break;

  case 842:
#line 6270 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,CONSISTENT_OP,(yyvsp[(5) - (6)].ll_node),LLNULL,SMNULL);;}
    break;

  case 843:
#line 6274 "gram1.y"
    {  
            if(((yyval.symbol)=(yyvsp[(1) - (1)].hash_entry)->id_attr) == SMNULL){
                errstr("'%s' is not declared as group", (yyvsp[(1) - (1)].hash_entry)->ident, 74);
                (yyval.symbol) = make_local_entity((yyvsp[(1) - (1)].hash_entry),CONSISTENT_GROUP_NAME,global_default,LOCAL);
            } else {
                if((yyval.symbol)->variant != CONSISTENT_GROUP_NAME)
                   errstr("'%s' is not declared as group", (yyvsp[(1) - (1)].hash_entry)->ident, 74);
            }
          ;}
    break;

  case 844:
#line 6287 "gram1.y"
    {(yyval.ll_node) = make_llnd(fi,NEW_SPEC_OP,(yyvsp[(5) - (6)].ll_node),LLNULL,SMNULL);;}
    break;

  case 845:
#line 6291 "gram1.y"
    {(yyval.ll_node) = make_llnd(fi,NEW_SPEC_OP,(yyvsp[(5) - (6)].ll_node),LLNULL,SMNULL);;}
    break;

  case 846:
#line 6295 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,ACC_PRIVATE_OP,(yyvsp[(5) - (6)].ll_node),LLNULL,SMNULL);;}
    break;

  case 847:
#line 6299 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,ACC_CUDA_BLOCK_OP,(yyvsp[(5) - (6)].ll_node),LLNULL,SMNULL);;}
    break;

  case 848:
#line 6302 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST);;}
    break;

  case 849:
#line 6304 "gram1.y"
    {(yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST);;}
    break;

  case 850:
#line 6306 "gram1.y"
    {(yyval.ll_node) = set_ll_list((yyvsp[(1) - (5)].ll_node),(yyvsp[(3) - (5)].ll_node),EXPR_LIST); (yyval.ll_node) = set_ll_list((yyval.ll_node),(yyvsp[(5) - (5)].ll_node),EXPR_LIST);;}
    break;

  case 851:
#line 6310 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST);;}
    break;

  case 852:
#line 6312 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST);;}
    break;

  case 853:
#line 6316 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,ACC_TIE_OP,(yyvsp[(5) - (6)].ll_node),LLNULL,SMNULL);;}
    break;

  case 854:
#line 6320 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST);;}
    break;

  case 855:
#line 6322 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST);;}
    break;

  case 856:
#line 6326 "gram1.y"
    { if(!((yyvsp[(5) - (8)].symbol)->attr & INDIRECT_BIT))
                         errstr("'%s' is not indirect group name", (yyvsp[(5) - (8)].symbol)->ident, 313);
                      (yyval.ll_node) = make_llnd(fi,INDIRECT_ACCESS_OP,(yyvsp[(7) - (8)].ll_node),LLNULL,(yyvsp[(5) - (8)].symbol));
                    ;}
    break;

  case 857:
#line 6331 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,INDIRECT_ACCESS_OP,(yyvsp[(5) - (6)].ll_node),LLNULL,SMNULL);;}
    break;

  case 858:
#line 6335 "gram1.y"
    {(yyval.ll_node) = make_llnd(fi,STAGE_OP,(yyvsp[(5) - (6)].ll_node),LLNULL,SMNULL);;}
    break;

  case 859:
#line 6339 "gram1.y"
    {(yyval.ll_node) = make_llnd(fi,ACROSS_OP,(yyvsp[(4) - (4)].ll_node),LLNULL,SMNULL);;}
    break;

  case 860:
#line 6341 "gram1.y"
    {(yyval.ll_node) = make_llnd(fi,ACROSS_OP,(yyvsp[(4) - (5)].ll_node),(yyvsp[(5) - (5)].ll_node),SMNULL);;}
    break;

  case 861:
#line 6345 "gram1.y"
    {  if((yyvsp[(3) - (5)].ll_node))
                     (yyval.ll_node) = make_llnd(fi,DDOT,(yyvsp[(3) - (5)].ll_node),(yyvsp[(4) - (5)].ll_node),SMNULL);
                   else
                     (yyval.ll_node) = (yyvsp[(4) - (5)].ll_node);
                ;}
    break;

  case 862:
#line 6353 "gram1.y"
    {
	      (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) "in";
              (yyval.ll_node)->type = global_string;
            ;}
    break;

  case 863:
#line 6359 "gram1.y"
    {
	      (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) "out";
              (yyval.ll_node)->type = global_string;
            ;}
    break;

  case 864:
#line 6365 "gram1.y"
    {  (yyval.ll_node) = LLNULL; opt_kwd_ = NO;;}
    break;

  case 865:
#line 6369 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST);;}
    break;

  case 866:
#line 6371 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST);;}
    break;

  case 867:
#line 6375 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);;}
    break;

  case 868:
#line 6377 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (4)].ll_node);
                    (yyval.ll_node)-> entry.Template.ll_ptr1 = (yyvsp[(3) - (4)].ll_node);  
                  ;}
    break;

  case 869:
#line 6381 "gram1.y"
    { /*  PTR_LLND p;
                       p = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
                       p->entry.string_val = (char *) "corner";
                       p->type = global_string;
                   */
                   (yyvsp[(1) - (7)].ll_node)-> entry.Template.ll_ptr1 = (yyvsp[(3) - (7)].ll_node);  
                   (yyval.ll_node) = make_llnd(fi,ARRAY_OP,(yyvsp[(1) - (7)].ll_node),(yyvsp[(6) - (7)].ll_node),SMNULL);
                 ;}
    break;

  case 870:
#line 6393 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST);;}
    break;

  case 871:
#line 6395 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST);;}
    break;

  case 872:
#line 6399 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,DDOT, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), SMNULL);;}
    break;

  case 873:
#line 6403 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST);;}
    break;

  case 874:
#line 6405 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST);;}
    break;

  case 875:
#line 6409 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,DDOT,(yyvsp[(1) - (5)].ll_node),make_llnd(fi,DDOT,(yyvsp[(3) - (5)].ll_node),(yyvsp[(5) - (5)].ll_node),SMNULL),SMNULL); ;}
    break;

  case 876:
#line 6411 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,DDOT,(yyvsp[(1) - (3)].ll_node),make_llnd(fi,DDOT,(yyvsp[(3) - (3)].ll_node),LLNULL,SMNULL),SMNULL); ;}
    break;

  case 877:
#line 6413 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,DDOT,(yyvsp[(1) - (3)].ll_node),make_llnd(fi,DDOT,LLNULL,(yyvsp[(3) - (3)].ll_node),SMNULL),SMNULL); ;}
    break;

  case 878:
#line 6415 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,DDOT,(yyvsp[(1) - (1)].ll_node),LLNULL,SMNULL); ;}
    break;

  case 879:
#line 6417 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,DDOT,LLNULL,make_llnd(fi,DDOT,(yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),SMNULL),SMNULL); ;}
    break;

  case 880:
#line 6419 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,DDOT,LLNULL,make_llnd(fi,DDOT,(yyvsp[(1) - (1)].ll_node),LLNULL,SMNULL),SMNULL); ;}
    break;

  case 881:
#line 6421 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,DDOT,LLNULL,make_llnd(fi,DDOT,LLNULL,(yyvsp[(1) - (1)].ll_node),SMNULL),SMNULL); ;}
    break;

  case 882:
#line 6425 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(3) - (3)].ll_node);;}
    break;

  case 883:
#line 6429 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(3) - (3)].ll_node);;}
    break;

  case 884:
#line 6433 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(3) - (3)].ll_node);;}
    break;

  case 885:
#line 6437 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(2) - (3)].ll_node);;}
    break;

  case 886:
#line 6441 "gram1.y"
    {PTR_LLND q;
                /* q = set_ll_list($9,$6,EXPR_LIST); */
                 q = set_ll_list((yyvsp[(6) - (10)].ll_node),LLNULL,EXPR_LIST); /*podd 11.10.01*/
                 q = add_to_lowLevelList((yyvsp[(9) - (10)].ll_node),q);        /*podd 11.10.01*/
                 (yyval.ll_node) = make_llnd(fi,REDUCTION_OP,q,LLNULL,SMNULL);
                ;}
    break;

  case 887:
#line 6448 "gram1.y"
    {PTR_LLND q;
                 q = set_ll_list((yyvsp[(6) - (8)].ll_node),LLNULL,EXPR_LIST);
                 (yyval.ll_node) = make_llnd(fi,REDUCTION_OP,q,LLNULL,SMNULL);
                ;}
    break;

  case 888:
#line 6454 "gram1.y"
    {  (yyval.ll_node) = make_llnd(fi,REDUCTION_OP,(yyvsp[(9) - (10)].ll_node),LLNULL,(yyvsp[(6) - (10)].symbol)); ;}
    break;

  case 889:
#line 6458 "gram1.y"
    { opt_kwd_r = YES; ;}
    break;

  case 890:
#line 6461 "gram1.y"
    { opt_kwd_r = NO; ;}
    break;

  case 891:
#line 6465 "gram1.y"
    { 
                  if(((yyval.symbol)=(yyvsp[(1) - (1)].hash_entry)->id_attr) == SMNULL) {
                      errstr("'%s' is not declared as reduction group", (yyvsp[(1) - (1)].hash_entry)->ident, 69);
                      (yyval.symbol) = make_local_entity((yyvsp[(1) - (1)].hash_entry),REDUCTION_GROUP_NAME,global_default,LOCAL);
                  } else {
                    if((yyval.symbol)->variant != REDUCTION_GROUP_NAME)
                      errstr("'%s' is not declared as reduction group", (yyvsp[(1) - (1)].hash_entry)->ident, 69);
                  }
                ;}
    break;

  case 892:
#line 6478 "gram1.y"
    {(yyval.ll_node) = set_ll_list((yyvsp[(2) - (2)].ll_node),LLNULL,EXPR_LIST);;}
    break;

  case 893:
#line 6480 "gram1.y"
    {(yyval.ll_node) = set_ll_list((yyvsp[(1) - (4)].ll_node),(yyvsp[(4) - (4)].ll_node),EXPR_LIST);;}
    break;

  case 894:
#line 6484 "gram1.y"
    {(yyval.ll_node) = make_llnd(fi,ARRAY_OP,(yyvsp[(1) - (4)].ll_node),(yyvsp[(3) - (4)].ll_node),SMNULL);;}
    break;

  case 895:
#line 6486 "gram1.y"
    {(yyvsp[(3) - (6)].ll_node) = set_ll_list((yyvsp[(3) - (6)].ll_node),(yyvsp[(5) - (6)].ll_node),EXPR_LIST);
            (yyval.ll_node) = make_llnd(fi,ARRAY_OP,(yyvsp[(1) - (6)].ll_node),(yyvsp[(3) - (6)].ll_node),SMNULL);;}
    break;

  case 896:
#line 6491 "gram1.y"
    {
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) "sum";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 897:
#line 6497 "gram1.y"
    {
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) "product";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 898:
#line 6503 "gram1.y"
    {
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) "min";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 899:
#line 6509 "gram1.y"
    {
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) "max";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 900:
#line 6515 "gram1.y"
    {
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) "or";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 901:
#line 6521 "gram1.y"
    {
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) "and";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 902:
#line 6527 "gram1.y"
    {
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) "eqv";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 903:
#line 6533 "gram1.y"
    {
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) "neqv";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 904:
#line 6539 "gram1.y"
    { err("Illegal reduction operation name", 70);
               errcnt--;
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) "unknown";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 905:
#line 6548 "gram1.y"
    {
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) "maxloc";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 906:
#line 6554 "gram1.y"
    {
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) "minloc";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 907:
#line 6571 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,SHADOW_RENEW_OP,(yyvsp[(5) - (6)].ll_node),LLNULL,SMNULL);;}
    break;

  case 908:
#line 6579 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,SHADOW_START_OP,LLNULL,LLNULL,(yyvsp[(4) - (4)].symbol));;}
    break;

  case 909:
#line 6587 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,SHADOW_WAIT_OP,LLNULL,LLNULL,(yyvsp[(4) - (4)].symbol));;}
    break;

  case 910:
#line 6589 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,SHADOW_COMP_OP,LLNULL,LLNULL,SMNULL);;}
    break;

  case 911:
#line 6591 "gram1.y"
    {  (yyvsp[(5) - (9)].ll_node)-> entry.Template.ll_ptr1 = (yyvsp[(7) - (9)].ll_node); (yyval.ll_node) = make_llnd(fi,SHADOW_COMP_OP,(yyvsp[(5) - (9)].ll_node),LLNULL,SMNULL);;}
    break;

  case 912:
#line 6595 "gram1.y"
    {(yyval.symbol) = make_local_entity((yyvsp[(1) - (1)].hash_entry), SHADOW_GROUP_NAME,global_default,LOCAL);;}
    break;

  case 913:
#line 6599 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST);;}
    break;

  case 914:
#line 6601 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST);;}
    break;

  case 915:
#line 6605 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);;}
    break;

  case 916:
#line 6607 "gram1.y"
    { PTR_LLND p;
          p = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
          p->entry.string_val = (char *) "corner";
          p->type = global_string;
          (yyval.ll_node) = make_llnd(fi,ARRAY_OP,(yyvsp[(1) - (5)].ll_node),p,SMNULL);
         ;}
    break;

  case 917:
#line 6615 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (5)].ll_node);
          (yyval.ll_node)-> entry.Template.ll_ptr1 = (yyvsp[(4) - (5)].ll_node);  
        ;}
    break;

  case 918:
#line 6619 "gram1.y"
    { PTR_LLND p;
          p = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
          p->entry.string_val = (char *) "corner";
          p->type = global_string;
          (yyvsp[(1) - (9)].ll_node)-> entry.Template.ll_ptr1 = (yyvsp[(4) - (9)].ll_node);  
          (yyval.ll_node) = make_llnd(fi,ARRAY_OP,(yyvsp[(1) - (9)].ll_node),p,SMNULL);
       ;}
    break;

  case 919:
#line 6630 "gram1.y"
    { optcorner = YES; ;}
    break;

  case 920:
#line 6634 "gram1.y"
    { PTR_SYMB s;
         s = (yyvsp[(1) - (1)].ll_node)->entry.Template.symbol;
         if(s->attr & PROCESSORS_BIT)
             errstr( "Illegal use of PROCESSORS name %s ", s->ident, 53);
         else if(s->attr & TASK_BIT)
             errstr( "Illegal use of task array name %s ", s->ident, 71);
         else
           if(s->type->variant != T_ARRAY) 
             errstr("'%s' isn't array", s->ident, 66);
           else 
              if((!(s->attr & DISTRIBUTE_BIT)) && (!(s->attr & ALIGN_BIT)))
               ; /*errstr("hpf.gram: %s is not distributed array", s->ident);*/
                
         (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);
        ;}
    break;

  case 921:
#line 6652 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 922:
#line 6654 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 923:
#line 6658 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_SHADOW_START_DIR,(yyvsp[(3) - (3)].symbol),LLNULL,LLNULL,LLNULL);;}
    break;

  case 924:
#line 6660 "gram1.y"
    {errstr("Missing DVM directive prefix", 49);;}
    break;

  case 925:
#line 6664 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_SHADOW_WAIT_DIR,(yyvsp[(3) - (3)].symbol),LLNULL,LLNULL,LLNULL);;}
    break;

  case 926:
#line 6666 "gram1.y"
    {errstr("Missing DVM directive prefix", 49);;}
    break;

  case 927:
#line 6670 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_SHADOW_GROUP_DIR,(yyvsp[(3) - (6)].symbol),(yyvsp[(5) - (6)].ll_node),LLNULL,LLNULL);;}
    break;

  case 928:
#line 6674 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_REDUCTION_START_DIR,(yyvsp[(3) - (3)].symbol),LLNULL,LLNULL,LLNULL);;}
    break;

  case 929:
#line 6678 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_REDUCTION_WAIT_DIR,(yyvsp[(3) - (3)].symbol),LLNULL,LLNULL,LLNULL);;}
    break;

  case 930:
#line 6687 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_CONSISTENT_START_DIR,(yyvsp[(3) - (3)].symbol),LLNULL,LLNULL,LLNULL);;}
    break;

  case 931:
#line 6691 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_CONSISTENT_WAIT_DIR,(yyvsp[(3) - (3)].symbol),LLNULL,LLNULL,LLNULL);;}
    break;

  case 932:
#line 6695 "gram1.y"
    { if(((yyvsp[(4) - (7)].symbol)->attr & INDIRECT_BIT))
                errstr("'%s' is not remote group name", (yyvsp[(4) - (7)].symbol)->ident, 68);
           (yyval.bf_node) = get_bfnd(fi,DVM_REMOTE_ACCESS_DIR,(yyvsp[(4) - (7)].symbol),(yyvsp[(6) - (7)].ll_node),LLNULL,LLNULL);
         ;}
    break;

  case 933:
#line 6700 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_REMOTE_ACCESS_DIR,SMNULL,(yyvsp[(4) - (5)].ll_node),LLNULL,LLNULL);;}
    break;

  case 934:
#line 6704 "gram1.y"
    {  
            if(((yyval.symbol)=(yyvsp[(1) - (1)].hash_entry)->id_attr) == SMNULL){
                errstr("'%s' is not declared as group", (yyvsp[(1) - (1)].hash_entry)->ident, 74);
                (yyval.symbol) = make_local_entity((yyvsp[(1) - (1)].hash_entry),REF_GROUP_NAME,global_default,LOCAL);
            } else {
              if((yyval.symbol)->variant != REF_GROUP_NAME)
                errstr("'%s' is not declared as group", (yyvsp[(1) - (1)].hash_entry)->ident, 74);
            }
          ;}
    break;

  case 935:
#line 6716 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 936:
#line 6718 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 937:
#line 6722 "gram1.y"
    {
              (yyval.ll_node) = (yyvsp[(1) - (4)].ll_node);
              (yyval.ll_node)->entry.Template.ll_ptr1 = (yyvsp[(3) - (4)].ll_node);
            ;}
    break;

  case 938:
#line 6727 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);;}
    break;

  case 939:
#line 6731 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 940:
#line 6733 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 941:
#line 6737 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);;}
    break;

  case 942:
#line 6739 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,DDOT, LLNULL, LLNULL, SMNULL);;}
    break;

  case 943:
#line 6743 "gram1.y"
    {  PTR_LLND q;
             q = make_llnd(fi,EXPR_LIST, (yyvsp[(3) - (3)].ll_node), LLNULL, SMNULL);
             (yyval.bf_node) = get_bfnd(fi,DVM_TASK_DIR,SMNULL,q,LLNULL,LLNULL);
          ;}
    break;

  case 944:
#line 6748 "gram1.y"
    {   PTR_LLND q;
              q = make_llnd(fi,EXPR_LIST, (yyvsp[(3) - (3)].ll_node), LLNULL, SMNULL);
	      add_to_lowLevelList(q, (yyvsp[(1) - (3)].bf_node)->entry.Template.ll_ptr1);
          ;}
    break;

  case 945:
#line 6755 "gram1.y"
    { 
             PTR_SYMB s;
	      s = make_array((yyvsp[(1) - (2)].hash_entry), global_int, (yyvsp[(2) - (2)].ll_node), ndim, LOCAL);
              if((yyvsp[(2) - (2)].ll_node)){
                  s->attr = s->attr | DIMENSION_BIT;
                  s->type->entry.ar_decl.ranges = (yyvsp[(2) - (2)].ll_node);
              }
              else
                  err("No dimensions in TASK directive", 75);
              if(ndim > 1)
                  errstr("Illegal rank of '%s'", s->ident, 76);
              if(s->attr & TASK_BIT)
                errstr( "Multiple declaration of identifier  %s ", s->ident, 73);
              if((s->attr & ALIGN_BIT) ||(s->attr & DISTRIBUTE_BIT) ||(s->attr & TEMPLATE_BIT) || (s->attr & DYNAMIC_BIT) ||(s->attr & SHADOW_BIT) || (s->attr & PROCESSORS_BIT)  || (s->attr & DVM_POINTER_BIT) || (s->attr & INHERIT_BIT))
                errstr("Inconsistent declaration of identifier  %s", s->ident, 16);
              else
	        s->attr = s->attr | TASK_BIT;
    
	      (yyval.ll_node) = make_llnd(fi,ARRAY_REF, (yyvsp[(2) - (2)].ll_node), LLNULL, s);	  
	    ;}
    break;

  case 946:
#line 6778 "gram1.y"
    {(yyval.bf_node) = get_bfnd(fi,DVM_TASK_REGION_DIR,(yyvsp[(3) - (3)].symbol),LLNULL,LLNULL,LLNULL);;}
    break;

  case 947:
#line 6780 "gram1.y"
    {(yyval.bf_node) = get_bfnd(fi,DVM_TASK_REGION_DIR,(yyvsp[(3) - (4)].symbol),(yyvsp[(4) - (4)].ll_node),LLNULL,LLNULL);;}
    break;

  case 948:
#line 6782 "gram1.y"
    {(yyval.bf_node) = get_bfnd(fi,DVM_TASK_REGION_DIR,(yyvsp[(3) - (4)].symbol),LLNULL,(yyvsp[(4) - (4)].ll_node),LLNULL);;}
    break;

  case 949:
#line 6784 "gram1.y"
    {(yyval.bf_node) = get_bfnd(fi,DVM_TASK_REGION_DIR,(yyvsp[(3) - (5)].symbol),(yyvsp[(4) - (5)].ll_node),(yyvsp[(5) - (5)].ll_node),LLNULL);;}
    break;

  case 950:
#line 6786 "gram1.y"
    {(yyval.bf_node) = get_bfnd(fi,DVM_TASK_REGION_DIR,(yyvsp[(3) - (5)].symbol),(yyvsp[(5) - (5)].ll_node),(yyvsp[(4) - (5)].ll_node),LLNULL);;}
    break;

  case 951:
#line 6790 "gram1.y"
    { PTR_SYMB s;
              if((s=(yyvsp[(1) - (1)].hash_entry)->id_attr) == SMNULL)
                s = make_array((yyvsp[(1) - (1)].hash_entry), TYNULL, LLNULL, 0, LOCAL);
              
              if(!(s->attr & TASK_BIT))
                 errstr("'%s' is not task array", s->ident, 77);
              (yyval.symbol) = s;
              ;}
    break;

  case 952:
#line 6801 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_END_TASK_REGION_DIR,SMNULL,LLNULL,LLNULL,LLNULL);;}
    break;

  case 953:
#line 6805 "gram1.y"
    {  PTR_SYMB s;
              PTR_LLND q;
             /*
              s = make_array($1, TYNULL, LLNULL, 0, LOCAL);                           
	      if((parstate == INEXEC) && !(s->attr & TASK_BIT))
                 errstr("'%s' is not task array", s->ident, 77);  
              q =  set_ll_list($3,LLNULL,EXPR_LIST);
	      $$ = make_llnd(fi,ARRAY_REF, q, LLNULL, s);
              */

              s = (yyvsp[(1) - (4)].symbol);
              q =  set_ll_list((yyvsp[(3) - (4)].ll_node),LLNULL,EXPR_LIST);
	      (yyval.ll_node) = make_llnd(fi,ARRAY_REF, q, LLNULL, s);
	   ;}
    break;

  case 954:
#line 6820 "gram1.y"
    {  PTR_LLND q; 
              q =  set_ll_list((yyvsp[(3) - (4)].ll_node),LLNULL,EXPR_LIST);
	      (yyval.ll_node) = make_llnd(fi,ARRAY_REF, q, LLNULL, (yyvsp[(1) - (4)].symbol));
	   ;}
    break;

  case 955:
#line 6827 "gram1.y"
    {              
         (yyval.bf_node) = get_bfnd(fi,DVM_ON_DIR,SMNULL,(yyvsp[(3) - (4)].ll_node),(yyvsp[(4) - (4)].ll_node),LLNULL);
    ;}
    break;

  case 956:
#line 6833 "gram1.y"
    {(yyval.ll_node) = LLNULL;;}
    break;

  case 957:
#line 6835 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);;}
    break;

  case 958:
#line 6839 "gram1.y"
    {(yyval.bf_node) = get_bfnd(fi,DVM_END_ON_DIR,SMNULL,LLNULL,LLNULL,LLNULL);;}
    break;

  case 959:
#line 6843 "gram1.y"
    { PTR_LLND q;
        /* if(!($6->attr & PROCESSORS_BIT))
           errstr("'%s' is not processor array", $6->ident, 67);
         */
        q = make_llnd(fi,ARRAY_REF, (yyvsp[(7) - (7)].ll_node), LLNULL, (yyvsp[(6) - (7)].symbol));
        (yyval.bf_node) = get_bfnd(fi,DVM_MAP_DIR,SMNULL,(yyvsp[(3) - (7)].ll_node),q,LLNULL);
      ;}
    break;

  case 960:
#line 6851 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_MAP_DIR,SMNULL,(yyvsp[(3) - (6)].ll_node),LLNULL,(yyvsp[(6) - (6)].ll_node)); ;}
    break;

  case 961:
#line 6855 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_PREFETCH_DIR,(yyvsp[(3) - (3)].symbol),LLNULL,LLNULL,LLNULL);;}
    break;

  case 962:
#line 6859 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_RESET_DIR,(yyvsp[(3) - (3)].symbol),LLNULL,LLNULL,LLNULL);;}
    break;

  case 963:
#line 6867 "gram1.y"
    { if(!((yyvsp[(4) - (7)].symbol)->attr & INDIRECT_BIT))
                         errstr("'%s' is not indirect group name", (yyvsp[(4) - (7)].symbol)->ident, 313);
                      (yyval.bf_node) = get_bfnd(fi,DVM_INDIRECT_ACCESS_DIR,(yyvsp[(4) - (7)].symbol),(yyvsp[(6) - (7)].ll_node),LLNULL,LLNULL);
                    ;}
    break;

  case 964:
#line 6872 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_INDIRECT_ACCESS_DIR,SMNULL,(yyvsp[(4) - (5)].ll_node),LLNULL,LLNULL);;}
    break;

  case 965:
#line 6886 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 966:
#line 6888 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 967:
#line 6892 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);;}
    break;

  case 968:
#line 6894 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (4)].ll_node); (yyval.ll_node)->entry.Template.ll_ptr1 = (yyvsp[(3) - (4)].ll_node);;}
    break;

  case 969:
#line 6903 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,HPF_INDEPENDENT_DIR,SMNULL,LLNULL,LLNULL,LLNULL);;}
    break;

  case 970:
#line 6905 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,HPF_INDEPENDENT_DIR,SMNULL, (yyvsp[(3) - (3)].ll_node), LLNULL, LLNULL);;}
    break;

  case 971:
#line 6907 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,HPF_INDEPENDENT_DIR,SMNULL, LLNULL, (yyvsp[(3) - (3)].ll_node), LLNULL);;}
    break;

  case 972:
#line 6909 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,HPF_INDEPENDENT_DIR,SMNULL, (yyvsp[(3) - (4)].ll_node), (yyvsp[(4) - (4)].ll_node),LLNULL);;}
    break;

  case 973:
#line 6945 "gram1.y"
    {(yyval.ll_node) = make_llnd(fi,REDUCTION_OP,(yyvsp[(5) - (6)].ll_node),LLNULL,SMNULL);;}
    break;

  case 974:
#line 6949 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_ASYNCHRONOUS_DIR,SMNULL,(yyvsp[(3) - (3)].ll_node),LLNULL,LLNULL);;}
    break;

  case 975:
#line 6953 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_ENDASYNCHRONOUS_DIR,SMNULL,LLNULL,LLNULL,LLNULL);;}
    break;

  case 976:
#line 6957 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_ASYNCWAIT_DIR,SMNULL,(yyvsp[(3) - (3)].ll_node),LLNULL,LLNULL);;}
    break;

  case 977:
#line 6961 "gram1.y"
    {  
            if(((yyval.symbol)=(yyvsp[(1) - (1)].hash_entry)->id_attr) == SMNULL) {
                errstr("'%s' is not declared as ASYNCID", (yyvsp[(1) - (1)].hash_entry)->ident, 115);
                (yyval.symbol) = make_local_entity((yyvsp[(1) - (1)].hash_entry),ASYNC_ID,global_default,LOCAL);
            } else {
              if((yyval.symbol)->variant != ASYNC_ID)
                errstr("'%s' is not declared as ASYNCID", (yyvsp[(1) - (1)].hash_entry)->ident, 115);
            }
     ;}
    break;

  case 978:
#line 6973 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,VAR_REF, LLNULL, LLNULL, (yyvsp[(1) - (1)].symbol));;}
    break;

  case 979:
#line 6975 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,ARRAY_REF, (yyvsp[(3) - (4)].ll_node), LLNULL, (yyvsp[(1) - (4)].symbol));;}
    break;

  case 980:
#line 6979 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_F90_DIR,SMNULL,(yyvsp[(3) - (5)].ll_node),(yyvsp[(5) - (5)].ll_node),LLNULL);;}
    break;

  case 981:
#line 6982 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_DEBUG_DIR,SMNULL,(yyvsp[(3) - (3)].ll_node),LLNULL,LLNULL);;}
    break;

  case 982:
#line 6984 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_DEBUG_DIR,SMNULL,(yyvsp[(3) - (6)].ll_node),(yyvsp[(5) - (6)].ll_node),LLNULL);;}
    break;

  case 983:
#line 6988 "gram1.y"
    { 
              (yyval.ll_node) = set_ll_list((yyvsp[(2) - (2)].ll_node), LLNULL, EXPR_LIST);
              endioctl();
            ;}
    break;

  case 984:
#line 6993 "gram1.y"
    { 
              (yyval.ll_node) = set_ll_list((yyvsp[(1) - (4)].ll_node), (yyvsp[(4) - (4)].ll_node), EXPR_LIST);
              endioctl();
            ;}
    break;

  case 985:
#line 7000 "gram1.y"
    { (yyval.ll_node)  = make_llnd(fi, KEYWORD_ARG, (yyvsp[(1) - (2)].ll_node), (yyvsp[(2) - (2)].ll_node), SMNULL); ;}
    break;

  case 986:
#line 7003 "gram1.y"
    {
	         (yyval.ll_node) = make_llnd(fi,INT_VAL, LLNULL, LLNULL, SMNULL);
	         (yyval.ll_node)->entry.ival = atoi(yytext);
	         (yyval.ll_node)->type = global_int;
	        ;}
    break;

  case 987:
#line 7011 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_ENDDEBUG_DIR,SMNULL,(yyvsp[(3) - (3)].ll_node),LLNULL,LLNULL);;}
    break;

  case 988:
#line 7015 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_INTERVAL_DIR,SMNULL,(yyvsp[(3) - (3)].ll_node),LLNULL,LLNULL);;}
    break;

  case 989:
#line 7019 "gram1.y"
    { (yyval.ll_node) = LLNULL;;}
    break;

  case 990:
#line 7022 "gram1.y"
    { if((yyvsp[(1) - (1)].ll_node)->type->variant != T_INT)             
                    err("Illegal interval number", 78);
                  (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);
                 ;}
    break;

  case 991:
#line 7030 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_EXIT_INTERVAL_DIR,SMNULL,(yyvsp[(3) - (3)].ll_node),LLNULL,LLNULL);;}
    break;

  case 992:
#line 7034 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_ENDINTERVAL_DIR,SMNULL,LLNULL,LLNULL,LLNULL);;}
    break;

  case 993:
#line 7038 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_TRACEON_DIR,SMNULL,LLNULL,LLNULL,LLNULL);;}
    break;

  case 994:
#line 7042 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_TRACEOFF_DIR,SMNULL,LLNULL,LLNULL,LLNULL);;}
    break;

  case 995:
#line 7046 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_BARRIER_DIR,SMNULL,LLNULL,LLNULL,LLNULL);;}
    break;

  case 996:
#line 7050 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_CHECK_DIR,SMNULL,(yyvsp[(9) - (9)].ll_node),(yyvsp[(5) - (9)].ll_node),LLNULL); ;}
    break;

  case 997:
#line 7054 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_IO_MODE_DIR,SMNULL,(yyvsp[(4) - (5)].ll_node),LLNULL,LLNULL);;}
    break;

  case 998:
#line 7057 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 999:
#line 7059 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 1000:
#line 7063 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,ACC_ASYNC_OP,LLNULL,LLNULL,SMNULL);;}
    break;

  case 1001:
#line 7065 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,ACC_LOCAL_OP, LLNULL,LLNULL,SMNULL);;}
    break;

  case 1002:
#line 7067 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,PARALLEL_OP, LLNULL,LLNULL,SMNULL);;}
    break;

  case 1003:
#line 7071 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_SHADOW_ADD_DIR,SMNULL,(yyvsp[(4) - (9)].ll_node),(yyvsp[(6) - (9)].ll_node),(yyvsp[(9) - (9)].ll_node)); ;}
    break;

  case 1004:
#line 7075 "gram1.y"
    {
                 if((yyvsp[(1) - (4)].ll_node)->type->variant != T_ARRAY) 
                    errstr("'%s' isn't array", (yyvsp[(1) - (4)].ll_node)->entry.Template.symbol->ident, 66);
                 if(!((yyvsp[(1) - (4)].ll_node)->entry.Template.symbol->attr & TEMPLATE_BIT))
                    errstr("'%s' isn't TEMPLATE", (yyvsp[(1) - (4)].ll_node)->entry.Template.symbol->ident, 628);
                 (yyvsp[(1) - (4)].ll_node)->entry.Template.ll_ptr1 = (yyvsp[(3) - (4)].ll_node);
                 (yyval.ll_node) = (yyvsp[(1) - (4)].ll_node);
                 /*$$->type = $1->type->entry.ar_decl.base_type;*/
               ;}
    break;

  case 1005:
#line 7087 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 1006:
#line 7089 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 1007:
#line 7093 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 1008:
#line 7095 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 1009:
#line 7099 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(2) - (2)].ll_node);;}
    break;

  case 1010:
#line 7101 "gram1.y"
    { (yyval.ll_node) = LLNULL; opt_kwd_ = NO;;}
    break;

  case 1011:
#line 7105 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_LOCALIZE_DIR,SMNULL,(yyvsp[(4) - (7)].ll_node),(yyvsp[(6) - (7)].ll_node),LLNULL); ;}
    break;

  case 1012:
#line 7109 "gram1.y"
    {
                 if((yyvsp[(1) - (1)].ll_node)->type->variant != T_ARRAY) 
                    errstr("'%s' isn't array", (yyvsp[(1) - (1)].ll_node)->entry.Template.symbol->ident, 66); 
                 (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);
                ;}
    break;

  case 1013:
#line 7115 "gram1.y"
    {
                 if((yyvsp[(1) - (4)].ll_node)->type->variant != T_ARRAY) 
                    errstr("'%s' isn't array", (yyvsp[(1) - (4)].ll_node)->entry.Template.symbol->ident, 66); 
                                 
                 (yyvsp[(1) - (4)].ll_node)->entry.Template.ll_ptr1 = (yyvsp[(3) - (4)].ll_node);
                 (yyval.ll_node) = (yyvsp[(1) - (4)].ll_node);
                 (yyval.ll_node)->type = (yyvsp[(1) - (4)].ll_node)->type->entry.ar_decl.base_type;
                ;}
    break;

  case 1014:
#line 7127 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 1015:
#line 7129 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 1016:
#line 7133 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 1017:
#line 7135 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,DDOT, LLNULL, LLNULL, SMNULL);;}
    break;

  case 1018:
#line 7139 "gram1.y"
    { 
            (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL, LLNULL, LLNULL, SMNULL);
            (yyval.ll_node)->entry.string_val = (char *) "*";
            (yyval.ll_node)->type = global_string;
          ;}
    break;

  case 1019:
#line 7147 "gram1.y"
    { 
                PTR_LLND q;
                if((yyvsp[(16) - (16)].ll_node))
                  q = make_llnd(fi,ARRAY_OP, (yyvsp[(14) - (16)].ll_node), (yyvsp[(16) - (16)].ll_node), SMNULL);
                else
                  q = (yyvsp[(14) - (16)].ll_node);                  
                (yyval.bf_node) = get_bfnd(fi,DVM_CP_CREATE_DIR,SMNULL,(yyvsp[(3) - (16)].ll_node),(yyvsp[(8) - (16)].ll_node),q); 
              ;}
    break;

  case 1020:
#line 7158 "gram1.y"
    { (yyval.ll_node) = LLNULL; ;}
    break;

  case 1021:
#line 7160 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi, PARALLEL_OP, LLNULL, LLNULL, SMNULL); ;}
    break;

  case 1022:
#line 7162 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,ACC_LOCAL_OP, LLNULL, LLNULL, SMNULL); ;}
    break;

  case 1023:
#line 7166 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_CP_LOAD_DIR,SMNULL,(yyvsp[(3) - (3)].ll_node),LLNULL,LLNULL); ;}
    break;

  case 1024:
#line 7170 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_CP_SAVE_DIR,SMNULL,(yyvsp[(3) - (3)].ll_node),LLNULL,LLNULL); ;}
    break;

  case 1025:
#line 7172 "gram1.y"
    {
                PTR_LLND q;
                q = make_llnd(fi,ACC_ASYNC_OP,LLNULL,LLNULL,SMNULL);
                (yyval.bf_node) = get_bfnd(fi,DVM_CP_SAVE_DIR,SMNULL,(yyvsp[(3) - (6)].ll_node),q,LLNULL);
              ;}
    break;

  case 1026:
#line 7180 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_CP_WAIT_DIR,SMNULL,(yyvsp[(3) - (9)].ll_node),(yyvsp[(8) - (9)].ll_node),LLNULL); ;}
    break;

  case 1027:
#line 7184 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_TEMPLATE_CREATE_DIR,SMNULL,(yyvsp[(4) - (5)].ll_node),LLNULL,LLNULL); ;}
    break;

  case 1028:
#line 7187 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node), LLNULL, EXPR_LIST); ;}
    break;

  case 1029:
#line 7189 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), EXPR_LIST); ;}
    break;

  case 1030:
#line 7193 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,DVM_TEMPLATE_DELETE_DIR,SMNULL,(yyvsp[(4) - (5)].ll_node),LLNULL,LLNULL); ;}
    break;

  case 1058:
#line 7227 "gram1.y"
    {
          (yyval.bf_node) = get_bfnd(fi,OMP_ONETHREAD_DIR,SMNULL,LLNULL,LLNULL,LLNULL);
	;}
    break;

  case 1059:
#line 7233 "gram1.y"
    {
  	   (yyval.bf_node) = make_endparallel();
	;}
    break;

  case 1060:
#line 7239 "gram1.y"
    {
  	   (yyval.bf_node) = make_parallel();
           (yyval.bf_node)->entry.Template.ll_ptr1 = (yyvsp[(4) - (4)].ll_node);
	   opt_kwd_ = NO;
	;}
    break;

  case 1061:
#line 7245 "gram1.y"
    {
  	   (yyval.bf_node) = make_parallel();
	   opt_kwd_ = NO;
	;}
    break;

  case 1062:
#line 7251 "gram1.y"
    { 
		(yyval.ll_node) = set_ll_list((yyvsp[(3) - (4)].ll_node),LLNULL,EXPR_LIST);
	;}
    break;

  case 1063:
#line 7255 "gram1.y"
    { 
		(yyval.ll_node) = set_ll_list((yyvsp[(1) - (5)].ll_node),(yyvsp[(4) - (5)].ll_node),EXPR_LIST);	
	;}
    break;

  case 1073:
#line 7272 "gram1.y"
    {
		(yyval.ll_node) = (yyvsp[(4) - (5)].ll_node);
        ;}
    break;

  case 1074:
#line 7277 "gram1.y"
    {
		(yyval.ll_node) = make_llnd(fi,OMP_PRIVATE,(yyvsp[(2) - (2)].ll_node),LLNULL,SMNULL);
	;}
    break;

  case 1075:
#line 7282 "gram1.y"
    {
		(yyval.ll_node) = make_llnd(fi,OMP_FIRSTPRIVATE,(yyvsp[(2) - (2)].ll_node),LLNULL,SMNULL);
	;}
    break;

  case 1076:
#line 7288 "gram1.y"
    {
		(yyval.ll_node) = make_llnd(fi,OMP_LASTPRIVATE,(yyvsp[(2) - (2)].ll_node),LLNULL,SMNULL);
	;}
    break;

  case 1077:
#line 7294 "gram1.y"
    {
		(yyval.ll_node) = make_llnd(fi,OMP_COPYIN,(yyvsp[(2) - (2)].ll_node),LLNULL,SMNULL);
	;}
    break;

  case 1078:
#line 7300 "gram1.y"
    {
		(yyval.ll_node) = make_llnd(fi,OMP_SHARED,(yyvsp[(2) - (2)].ll_node),LLNULL,SMNULL);
	;}
    break;

  case 1079:
#line 7305 "gram1.y"
    {
		(yyval.ll_node) = make_llnd(fi,OMP_DEFAULT,(yyvsp[(4) - (5)].ll_node),LLNULL,SMNULL);
	;}
    break;

  case 1080:
#line 7311 "gram1.y"
    {
		(yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
		(yyval.ll_node)->entry.string_val = (char *) "private";
		(yyval.ll_node)->type = global_string;
	;}
    break;

  case 1081:
#line 7317 "gram1.y"
    {
		(yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
		(yyval.ll_node)->entry.string_val = (char *) "shared";
		(yyval.ll_node)->type = global_string;
	;}
    break;

  case 1082:
#line 7323 "gram1.y"
    {
		(yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
		(yyval.ll_node)->entry.string_val = (char *) "none";
		(yyval.ll_node)->type = global_string;
	;}
    break;

  case 1083:
#line 7330 "gram1.y"
    {
		(yyval.ll_node) = make_llnd(fi,OMP_IF,(yyvsp[(3) - (4)].ll_node),LLNULL,SMNULL);
	;}
    break;

  case 1084:
#line 7336 "gram1.y"
    {
		(yyval.ll_node) = make_llnd(fi,OMP_NUM_THREADS,(yyvsp[(3) - (4)].ll_node),LLNULL,SMNULL);
	;}
    break;

  case 1085:
#line 7342 "gram1.y"
    {
		PTR_LLND q;
		q = set_ll_list((yyvsp[(3) - (4)].ll_node),LLNULL,EXPR_LIST);
		(yyval.ll_node) = make_llnd(fi,OMP_REDUCTION,q,LLNULL,SMNULL);
	;}
    break;

  case 1086:
#line 7349 "gram1.y"
    {(yyval.ll_node) = make_llnd(fi,DDOT,(yyvsp[(2) - (4)].ll_node),(yyvsp[(4) - (4)].ll_node),SMNULL);;}
    break;

  case 1088:
#line 7355 "gram1.y"
    {
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) "+";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 1089:
#line 7361 "gram1.y"
    {
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) "-";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 1090:
#line 7368 "gram1.y"
    {
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) "*";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 1091:
#line 7374 "gram1.y"
    {
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) "/";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 1092:
#line 7380 "gram1.y"
    {
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) "min";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 1093:
#line 7386 "gram1.y"
    {
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) "max";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 1094:
#line 7392 "gram1.y"
    {
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) ".or.";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 1095:
#line 7398 "gram1.y"
    {
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) ".and.";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 1096:
#line 7404 "gram1.y"
    {
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) ".eqv.";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 1097:
#line 7410 "gram1.y"
    {
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) ".neqv.";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 1098:
#line 7416 "gram1.y"
    {
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) "iand";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 1099:
#line 7422 "gram1.y"
    {
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) "ieor";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 1100:
#line 7428 "gram1.y"
    {
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) "ior";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 1101:
#line 7434 "gram1.y"
    { err("Illegal reduction operation name", 70);
               errcnt--;
              (yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
              (yyval.ll_node)->entry.string_val = (char *) "unknown";
              (yyval.ll_node)->type = global_string;
             ;}
    break;

  case 1102:
#line 7444 "gram1.y"
    {
  	   (yyval.bf_node) = make_sections((yyvsp[(4) - (4)].ll_node));
	   opt_kwd_ = NO;
	;}
    break;

  case 1103:
#line 7449 "gram1.y"
    {
  	   (yyval.bf_node) = make_sections(LLNULL);
	   opt_kwd_ = NO;
	;}
    break;

  case 1104:
#line 7455 "gram1.y"
    { 
		(yyval.ll_node) = set_ll_list((yyvsp[(3) - (4)].ll_node),LLNULL,EXPR_LIST);
	;}
    break;

  case 1105:
#line 7459 "gram1.y"
    { 
		(yyval.ll_node) = set_ll_list((yyvsp[(1) - (5)].ll_node),(yyvsp[(4) - (5)].ll_node),EXPR_LIST);
	;}
    break;

  case 1110:
#line 7471 "gram1.y"
    {
		PTR_LLND q;
   	        (yyval.bf_node) = make_endsections();
		q = set_ll_list((yyvsp[(4) - (4)].ll_node),LLNULL,EXPR_LIST);
                (yyval.bf_node)->entry.Template.ll_ptr1 = q;
                opt_kwd_ = NO;
	;}
    break;

  case 1111:
#line 7479 "gram1.y"
    {
   	        (yyval.bf_node) = make_endsections();
	        opt_kwd_ = NO; 
	;}
    break;

  case 1112:
#line 7485 "gram1.y"
    {
           (yyval.bf_node) = make_ompsection();
	;}
    break;

  case 1113:
#line 7491 "gram1.y"
    {
           (yyval.bf_node) = get_bfnd(fi,OMP_DO_DIR,SMNULL,(yyvsp[(4) - (4)].ll_node),LLNULL,LLNULL);
	   opt_kwd_ = NO;
	;}
    break;

  case 1114:
#line 7496 "gram1.y"
    {
           (yyval.bf_node) = get_bfnd(fi,OMP_DO_DIR,SMNULL,LLNULL,LLNULL,LLNULL);
	   opt_kwd_ = NO;
	;}
    break;

  case 1115:
#line 7502 "gram1.y"
    {
		PTR_LLND q;
		q = set_ll_list((yyvsp[(4) - (4)].ll_node),LLNULL,EXPR_LIST);
	        (yyval.bf_node) = get_bfnd(fi,OMP_END_DO_DIR,SMNULL,q,LLNULL,LLNULL);
      	        opt_kwd_ = NO;
	;}
    break;

  case 1116:
#line 7509 "gram1.y"
    {
           (yyval.bf_node) = get_bfnd(fi,OMP_END_DO_DIR,SMNULL,LLNULL,LLNULL,LLNULL);
	   opt_kwd_ = NO;
	;}
    break;

  case 1117:
#line 7515 "gram1.y"
    { 
		(yyval.ll_node) = set_ll_list((yyvsp[(3) - (4)].ll_node),LLNULL,EXPR_LIST);
	;}
    break;

  case 1118:
#line 7519 "gram1.y"
    { 
		(yyval.ll_node) = set_ll_list((yyvsp[(1) - (5)].ll_node),(yyvsp[(4) - (5)].ll_node),EXPR_LIST);
	;}
    break;

  case 1125:
#line 7533 "gram1.y"
    {
		/*$$ = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
		$$->entry.string_val = (char *) "ORDERED";
		$$->type = global_string;*/
                (yyval.ll_node) = make_llnd(fi,OMP_ORDERED,LLNULL,LLNULL,SMNULL);
	;}
    break;

  case 1126:
#line 7542 "gram1.y"
    {
		(yyval.ll_node) = make_llnd(fi,OMP_SCHEDULE,(yyvsp[(4) - (7)].ll_node),(yyvsp[(6) - (7)].ll_node),SMNULL);
	;}
    break;

  case 1127:
#line 7546 "gram1.y"
    {
		(yyval.ll_node) = make_llnd(fi,OMP_SCHEDULE,(yyvsp[(4) - (5)].ll_node),LLNULL,SMNULL);
	;}
    break;

  case 1128:
#line 7552 "gram1.y"
    {
		(yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
		(yyval.ll_node)->entry.string_val = (char *) "STATIC";
		(yyval.ll_node)->type = global_string;
		
	;}
    break;

  case 1129:
#line 7559 "gram1.y"
    {
		(yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
		(yyval.ll_node)->entry.string_val = (char *) "DYNAMIC";
		(yyval.ll_node)->type = global_string;
		
	;}
    break;

  case 1130:
#line 7566 "gram1.y"
    {
		(yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
		(yyval.ll_node)->entry.string_val = (char *) "GUIDED";
		(yyval.ll_node)->type = global_string;
		
	;}
    break;

  case 1131:
#line 7573 "gram1.y"
    {
		(yyval.ll_node) = make_llnd(fi,KEYWORD_VAL,LLNULL,LLNULL,SMNULL);
		(yyval.ll_node)->entry.string_val = (char *) "RUNTIME";
		(yyval.ll_node)->type = global_string;
		
	;}
    break;

  case 1132:
#line 7582 "gram1.y"
    {
  	   (yyval.bf_node) = make_single();
           (yyval.bf_node)->entry.Template.ll_ptr1 = (yyvsp[(4) - (4)].ll_node);
	   opt_kwd_ = NO;
	;}
    break;

  case 1133:
#line 7588 "gram1.y"
    {
  	   (yyval.bf_node) = make_single();
	   opt_kwd_ = NO;
	;}
    break;

  case 1134:
#line 7594 "gram1.y"
    { 
		(yyval.ll_node) = set_ll_list((yyvsp[(3) - (4)].ll_node),LLNULL,EXPR_LIST);
	;}
    break;

  case 1135:
#line 7598 "gram1.y"
    { 
		(yyval.ll_node) = set_ll_list((yyvsp[(1) - (5)].ll_node),(yyvsp[(4) - (5)].ll_node),EXPR_LIST);
	;}
    break;

  case 1138:
#line 7608 "gram1.y"
    {
  	   (yyval.bf_node) = make_endsingle();
           (yyval.bf_node)->entry.Template.ll_ptr1 = (yyvsp[(4) - (4)].ll_node);
	   opt_kwd_ = NO;
	;}
    break;

  case 1139:
#line 7614 "gram1.y"
    {
  	   (yyval.bf_node) = make_endsingle();
	   opt_kwd_ = NO;
	;}
    break;

  case 1140:
#line 7620 "gram1.y"
    { 
		(yyval.ll_node) = set_ll_list((yyvsp[(3) - (4)].ll_node),LLNULL,EXPR_LIST);
	;}
    break;

  case 1141:
#line 7624 "gram1.y"
    { 
		(yyval.ll_node) = set_ll_list((yyvsp[(1) - (5)].ll_node),(yyvsp[(4) - (5)].ll_node),EXPR_LIST);
	;}
    break;

  case 1144:
#line 7635 "gram1.y"
    {
		(yyval.ll_node) = make_llnd(fi,OMP_COPYPRIVATE,(yyvsp[(2) - (2)].ll_node),LLNULL,SMNULL);
	;}
    break;

  case 1145:
#line 7641 "gram1.y"
    {
		(yyval.ll_node) = make_llnd(fi,OMP_NOWAIT,LLNULL,LLNULL,SMNULL);
	;}
    break;

  case 1146:
#line 7647 "gram1.y"
    {
           (yyval.bf_node) = make_workshare();
	;}
    break;

  case 1147:
#line 7652 "gram1.y"
    {
		PTR_LLND q;
   	        (yyval.bf_node) = make_endworkshare();
		q = set_ll_list((yyvsp[(4) - (4)].ll_node),LLNULL,EXPR_LIST);
                (yyval.bf_node)->entry.Template.ll_ptr1 = q;
  	        opt_kwd_ = NO;
	;}
    break;

  case 1148:
#line 7660 "gram1.y"
    {
   	        (yyval.bf_node) = make_endworkshare();
                opt_kwd_ = NO;
	;}
    break;

  case 1149:
#line 7666 "gram1.y"
    {
           (yyval.bf_node) = get_bfnd(fi,OMP_PARALLEL_DO_DIR,SMNULL,(yyvsp[(4) - (4)].ll_node),LLNULL,LLNULL);
	   opt_kwd_ = NO;
	;}
    break;

  case 1150:
#line 7671 "gram1.y"
    {
           (yyval.bf_node) = get_bfnd(fi,OMP_PARALLEL_DO_DIR,SMNULL,LLNULL,LLNULL,LLNULL);
	   opt_kwd_ = NO;
	;}
    break;

  case 1151:
#line 7678 "gram1.y"
    { 
		(yyval.ll_node) = set_ll_list((yyvsp[(3) - (4)].ll_node),LLNULL,EXPR_LIST);
	;}
    break;

  case 1152:
#line 7682 "gram1.y"
    { 
		(yyval.ll_node) = set_ll_list((yyvsp[(1) - (5)].ll_node),(yyvsp[(4) - (5)].ll_node),EXPR_LIST);
	;}
    break;

  case 1164:
#line 7702 "gram1.y"
    {
           (yyval.bf_node) = get_bfnd(fi,OMP_END_PARALLEL_DO_DIR,SMNULL,LLNULL,LLNULL,LLNULL);
	;}
    break;

  case 1165:
#line 7707 "gram1.y"
    {
           (yyval.bf_node) = make_parallelsections((yyvsp[(4) - (4)].ll_node));
	   opt_kwd_ = NO;
	;}
    break;

  case 1166:
#line 7712 "gram1.y"
    {
           (yyval.bf_node) = make_parallelsections(LLNULL);
	   opt_kwd_ = NO;
	;}
    break;

  case 1167:
#line 7719 "gram1.y"
    {
           (yyval.bf_node) = make_endparallelsections();
	;}
    break;

  case 1168:
#line 7724 "gram1.y"
    {
           (yyval.bf_node) = make_parallelworkshare();
           (yyval.bf_node)->entry.Template.ll_ptr1 = (yyvsp[(4) - (4)].ll_node);
	   opt_kwd_ = NO;
	;}
    break;

  case 1169:
#line 7730 "gram1.y"
    {
           (yyval.bf_node) = make_parallelworkshare();
	   opt_kwd_ = NO;
	;}
    break;

  case 1170:
#line 7736 "gram1.y"
    {
           (yyval.bf_node) = make_endparallelworkshare();
	;}
    break;

  case 1171:
#line 7741 "gram1.y"
    { 
	   (yyval.bf_node) = get_bfnd(fi,OMP_THREADPRIVATE_DIR, SMNULL, (yyvsp[(3) - (3)].ll_node), LLNULL, LLNULL);
	;}
    break;

  case 1172:
#line 7746 "gram1.y"
    {
  	   (yyval.bf_node) = make_master();
	;}
    break;

  case 1173:
#line 7751 "gram1.y"
    {
  	   (yyval.bf_node) = make_endmaster();
	;}
    break;

  case 1174:
#line 7755 "gram1.y"
    {
  	   (yyval.bf_node) = make_ordered();
	;}
    break;

  case 1175:
#line 7760 "gram1.y"
    {
  	   (yyval.bf_node) = make_endordered();
	;}
    break;

  case 1176:
#line 7765 "gram1.y"
    {
           (yyval.bf_node) = get_bfnd(fi,OMP_BARRIER_DIR,SMNULL,LLNULL,LLNULL,LLNULL);
	;}
    break;

  case 1177:
#line 7769 "gram1.y"
    {
           (yyval.bf_node) = get_bfnd(fi,OMP_ATOMIC_DIR,SMNULL,LLNULL,LLNULL,LLNULL);
	;}
    break;

  case 1178:
#line 7774 "gram1.y"
    {
           (yyval.bf_node) = get_bfnd(fi,OMP_FLUSH_DIR,SMNULL,(yyvsp[(3) - (3)].ll_node),LLNULL,LLNULL);
	;}
    break;

  case 1179:
#line 7778 "gram1.y"
    {
           (yyval.bf_node) = get_bfnd(fi,OMP_FLUSH_DIR,SMNULL,LLNULL,LLNULL,LLNULL);
	;}
    break;

  case 1180:
#line 7784 "gram1.y"
    {
  	   (yyval.bf_node) = make_critical();
           (yyval.bf_node)->entry.Template.ll_ptr1 = (yyvsp[(4) - (5)].ll_node);
	;}
    break;

  case 1181:
#line 7789 "gram1.y"
    {
  	   (yyval.bf_node) = make_critical();
	;}
    break;

  case 1182:
#line 7795 "gram1.y"
    {
  	   (yyval.bf_node) = make_endcritical();
           (yyval.bf_node)->entry.Template.ll_ptr1 = (yyvsp[(4) - (5)].ll_node);
	;}
    break;

  case 1183:
#line 7800 "gram1.y"
    {
  	   (yyval.bf_node) = make_endcritical();
	;}
    break;

  case 1184:
#line 7806 "gram1.y"
    { 
		PTR_SYMB s;
		PTR_LLND l;
		s = make_common((yyvsp[(2) - (5)].hash_entry)); 
		l = make_llnd(fi,VAR_REF, LLNULL, LLNULL, s);
		(yyval.ll_node) = make_llnd(fi,OMP_THREADPRIVATE, l, LLNULL, SMNULL);
	;}
    break;

  case 1185:
#line 7816 "gram1.y"
    {
		(yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST);
	;}
    break;

  case 1186:
#line 7820 "gram1.y"
    {	
		(yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST);
	;}
    break;

  case 1187:
#line 7824 "gram1.y"
    { 
		(yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST);
	;}
    break;

  case 1188:
#line 7828 "gram1.y"
    { 
		(yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST);
	;}
    break;

  case 1189:
#line 7833 "gram1.y"
    {
		operator_slash = 1;
	;}
    break;

  case 1190:
#line 7836 "gram1.y"
    {
		operator_slash = 0;
	;}
    break;

  case 1198:
#line 7850 "gram1.y"
    {  (yyval.bf_node) = get_bfnd(fi,ACC_REGION_DIR,SMNULL,(yyvsp[(3) - (3)].ll_node),LLNULL,LLNULL);;}
    break;

  case 1199:
#line 7854 "gram1.y"
    {  (yyval.bf_node) = get_bfnd(fi,ACC_CHECKSECTION_DIR,SMNULL,LLNULL,LLNULL,LLNULL);;}
    break;

  case 1200:
#line 7858 "gram1.y"
    {  (yyval.bf_node) = get_bfnd(fi,ACC_GET_ACTUAL_DIR,SMNULL,(yyvsp[(4) - (5)].ll_node),LLNULL,LLNULL);;}
    break;

  case 1201:
#line 7860 "gram1.y"
    {  (yyval.bf_node) = get_bfnd(fi,ACC_GET_ACTUAL_DIR,SMNULL,LLNULL,LLNULL,LLNULL);;}
    break;

  case 1202:
#line 7862 "gram1.y"
    {  (yyval.bf_node) = get_bfnd(fi,ACC_GET_ACTUAL_DIR,SMNULL,LLNULL,LLNULL,LLNULL);;}
    break;

  case 1203:
#line 7866 "gram1.y"
    {  (yyval.bf_node) = get_bfnd(fi,ACC_ACTUAL_DIR,SMNULL,(yyvsp[(4) - (5)].ll_node),LLNULL,LLNULL);;}
    break;

  case 1204:
#line 7868 "gram1.y"
    {  (yyval.bf_node) = get_bfnd(fi,ACC_ACTUAL_DIR,SMNULL,LLNULL,LLNULL,LLNULL);;}
    break;

  case 1205:
#line 7870 "gram1.y"
    {  (yyval.bf_node) = get_bfnd(fi,ACC_ACTUAL_DIR,SMNULL,LLNULL,LLNULL,LLNULL);;}
    break;

  case 1206:
#line 7874 "gram1.y"
    { (yyval.ll_node) = LLNULL;;}
    break;

  case 1207:
#line 7876 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node); ;}
    break;

  case 1208:
#line 7880 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 1209:
#line 7882 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 1210:
#line 7886 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(2) - (2)].ll_node);;}
    break;

  case 1211:
#line 7889 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(2) - (2)].ll_node);;}
    break;

  case 1212:
#line 7892 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(2) - (2)].ll_node);;}
    break;

  case 1213:
#line 7897 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,ACC_INOUT_OP,(yyvsp[(3) - (4)].ll_node),LLNULL,SMNULL);;}
    break;

  case 1214:
#line 7899 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,ACC_IN_OP,(yyvsp[(3) - (4)].ll_node),LLNULL,SMNULL);;}
    break;

  case 1215:
#line 7901 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,ACC_OUT_OP,(yyvsp[(3) - (4)].ll_node),LLNULL,SMNULL);;}
    break;

  case 1216:
#line 7903 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,ACC_LOCAL_OP,(yyvsp[(3) - (4)].ll_node),LLNULL,SMNULL);;}
    break;

  case 1217:
#line 7905 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,ACC_INLOCAL_OP,(yyvsp[(3) - (4)].ll_node),LLNULL,SMNULL);;}
    break;

  case 1218:
#line 7909 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,ACC_TARGETS_OP,(yyvsp[(3) - (4)].ll_node),LLNULL,SMNULL);;}
    break;

  case 1219:
#line 7913 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,ACC_ASYNC_OP,LLNULL,LLNULL,SMNULL);;}
    break;

  case 1220:
#line 7918 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(1) - (1)].ll_node);;}
    break;

  case 1221:
#line 7922 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 1222:
#line 7924 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 1223:
#line 7928 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,ACC_HOST_OP, LLNULL,LLNULL,SMNULL);;}
    break;

  case 1224:
#line 7930 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,ACC_CUDA_OP, LLNULL,LLNULL,SMNULL);;}
    break;

  case 1225:
#line 7934 "gram1.y"
    {  (yyval.bf_node) = get_bfnd(fi,ACC_END_REGION_DIR,SMNULL,LLNULL,LLNULL,LLNULL);;}
    break;

  case 1226:
#line 7938 "gram1.y"
    {  (yyval.bf_node) = get_bfnd(fi,ACC_END_CHECKSECTION_DIR,SMNULL,LLNULL,LLNULL,LLNULL);;}
    break;

  case 1227:
#line 7942 "gram1.y"
    {  (yyval.bf_node) = get_bfnd(fi,ACC_ROUTINE_DIR,SMNULL,(yyvsp[(3) - (3)].ll_node),LLNULL,LLNULL);;}
    break;

  case 1228:
#line 7946 "gram1.y"
    { (yyval.ll_node) = LLNULL; ;}
    break;

  case 1229:
#line 7948 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(2) - (2)].ll_node);;}
    break;

  case 1236:
#line 7960 "gram1.y"
    {  (yyval.bf_node) = get_bfnd(fi,SPF_ANALYSIS_DIR,SMNULL,(yyvsp[(3) - (4)].ll_node),LLNULL,LLNULL);;}
    break;

  case 1237:
#line 7964 "gram1.y"
    {  (yyval.bf_node) = get_bfnd(fi,SPF_PARALLEL_DIR,SMNULL,(yyvsp[(3) - (4)].ll_node),LLNULL,LLNULL);;}
    break;

  case 1238:
#line 7968 "gram1.y"
    {  (yyval.bf_node) = get_bfnd(fi,SPF_TRANSFORM_DIR,SMNULL,(yyvsp[(3) - (4)].ll_node),LLNULL,LLNULL);;}
    break;

  case 1239:
#line 7972 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,SPF_PARALLEL_REG_DIR,(yyvsp[(2) - (2)].symbol),LLNULL,LLNULL,LLNULL);;}
    break;

  case 1240:
#line 7974 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,SPF_PARALLEL_REG_DIR,(yyvsp[(2) - (9)].symbol),(yyvsp[(7) - (9)].ll_node),(yyvsp[(9) - (9)].ll_node),LLNULL);;}
    break;

  case 1241:
#line 7976 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,SPF_PARALLEL_REG_DIR,(yyvsp[(2) - (9)].symbol),(yyvsp[(9) - (9)].ll_node),(yyvsp[(7) - (9)].ll_node),LLNULL);;}
    break;

  case 1242:
#line 7980 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 1243:
#line 7982 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 1244:
#line 7986 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,SPF_CODE_COVERAGE_OP,LLNULL,LLNULL,SMNULL);;}
    break;

  case 1245:
#line 7990 "gram1.y"
    { (yyval.ll_node) = LLNULL;;}
    break;

  case 1246:
#line 7992 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(5) - (6)].ll_node);;}
    break;

  case 1247:
#line 7996 "gram1.y"
    { (yyval.ll_node) = LLNULL;;}
    break;

  case 1248:
#line 7998 "gram1.y"
    { (yyval.ll_node) = (yyvsp[(5) - (6)].ll_node);;}
    break;

  case 1249:
#line 8002 "gram1.y"
    { (yyval.bf_node) = get_bfnd(fi,SPF_END_PARALLEL_REG_DIR,SMNULL,LLNULL,LLNULL,LLNULL);;}
    break;

  case 1250:
#line 8006 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 1251:
#line 8008 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 1255:
#line 8017 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,REDUCTION_OP,(yyvsp[(4) - (5)].ll_node),LLNULL,SMNULL); ;}
    break;

  case 1256:
#line 8021 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,ACC_PRIVATE_OP,(yyvsp[(4) - (5)].ll_node),LLNULL,SMNULL);;}
    break;

  case 1257:
#line 8025 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,SPF_PARAMETER_OP,(yyvsp[(4) - (5)].ll_node),LLNULL,SMNULL);;}
    break;

  case 1258:
#line 8028 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node), LLNULL, EXPR_LIST); ;}
    break;

  case 1259:
#line 8030 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), EXPR_LIST); ;}
    break;

  case 1260:
#line 8034 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi, ASSGN_OP, (yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), SMNULL); ;}
    break;

  case 1261:
#line 8038 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 1262:
#line 8040 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 1266:
#line 8049 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,SHADOW_OP,(yyvsp[(4) - (5)].ll_node),LLNULL,SMNULL);;}
    break;

  case 1267:
#line 8053 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,ACROSS_OP,(yyvsp[(4) - (5)].ll_node),LLNULL,SMNULL);;}
    break;

  case 1268:
#line 8057 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,REMOTE_ACCESS_OP,(yyvsp[(4) - (5)].ll_node),LLNULL,SMNULL);;}
    break;

  case 1269:
#line 8061 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 1270:
#line 8063 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 1271:
#line 8067 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,SPF_NOINLINE_OP,LLNULL,LLNULL,SMNULL);;}
    break;

  case 1272:
#line 8069 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,SPF_FISSION_OP,(yyvsp[(4) - (5)].ll_node),LLNULL,SMNULL);;}
    break;

  case 1273:
#line 8071 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,SPF_PRIVATES_EXPANSION_OP,LLNULL,LLNULL,SMNULL);;}
    break;

  case 1274:
#line 8073 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,SPF_PRIVATES_EXPANSION_OP,(yyvsp[(4) - (5)].ll_node),LLNULL,SMNULL);;}
    break;

  case 1275:
#line 8076 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,SPF_SHRINK_OP,(yyvsp[(4) - (5)].ll_node),LLNULL,SMNULL);;}
    break;

  case 1276:
#line 8080 "gram1.y"
    { (yyval.symbol) = make_parallel_region((yyvsp[(1) - (1)].hash_entry));;}
    break;

  case 1277:
#line 8084 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node), LLNULL, EXPR_LIST); ;}
    break;

  case 1278:
#line 8086 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node), (yyvsp[(3) - (3)].ll_node), EXPR_LIST); ;}
    break;

  case 1279:
#line 8090 "gram1.y"
    {  (yyval.bf_node) = get_bfnd(fi,SPF_CHECKPOINT_DIR,SMNULL,(yyvsp[(3) - (4)].ll_node),LLNULL,LLNULL);;}
    break;

  case 1280:
#line 8094 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 1281:
#line 8096 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 1282:
#line 8100 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,SPF_TYPE_OP,(yyvsp[(4) - (5)].ll_node),LLNULL,SMNULL);;}
    break;

  case 1283:
#line 8102 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,SPF_VARLIST_OP,(yyvsp[(4) - (5)].ll_node),LLNULL,SMNULL);;}
    break;

  case 1284:
#line 8104 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,SPF_EXCEPT_OP,(yyvsp[(4) - (5)].ll_node),LLNULL,SMNULL);;}
    break;

  case 1285:
#line 8106 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,SPF_FILES_COUNT_OP,(yyvsp[(4) - (5)].ll_node),LLNULL,SMNULL);;}
    break;

  case 1286:
#line 8108 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,SPF_INTERVAL_OP,(yyvsp[(4) - (7)].ll_node),(yyvsp[(6) - (7)].ll_node),SMNULL);;}
    break;

  case 1287:
#line 8112 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (1)].ll_node),LLNULL,EXPR_LIST); ;}
    break;

  case 1288:
#line 8114 "gram1.y"
    { (yyval.ll_node) = set_ll_list((yyvsp[(1) - (3)].ll_node),(yyvsp[(3) - (3)].ll_node),EXPR_LIST); ;}
    break;

  case 1289:
#line 8118 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,ACC_ASYNC_OP, LLNULL,LLNULL,SMNULL);;}
    break;

  case 1290:
#line 8120 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,SPF_FLEXIBLE_OP, LLNULL,LLNULL,SMNULL);;}
    break;

  case 1291:
#line 8124 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,SPF_TIME_OP, LLNULL,LLNULL,SMNULL);;}
    break;

  case 1292:
#line 8126 "gram1.y"
    { (yyval.ll_node) = make_llnd(fi,SPF_ITER_OP, LLNULL,LLNULL,SMNULL);;}
    break;


/* Line 1267 of yacc.c.  */
#line 14060 "gram1.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



