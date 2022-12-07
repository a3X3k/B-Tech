#include<stdio.h>
#include<string.h>

int main()
{
    char a[10],temp;
    int i=0;
    printf("Enter the string : ");
    scanf("%s",a);
    if((strlen(a))%2==0)
    {
        for(i=0;i<strlen(a);)
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            i=i+2;
        }
    }
    else
    {
        printf("The length is Odd.");
        return 0;
    }
    printf("The modified string is : %s",a);
    return 0;
}
