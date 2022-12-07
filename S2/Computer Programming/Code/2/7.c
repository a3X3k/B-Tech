#include<stdio.h>
int add(int,int);
int diff(int,int);
int prod(int,int);
int div(int,int);
int main()
{
	int a,b;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	add(a,b);
	diff(a,b);
	prod(a,b);
	div(a,b);
}
int add(int x,int y)
{
	int sum;
	sum=x+y;
	printf("sum of x %d and y %d is %d\n",x,y,sum);
}
int diff(int x,int y)
{
	int difference;
	difference=x-y;
	printf("difference of x %d and y %d is %d\n",x,y,difference);
}
int prod(int x,int y)
{
	int prod;
	prod=x*y;
	printf("product of x %d  and y %d is %d\n",x,y,prod);
}
int div(int x,int y)
{
	float divi;
	divi=(float)x/y;
	printf("division is %f\n",divi);
}

