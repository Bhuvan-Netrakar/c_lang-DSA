
#include<stdio.h>
#include<stdlib.h>
int arr[10]={1,2,6,8,5,7,32,41,95,32};
int i,j,temp,max;
int main()
{
    if(arr[j]>arr[j+1])
    {
        temp= arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
}
