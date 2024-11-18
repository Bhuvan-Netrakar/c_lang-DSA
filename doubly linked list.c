#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
struct node * prev;
int data;
struct node * next;
};
struct node*head=NULL;
void insertbegindoubly();
void displayforwad();
void displaybackward();
int main()
{
insertbegindoubly();
insertbegindoubly();
insertbegindoubly();
displayforwad();
displaybackward();
return 0;
}
void insertbegindoubly()
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data:");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
}
else
{
newnode->next=head;
head->prev=newnode;
head=newnode;
}
}


void displayforwad()
{
struct node *temp;
if(head==NULL)
{
printf("list is empty\n");
}
else{
temp=head;
printf("backwardslist\n");
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}
}


void displaybackward()
{
struct node *temp1;
if(head==NULL)
{
printf("list is empty\n");
}
else{
temp1=head;
while(temp1->next!=NULL)
{
temp1=temp1->next;
}
printf("\nforward list\n");
while(temp1!=head)
{
printf("%d\t",temp1->data);
temp1=temp1->prev;
}
printf("%d\t",temp1->data);
}
}
