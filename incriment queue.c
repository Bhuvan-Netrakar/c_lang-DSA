#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int arr[5];
    int rear;
    int front;
};
struct queue que;

void display();
void insertqueue();
void deletequeue();
void display();
int n;
int i;


int main()
{
    printf("\n enter the size of array \n");
    scanf("%d",&n);
    for(i=0,i<=n,i++)
    {
        scanf("%d",&queue->arr);
    }
    insertqueue();
    display();
    deletequeue();
    display();
}

void insertqueue()
{
    int value;
    if(queue->rear==-1)
    {
        printf("\n queue is empaty\n");
    }
    else
    {
        //if(front==-1)
        //{
        front=0;
        //}
        printf("\n enter the value");
        scanf("%d",&value);
        queue->rear=queue->rear+1;
        queue[queue->rear]=value;
    }
}

void deletequeue()
{
    if (queue->front==-1||queue->front>queue->rear)
    {
         printf("\nqueue is empaty\n");
    }
    else
    {
        printf("\n deleted item \n",queue[queue->front]);
        front=front+1;
    }
}


void display()
{
    printf("your queue:");
    for(i=front;i<=rear;i++)
    {
        printf("\t %d \t",queue[i]);
    }
}
