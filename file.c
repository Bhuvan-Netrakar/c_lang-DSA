#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct person
{
    int id;
    char name[10];
    int age;
};
int main()
{
    int i;
    FILE *fp;
    struct person people[3];
    printf("enter date\n");
    for(i=0;i<=3;i++)
    {
        printf("person %d\n",i+1);
        printf("id ");
        scanf("%d",&people[i].id);
        printf("name ");
        scanf("%s",people[i].name);
        printf("age ");
        scanf("%d",&people[i].age);
    }
    fp=fopen("people.txt","w+");
    if(fp == NULL)
    {
        printf("error\n");
        exit(0);
    }
         for(i=0;i<=3;i++)
         {
             fprintf(fp,"\n %d %s %d \n",people[i].id,people[i].name,people[i].age);
         }
         fclose(fp);
    //read
     fp=fopen("people.txt","r+");
    if(fp == NULL)
    {
        printf("error");
        exit(0);
    }

        for(i=0;i<=3;i++)
        {
            fscanf(fp,"%d,%s,%d",&people[i].id,people[i].name,&people[i].age);
            printf("person %d \n",i+1);
            printf("id %d\n",people[i].id);
            printf("name %s\n",people[i].name);
            printf("age %d\n",people[i].age);
        }
        fclose(fp);


    return 0;
}
