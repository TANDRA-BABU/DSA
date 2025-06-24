#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int item;
    struct node *left;
    struct node *right;
};

struct node* create(int value) 
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->item = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void insertleft(int value , struct node *root)
{
    root->left=create(value);
}
void insertright(int value , struct node *root)
{
    root->right=create(value);
}

void innerordertraversal(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    innerordertraversal(root->left);
    printf("%d", root->item);
    innerordertraversal(root->right);
    printf("%d", root->item);
}

void preordertraversal(struct node *root)
{
    if(root == NULL)
    {
        return;
    }
    printf("%d", root->item);
    preordertraversal(root->left);
    preordertraversal(root->right);
}

void postordertraversal(struct node *root)
{
    if(root == NULL)
    {
        return;
    }
    postordertraversal(root->left);
    postordertraversal(root->right);
    printf("%d", root->item);
}

int main() 
{
   
    struct node *root =create(2);
    insertleft(1, root);
    insertright(6 ,root);
    insertleft(32,root->left);
    insertright(17,root->left);
    insertleft(-1,root->left->left);
    insertright(-5,root->left->left);
    insertleft(85,root->right);
    insertright(100,root->right);
    insertleft(90,root->right->left);
    insertright(95,root->right->right);

    return 0;
}
