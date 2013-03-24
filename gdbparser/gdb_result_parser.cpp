#ifndef lint
static char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif
#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define yyclearin (yychar=(-1))
#define yyerrok (yyerrflag=0)
#define YYRECOVERING (yyerrflag!=0)
#define yyparse gdb_result_parse
#define yylex gdb_result_lex
#define yyerror gdb_result_error
#define yychar gdb_result_char
#define yyval gdb_result_val
#define yylval gdb_result_lval
#define yydebug gdb_result_debug
#define yynerrs gdb_result_nerrs
#define yyerrflag gdb_result_errflag
#define yyss gdb_result_ss
#define yyssp gdb_result_ssp
#define yyvs gdb_result_vs
#define yyvsp gdb_result_vsp
#define yylhs gdb_result_lhs
#define yylen gdb_result_len
#define yydefred gdb_result_defred
#define yydgoto gdb_result_dgoto
#define yysindex gdb_result_sindex
#define yyrindex gdb_result_rindex
#define yygindex gdb_result_gindex
#define yytable gdb_result_table
#define yycheck gdb_result_check
#define yyname gdb_result_name
#define yyrule gdb_result_rule
#define YYPREFIX "gdb_result_"
/* Copyright Eran Ifrah(c)*/

#include <string>
#include <vector>
#include <map>
#include <cstdio>
#include "gdb_parser_incl.h"
#include <stdlib.h>

#define YYSTYPE std::string
#define YYDEBUG 0        /* get the pretty debugging code to compile*/

#ifdef yylex
#undef yylex
#define yylex gdb_result_lex
#endif

int  gdb_result_lex();
void gdb_result_error(const char*);
bool setGdbLexerInput(const std::string &in, bool ascii, bool wantWhitespace);
void gdb_result_lex_clean();
int  gdb_result_parse();
void cleanup();

