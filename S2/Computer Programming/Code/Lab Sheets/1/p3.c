#include<stdio.h>
int main()
{
    int i,j,t=65;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",t);
            t++;
        }
        printf("\n");
    }
}
