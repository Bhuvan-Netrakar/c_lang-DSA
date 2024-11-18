//singly queue

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front;
struct node *rear;
void insertqueue();
void deletequeue();
void display();

int main()
{
    int choice;
    while(choice != 4)
    {
        printf("\nMenu\n");
        printf("1. Insert queue\n");
        printf("2. Delete queue\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                insertqueue();
                break;
            case 2:
                deletequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\nExiting the program\n");
                break;
            default:
                printf("\nInvalid choice\n");
        }
    }
    return 0;
}

void insertqueue()
{
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    int item;
    if(ptr==NULL)
    {
        printf("\nover flow");
        return;
    }
    else{
        printf("\nEnter data: ");
        scanf("%d",&item);
        ptr->data=item;
        if(front==NULL){
            front=ptr;
            rear=ptr;
            front->next=NULL;
            rear->next=NULL;
        }
        else{
            rear->next=ptr;
            rear=ptr;
            rear->next=NULL;
        }
    }
}

void deletequeue()
{
    struct node *ptr;
    if(front == NULL)
    {
        printf("Queue is empty\n");
        return;
    }
    else{
        ptr=front;
        front=front->next;
        printf("queue element %d deleted",ptr->data);
        free(ptr);
    }
}

void display()
{
    struct node *ptr;
    ptr=front;
    if(front == NULL)
    {
        printf("Queue is empty\n");
    }
    else{
        printf("\nQueue elements : ");
        while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
        }
    }
}
