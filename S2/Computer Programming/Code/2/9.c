#include<stdio.h>
int power(int);
int fact(int);
int main()
{
	int n,f,pow,i;
	float s=0,div;
	printf("enter n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=fact(i);
		pow=power(i);
		div=(float)pow/f;
		s=s+div;
	}
	printf("sum is %f",s);
	
}
int fact(int a)
{
	int i,fact=1;
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int power(int a)
{
	int i,prod=1;
	for(i=1;i<=a;i++)
	{
		prod=prod*a;
	}
	return prod;
}
