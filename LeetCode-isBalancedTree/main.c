#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>


//给定一个二叉树，判断它是否是高度平衡的二叉树
//一棵高度平衡二叉树定义为：一个二叉树每个节点的左右两个子树的高度差的绝对值不超过 1

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

int maxDepth(struct TreeNode* root)
{
    if(root==NULL)
    return 0;
    int left=maxDepth(root->left);
    int right=maxDepth(root->right);
    return left>right?1+left:1+right;
}

bool isBalanced(struct TreeNode* root)
{
    if(root==NULL)
    return true;
    int left=maxDepth(root->left);
    int right=maxDepth(root->right);
    if(abs(left-right)>1)
    return false;
    int ret1=isBalanced(root->left);
    int ret2=isBalanced(root->right);
    if(ret1&&ret2)
    return true;
    return false;
}

int main()
{
    BTNode *root = CreateBinaryTree();
    int ret=isBalanced(root);
    printf("%d\n",ret);
    system("pause");
    return 0;
}