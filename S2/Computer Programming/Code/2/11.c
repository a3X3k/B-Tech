#include<stdio.h>
int fibonnaci(int);
int main()
{
	int n;
	printf("enter n value");
	scanf("%d",&n);
	printf("Fibonnaci Series : ");
	fibonnaci(n);	
}
int fibonnaci(int x)
{
	int i,a=0,b=1,c;
	for(i=1;i<=x;++i)
	{
		printf("%d, ",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
