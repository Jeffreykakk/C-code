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
    
    node1->left = node2;
    node1->right = node4;
    node2->left = node3;
    node4->left = node5;
    node4->right = node6;
    return node1;
}

int BinaryTreeSize1(BTNode* root)
{
    static int count=0;
    if(root==NULL)
    return 0;
    count++;
    BinaryTreeSize1(root->left);
    BinaryTreeSize1(root->right);
    return count;
}

int BinaryTreeSize2(BTNode* root)
{
    return root==NULL?0:1+BinaryTreeSize2(root->left)+BinaryTreeSize2(root->right);
}

int main()
{
    BTNode* root=CreateBinaryTree();
    int ret=BinaryTreeSize1(root);
    printf("size = %d\n",ret);
    ret=BinaryTreeSize2(root);
    printf("size = %d\n",ret);
    return 0;
}