extern std::string gdb_result_lval;
static GdbStringMap_t            sg_attributes;
static GdbChildrenInfo           sg_children;
static std::vector<std::string>  sg_locals;
#define GDB_DONE 257
#define GDB_RUNNING 258
#define GDB_CONNECTED 259
#define GDB_ERROR 260
#define GDB_EXIT 261
#define GDB_STACK_ARGS 262
#define GDB_VALUE 263
#define GDB_ARGS 264
#define GDB_FRAME 265
#define GDB_NAME 266
#define GDB_STRING 267
#define GDB_LEVEL 268
#define GDB_ESCAPED_STRING 269
#define GDB_LOCALS 270
#define GDB_INTEGER 271
#define GDB_OCTAL 272
#define GDB_HEX 273
#define GDB_FLOAT 274
#define GDB_IDENTIFIER 275
#define GDB_NUMCHILD 276
#define GDB_TYPE 277
#define GDB_DATA 278
#define GDB_ADDR 279
#define GDB_ASCII 280
#define GDB_CHILDREN 281
#define GDB_CHILD 282
#define GDB_MORE 283
#define GDB_VAROBJ 284
#define GDB_BREAKPOINT_TABLE 285
#define GDB_NR_ROWS 286
#define GDB_NR_COLS 287
#define GDB_HDR 288
#define GDB_BODY 289
#define GDB_BKPT 290
#define GDB_STOPPED 291
#define GDB_TIME 292
#define GDB_REASON 293
#define GDB_CHANGELIST 294
#define GDB_DISPLAYHINT 295
#define GDB_HAS_MORE 296
#define GDB_NEW_NUM_CHILDREN 297
#define GDB_NEW_CHILDREN 298
#define YYERRCODE 256
short gdb_result_lhs[] = {                                        -1,
    0,    0,    3,    1,    1,    4,    4,    2,    2,    9,
    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    2,   14,   16,   14,   12,   12,   18,   18,   17,   17,
   19,   19,   13,   13,   20,   21,   20,   11,   11,   10,
   10,    5,    5,    7,    7,    6,    6,    8,   23,    8,
    8,    8,   15,   15,   22,   22,   22,   22,   22,   22,
   22,   22,   22,   22,
};
short gdb_result_len[] = {                                         2,
    1,    2,    0,    2,    1,    0,    4,   13,   17,    0,
    9,    8,    6,    8,    8,   20,   20,    9,    8,    8,
    1,    3,    0,    6,   13,    5,    1,    3,    3,    5,
    3,    5,    6,    2,    5,    0,    8,    5,    7,    3,
    5,    1,    1,    1,    1,    5,    7,    3,    0,    6,
    3,    5,   11,    5,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,
};
short gdb_result_defred[] = {                                      0,
    5,    0,    1,    0,    2,    0,    0,    4,   21,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   54,    0,    0,    0,    0,
    0,    0,    0,    0,   58,   55,   61,   60,   56,   57,
   59,    0,   62,   63,   64,    0,    0,    0,   43,   42,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   10,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   51,    0,    0,
    0,   12,   45,   44,   19,    0,    0,    0,    0,   14,
    0,   15,    0,    0,    0,    0,    0,    0,    0,   20,
    0,    0,    0,    0,   11,    0,   40,    0,    0,    0,
    0,    0,    0,    0,    0,   34,   18,    0,   52,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   53,   50,    0,   38,   41,    0,    0,
    0,    0,    0,    0,   26,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   28,    0,    0,   24,    0,
   39,    0,    0,    0,    8,    0,    0,   33,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   46,    0,    0,
    0,    0,    0,    0,    0,    7,    0,    0,   37,    0,
    0,   47,    9,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   25,   16,   17,    0,    0,    0,    0,    0,
   30,   32,
};
short gdb_result_dgoto[] = {                                       2,
    3,    8,    4,  165,   75,  141,   85,   47,   86,   69,
   70,   74,   98,   76,    9,  133,  198,  130,  202,  116,
  176,   48,  103,
};
short gdb_result_sindex[] = {                                   -231,
    0, -231,    0,  -94,    0,  -10, -219,    0,    0, -277,
   -3,  -18,  -17, -234,  -73, -215,   -8,   -6,    8,   10,
   12,   14,   16,   17, -163,    0,  -77, -209,  -77, -206,
  -77, -204,  -77,  -77,    0,    0,    0,    0,    0,    0,
    0,   20,    0,    0,    0,   21,  -61,   23,    0,    0,
 -189,   41, -163,   42, -117,   43, -251,  -77,  -30,   24,
   62, -156,   56, -163,  -71,    0,   57, -163,  -36,  -27,
 -268,   58,   59,   78, -163,  -71, -163,    0, -169,    0,
  -77,    0,    0,    0,    0, -163,    4,    5,   19,    0,
 -159,    0,   67,   76, -129,  -77, -250,  -71,  -71,    0,
   18,   86,   95, -115,    0, -163,    0, -163,   90,  -77,
 -111,  113, -109,   98,   99,    0,    0,    0,    0, -106,
 -163,  102,   39,   40,   45, -113,  126, -116,  129,  -71,
  -77,  -77,  130,    0,    0,  -92,    0,    0, -163,  115,
  -26, -103,  118, -109,    0, -110, -163,  -77,  137,   60,
   61, -100,  139,  125,  -79,    0,  -71,  -71,    0,  -75,
    0, -163,  131, -105,    0,  -77,  146,    0,    0,  132,
   70,   73,  138, -113,  -88,  154,  -77,    0, -163,  -65,
  -26,  142, -110, -117,   79,    0,  139,  -77,    0,  -36,
  -27,    0,    0,  -77,  -71,  -71,  -70,  -71,  -71,  -71,
  145,  -71,    0,    0,    0,  -59,  163,  165,  -77,  -70,
    0,    0,
};
short gdb_result_rindex[] = {                                    -90,
    0,  -90,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    2,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    1,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -23,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -69,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    3,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -21,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    3,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -63,  -60,    0,    0,
    0,    0,
};
short gdb_result_gindex[] = {                                      0,
  208,    0,    0,   25,  -22,   37,  -50,   15,    0,   29,
   30,    0,    0,   68,    0,    0,    6,   74,    7, -136,
    0,    0,    0,
};
#define YYTABLESIZE 294
short gdb_result_table[] = {                                       7,
   48,   13,    6,    3,   51,   68,   53,   89,   55,  157,
   57,   58,   93,   50,   12,   13,   91,  152,   90,   92,
   23,   84,   36,   27,    1,  100,   94,   17,   18,   29,
   19,   20,   31,   10,   72,   21,   73,   11,  114,  115,
   14,   22,   15,   16,   49,   49,  189,  117,  118,   25,
   23,   26,   27,   83,   28,   27,   84,   52,  104,   24,
   54,   29,   56,   61,   31,   84,   84,   65,   29,   22,
   30,   35,   31,  113,   32,   63,   33,   34,   82,  145,
   59,   60,   88,   62,   64,   66,   71,  126,   83,   99,
  153,  101,   77,   48,   48,   13,    6,   83,   83,   35,
  105,   22,   36,   35,   37,   79,  168,  169,  146,  147,
   80,   38,   39,   40,   78,   41,   81,   87,   95,   96,
  123,   97,  124,  102,  109,   48,  106,  110,   42,  107,
  187,   43,   44,   45,   46,  135,  111,  112,  121,  195,
  196,  108,  119,  174,  199,  200,  120,  203,  204,  205,
  125,  207,  122,  150,  184,  127,  128,  129,  131,  132,
  134,  158,  136,  137,  138,  194,   67,  139,  140,  142,
  143,  197,  144,  148,  149,  151,  171,  154,  155,  115,
  160,  163,  164,  162,  161,  166,  197,  167,  170,  175,
  173,  172,  177,  185,  178,  179,    6,  183,  180,  182,
    3,  186,  188,  192,  201,  206,  209,  208,  210,    5,
  181,  193,  190,  191,  211,  159,  212,  156,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   48,   13,    6,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   48,   13,    6,
};
short gdb_result_check[] = {                                      94,
    0,    0,    0,   94,   27,  123,   29,   44,   31,  146,
   33,   34,  281,   91,  292,  293,   44,   44,   69,   70,
   44,   93,   44,   93,  256,   76,  295,  262,  263,   93,
  265,  266,   93,   44,  286,  270,  288,  257,  289,  290,
   44,  276,   61,   61,   44,  123,  183,   98,   99,  123,
  285,  267,   61,  125,   61,  125,   93,  267,   81,  294,
  267,  125,  267,  125,  125,   93,   93,   53,   61,   93,
   61,   93,   61,   96,   61,  265,   61,   61,   64,  130,
   61,   61,   68,   61,   44,   44,   44,  110,  125,   75,
  141,   77,  123,   93,   94,   94,   94,  125,  125,  263,
   86,  125,  266,  125,  268,   44,  157,  158,  131,  132,
  267,  275,  276,  277,   91,  279,   61,   61,   61,   61,
  106,   44,  108,  293,  284,  125,  123,   61,  292,  125,
  181,  295,  296,  297,  298,  121,   61,  267,   44,  190,
  191,  123,  125,  166,  195,  196,   61,  198,  199,  200,
   61,  202,  268,  139,  177,  267,   44,  267,   61,   61,
  267,  147,   61,  125,  125,  188,  284,  123,  282,   44,
  287,  194,   44,   44,  267,   61,  162,  281,   61,  290,
   44,  282,   44,  123,  125,   61,  209,  267,  264,   44,
  296,   61,   61,  179,  125,  123,  291,   44,   61,  288,
  291,  267,   61,  125,  275,   61,   44,  267,   44,    2,
  174,  187,  184,  184,  209,  148,  210,  144,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  256,  256,  256,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  291,  291,  291,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 1
#endif
#define YYMAXTOKEN 298
#if YYDEBUG
char *gdb_result_name[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,"','",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'='",0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'['",0,"']'","'^'",0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"GDB_DONE","GDB_RUNNING","GDB_CONNECTED","GDB_ERROR","GDB_EXIT",
"GDB_STACK_ARGS","GDB_VALUE","GDB_ARGS","GDB_FRAME","GDB_NAME","GDB_STRING",
"GDB_LEVEL","GDB_ESCAPED_STRING","GDB_LOCALS","GDB_INTEGER","GDB_OCTAL",
"GDB_HEX","GDB_FLOAT","GDB_IDENTIFIER","GDB_NUMCHILD","GDB_TYPE","GDB_DATA",
"GDB_ADDR","GDB_ASCII","GDB_CHILDREN","GDB_CHILD","GDB_MORE","GDB_VAROBJ",
"GDB_BREAKPOINT_TABLE","GDB_NR_ROWS","GDB_NR_COLS","GDB_HDR","GDB_BODY",
"GDB_BKPT","GDB_STOPPED","GDB_TIME","GDB_REASON","GDB_CHANGELIST",
"GDB_DISPLAYHINT","GDB_HAS_MORE","GDB_NEW_NUM_CHILDREN","GDB_NEW_CHILDREN",
};
char *gdb_result_rule[] = {
"$accept : parse",
"parse : children_list",
"parse : parse children_list",
"$$1 :",
"children_list : $$1 child_pattern",
"children_list : error",
"has_more_attr :",
"has_more_attr : ',' GDB_HAS_MORE '=' GDB_STRING",
"child_pattern : '^' GDB_DONE ',' GDB_NUMCHILD '=' GDB_STRING ',' GDB_CHILDREN '=' list_open children list_close has_more_attr",
"child_pattern : '^' GDB_DONE ',' GDB_NUMCHILD '=' GDB_STRING ',' GDB_DISPLAYHINT '=' GDB_STRING ',' GDB_CHILDREN '=' list_open children list_close has_more_attr",
"$$2 :",
"child_pattern : '^' GDB_DONE ',' GDB_NAME '=' GDB_STRING ',' $$2 child_attributes",
"child_pattern : '^' GDB_DONE ',' GDB_VALUE '=' GDB_STRING ',' child_attributes",
"child_pattern : '^' GDB_DONE ',' GDB_VALUE '=' GDB_STRING",
"child_pattern : '^' GDB_DONE ',' GDB_LOCALS '=' list_open locals list_close",
"child_pattern : '^' GDB_DONE ',' GDB_LOCALS '=' list_open mac_locals list_close",
"child_pattern : '^' GDB_DONE ',' GDB_STACK_ARGS '=' list_open GDB_FRAME '=' list_open GDB_LEVEL '=' GDB_STRING ',' GDB_ARGS '=' list_open locals list_close list_close list_close",
"child_pattern : '^' GDB_DONE ',' GDB_STACK_ARGS '=' list_open GDB_FRAME '=' list_open GDB_LEVEL '=' GDB_STRING ',' GDB_ARGS '=' list_open mac_locals list_close list_close list_close",
"child_pattern : '^' GDB_DONE ',' GDB_BREAKPOINT_TABLE '=' list_open bpt_table_hdr bpt_table_body list_close",
"child_pattern : '^' GDB_DONE ',' GDB_FRAME '=' list_open child_attributes list_close",
"child_pattern : '^' GDB_DONE ',' GDB_CHANGELIST '=' list_open change_set list_close",
"child_pattern : stop_statement",
"change_set : list_open child_attributes list_close",
"$$3 :",
"change_set : list_open child_attributes list_close $$3 ',' change_set",
"bpt_table_hdr : GDB_NR_ROWS '=' GDB_STRING ',' GDB_NR_COLS '=' GDB_STRING ',' GDB_HDR '=' list_open bpt_hdr_table_description list_close",
"bpt_table_hdr : GDB_HDR '=' list_open comma_separated_strings list_close",
"comma_separated_strings : GDB_STRING",
"comma_separated_strings : GDB_STRING ',' comma_separated_strings",
"bpt_hdr_table_description : list_open bpt_table_description_attr list_close",
"bpt_hdr_table_description : list_open bpt_table_description_attr list_close ',' bpt_hdr_table_description",
"bpt_table_description_attr : GDB_IDENTIFIER '=' GDB_STRING",
"bpt_table_description_attr : GDB_IDENTIFIER '=' GDB_STRING ',' bpt_table_description_attr",
"bpt_table_body : ',' GDB_BODY '=' list_open breakpoints list_close",
"bpt_table_body : ',' breakpoints",
"breakpoints : GDB_BKPT '=' list_open child_attributes list_close",
"$$4 :",
"breakpoints : GDB_BKPT '=' list_open child_attributes list_close $$4 ',' breakpoints",
"mac_locals : GDB_VAROBJ '=' '{' child_attributes '}'",
"mac_locals : mac_locals ',' GDB_VAROBJ '=' '{' child_attributes '}'",
"locals : '{' child_attributes '}'",
"locals : locals ',' '{' child_attributes '}'",
"list_open : '['",
"list_open : '{'",
"list_close : ']'",
"list_close : '}'",
"children : GDB_CHILD '=' '{' child_attributes '}'",
"children : children ',' GDB_CHILD '=' '{' child_attributes '}'",
"child_attributes : child_key '=' GDB_STRING",
"$$5 :",
"child_attributes : child_key '=' GDB_STRING $$5 ',' child_attributes",
"child_attributes : GDB_NEW_CHILDREN '=' '['",
"child_attributes : GDB_TIME '=' '{' child_attributes '}'",
"stop_statement : GDB_STOPPED ',' GDB_TIME '=' '{' child_attributes '}' ',' GDB_REASON '=' GDB_STRING",
"stop_statement : GDB_STOPPED ',' GDB_REASON '=' GDB_STRING",
"child_key : GDB_NAME",
"child_key : GDB_NUMCHILD",
"child_key : GDB_TYPE",
"child_key : GDB_VALUE",
"child_key : GDB_ADDR",
"child_key : GDB_IDENTIFIER",
"child_key : GDB_LEVEL",
"child_key : GDB_DISPLAYHINT",
"child_key : GDB_HAS_MORE",
"child_key : GDB_NEW_NUM_CHILDREN",
};
#endif
#ifndef YYSTYPE
typedef int YYSTYPE;
#endif
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH 500
#endif
#endif
int yydebug;
int yynerrs;
int yyerrflag;
int yychar;
short *yyssp;
YYSTYPE *yyvsp;
YYSTYPE yyval;
YYSTYPE yylval;
short yyss[YYSTACKSIZE];
YYSTYPE yyvs[YYSTACKSIZE];
#define yystacksize YYSTACKSIZE

void cleanup()
{
    sg_attributes.clear();
    sg_children.clear();
    sg_locals.clear();
}

void gdbConsumeList()
{
    int depth = 1;
    while(depth > 0) {
        int ch = gdb_result_lex();
        if(ch == 0) {
            break;
        }
        if(ch == ']') {
            depth--;
            continue;
        } else if(ch == ']') {
            depth ++ ;
            continue;
        }
    }
}

void gdbParseListChildren( const std::string &in, GdbChildrenInfo &children)
{
    cleanup();

    setGdbLexerInput(in, true, false);
    gdb_result_parse();

    children = sg_children;
    gdb_result_lex_clean();
}
#define YYABORT goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab
int
yyparse()
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register char *yys;
    extern char *getenv();

    if (yys = getenv("YYDEBUG"))
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = (-1);

    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if (yyn = yydefred[yystate]) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yyssp >= yyss + yystacksize - 1)
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = (-1);
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;
#ifdef lint
    goto yynewerror;
