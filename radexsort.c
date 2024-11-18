//Radix Sort

#include<stdio.h>
#include<stdlib.h>

int getMax(int a[],int n)
{
    int i;
    int max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max)
            max=a[i];
    }
    return max;
}

void countingsort(int a[],int n,int place)
{
    int output[n+1];
    int count[10]={0};
    int i;
    for(i=0;i<n;i++)
        count[(a[i]/place)%10]++;
    for(i=1;i<10;i++)
        count[i]+=count[i-1];
    for(i=n-1;i>=0;i--){
        output[count[(a[i]/place)%10]-1]=a[i];
        count[(a[i]/place)%10]--;
    }
    for(i=0;i<n;i++)
        a[i]=output[i];
}

void radixsort(int a[],int n)
{
    int place;
    int max=getMax(a,n);
    for(place=1;max/place>0;place*=10)
        countingsort(a,n,place);
}

void printArray(int a[],int n)
{
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
        printf("\n");
}

int main()
{
    int a[]={332,112,543,253,856,637,902,723,576};
    int n=sizeof(a)/sizeof(a[0]);
    printf("Before Sorting array : ");
    printArray(a,n);
    radixsort(a,n);
    printf("\nAfter applying radix sort,the array element are : ");
    printArray(a,n);
    return 0;
}
