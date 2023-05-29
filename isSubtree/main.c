#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef int BTDataType;

//给你两棵二叉树root和subRoot 
//检验root中是否包含和subRoot具有相同结构和节点值的子树
//如果存在，返回true；否则，返回false


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

BTNode* CreateBinaryTree1()
{
    BTNode* node1 = BuyNode(3);
    BTNode* node2 = BuyNode(4);
    BTNode* node3 = BuyNode(5);
    BTNode* node4 = BuyNode(1);
    BTNode* node5 = BuyNode(2);

    node1->left = node2;
    node1->right = node3;
    node2->left = node4;
    node2->right = node5;

    return node1;
}

BTNode* CreateBinaryTree2()
{
    BTNode* node1 = BuyNode(4);
    BTNode* node2 = BuyNode(1);
    BTNode* node3 = BuyNode(2);
    
    
    node1->left = node2;
    node1->right = node3;
    return node1;
}

bool isSameTree(BTNode* p, BTNode* q)
{
    if(p==NULL && q==NULL)
    return true;
    if(p==NULL||q==NULL)
    return false;
    if(p->val!=q->val)
    return false;
    return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
}

bool isSubtree(BTNode* root, BTNode* subRoot)
{
    if(root==NULL)
    return false;
    int ret=isSameTree(root,subRoot);
    if(ret)
    return true;
    return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
}

int main()
{
    BTNode* root1=CreateBinaryTree1();
    BTNode* root2=CreateBinaryTree2();
    int ret=isSubtree(root1,root2);
    if(ret)
    printf("yes\n");
    else
    printf("no\n");
    return 0;
}