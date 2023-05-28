#include <stdio.h>
#include <stdlib.h>
typedef char BTDataType;

//编一个程序，读入用户输入的一串先序遍历字符串，根据此字符串建立一个二叉树（以指针方式存储）
//例如如下的先序遍历字符串：ABC##DE#G##F### 其中“#”表示的是空格，空格字符代表空树
//建立起此二叉树以后，再对二叉树进行中序遍历，输出遍历结果

typedef struct BinaryTreeNode
{
    struct BinaryTreeNode* left;
    struct BinaryTreeNode* right;
    BTDataType val;
}BTNode;

BTNode* BuyNode(BTDataType x)
{
    BTNode* newnode=(BTNode*)malloc(sizeof(BTNode));
    if(newnode==NULL)
    exit(-1);
    newnode->left=newnode->right=NULL;
    newnode->val=x;
    return newnode;
}



BTNode* CreateTree(char* str,int* pi)
{
    if(str[(*pi)]=='#')
    {
        (*pi)++;
        return NULL;
    }
    BTNode* root=BuyNode(str[(*pi)++]);
    root->left=CreateTree(str,pi);
    root->right=CreateTree(str, pi);
    return root;
}

void inorder(BTNode* root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    printf("%c ",root->val);
    inorder(root->right);
}

int main() 
{
    char str[105]={0};
    scanf("%s",str);
    int i=0;
    BTNode* root=CreateTree(str,&i);
    inorder(root);
    return 0;
}