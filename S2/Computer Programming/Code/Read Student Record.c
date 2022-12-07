#include<stdio.h>
#include<string.h>

void main()
{
    int i=0,j;
    FILE *ptr;
    char name[20][20];
    ptr=fopen("Abhi.txt","r");
    while((fscanf(ptr,"%s",name[i]))==1)
    {
        i++;
    }
    for(j=0;j<i;j++)
    {
        printf("Student %d : %s\n",j+1,name[j]);
    }
    fclose(ptr);
}
