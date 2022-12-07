#include<stdio.h>
#include<string.h>

void main()
{
    int i=0,j;
    FILE *ptr;
    char name[20][20],c;
    ptr=fopen("Abhi.txt","r");
    while((fscanf(ptr,"%s",name[i]))==1)
    {
        i++;
    }
    printf("Number of words in the File : %d",i);
    fclose(ptr);
    ptr=fopen("Abhi.txt","r");
    i=0;
    while((c=getc(ptr))!=EOF)
    {
        i++;
    }
    printf("\nNumber of characters in the File : %d",i);
    fclose(ptr);
}
