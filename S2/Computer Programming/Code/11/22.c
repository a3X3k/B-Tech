#include<stdio.h>
int main()
{
    int a,i;
    float s=0;
    printf("Enter the no :");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s=s+(1.0/i);
    }
    printf("\n Answer is %f.",s);
    return 0;
}
