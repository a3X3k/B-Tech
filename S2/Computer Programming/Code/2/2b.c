#include<stdio.h>
int sec_largest(int,int,int);
int main()
{
	int a,b,c,second_largest;
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	second_largest=sec_largest(a,b,c);
	printf("second largest is %d",second_largest);
}
int sec_largest(int x,int y,int z)
{
	int second;
	if((y>x)&&(y<z))
	{
		second=y;
	}
	else if((x>y)&&(x<z))
	{
		second=x;
	}
	else if((z>x)&&(z<y))
	{
		second=z;
	}
	
	return second;
}
