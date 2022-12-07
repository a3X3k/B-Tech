#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[10];
    int i=0,j=0,l,pos,index;
    printf("Enter the sentence : ");
    gets(a);
    printf("Enter the substring that has to be deleted : ");
    gets(b);
    for(l=0;b[l]!='\0';l++)
    while(a[i]!='\0' && b[j]!='\0')
    {
        if(a[i]==b[j])
        {
            j++;
        }
        i++;
    }
    if(j==l)
    {
        index=i-j;
        for(i=index;a[l+i]!='\0';i++)
        {
            a[i]=a[i+l+1];
        }
        a[i]='\0';
    }
    else
    {
        printf("The substring is not found.");
        return 0;
    }
    puts(a);
    return 0;
}
