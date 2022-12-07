#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[10];
    int i=0,j=0,l;
    printf("Enter the sentence : ");
    gets(a);
    printf("Enter the substring that has to be found : ");
    gets(b);
    for(l=0;b[l]!='\0';l++)
    while(a[i]!='\0' && b[j]!='\0')
    {
        if(a[i]==b[j])
        {
            j++;
        }
        else
        {
            j=0;
        }
        i++;
    }
    if(j==l)
    {
        printf("The substring is found in the position : %d",i-j);
    }
    else
    {
        printf("The substring is not found.");
    }
    return 0;
}
