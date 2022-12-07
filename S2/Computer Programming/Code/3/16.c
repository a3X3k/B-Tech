#include<stdio.h>
int main()
{
	int i,j,k;
	printf("*");
	printf("\n");
	for(i=0;i<=4;i++)
	{
		printf("*");
		for(j=1;j<=i+1;j++)
		{
			printf("%d",j);
		}
		for(k=i;k>=1;k--)
		{
			printf("%d",k);
		}
		printf("*");
		printf("\n");
		
	}
	for(i=4;i>=1;i--)
	{
		printf("*");
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(k=i-1;k>=1;k--)
		{
			printf("%d",k);
		}
		printf("*");
		printf("\n");
	}
	printf("*");
}
