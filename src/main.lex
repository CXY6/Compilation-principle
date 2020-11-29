%option nounput
%{
#include "common.h"
#include "main.tab.h"  // yacc header
#include "symboltable.h"
#include "pch.h"
extern int last_num_of_layer[50][50];
extern int num_of_layer[100];
extern int layer;
extern idlist IDlist;
int lineno=1;
%}
BLOCKCOMMENT \/\*([^\*^\/]*|[\*^\/*]*|[^\**\/]*)*\*\/
LINECOMMENT \/\/[^\n]*
EOL	(\r\n|\r|\n)
WHILTESPACE [[:blank:]]

INTEGER [0-9]+
BOOL true|false
CHAR \'.?\'
STRING \".+\"
WHILE while
FOR for
IF if
MAIN main
SCANF scanf
PRINTF printf
REFERENCE &
OR \|\|
AND \&\&
NOT \!
GREATEQUAL \>\=
LESSEQUAL \<\=
GREAT \>
LESS \<
EQUAL \=\=
NOTEQUAL \!\=
ADD \+
SUB \-
MUL \*
DIV \/
MOD \%
ADDEQUAL \+\=
SUBEQUAL \-\=
MULEQUAL \*\=
DIVEQUAL \/\=
ASSIGNEQUAL \=
SELFADD \+\+
SELFSUB \-\-
LEFT2 \{
RIGHT2 \}
IDENTIFIER [[:alpha:]_][[:alpha:][:digit:]_]*
%%

{BLOCKCOMMENT}  /* do nothing */
{LINECOMMENT}  /* do nothing */


"int" return T_INT;
"bool" return T_BOOL;
"char" return T_CHAR;
"string" return T_STRING;
"(" return LEFT;
")" return RIGHT;
"," return COMMA;
";" return SEMICOLON;



{INTEGER} {
    TreeNode* node = new TreeNode(lineno, NODE_CONST);
    node->type = TYPE_INT;
    node->int_val = atoi(yytext);
    yylval = node;
    return INTEGER;
}

{BOOL} {
    TreeNode* node = new TreeNode(lineno, NODE_CONST);
    node->type = TYPE_BOOL;
    if(string(yytext)=="true")
        node->b_val=true;
    else
        node->b_val=false;
    yylval = node;
    return BOOL;
}

{CHAR} {
    TreeNode* node = new TreeNode(lineno, NODE_CONST);
    node->type = TYPE_CHAR;
    node->ch_val=yytext[1];
    yylval = node;
    return CHAR;
}

{STRING} {
    TreeNode*node = new TreeNode(lineno, NODE_CONST);
    node->type= TYPE_STRING;
    node->str_val=string(yytext);
    yylval=node;
    return STRING;
}

{ASSIGNEQUAL} {
    TreeNode* node = new TreeNode(lineno, NODE_OP);
    string str=string(yytext);
    node->op=str;
    yylval=node;
    return ASSIGNEQUAL;
}

{ADDEQUAL} {
    TreeNode* node = new TreeNode(lineno, NODE_OP);
    string str=string(yytext);
    node->op=str;
    yylval=node;
    return ADDEQUAL;
}

{SUBEQUAL} {
    TreeNode* node = new TreeNode(lineno, NODE_OP);
    string str=string(yytext);
    node->op=str;
    yylval=node;
    return SUBEQUAL;
}

{MULEQUAL} {
    TreeNode* node = new TreeNode(lineno, NODE_OP);
    string str=string(yytext);
    node->op=str;
    yylval=node;
    return MULEQUAL;
}

{DIVEQUAL} {
    TreeNode* node = new TreeNode(lineno, NODE_OP);
    string str=string(yytext);
    node->op=str;
    yylval=node;
    return DIVEQUAL;
}

{OR} {
    TreeNode* node= new TreeNode(lineno,NODE_OP);
    string str=string(yytext);
    node->op=str;
    yylval=node;
    return OR;
}

{AND} {
    TreeNode* node= new TreeNode(lineno,NODE_OP);
    string str=string(yytext);
    node->op=str;
    yylval=node;
    return AND;
}

{NOT} {
    TreeNode* node= new TreeNode(lineno,NODE_OP);
    string str=string(yytext);
    node->op=str;
    yylval=node;
    return NOT;
}

{GREATEQUAL} {
    TreeNode* node= new TreeNode(lineno,NODE_OP);
    string str=string(yytext);
    node->op=str;
    yylval=node;
    return GREATEQUAL;
}

{LESSEQUAL} {
    TreeNode* node= new TreeNode(lineno,NODE_OP);
    string str=string(yytext);
    node->op=str;
    yylval=node;
    return LESSEQUAL;
}

{NOTEQUAL} {
    TreeNode* node= new TreeNode(lineno,NODE_OP);
    string str=string(yytext);
    node->op=str;
    yylval=node;
    return NOTEQUAL;
}

{EQUAL} {
    TreeNode* node= new TreeNode(lineno,NODE_OP);
    string str=string(yytext);
    node->op=str;
    yylval=node;
    return EQUAL;
}

{GREAT} {
    TreeNode* node= new TreeNode(lineno,NODE_OP);
    string str=string(yytext);
    node->op=str;
    yylval=node;
    return GREAT;
}

{LESS} {
    TreeNode* node= new TreeNode(lineno,NODE_OP);
    string str=string(yytext);
    node->op=str;
    yylval=node;
    return GREAT;
}

{ADD} {
    TreeNode* node= new TreeNode(lineno,NODE_OP);
    string str=string(yytext);
    node->op=str;
    yylval=node;
    return ADD;
}

{SUB} {
    TreeNode* node= new TreeNode(lineno,NODE_OP);
    string str=string(yytext);
    node->op=str;
    yylval=node;
    return SUB;
}

{MUL} {
    TreeNode* node= new TreeNode(lineno,NODE_OP);
    string str=string(yytext);
    node->op=str;
    yylval=node;
    return MUL;
}

{DIV} {
    TreeNode* node= new TreeNode(lineno,NODE_OP);
    string str=string(yytext);
    node->op=str;
    yylval=node;
    return DIV;
}

{MOD} {
    TreeNode* node= new TreeNode(lineno,NODE_OP);
    string str=string(yytext);
    node->op=str;
    yylval=node;
    return MOD;
}

{SELFADD} {
    TreeNode* node= new TreeNode(lineno,NODE_OP);
    string str=string(yytext);
    node->op=str;
    yylval=node;
    return SELFADD;
}

{SELFSUB} {
    TreeNode* node= new TreeNode(lineno,NODE_OP);
    string str=string(yytext);
    node->op=str;
    yylval=node;
    return SELFSUB;
}

{REFERENCE} {
    TreeNode* node=new TreeNode(lineno,NODE_OP);
    string str=string(yytext);
    node->op=str;
    yylval=node;
    return REFERENCE;
}

{FOR} {
    TreeNode* node= new TreeNode(lineno,NODE_KEYWORD);
    string str=string(yytext);
    node->var_name=str;
    yylval=node;
    return FOR;
}

{WHILE} {
    TreeNode* node= new TreeNode(lineno,NODE_KEYWORD);
    string str=string(yytext);
    node->var_name=str;
    yylval=node;
    return WHILE;
}

{IF} {
    TreeNode* node= new TreeNode(lineno,NODE_KEYWORD);
    string str=string(yytext);
    node->var_name=str;
    yylval=node;
    return IF;
}

{MAIN} {
    TreeNode* node=new TreeNode(lineno,NODE_KEYWORD);
    string str=string(yytext);
    node->var_name=str;
    yylval=node;
    return MAIN;
}

{SCANF} {
    TreeNode* node=new TreeNode(lineno,NODE_KEYWORD);
    string str=string(yytext);
    node->var_name=str;
    yylval=node;
    return SCANF;
}

{PRINTF} {
    TreeNode* node=new TreeNode(lineno,NODE_KEYWORD);
    string str=string(yytext);
    node->var_name=str;
    yylval=node;
    return PRINTF;
}

{LEFT2} {
    layer++;
    last_num_of_layer[layer][num_of_layer[layer]]=num_of_layer[layer-1];
    return LEFT2;
}

{RIGHT2} {
    num_of_layer[layer]++;
    layer--;
    return RIGHT2;
}
{WHILTESPACE} /* do nothing */

{EOL} lineno++;


{IDENTIFIER} {
    string str=string(yytext);
    TreeNode* node=new TreeNode(lineno,NODE_VAR);
    node->var_name=str;
    yylval=node;
    IDlist.push_back(str,layer,num_of_layer[layer],node,1);
    return IDENTIFIER;
}

. {
    cerr << "[line "<< lineno <<" ] unknown character:" << yytext << endl;
}
%%