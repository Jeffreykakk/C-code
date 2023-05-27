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

//前序遍历
void preorder(BTNode* root)
{
    if(root==NULL)
    {
        printf("# ");
        return;
    }
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}

//中序遍历
void inorder(BTNode* root)
{
    if(root==NULL)
    {
        printf("# ");
        return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

//后序遍历
void postorder(BTNode* root)
{
    if(root==NULL)
    {
        printf("# ");
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}

int main()
{
    BTNode* root=CreateBinaryTree();
    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    return 0;
}