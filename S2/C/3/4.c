#include<stdio.h>
int main()
{
	int i,j,k,s=1,s1=9;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=s;j++)
		{
			printf(" ");
		}
		s=s+1;
		for(k=1;k<=s1;k++)
		{
			printf("*");
		}
		s1-=2;
		printf("\n");
	}
}
