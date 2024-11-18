#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct treeNode
{
    int data;
    struct node*left;
    struct node*right;
}Node;
//create
Node*createnode(int value)
{
    Node*newnode=(Node*)malloc(sizeof(Node));
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

Node *minvalue(Node *root)
{
    Node root *current =root;
    while (current->left!=NULL)
    {
        current=current->left;
        return current;
    }

}
Node*insert(Node*root,int value)
{
    if(root==NULL)
    {
        return createnode(value);
    }
    if(value<root->data)
    {
        root->left=insert(root->left,value);
    }
        else if(value>root->data)
        {
            root->right=insert(root->right,value);
        }
        return root;
}
void inorder(Node *root)//lor
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d \t",root->data);
        inorder(root->right);
    }
}

void preorder(Node *root)//olr
{
    if(root!=NULL)
    {
        printf("%d \t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node *root)//lro
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d \t",root->data);
    }
}

int main()
{
    int i;
    Node*root=NULL;
    int val,choice;
    for(i=0;i<=10;i++)
    {
        printf("Enter data to insert\n");
        scanf("%d",&val);
        root=insert(root,val);
    }
     printf("In-order traversal\n");
     inorder(root);
     printf("\n");

      printf("Post-order traversal\n");
      postorder(root);
      printf("\n");

     printf("Pre-order traversal\n");
      preorder(root);
        printf("\n");

        return 0;

}





