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

BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
    if(root==NULL)
    return NULL;
    if(root->data==x)
    return root;
    BTNode* ret_left=BinaryTreeFind(root->left,x);
    if(ret_left)
    return ret_left;
    BTNode* ret_right=BinaryTreeFind(root->right,x);
    if(ret_right)
    return ret_right;
    return NULL;
}


int main()
{
    BTNode* root=CreateBinaryTree();
    BTNode* ret=BinaryTreeFind(root,5);
    if(ret)
    printf("%d\n",ret->data);
    else
    printf("Not Found\n");
    return 0;
}