#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

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

int minDepth(struct TreeNode* root)
{
    if(root==NULL)
    return 0;
    if(root->left==NULL&&root->right==NULL)
    return 1;
    if(root->left==NULL)
    return 1+minDepth(root->right);
    if(root->right==NULL)
    return 1+minDepth(root->left);
    int left=minDepth(root->left);
    int right=minDepth(root->right);
    return left<right?1+left:1+right;
}

int main()
{
    BTNode* root=CreateBinaryTree();
    int ret=minDepth(root);
    printf("%d\n",ret);
    system("pause");
    return 0;
}