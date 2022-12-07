#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],b[200],c[200];
    int n,i,j,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        scanf("%s",b);
        scanf("%s",c);
        f=1;
        for(j=0;j<strlen(a);j++)
        {
            if(a[j]==c[j] || b[j]==c[j])
            {
                continue;
            }
            else
            {
                f=0;
                break;
            }
        }
        if(f==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
