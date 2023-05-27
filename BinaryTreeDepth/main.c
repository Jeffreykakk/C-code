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
    return newnode;
}

BTNode* CreateBinaryTree()
{
    BTNode* node1 = BuyNode(1);
    BTNode* node2 = BuyNode(2);
    BTNode* node3 = BuyNode(3);
    BTNode* node4 = BuyNode(4);
    BTNode* node5 = BuyNode(5);
    BTNode* node6 = BuyNode(6);
    BTNode* node7 = BuyNode(7);
    
    node1->left = node2;
    node1->right = node4;
    node2->left = node3;
    node4->left = node5;
    node4->right = node6;
    node6->left=node7;
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

int BinaryTreeDepth1(BTNode* root)
{
    int k=1;
    while(BinaryTreeLevelKSize(root,k))
    k++;
    return k-1;
}

int BinaryTreeDepth2(BTNode* root)
{
    if(root==NULL)
    return 0;
    if(root->left==NULL && root->right==NULL)
    return 1;
    int depth_left=BinaryTreeDepth2(root->left);
    int depth_right=BinaryTreeDepth2(root->right);
    return  1+(depth_left>depth_right?depth_left:depth_right);
}

int main()
{
    BTNode* root=CreateBinaryTree();
    int depth=BinaryTreeDepth1(root);
    printf("%d\n",depth);
    depth=BinaryTreeDepth2(root);
    printf("%d\n",depth);
    return 0;
}