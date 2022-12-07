#include<stdio.h>

struct student{
    int roll;
    char* name;
    float mark;
};

void main()
{
    struct student s1,s2;
    s1.roll=1;
    s1.name="Abhi";
    s1.mark=99;

    s2.roll=2;
    s2.name="S.Abhishek";
    s2.mark=99;

    printf("The student %s with roll number %d has secured %f marks.",s1.name,s1.roll,s1.mark);
    printf("\nThe student %s with roll number %d has secured %f marks.",s2.name,s2.roll,s2.mark);
}
