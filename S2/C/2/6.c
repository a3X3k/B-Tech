#include<stdio.h>
unsigned long int factorial(int);
int main()
{
	int n;
	unsigned long int fact;
	printf("enter the number to which u need factorial");
	scanf("%d",&n);
	fact=factorial(n);
	printf("factorial of n %d is %ld",n,fact);
}
unsigned long int factorial(int a)
{
	int i;
	unsigned long int prod=1;
	for(i=a;i>0;i--)
	{
		prod=prod*i;
	}
	return prod;
}
