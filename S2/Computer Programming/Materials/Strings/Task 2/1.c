#include<stdio.h>
#include<string.h>
int main()
{
    char a[17];
    printf("Enter Your Roll Number : ");
    gets(a);
    int a1=a[14];
    printf("My Roll Number is : ");
    puts(a);
    printf("My Question set is %d.",a1%5);
    return 0;
}
