#include <stdio.h>
#include <stdlib.h>

typedef int BTDataType;

typedef struct BinaryTreeNode
{
    struct BinaryTreeNode* left;
    struct BinaryTreeNode* right;
    BTDataType data;
}BTNode;

BTNode* BuyNode(BTDataType x)
{
    BTNode* newnode=(BTNode*)malloc(sizeof(BTNode));
    if(newnode==NULL)
    exit(-1);
    newnode->left=newnode->right=NULL;
    newnode->data=x;
}

BTNode* CreateBinaryTree()
{
    BTNode* node1 = BuyNode(1);
    BTNode* node2 = BuyNode(2);
    BTNode* node3 = BuyNode(3);
    BTNode* node4 = BuyNode(4);
    BTNode* node5 = BuyNode(5);
    BTNode* node6 = BuyNode(6);
    
    node1->left = node2;
    node1->right = node4;
    node2->left = node3;
    node4->left = node5;
    node4->right = node6;
    return node1;
}

int BinaryTreeLevelKSize(BTNode* root,int k)
{
    if(root==NULL)
    return 0;
    if(k==1)
    return 1;
    return BinaryTreeLevelKSize(root->left,k-1)+BinaryTreeLevelKSize(root->right,k-1);
}

int main()
{
    BTNode* root=CreateBinaryTree();
    int count=BinaryTreeLevelKSize(root,3);
    printf("%d\n",count);
    return 0;
}