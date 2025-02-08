#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}Node;

void PostOrder(Node* n)
{
    if(n == NULL)
    {
        return;
    }
    PostOrder(n->left);
    PostOrder(n->right);
    printf("%d ", n->data);

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
    Node* root = createNode(4);
    root->left = createNode(1);
    root->right = createNode(6);
    root->left->left = createNode(5);
    root->left->right = createNode(2);
    //root->right->left = createNode(6);
    //root->right->right = createNode(7);
    PostOrder(root); //5,2,1,6,4
    return 0;
}












