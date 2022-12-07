#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100],d[100];
    int i=0,j=0,l,l1=0,l2=0,k=0,pos,index;
    printf("Enter the sentence : ");
    gets(a);
    printf("Enter the substring that has to be changed : ");
    gets(b);
    printf("Enter the substring : ");
    gets(c);
    for(l=0;b[l]!='\0';l++)
    while(a[i]!='\0' && b[j]!='\0')
    {
        if(a[i]==b[j])
        {
            j++;
        }
        i++;
    }
    index=i-j;
    if(j==l)
    {
        for(l1=0;c[l1]!='\0';l1++)
        pos=index+l+1;
        j=0;
        for(i=pos;a[i]!='\0';i++)
        {
            d[j]=a[i];
            j++;
        }
        k=0;
        for(i=index;c[k]!='\0';i++)
        {
            a[i]=c[k];
            k++;
        }
        a[i++]=' ';
        k=0;
        for(j=i;d[k]!='\0';j++)
        {
            a[j]=d[k];
            k++;
        }
        a[j]='\0';
        puts(a);
        return 0;
    }
    else
    {
        printf("The substring is not found.");
        return 0;
    }
}
