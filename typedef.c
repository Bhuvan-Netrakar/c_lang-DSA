#include<stdio.h>
#include<malloc.h>

typedef struct node
{
    int data;
    struct node * next;
}st;
st *head=NULL;
void stacksinglyinsertbegin();
void stacksinglypop();
void display();
int main()
{
    int n,choice;
    printf("\nEnter number of elements : ");
    scanf("%d",&n);
     while(choice!=4){
        printf("\n\nMenu\n");
        printf("1.stack as singly push\n");
        printf("2.stack as singly pop\n");
        printf("3.stack as singly Display\n");
        printf("4.Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                stacksinglyinsertbegin();
                break;
            case 2:
                stacksinglypop();
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
void stacksinglyinsertbegin(){
    st *newnode;
    newnode=(st *)malloc(sizeof(st));
    printf("enter data:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
            head=newnode;
    }
    else{
            newnode->next=head;
            head=newnode;
        }
}

void stacksinglypop()
{
    st *temp;
    if (head == NULL) {
        printf("\nstack element %d popped\n", temp->data);
    }
    else {
        temp = head;
        head = head->next;
        printf("\nstack element %d popped\n", temp->data);
        free(temp);
    }
}


void display()
{
    st *temp;
    if(head==NULL)
        {
            printf("\nlist is empty\n");
    }
    else{
            temp=head;
            printf("List elements\n");
            while(temp!=NULL)
                {
                    printf("%d\t",temp->data);
                    temp=temp->next;
                }
        }
}
