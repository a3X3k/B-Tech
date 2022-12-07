#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10],c[20];
    int i=0,j=0;
    printf("Enter the first string : ");
    gets(a);
    printf("Enter the second string : ");
    gets(b);
    while(a[i]!='\0')
    {
        c[j++]=a[i++];
    }
    i=0;
    while(b[i]!='\0')
    {
        c[j++]=b[i++];
    }
    c[j]='\0';
    printf("The string is : ");
    puts(c);
    return 0;
}
