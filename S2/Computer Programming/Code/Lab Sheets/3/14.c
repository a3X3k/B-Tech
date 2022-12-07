#include<stdio.h>
int main()
{
	int i,j,k,s=4,s1=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=s;j++)
		{
			printf(" ");
		}
		s=s-1;
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=s1;j++)
		{
			printf(" ");
		}
		s1=s1+1;
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
