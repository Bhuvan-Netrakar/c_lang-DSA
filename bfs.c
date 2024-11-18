#include<stdio.h>
#include<stdlib.h>
#define MAX_VERTICES 100

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int data)
{
    struct Node *newnode=(struct Node *)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
};

void addEdge(struct Node *adjlist[],int u,int v)
{
    struct Node*newnode=createNode(v);
    newnode->next=adjlist[u];
    adjlist[u]=newnode;
}

void BFS(struct Node *adjlist[],int vertices,int startNode,int visited[])
{
    int queue[MAX_VERTICES];
    int front=0,rear=0;
    visited[startNode]=1;
    queue[rear++]=startNode;
    while(front<rear){
        int currentNode=queue[front++];
        printf("%d\t",currentNode);
        struct Node *temp=adjlist[currentNode];
        while(temp!=NULL)
            {
            int neighbour=temp->data;
            if(!visited[neighbour])
            {
                visited[neighbour]=1;
                queue[rear++]=neighbour;
            }
            temp=temp->next;
        }
    }
}

int main()
{
    //bfs1
    int vertices=5,i;
    struct Node *adjlist[vertices];
    for(i=0;i<vertices;i++)
        adjlist[i]=NULL;
    addEdge(adjlist,0,1);
    addEdge(adjlist,0,2);
    addEdge(adjlist,1,3);
    addEdge(adjlist,1,4);
    addEdge(adjlist,2,4);
    addEdge(adjlist,3,5);

    int visited[vertices];
    for(i=0;i<vertices;++i)
        visited[i]=0;
    printf("BFS start vertex ");
    BFS(adjlist,vertices,0,visited);
    return 0;
}
