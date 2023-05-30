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
    BTNode* node7 = BuyNode(1);
    
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
    if(root->left==NULL && root->right==NULL)
    return true;
    else if(root->left!=NULL && root->right!=NULL)
    {   
        int ret_left,ret_right;
        if(root->val==root->left->val)
        ret_left=isUnivalTree(root->left);
        else
        return false;
        if(root->val==root->right->val)
        ret_right=isUnivalTree(root->right);
        else
        return false;
        if(ret_left&&ret_right)
        return true;
        else
        return false;
    }
    else if(root->left!=NULL)
    {
        int ret_left;
        if(root->val==root->left->val)
        ret_left=isUnivalTree(root->left);
        else
        return false;
        if(ret_left)
        return true;
        else
        return false;
    }
    else
    {
        int ret_right;
        if(root->val==root->right->val)
        ret_right=isUnivalTree(root->right);
        else
        return false;
        if(ret_right)
        return true;
        else
        return false;
    }
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