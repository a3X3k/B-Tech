#include<stdio.h>

struct student{
    int roll;
    char* name;
    float mark;
};

void main()
{
    struct student s;
    s.roll=20;
    printf("%d",s.roll);
}
