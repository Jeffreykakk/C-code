#include <stdio.h>
#include <stdlib.h>

typedef int BTDataType;

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

int TreeSize(BTNode* root)
{
    return root==NULL?0:1+TreeSize(root->left)+TreeSize(root->right);
}

void preorder(BTNode* root,int* arr,int* pi)
{
    if(root==NULL)
    return;
    arr[(*pi)++]=root->val;
    preorder(root->left,arr,pi);
    preorder(root->right,arr,pi);
}

int* preorderTraversal(BTNode* root, int* returnSize)
{
    *returnSize=TreeSize(root);
    int* arr=(int*)malloc(sizeof(int)*(*returnSize));
    int i=0;
    preorder(root,arr,&i);
    return arr;
}

int main()
{
    BTNode* root=CreateBinaryTree();
    int returnSize=0;
    int* arr=preorderTraversal(root,&returnSize);
    int i=0;
    for(i=0;i<returnSize;i++)
    printf("%d ",arr[i]);
    free(arr);
    return 0;
}