#pragma once
#ifndef TREE_H
#define TREE_H

#include "pch.h"
#include "type.h"

enum NodeType
{
    NODE_CONST, //常量
    NODE_VAR,   //变量
    NODE_EXPR,  //表达式
    NODE_TYPE,  //特殊类型
    NODE_STMT,  //语句
    NODE_PROG,  //初始结点
    NODE_OP,    //运算符
    NODE_KEYWORD, //关键字
};

enum OperatorType
{
    OP_EQ,  // ==
    OP_GR,  //>
    OP_LE,  //<
    OP_GREQ,//>=
    OP_LEEQ,//<=
    OP_NOTEQ, //!=
    OP_ASSIGN, //=
    OP_ADDASSIGN, //+=
    OP_SUBASSIGN, //-=
    OP_MULASSIGN, //*=
    OP_DIVASSIGN, ///=
    OP_OR,  //&&
    OP_AND, //||
    OP_ADD, //+
    OP_SUB, //-
    OP_MUL, //*
    OP_DIV, ///
    OP_MOD, //%
    OP_NOT, //!
    OP_SELFADD, //++
    OP_SELFSUB, //--
    OP_REFERENCE, //&
};

enum StmtType {
    STMT_SKIP,
    STMT_DECL,
    STMT_ASSIGN,
    STMT_WHILE,
    STMT_IF,
    STMT_FOR,
    STMT_SCANF,
    STMT_PRINTF,
};

enum ExprType{
    EXPR_ASSIGN,
    EXPR_OR,
    EXPR_AND,
    EXPR_EQUAL,
    EXPR_RELATION,
    EXPR_ADD,
    EXPR_MUL,
    EXPR_UNARY,
    EXPR_POSTFIX,
};

struct TreeNode {
public:
    int nodeID;  // 用于作业的序号输出
    int lineno;  //行号
    NodeType nodeType;  //结点类型

    TreeNode* child = nullptr;
    TreeNode* sibling = nullptr;

    void addChild(TreeNode*);
    void addSibling(TreeNode*);
    
    void printNodeInfo();
    void printChildrenId();

    void printAST(); // 先输出自己 + 孩子们的id；再依次让每个孩子输出AST。
    void printSpecialInfo();

    void genNodeId();

public:
    OperatorType optype;  // 操作符具体类型，结点是操作符写入具体类型
    Type* type;  // 特殊类型中又有分类
    StmtType stype; //语句块的类型
    ExprType etype; //表达式的类型
    int int_val; //整型值
    char ch_val; //字符值
    bool b_val;  //布尔值
    string str_val; //字符串值
    string var_name;//变量或关键字名称
    string op; //操作符

public:
    TreeNode(int lineno, NodeType type);
    string op_type();
    string stmt_type();
    string expr_type();

};

#endif