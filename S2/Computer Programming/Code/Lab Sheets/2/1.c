#include<stdio.h>
int sum(int,int);
int main()
{
	int a,b,s;
	printf("enter two numbers a,b");
	scanf("%d%d",&a,&b);
	s=sum(a,b);
	printf("%d",s);
}
int sum(int x,int y)
{
	int s;
	s=x+y;
	return s;
}
