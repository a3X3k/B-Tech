#include<stdio.h>

struct student{
    int roll;
    char* name[10];
    float mark;
};

void main()
{
    struct student s;
    printf("Enter the Roll number of the Student : ");
    scanf("%d",&s.roll);
    printf("Enter the Name of the Student : ");
    scanf("%s",&s.name);
    printf("Enter the Mark of the Student : ");
    scanf("%f",&s.mark);
    printf("The student %s with roll number %d has secured %f marks.",s.name,s.roll,s.mark);
}
