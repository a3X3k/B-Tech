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
    struct student s1;
    s1.numerical_code=10; //Error 
    printf("%d",s1.numerical_code); //Error no member

    printf("\n\nIf the code is executed then it shows the ' Error: struct student has no member named numerical_code '.");
    printf("\n\nThis is because the variable numerical_code is in the struct ' subject '");
    printf("\n\nThe variable s1 is assigned to the struct ' student '");
    printf("\n\nTo avoid this error the variable s1 is assigned to the struct ' subject '\n");
    
    struct subject s2;
    s2.numerical_code=10;
    printf("%d",s2.numerical_code);
    
}
