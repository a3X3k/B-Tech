#include<stdio.h>
int mul(int,int);
int main()
{
	int n,m;
	printf("Enter the number and its power: ");
	scanf("%d %d",&m,&n);
	printf("\nThe answer is %d",mul(m,n));
	return 0;
}
int mul(int m,int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return m*mul(m,n-1);
	}
}
