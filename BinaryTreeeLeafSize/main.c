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

int BinaryTreeLeafSize1(BTNode* root)
{
    static int count=0;
    if(root==NULL)
    return 0;
    if(root->left==NULL && root->right==NULL)
    count++;
    BinaryTreeLeafSize1(root->left);
    BinaryTreeLeafSize1(root->right);
    return count;
}

int BinaryTreeLeafSize2(BTNode* root)
{
    if(root==NULL)
    return 0;
    return  root->left==NULL && root->right==NULL?1:
            (root->left!=NULL && root->right!=NULL?
            BinaryTreeLeafSize2(root->left)+BinaryTreeLeafSize2(root->right):
            (root->left!=NULL)?BinaryTreeLeafSize2(root->left):BinaryTreeLeafSize2(root->right));
}

int BinaryTreeLeafSize3(BTNode* root)
{
    if(root==NULL)
    return 0;
    if(root->left==NULL && root->right==NULL)
    return 1;
    return BinaryTreeLeafSize3(root->left)+BinaryTreeLeafSize3(root->right);
}


int main()
{
    BTNode* root=CreateBinaryTree();
    int ret=BinaryTreeLeafSize1(root);
    printf("size = %d\n",ret);
    ret=BinaryTreeLeafSize2(root);
    printf("size = %d\n",ret);
    ret=BinaryTreeLeafSize3(root);
    printf("size = %d\n",ret);
    return 0;
}