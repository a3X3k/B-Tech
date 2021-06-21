#include<stdio.h>
int main()
{
	int i,j,k,s=4;
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
}