#endif
yynewerror:
    yyerror("syntax error");
#ifdef lint
    goto yyerrlab;
#endif
yyerrlab:
    ++yynerrs;
yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yyss + yystacksize - 1)
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = (-1);
        goto yyloop;
    }
yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    yyval = yyvsp[1-yym];
    switch (yyn)
    {
case 3:
{ cleanup(); }
break;
case 5:
{
                /*printf("CodeLite: syntax error, unexpected token '%s' found\n", gdb_result_lval.c_str());*/
                }
break;
case 7:
{
                  sg_children.has_more = (yyvsp[0] == "\"1\"");
              }
break;
case 10:
{sg_attributes[yyvsp[-3]] = yyvsp[-1];}
break;
case 11:
{
                    sg_children.push_back( sg_attributes );
                    sg_attributes.clear();
                }
break;
case 12:
{
                    sg_attributes[yyvsp[-4]] = yyvsp[-2];
                    sg_children.push_back( sg_attributes );
                    sg_attributes.clear();
                }
break;
case 13:
{
                    sg_attributes[yyvsp[-2]] = yyvsp[0];
                    sg_children.push_back( sg_attributes );
                    sg_attributes.clear();
                }
break;
case 19:
{
                    sg_children.push_back( sg_attributes );
                    sg_attributes.clear();
                }
break;
case 22:
{
                    sg_children.push_back( sg_attributes );
                    sg_attributes.clear();
                }
break;
case 23:
{sg_children.push_back( sg_attributes ); sg_attributes.clear(); }
break;
case 35:
{ sg_children.push_back( sg_attributes ); sg_attributes.clear();}
break;
case 36:
{ sg_children.push_back( sg_attributes ); sg_attributes.clear();}
break;
case 38:
{
                sg_children.push_back( sg_attributes );
                sg_attributes.clear();
            }
break;
case 39:
{sg_children.push_back( sg_attributes ); sg_attributes.clear(); }
break;
case 40:
{
                sg_children.push_back( sg_attributes );
                sg_attributes.clear();
            }
break;
case 41:
{sg_children.push_back( sg_attributes ); sg_attributes.clear(); }
break;
case 46:
{
                    sg_children.push_back( sg_attributes );
                    sg_attributes.clear();
                }
break;
case 47:
{sg_children.push_back( sg_attributes ); sg_attributes.clear(); }
break;
case 48:
{
                       if ( yyvsp[-2] == "has_more" ) {
                           sg_children.has_more = (yyvsp[0] == "\"1\"");

                       } else if (!yyvsp[0].empty()) {
                           sg_attributes[yyvsp[-2]] = yyvsp[0];
                       }
                   }
break;
case 49:
{ sg_attributes[yyvsp[-2]] = yyvsp[0];}
break;
case 51:
{ gdbConsumeList(); }
break;
case 53:
{
                    sg_attributes["reason"] = yyvsp[0];
                    sg_children.push_back( sg_attributes );
                }
break;
case 54:
{
                    sg_attributes["reason"] = yyvsp[0];
                    sg_children.push_back( sg_attributes );
                }
break;
case 55:
{yyval = yyvsp[0];}
break;
case 56:
{yyval = yyvsp[0];}
break;
case 57:
{yyval = yyvsp[0];}
break;
case 58:
{yyval = yyvsp[0];}
break;
case 59:
{yyval = yyvsp[0];}
break;
case 60:
{yyval = yyvsp[0];}
break;
case 61:
{yyval = yyvsp[0];}
break;
case 62:
{yyval = yyvsp[0];}
break;
case 63:
{yyval = yyvsp[0];}
break;
case 64:
{yyval = yyvsp[0];}
break;
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yyssp, yystate);
#endif
    if (yyssp >= yyss + yystacksize - 1)
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;
yyoverflow:
    yyerror("yacc stack overflow");
yyabort:
    return (1);
yyaccept:
    return (0);
}
