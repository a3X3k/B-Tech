#include<stdio.h>
#include<string.h>

void main(int argc,char *argv[])
{
    int i,n=strlen(argv[1]);
    char *s=argv[1];
    for(i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            printf("Not a Palindrome....");
            return;
        }
    }
    printf("Its a Palindrome.....");
}
