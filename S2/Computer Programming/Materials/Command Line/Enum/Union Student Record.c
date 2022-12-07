#include<stdio.h>

union record
{
    int percent;
    char name[10];
    char subject[10];
}s1,s2,s3;

void main()
{
    printf("Enter the Name of the Student : ");
    scanf(" %s",s1.name);
    printf("Enter the Subject of the Student : ");
    scanf(" %s",s2.subject);
    printf("Enter the Percentage of the Student : ");
    scanf("%d",&s3.percent);
    printf("\nThe Name of the Student is : %s",s1.name);
    printf("\nThe Subject of the Student is : %s",s2.subject);
    printf("\nThe Percentage of the Student is : %d",s3.percent);
}
