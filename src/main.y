%{
    #define YYDEBUG 1
    #include "common.h"
    #include "symboltable.h"
    #define YYSTYPE TreeNode *  
    TreeNode* root;
    extern int lineno;
    extern idlist IDlist;
    extern int layer;
    extern int num_of_layer[100];
    int yylex();
    int yyerror( char const * );
%}
%error-verbose

%start program

%token T_CHAR T_INT T_STRING T_BOOL WHILE FOR IF MAIN SCANF PRINTF 

%token COMMA LEFT RIGHT LEFT2 RIGHT2 SEMICOLON REFERENCE

%token ASSIGNEQUAL ADDEQUAL SUBEQUAL MULEQUAL DIVEQUAL 

%token OR AND NOT EQUAL NOTEQUAL GREAT LESS GREATEQUAL LESSEQUAL

%token ADD SUB MUL DIV MOD

%token IDENTIFIER INTEGER CHAR BOOL STRING 

%left EQUAL NOTEQUAL GREAT LESS GREATEQUAL LESSEQUAL
%left ADD SUB
%left MUL DIV MOD
%right ASSIGNEQUAL ADDEQUAL SUBEQUAL MULEQUAL DIVEQUAL
%right UMINUS UADD NOT
%right SELFADD_R SELFSUB_R
%left SELFADD SELFSUB


%%


program
: T MAIN LEFT RIGHT statements
    {
        root = new TreeNode(0,NODE_PROG);
        root->addChild($1);
        root->addChild($2);
        root->addChild($5);
        $$=root;
    }
| statements 
    {
        root = new TreeNode(0, NODE_PROG); 
        root->addChild($1);
        $$=root;
    }
;


statements
:  statement {
        $$=$1;
    }
|  statements statement{   
        $$->addSibling($2); 
        $$=$1; 
    }
;

statement
: SEMICOLON  {$$ = new TreeNode(lineno, NODE_STMT); $$->stype = STMT_SKIP;}
| decl_stmt SEMICOLON {$$ = $1;}
| assign_stmt SEMICOLON {$$ = $1;}
| scanf_stmt SEMICOLON {$$ = $1;}
| printf_stmt SEMICOLON {$$ = $1;}
| iter_stmt {$$ = $1;}
| if_stmt {$$ = $1;}
| for_stmt {$$ = $1;}
| LEFT2 statements RIGHT2 {$$ = $2;}
;

decl_stmt
: T IDENTIFIER ASSIGNEQUAL add_expr{  // declare and init
        TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
        node->stype = STMT_DECL;
        node->addChild($1);
        node->addChild($2);
        node->addChild($3);
        node->addChild($4);
        idnode *x=IDlist.find_by_node($2);
        x->decl_or_refe=0;
        $$ = node;   
    } 
| T idlist {
        TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
        node->stype = STMT_DECL;
        node->addChild($1);
        node->addChild($2);
        TreeNode* x=$2;
        while(x!=nullptr){
            idnode* y=IDlist.find_by_node(x);
            if(y==nullptr){
                cout<<"don't find!\n";
            }
            else{
                y->decl_or_refe=0;
            }
            x=x->sibling;
        }
        $$ = node;   
    }
;

assign_stmt
: assign_expr {
        TreeNode* node=new TreeNode($1->lineno,NODE_STMT);
        node->stype = STMT_ASSIGN;
        node->addChild($1);
        $$=node;
    }
;

iter_stmt
:WHILE bool_stmt statement {
        TreeNode* node=new TreeNode($1->lineno,NODE_STMT);
        node->stype= STMT_WHILE;
        node->addChild($1);
        node->addChild($2);
        node->addChild($3);
        $$=node;
    }
;

if_stmt
: IF  bool_stmt statement {
        TreeNode* node=new TreeNode($1->lineno,NODE_STMT);
        node->stype=STMT_IF;
        node->addChild($1);
        node->addChild($2);
        node->addChild($3);
        $$=node;
    }
;

