#include<stdio.h>
int fact(int);
int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("\nThe factorial is %d",fact(n));
	return 0;
}
int fact(int n)
{
	if(n==1)
	{
		return n;
	}
	else
	{
		return n*fact(n-1);
	}
}
