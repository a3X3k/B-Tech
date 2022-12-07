#include<stdio.h>
int main()
{
    int a;
    printf("Enter the year : ");
    scanf("%d",&a);
    if(a%4==0)
    {
        printf("Its a leap year.");
    }
    else if(a%400==0)
    {
        printf("Its a leap year.");
    }
    else if(a%100=0)
    {
        printf("Its not a leap year.");
    }
    else
    {
        printf("Its not a leap year.");
    }
    return 0;
}
