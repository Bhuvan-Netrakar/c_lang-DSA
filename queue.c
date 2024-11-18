#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int queue[5];
int front=-1;
int rear=1;
void insertqueue();
void deletequeue();
void display();
int value;
int i;

void insertqueue()
{
    if(rear==-1)
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
        rear=rear+1;
        queue[rear]=value;
    }
}

void deletequeue()
{
    if (front==-1||front>rear)
    {
         printf("\nqueue is empaty\n");
    }
    else
    {
        printf("\n deleted item \n",queue[front]);
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

int main()
{
    int choice;

   // printf("enter your no. of elements in stack:\n");
    //scanf("%d",&n);

    printf("Bhuvan\n");
    printf("01fe23bec434\n");
    printf("151\n");
    while(choice != 4)
    {

    printf("\n *********manu*********** \n");
    printf("\n 1->insert queue\n");
    printf("\n 2-> delete queue\n");
    printf("\n 3->display\n");
    printf("\n 4->exit\n");
    printf("enter your choice");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        {
            insertqueue();
            break;
        }
        case 2:
        {
            deletequeue();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            exit(0);
            break;
        }
        default:
             {printf("\nIncorrect Choice\n");
        }
    }
    }

    return 0;
}
