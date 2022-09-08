#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
}*root=NULL;

void createNode()
{
    int key;
    struct Node *root;
    printf("Enter the data to add:- ");
    scanf("%d", &key);
    if (root == NULL)
    {
        root = (struct Node *)malloc(sizeof(struct Node));
        root->data = key;
        root->lchild = NULL;
        root->rchild = NULL;
        printf("\n\nData Added successfully\n\n");
        return;
    }

    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = key;
    newNode->lchild = NULL;
    newNode->rchild = NULL;

    struct Node *temp = root;
    while (temp)
    {
        if (temp->data < key)
        {
            if (temp->rchild == NULL)
            {
                temp->rchild = newNode;
                printf("\n\nData Added successfully\n\n");
                return;
            }
            temp = temp->rchild;
        }
        else
        {
            if (temp->lchild == NULL)
            {
                temp->lchild = newNode;
                printf("\n\nData Added successfully\n\n");
                return;
            }
            temp = temp->lchild;
        }
    }
}
void Insert(int key)
{
    struct Node *t=root;
    struct Node *r=NULL,*p;
    if(root==NULL)
    {
        p=(struct Node *)malloc(sizeof(struct Node));
        p->data=key;
        p->lchild=p->rchild=NULL;
        root=p;
        return;
        }
        while(t!=NULL)
        {
            r=t;
            if(key<t->data)
            t=t->lchild;
            else if(key>t->data)
            t=t->rchild;
            else
            return;
        }
        p=(struct Node *)malloc(sizeof(struct Node));
        p->data=key;
        p->lchild=p->rchild=NULL;
        if(key<r->data) r->lchild=p;
        else r->rchild=p;
}

struct Node *RInsert(struct Node *p,int key)
{
    struct Node *t=NULL;
    if(p==NULL)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=key;
        t->lchild=t->rchild=NULL;
        return t;
        
    }
    if(key < p->data)
    p->lchild=RInsert(p->lchild,key);
    else if(key > p->data)
    p->rchild=RInsert(p->rchild,key);
    return p;

}
struct Node * Search(int key)
{
    struct Node *t=root;
    while(t!=NULL)
    {
        if(key==t->data)
        return t;
        else if(key<t->data)
        t=t->lchild;
        else
        t=t->rchild;
    }
return NULL;
}
void Inorder(struct Node *p)
{
    if(p)
    {
        Inorder(p->lchild);
        printf("%d ",p->data);
        Inorder(p->rchild);
    }
}

int main()
{
    struct Node *temp;
    root=RInsert(root,50);
    RInsert(root,10);
    RInsert(root,40);
    RInsert(root,20);
    RInsert(root,30);
    int choice;
    int key1;

    printf("Enter 0 to Quit\n");
    printf("Enter 1 for Insertion\n");
    printf("Enter 2 for Inorder Traversal\n");
    printf("Enter 3 for Searching an key\n");
    printf("Enter your choice:- ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 0:
        exit(0);
        break;
    case 1:
        createNode();
        break;
    case 2:
        Inorder(root);
        printf("\n\n");
        break;
    case 3:
        temp=Search(20);
        if(temp!=NULL)
        printf("element %d is found\n",temp->data);
        else
        printf("element is not found\n");
        printf("\n\n");
        break;
    default:
    printf("\n\nWrong Choice :) \n");
        break;
    }

    return 0;
}