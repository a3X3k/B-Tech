#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i+1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
