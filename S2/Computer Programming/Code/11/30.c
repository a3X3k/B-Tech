#include<stdio.h>
int main()
{
    int a,a1,i,c=0,temp;
    printf("Enter the number : ");
    scanf("%d",&a);
    temp=a;
    
    while(a>0)
    {
        a1=a%10;
        a=a/10;
        c=(c*10)+a1;
    }
    if(temp==c)
    {
        printf("\nIts a palindrome.\n");
    }
    else
    {
        printf("\nNot a Palindrome.\n");
    }
    return 0;
}
