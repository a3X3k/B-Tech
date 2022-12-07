#include<stdio.h>
int swap(int,int);
int main()
{
	int a,b;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	printf("a=%d,b=%d\n",a,b);
	swap(a,b);
}
int swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("a=%d,b=%d",x,y);
}
