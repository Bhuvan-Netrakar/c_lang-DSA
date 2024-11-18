//Quick Sort

#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

int partition(int array[],int low,int high)
{
    int j;
    int pivot=array[high];
    int i=(low-1);
    for(j=low;j<high;j++){
        if(array[j]<=pivot){
            i++;
            swap(&array[i],&array[j]);
        }
    }
    swap(&array[i+1],&array[high]);
    return i+1;
}

void quicksort(int array[],int low,int high)
{
    if(low<high){

        int pi=partition(array,low,high);
        quicksort(array,low,pi-1);
        quicksort(array,pi+1,high);
    }
}

void printarray(int array[],int size)
{
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

int main()
{
    int data[]={8,6,33,75,69,32,70,56};
    int n=sizeof(data)/sizeof(data[0]);
    printf("Unsorted Array : ");
    printarray(data,n);
    quicksort(data,0,n-1);
    printf("\nQuick Sort array : ");
    printarray(data,n);
}
