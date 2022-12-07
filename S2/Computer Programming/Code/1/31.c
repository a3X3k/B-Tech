#include<stdio.h>
int main()
{
    int a,i,a1,s=0;
    printf("Enter the no : ");
    scanf("%d",&a);
    while(a>0)
    {
        a1=a%10;
        s+=a1;
        a=a/10;
    }
    printf("\n%d\n",s);
    return 0;
}
