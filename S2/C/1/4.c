#include<stdio.h>
int main()
{
    int a,b,c;
    float avg;
    printf("Enter the three nos : ");
    scanf("%d %d %d",&a,&b,&c);
    avg=(a+b+c)/3
    if(avg>=100)&&(avg<=200)
    {
        printf("\n Its in the given range");
    }
    else
    {
        printf("\n The given number is not in the given range.");
    }
    return 0;
}