for_stmt
: FOR LEFT decl_stmt SEMICOLON or_expr SEMICOLON assign_expr RIGHT statement { //111
        TreeNode* node=new TreeNode($1->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild($1);
        node->addChild($3);
        node->addChild($5);
        node->addChild($7);
        node->addChild($9);
        $$=node;
    }
| FOR LEFT assign_expr SEMICOLON or_expr SEMICOLON assign_expr RIGHT statement { //111
        TreeNode* node=new TreeNode($1->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild($1);
        node->addChild($3);
        node->addChild($5);
        node->addChild($7);
        node->addChild($9);
        $$=node;
    }
| FOR LEFT SEMICOLON SEMICOLON RIGHT statement RIGHT{ //000
        TreeNode* node=new TreeNode($1->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild($1);
        node->addChild($6);
        $$=node;

    }
| FOR LEFT SEMICOLON or_expr SEMICOLON assign_expr RIGHT statement { //011
        TreeNode* node=new TreeNode($1->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild($1);
        node->addChild($4);
        node->addChild($6);
        node->addChild($8);
        $$=node;
    }
| FOR LEFT assign_expr SEMICOLON SEMICOLON assign_expr RIGHT statement { //101
        TreeNode* node=new TreeNode($1->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild($1);
        node->addChild($3);
        node->addChild($6);
        node->addChild($8);
        $$=node;
    }
| FOR LEFT assign_expr SEMICOLON or_expr SEMICOLON RIGHT statement { //110
        TreeNode* node=new TreeNode($1->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild($1);
        node->addChild($3);
        node->addChild($5);
        node->addChild($8);
        $$=node;
    }
| FOR LEFT assign_expr SEMICOLON SEMICOLON RIGHT statement { //100
        TreeNode* node=new TreeNode($1->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild($1);
        node->addChild($3);
        node->addChild($7);
        $$=node;
    }
| FOR LEFT SEMICOLON or_expr SEMICOLON RIGHT statement { //010
        TreeNode* node=new TreeNode($1->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild($1);
        node->addChild($4);
        node->addChild($7);
        $$=node;
    }
| FOR LEFT SEMICOLON SEMICOLON assign_expr RIGHT statement { //001
        TreeNode* node=new TreeNode($1->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild($1);
        node->addChild($5);
        node->addChild($7);
        $$=node;
    }
;

scanf_stmt
: SCANF LEFT STRING COMMA idlist RIGHT{
        TreeNode* node=new TreeNode($1->lineno,NODE_STMT);
        node->stype=STMT_SCANF;
        node->addChild($1);
        node->addChild($3);
        node->addChild($5);
        $$=node;
    }
| SCANF LEFT STRING RIGHT{
        TreeNode* node=new TreeNode($1->lineno,NODE_STMT);
        node->stype=STMT_SCANF;
        node->addChild($1);
        node->addChild($3);
        $$=node;
    }
;

printf_stmt
: PRINTF LEFT STRING COMMA idlist RIGHT{
        TreeNode* node=new TreeNode($1->lineno,NODE_STMT);
        node->stype=STMT_PRINTF;
        node->addChild($1);
        node->addChild($3);
        node->addChild($5);
        $$=node;
    }
| PRINTF LEFT STRING RIGHT{
        TreeNode* node=new TreeNode($1->lineno,NODE_STMT);
        node->stype=STMT_PRINTF;
        node->addChild($1);
        node->addChild($3);
        $$=node;
    }
;

idlist
: idlist COMMA IDENTIFIER{
        $$=$1;
        $$->addSibling($3);
    }
| idlist COMMA REFERENCE IDENTIFIER{
        $$=$1;
        $$->addSibling($3);
        $$->addSibling($4);
    }
| IDENTIFIER {
        $$=$1;
    }   
| REFERENCE IDENTIFIER{
        $$=$1;
        $$->addSibling($2);
    }
;


assign_expr 
: or_expr ASSIGNEQUAL assign_expr{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_ASSIGN;
        node->addChild($1);
        node->addChild($2);
        node->addChild($3);
        $$=node;
    }
| or_expr ADDEQUAL assign_expr{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_ASSIGN;
        node->addChild($1);
        node->addChild($2);
        node->addChild($3);
        $$=node;
    }
| or_expr SUBEQUAL assign_expr{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_ASSIGN;
        node->addChild($1);
        node->addChild($2);
        node->addChild($3);
        $$=node;
    }
| or_expr MULEQUAL assign_expr{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_ASSIGN;
        node->addChild($1);
        node->addChild($2);
        node->addChild($3);
        $$=node;
    }
| or_expr DIVEQUAL assign_expr{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_ASSIGN;
        node->addChild($1);
        node->addChild($2);
        node->addChild($3);
        $$=node;
    }
| or_expr {$$=$1;}
;

bool_stmt
: LEFT or_expr RIGHT{
        $$=$2;
    }
;
or_expr
: or_expr OR and_expr{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_OR;
        node->addChild($1);
        node->addChild($2);
        node->addChild($3);
        $$=node;
    }   
| and_expr{
        $$=$1;
    }
;

and_expr
: and_expr AND equal_expr{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_AND;
        node->addChild($1);
        node->addChild($2);
        node->addChild($3);
        $$=node;
    }
| equal_expr{
        $$=$1;
    }
;

equal_expr
: equal_expr EQUAL relation_expr{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_EQUAL;
        node->addChild($1);
        node->addChild($2);
        node->addChild($3);
        $$=node;
    }
| equal_expr NOTEQUAL relation_expr{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_EQUAL;
        node->addChild($1);
        node->addChild($2);
        node->addChild($3);
        $$=node;
    }
| relation_expr {
        $$=$1;
    }
;

relation_expr
: relation_expr GREAT add_expr{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_RELATION;
        node->addChild($1);
        node->addChild($2);
        node->addChild($3);
        $$=node;
    }
| relation_expr LESS add_expr{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_RELATION;
        node->addChild($1);
        node->addChild($2);
        node->addChild($3);
        $$=node;
    }
| relation_expr GREATEQUAL add_expr{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_RELATION;
        node->addChild($1);
        node->addChild($2);
        node->addChild($3);
        $$=node;
    }
| relation_expr LESSEQUAL add_expr{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_RELATION;
        node->addChild($1);
        node->addChild($2);
        node->addChild($3);
        $$=node;
    }
| add_expr{
        $$=$1;
    }
;

add_expr
: add_expr ADD mul_expr{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_ADD;
        node->addChild($1);
        node->addChild($2);
        node->addChild($3);
        $$=node;
    }
| add_expr SUB mul_expr{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_ADD;
        node->addChild($1);
        node->addChild($2);
        node->addChild($3);
        $$=node;
    }
| mul_expr{
        $$=$1;
    }
;


mul_expr
: mul_expr MUL unary_expr{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_MUL;
        node->addChild($1);
        node->addChild($2);
        node->addChild($3);
        $$=node;
    }
| mul_expr DIV unary_expr{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_MUL;
        node->addChild($1);
        node->addChild($2);
        node->addChild($3);
        $$=node;
    }
| mul_expr MOD unary_expr{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_MUL;
        node->addChild($1);
        node->addChild($2);
        node->addChild($3);
        $$=node;
    }
| unary_expr{
        $$=$1;
    }
; 

unary_expr
: SUB unary_expr %prec UMINUS{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_UNARY;
        node->addChild($1);
        node->addChild($2);
        $$=node;
    }
| ADD unary_expr %prec UADD{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_UNARY;
        node->addChild($1);
        node->addChild($2);
        $$=node;
    }
| NOT unary_expr{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_UNARY;
        node->addChild($1);
        node->addChild($2);
        $$=node;
    }
| SELFADD unary_expr %prec SELFADD_R{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_UNARY;
        node->addChild($1);
        node->addChild($2);
        $$=node;
    }
| SELFSUB unary_expr %prec SELFSUB_R{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_UNARY;
        node->addChild($1);
        node->addChild($2);
        $$=node;
    }
| postfix_expr{
        $$=$1;
    }
;

postfix_expr
: postfix_expr SELFADD{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_POSTFIX;
        node->addChild($1);
        node->addChild($2);
        $$=node;
    }
| postfix_expr SELFSUB{
        TreeNode* node=new TreeNode($1->lineno,NODE_EXPR);
        node->etype=EXPR_POSTFIX;
        node->addChild($1);
        node->addChild($2);
        $$=node;
    }
| expr{
        $$=$1;
    }
;

expr
: LEFT add_expr RIGHT{
        $$ = $2;
    }
| IDENTIFIER {
        $$ = $1;
    }
| INTEGER {
        $$ = $1;
    }
| CHAR {
        $$ = $1;
    }
| STRING {
        $$ = $1;
    }
| BOOL {
        $$ = $1;
    }
;

T: T_INT {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_INT;} 
| T_CHAR {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_CHAR;}
| T_BOOL {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_BOOL;}
| T_STRING {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_STRING;}
;

%%

int yyerror(char const* message)
{
  cout << message << " at line " << lineno << endl;
  return -1;
}