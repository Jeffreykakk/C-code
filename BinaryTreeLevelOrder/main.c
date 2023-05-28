#include "Queue.h"

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

//层序遍历
void BinaryTreeLevelOrder(BTNode* root)
{
    Queue q={0};
    QueueInit(&q);
    if(root==NULL)
    {
        QueueDestroy(&q);
        return;
    }
    QueuePush(&q,root);
    while(!QueueEmpty(&q))
    {
        BTNode* front=QueueFront(&q);
        printf("%d ",front->data);
        QueuePop(&q);
        if(front->left)
        QueuePush(&q,front->left);
        if(front->right)
        QueuePush(&q,front->right);
    }
    QueueDestroy(&q);
}

void BinaryTreeDestroy(BTNode* root)
{
    if(root==NULL)
    return;
    BinaryTreeDestroy(root->left);
    BinaryTreeDestroy(root->right);
    free(root);
}

int main()
{
    BTNode* root=CreateBinaryTree();
    BinaryTreeLevelOrder(root);
    BinaryTreeDestroy(root);
    system("pause");
    return 0;
}