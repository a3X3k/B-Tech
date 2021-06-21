#include<stdio.h>
int largest_of_3(int,int,int);
int main()
{
	int a,b,c,l;
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	l=largest_of_3(a,b,c);
	printf("largest of three numbers is %d",l);
}
int largest_of_3(int x,int y,int z)
{
	int lar;
	if((x>y)&&(x>z))
	{
		lar=x;
	}
	else if((y>x)&&(y>z))
	{
		lar=y;
	}
	else if((z>x)&&(z>y))
	{
		lar=z;
	}
	return lar;
}
