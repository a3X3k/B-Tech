#include<stdio.h>
#include<string.h>

int main()
{
    char a[10];
    int i,j,f=0;
    printf("Enter the string : ");
    scanf("%s",a);
    for(i=0;i<strlen(a);i++)
    {
        for(j=0;j<strlen(a);j++)
        {
            if(j!=i)
            {
                if(a[i]==a[j])
                {
                    f=1;
                    break;
                }
            }
        }
    }
    if(f==1)
    {
        printf("No,Not Unique Elements");
    }
    else
    {
        printf("Yes,Unique Elements");
    }
    return 0;
}
