//Merge Sort

#include<stdio.h>
#include<stdlib.h>

void merge(int arr[],int p,int q,int r)
{
    int i,j,k;
    int n1=q-p+1;
    int n2=r-q;
    int L[n1],M[n2];
    for(i=0;i<n1;i++)
        L[i]=arr[p+i];
    for(j=0;j<n2;j++)
        M[j]=arr[q+1+j];
    i=0;j=0;k=p;

    while(i<n1&&j<n2){
        if(L[i]<=M[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=M[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=M[j];
        j++;
        k++;
    }
}

void mergesort(int arr[],int I,int r)
{
    if(I<r){
        int m=I+(r-I)/2;
        mergesort(arr,I,m);
        mergesort(arr,m+1,r);
        merge(arr,I,m,r);
    }
}

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{

    int arr[]={7,1,5,9,32,4,8,2,12};
    int size=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,size-1);
    printf("\n Sorted Array : ");
    printArray(arr,size);
    return 0;
}
