#include<stdio.h>
#include<string.h>

void main()
{
    int n,i;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    FILE *ptr;
    ptr=fopen("Abhi.txt","w");
    if(ptr==NULL)
    {
        printf("Error in File Opening!");
        return;
    }
    char name[20];
    for(i=0;i<n;i++)
    {
        printf("Enter the Name of the Student %d : ",i+1);
        scanf("%s",name);
        fprintf(ptr,name);
        fprintf(ptr,"\n");
    }
    fclose(ptr);
    printf("\nOutput : \n\n");
    ptr=fopen("Abhi.txt","r");
    while((fscanf(ptr,"%s",name))==1)
    {
        puts(name);
    }
    fclose(ptr);
}
