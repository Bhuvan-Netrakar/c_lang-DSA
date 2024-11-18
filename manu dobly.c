#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
int data;
struct node * next;
};
struct node *head=NULL;
void insertbegindoubly();

void insertposition(int pos,int data,struct node *head);
void insertend(int item);


void insertposition(int pos,int data,struct node *head)
{
    struct node *temp;
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->next=NULL;
    printf("\nenter at position:");

    scanf("%d",&pos);
    if(pos==1){
            insertbegindoubly();

    }
    else{
             pos=pos-1;
    printf("enter data:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(pos==0)
        {
            head=newnode;
        }
    else{
        temp=head;
        while(--pos)
            {
                temp=temp->next;
            }
        newnode->next = temp->next;
        temp->next = newnode;
        }

    }

}

void insertend(int item)
{
    struct node *temp;
    struct node *newnode=(struct node *)malloc(sizeof(struct node *));
    printf("\nenter data for end node ");
    scanf("%d",&newnode->data);
    if(head==NULL){
            newnode->next=NULL;
            head=newnode;
    }
    else{
            temp=head;
            while(temp->next!=NULL){
            temp=temp->next;
            }
    temp->next=newnode;
    newnode->next=NULL;
    }
}
void insertbegindoubly()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter data : ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }

    else{
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
}

void displayforward()
{
    struct node *temp;
    if(head==NULL){
        printf("List is empty\n");
    }
    else{
        temp=head;
        printf("list elements in doubly linked list are:\n");
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
}

int main()
{
    int op=0;
    int item,nth;
    while(op!=5)
    {


    printf("\n**********Menu************\n");
    printf("1>Insert begin\n");
    printf("2>Insert position\n");
    printf("3>Insert end\n");
    printf("4>Display\n");
    printf("5>exit\n");
    printf("\nEnter your choice\n");
    scanf("%d",&op);

    switch(op)
    {
    case 1:


            insertbegin();
            break;

    case 2:

         insertposition(nth,item,head);
         break;

    case 3:

        insertend(item);
        break;
    case 4:

        display();
        break;

    case 5:
        exit(0);
        break;
        default:
            printf("\nIncorrect Choice\n");

    }
    }
    return 0;
}
