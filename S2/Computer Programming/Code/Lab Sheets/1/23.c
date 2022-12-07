#include<stdio.h>
int main()
{
    int a,s1=2,s=1;
    printf("Enter the limit : ");
    scanf("%d",&a);
    while(s<a)
    {
        s=s*s1;
        if(s<500)
        {
            printf("%d\t",s);
            s1=s;
        }
    }
    printf("\n");
    return 0;
}
