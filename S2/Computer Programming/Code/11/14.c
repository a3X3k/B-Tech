#include<stdio.h>
int main()
{
    int a,c1=0,c2=0,c3=0;
    while(a!=999)
    {
        printf("Enter the no : \n");
        scanf("%d",&a);
        if(a>0)
        {
            c1+=1;
        }
        else if(a<0)
        {
            c2+=1;
        }
        else
        {
            c3+=1
        }
    }
    printf("There are %d positive nos , %d negative nos and %d zeros.",c1,c2,c3);
    return 0;
}ss
