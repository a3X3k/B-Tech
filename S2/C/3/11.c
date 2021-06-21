#include<stdio.h>
int main()
{
	int i,j,k,s=1,s1=7;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=s;j++)
		{
			printf("%d",j);
		}
		printf("\n");
		s=s+2;
	}
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=s1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
		s1=s1-2;
	}
}
