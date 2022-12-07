#include<stdio.h>
int main()
{
	int i,j,k,s=4,s1=1,s2=1,s3=7;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=s;j++)
		{
			printf(" ");
		}
		s=s-1;
		for(k=1;k<=s1;k++)
		{
			printf("*");
		}
		s1+=2;
		printf("\n");
	}
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=s2;j++)
		{
			printf(" ");
		}
		s2=s2+1;
		for(k=1;k<=s3;k++)
		{
			printf("*");
		}
		s3-=2;
		printf("\n");
	}
}
