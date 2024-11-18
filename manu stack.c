#include<stdio.h>
#include<stdlib.h>

void push();
void display();
void pop();
int stack[100];
int top=-1;
int n;
int i;
int choice;
int value;


void push()
{
    if(top==n-1)
    {
        printf("Stack is Full\n");
    }
    else
    {
        printf("Enter your value: \n");
        scanf("%d",&value);
        top=top+1;
        stack[top]=value;
    }
}

void display()
{

    if(top==-1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nDisplay stack: ");
        for(i=top;i>=0;i--)
        {
            printf("%d\t",stack[i]);
        }
    }

}

void pop()
{
    if(top==-1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nPopped element is %d\n",stack[top]);
        top=top-1;
    }

}



int main()
{
    printf("enter your no. of elements in stack:\n");
    scanf("%d",&n);

    while(choice != 4)
    {

    printf("\n *********manu*********** \n");
    printf("\n 1->push the elements \n");
    printf("\n 2->pop the elements \n");
    printf("\n 3->display\n");
    printf("\n 4->exit\n");
    printf("enter your choice");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
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
        }default:
             printf("\nIncorrect Choice\n");
        }


    }
}
