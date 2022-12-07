#include <stdio.h>

void main(int argc,char *argv[])
{
    int sum=0,n;
    int num=atoi(argv[1]);
    while(num>0)
    {
        n=num%10;
        sum+=n;
        num=num/10;
    }
    printf("The Sum of the digits is %d.",sum);
}
