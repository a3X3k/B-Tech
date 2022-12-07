#include<stdio.h>
#include<string.h>

int main()
{
    char a[20];
    int i,j,c=0;
    printf("Enter the string : ");
    scanf("%s",a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='1')
        {
            c+=1;
        }
        else
        {
            if(c>0)
            {
                printf("%d ",c);
                c=0;
            }

        }
    }
    if(a[strlen(a)-1]=='1')
    {
        printf("%d ",c);
    }
}
