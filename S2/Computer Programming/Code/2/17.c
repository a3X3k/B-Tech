#include <stdio.h>

int main()
{
    int i,num,lastDigit,sum,range,n,n1;
    long fact;
    printf("Enter the range : ");
    scanf("%d",&range);
    for(n=100;n<=range;n++)
    {
    	n1=n;
    	sum=0;
    	while(n1>0)
    	{
       		lastDigit=n1%10;
        	fact=1;
        	for(i=1;i<=lastDigit;i++)
        	{
        	    fact=fact*i;
        	}
        	sum = sum + fact;
        	n1=n1/10;
    	}
    	if(sum==n)
    	{
       		printf("%d\t",sum);
    	}
	}
    

    return 0;
}
