#include "tree.h"
#include <queue>

void TreeNode::addChild(TreeNode* child) {
    if(this->child==nullptr){
         this->child=child;
    }
    else{
        this->child->addSibling(child);
    }
}

void TreeNode::addSibling(TreeNode* sibling){
    if (this->sibling == nullptr)
        this->sibling = sibling;
    else{
        TreeNode* bro=this;
        while(bro->sibling!=nullptr){
            bro=bro->sibling;
        }
        bro->sibling=sibling;
    }
    
}

TreeNode::TreeNode(int lineno, NodeType type) {
    this->lineno=lineno;
    this->nodeType=type;
}

void TreeNode::genNodeId() {
    this->nodeID=0;
    int count=1;
    queue<TreeNode*> q;
    q.push(this);
    while(!q.empty()){
        TreeNode *next=q.front()->child;//下一层
        q.pop();
        while(next!=nullptr){
            next->nodeID=count++;//同层所有结点赋值
            q.push(next);
            next=next->sibling;
        }
    }
}

void TreeNode::printNodeInfo()
{
    cout << "line:";
    cout.setf(ios::left);
    cout.width(4);
    cout<< this->lineno << " Node_id:";
    cout.width(4);
    cout<< this->nodeID;
    this->printSpecialInfo();
    cout << " child: ";
}

void TreeNode::printChildrenId()
{
    TreeNode *next = this->child;
    if (next != nullptr)
    {
        cout << next->nodeID << " ";
        TreeNode *bro = next->sibling;
        while (bro != nullptr)
        {
            cout << bro->nodeID<<" ";
            bro = bro->sibling;
        }
    }
    else
    {
        cout<<"NULL";
    } 
    cout<<endl;
}

void TreeNode::printAST() {
    this->printNodeInfo();
    this->printChildrenId();
    TreeNode *child=this->child;
    if(child!=nullptr){
        child->printAST();
        TreeNode *bro=child->sibling;
        while(bro!=nullptr){
            bro->printAST();
            bro=bro->sibling;
        }
    }
    
}


// You can output more info...
void TreeNode::printSpecialInfo() {
    switch (this->nodeType)
    {
    case NODE_CONST:
        cout << " CONST:";
        cout.width(23);
        if (this->type->type == VALUE_STRING)
            cout << this->str_val;
        else if (this->type->type == VALUE_INT)
            cout << this->int_val;
        else if (this->type->type == VALUE_CHAR)
            cout << this->ch_val;
        else if (this->type->type == VALUE_BOOL)
        {
            if (this->b_val == 1)
                cout << "true";
            else
                cout << "false";
        }
        break;
    case NODE_VAR:
        cout << " VAR:";
        cout.width(25);
        cout << this->var_name;
        break;
    case NODE_EXPR:
        cout << " EXPR:";
        cout.width(24);
        cout<<this->expr_type();
        break;
    case NODE_STMT:
        cout << " STMT:";
        cout.width(24);
        cout<<this->stmt_type();
        break;
    case NODE_TYPE:
        cout << " TYPE:";
        cout.width(24);
        cout << this->type->getTypeInfo();
        break;
    case NODE_PROG:
        cout.width(30);
        cout << " PROGRAM";
        break;
    case NODE_OP:
        cout << " OP:";
        cout.width(26);
        cout << this->op;
        break;
    case NODE_KEYWORD:
        cout<<" KEYWORD:";
        cout.width(21);
        cout<<this->var_name;
        break;
    default:
        break;
    }
}

string TreeNode::op_type(){
    switch (this->optype)
    {
    case OP_EQ:
        return "=";
    case OP_LE:
        return "<";
    case OP_GR:
        return ">";
    case OP_LEEQ:
        return "<=";
    case OP_GREQ:
        return ">=";
    case OP_ASSIGN:
        return "=";
    case OP_ADDASSIGN:
        return "+=";
    case OP_SUBASSIGN:
        return "-=";
    case OP_MULASSIGN:
        return "*=";
    case OP_DIVASSIGN:
        return "/=";
    default:
        break;
    }
}

string TreeNode::stmt_type(){
    switch(this->stype){
    case STMT_SKIP:
        return "SKIP";
    case STMT_DECL:
        return "DECL";
    case STMT_ASSIGN:
        return "ASSIGN";
    case STMT_WHILE:
        return "WHILE";
    case STMT_IF:
        return "IF";
    case STMT_FOR:
        return "FOR";
    case STMT_SCANF:
        return "SCANF";
    case STMT_PRINTF:
        return "PRINTF";
    default:
        break;
    }
}

string TreeNode::expr_type(){
    switch (this->etype){
    case EXPR_ASSIGN:
        return "ASSIGN";
    case EXPR_OR:
        return "OR";
    case EXPR_AND:
        return "AND";
    case EXPR_EQUAL:
        return "EQUAL";
    case EXPR_RELATION:
        return "RELATION";
    case EXPR_ADD:
        return "ADD";
    case EXPR_MUL:
        return "MUL";
    case EXPR_UNARY:
        return "UNARY";
    case EXPR_POSTFIX:
        return "POSTFIX";
    default:
        break;
    }
}