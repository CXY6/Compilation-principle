#include "pch.h"
#include "tree.h"
#include "type.h"
extern int last_num_of_layer[50][50];

class idnode{
public:
    string name; //变量名
    int depth;   //深度，即目前被包括的左括号数目
    int num_of_depth; //这是第几个深度为depth的层
    idnode* next;
    TreeNode *node;
    int decl_or_refe; //该变量是声明还是引用
    int count;        //是符号表中的第几个节点
    int decl_count;
    idnode(){
        name=nullptr;
        depth=0;
        num_of_depth=0;
        node=nullptr;
        next=nullptr;
    }
    idnode(string var,int layer,int num_of_layer,TreeNode *new_node,int x){
        name=var;
        num_of_depth=num_of_layer;
        depth=layer;
        node=new_node;
        next=nullptr;
        decl_or_refe=x;
    }
};

class idlist{
public:
    idnode* head;
    int elementnum;
    idlist(){
        head=nullptr;
        elementnum=0;
    }
    void push_back(string var,int layer,int num_of_layer,TreeNode* node,int x){
        idnode *new_node=new idnode(var,layer,num_of_layer,node,x);
        new_node->count=++elementnum;
        if(head==nullptr){
            head=new_node;
        }
        else{
            idnode *x=head;
            while(x->next!=nullptr){
                x=x->next;
            }
            x->next=new_node;
        }
    }
    int find_decl(string var_name,int layer,int num_of_layer,int count){
        idnode*x=head;
        while(x!=nullptr){
            if(x->name==var_name&&x->depth==layer&&x->num_of_depth==num_of_layer&&x->decl_or_refe==0&&x->count<count){
                return x->count;
            }
            x=x->next;
        }
        while(layer>0){
            x=head;
            while(x!=nullptr){
                if(x->name==var_name&&x->depth==layer-1&&x->num_of_depth==last_num_of_layer[layer][num_of_layer]&&x->decl_or_refe==0){
                    return x->count;
                }
                x=x->next;
            }
            layer--;
        }
        return 0;
    }
    idnode* find_by_node(TreeNode *n){
        idnode* x=head;
        while(x!=nullptr){
            if(x->node==n){
                return x;
            }
            x=x->next;
        }
        return nullptr;
    }
    void printInfo(){
        idnode *x=head;
        cout.setf(ios::left);
        while(x!=nullptr){
            if(x->decl_or_refe==1){
                x->decl_count=find_decl(x->name,x->depth,x->num_of_depth,x->count);
            }
            cout.width(5);
            cout<<x->count<<" var_name:";
            cout.width(5);
            cout<<x->name;
            cout<<"depth:";
            cout.width(5);
            cout<<x->depth;
            cout<<"num_of_depth:";
            cout.width(5);
            cout<<x->num_of_depth;
            cout.width(5);
            if(x->decl_or_refe==0)
                cout<<"DECL"<<endl;
            else
                cout<<"REFE";
            if(x->decl_or_refe==1){
                cout<<" last_decl:";
                cout.width(5);
                cout<<x->decl_count<<endl;
            }
            x=x->next;
        }
    }
};