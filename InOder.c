#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}Node;

void InOrder(Node* n)
{
    if(n == NULL)
    {
        return;
    }
    InOrder(n->left);
    printf("%d ", n->data);
    InOrder(n->right);
}

Node* createNode(int item)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = item;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int main()
{
    printf("Running\n");
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    InOrder(root);
    return 0;
}












