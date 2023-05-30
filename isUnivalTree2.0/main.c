#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef int BTDataType;

//如果二叉树每个节点都具有相同的值，那么该二叉树就是单值二叉树
//只有给定的树是单值二叉树时，才返回 true；否则返回 false

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
    BTNode* node3 = BuyNode(1);
    BTNode* node4 = BuyNode(1);
    BTNode* node5 = BuyNode(1);
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


bool isUnivalTree(BTNode* root)
{
    if(root==NULL)
    return true;
    if(root->left==NULL&&root->right==NULL)
    return true;
    if(root->left!=NULL && root->val!=root->left->val)
    return false;
    if(root->right!=NULL && root->val!=root->right->val)
    return false;
    return isUnivalTree(root->left)&&isUnivalTree(root->right);
}

int main()
{
    BTNode* root=CreateBinaryTree();
    int ret=isUnivalTree(root);
    if(ret)
    printf("yes\n");
    else
    printf("no\n");
    return 0;
}