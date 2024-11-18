#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
    int data;
    struct node*next;
};
struct node *head=NULL;
void insertcirsinglybegin();
void display();


void insertcirsinglybegin()
{
    struct node *temp;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&newnode->data);
    newnode -> next=NULL;
    if(head==NULL)
    {
        head=newnode;
        newnode->next=head;
    }
    else
    {
        temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        newnode->next=head;
        temp->next=newnode;
        head=newnode;
    }

}

void display()
{
    struct node *temp;

    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        temp=head;
        while(temp->next!=head)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);
    }

}

void main()
{
    int i;
    for(i=0;i<=5;i++)
    {
        insertcirsinglybegin();
    }
    display();



}

