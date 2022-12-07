#include<stdio.h>
int main()
{
    int a,i,p;
    printf("Enter the no : \n");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        p=0;
        p=a*i;
        printf("%d*%d=%d",a,i,p);
    }
    return 0;
}
