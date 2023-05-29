#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef int BTDataType;

//给你两棵二叉树的根节点 p 和 q ，编写一个函数来检验这两棵树是否相同
//如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的

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

BTNode* CreateBinaryTree()
{
    BTNode* node1 = BuyNode(1);
    BTNode* node2 = BuyNode(1);
    BTNode* node3 = BuyNode(2);
    BTNode* node4 = BuyNode(1);
    BTNode* node5 = BuyNode(3);
    BTNode* node6 = BuyNode(1);
    BTNode* node7 = BuyNode(2);
    
    node1->left = node2;
    node1->right = node4;
    node2->left = node3;
    node4->left = node5;
    node4->right = node6;
    node6->left=node7;
    return node1;
}


bool isSameTree(BTNode* p, BTNode* q)
{
    if(p==NULL && q==NULL)
    return true;
    if(p==NULL||q==NULL)
    return false;
    if(p->val!=q->val)
    return false;
    return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
}


int main()
{
    BTNode* root1=CreateBinaryTree();
    BTNode* root2=CreateBinaryTree();
    int ret=isSameTree(root1,root2);
    if(ret)
    printf("yes\n");
    else
    printf("no\n");
    return 0;
}