#include<stdio.h>
#include<stdio.h>
int sum();
void display();

int sum(int x)
{
    int s;
    int sum=0;
    if(x==1)
    {
        return x;
        s=x+sum(x-1);
        return s;
    }
}

void display()
{
    int n;
    if(n<1)
    {
        return ;
    }
    else
    {
        printf("%d",n);
        display(n-1);
        printf("%d",n);
    }
}
void main()
{
    int n=3;
    display(n);
}
