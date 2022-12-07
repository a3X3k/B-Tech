#include<stdio.h>

struct student{
    int roll;
    char* name;
    float mark;
};

struct subject{
    char* name;
    int numerical_code;
};

void main()
{
    printf("sizeof(struct student) is %d",sizeof(struct student));
    printf("\nsizeof(struct subject) is %d",sizeof(struct subject));
}
