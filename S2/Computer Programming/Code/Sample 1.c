//Program 10

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *p,i,n;
    printf("Enter the max size : ");
    scanf("%d",&n);
    p=malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        p[i]=i;
    }
    printf("The Elements are : ");
    for(i=0;i<5;i++)
    {
        printf("%d ",p[i]);
    }
    free(p);
}

//Program 11
#include<stdio.h>

void main()
{
    int i,n;
    printf("Enter the max size : ");
    scanf("%d",&n);
    int p[n];
    for(i=0;i<n;i++)
    {
        p[i]=i;
    }
    printf("The Elements are : ");
    for(i=0;i<5;i++)
    {
        printf("%d ",p[i]);
    }
}

