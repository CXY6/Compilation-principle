#include "common.h"
#include <fstream>
#include <algorithm>
#include "symboltable.h"

extern TreeNode *root;
extern FILE *yyin;
extern int yyparse();
int layer=0;
int num_of_layer[50];
int last_num_of_layer[50][50];
idlist IDlist;

using namespace std;
int main(int argc, char *argv[])
{
    #define YYDEBUG 1
    extern int yydebug;
    //yydebug = 1;
    if (argc == 2)
    {
        FILE *fin = fopen(argv[1], "r");
        if (fin != nullptr)
        {
            yyin = fin;
        }
        else
        {
            cerr << "failed to open file: " << argv[1] << endl;
        }
    }
    fill(num_of_layer,num_of_layer+50,0);
    fill(last_num_of_layer[0],last_num_of_layer[0]+50*50,-1);
    yyparse();
    cout << "============== parse done!!!\n";
    if(root != NULL) {
        cout << "============== begin gen node id!!!\n";
        root->genNodeId();
        cout << "============== begin print ast!!!\n";
        root->printAST();
        cout<<"==============begin print symbol table information!!!\n";
        IDlist.printInfo();
    }
    return 0;
}