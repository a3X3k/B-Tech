//Program 8

#include<stdio.h>

struct student{
    int roll;
};

void main()
{
    struct student s;
    struct student *ptr;
    ptr=&s;
    ptr->roll=10;
    printf("%d",ptr->roll);

    struct student s1={20};;
    struct student *ptr1;
    ptr1=&s1;
    printf("\n%d",ptr1->roll);
}


