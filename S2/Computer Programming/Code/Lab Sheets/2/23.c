#include<stdio.h>
int mul(int,int);
int main()
{
	int n,m;
	printf("Enter the two number : ");
	scanf("%d %d",&m,&n);
	printf("\nThe answer is %d",mul(m,n));
	return 0;
}
int mul(int m,int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return m+mul(m,n-1);
	}
}
