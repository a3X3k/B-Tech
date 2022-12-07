#include<stdio.h>
int main()
{
    int i,a,b,m=1;
    printf("Enter the number : \n");
    scanf("%d"&a);
    printf("Enter the power : \n");
    scanf("%d"&b);
    for(i=1;i<=b;i++)
    {
        m=m*a;
    }
    printf("The square root is %d.",m);
    return 0;
}
