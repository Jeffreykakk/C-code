#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


//给你一棵二叉树的根节点 root ，翻转这棵二叉树，并返回其根节点

typedef struct TreeNode 
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
}BTNode;

BTNode* BuyNode(int x)
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
    BTNode* node1 = BuyNode(3);
    BTNode* node2 = BuyNode(9);
    BTNode* node3 = BuyNode(20);
    BTNode* node4 = BuyNode(15);
    BTNode* node5 = BuyNode(7);

    
    node1->left = node2;
    node1->right = node3;
    node3->left = node4;
    node3->right = node5;
    return node1;
}

BTNode *invertTree(struct TreeNode *root)
{
    if (root == NULL)
    return NULL;
    struct TreeNode *tmp = root->left;
    root->left = root->right;
    root->right = tmp;
    invertTree(root->left);
    invertTree(root->right);
    return root;
}

int main()
{
    BTNode *root = CreateBinaryTree();
    root=invertTree(root);
    system("pause");
    return 0;
}