#include<stdio.h>
int main()
{
    char a;
    float h,t;
    printf("Enter the vehicle name: ");
    scanf("%d",&a);
    printf("\n Enter the number of hours: ");
    scanf("%f",&h);
    if(a=="c")
    {
        printf("The rate for car is %f",h*25);
        break;
    }
    else if(a=="b")
    {
        printf("The rate for bus/truck is %f",h*50);
        break;
    }
    else
    {
        printf("The rate for motorcycle or bicycle is %f",h*10);
        break;
    }
    return 0;

