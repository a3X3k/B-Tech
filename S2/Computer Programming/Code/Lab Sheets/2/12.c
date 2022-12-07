#include<stdio.h>
void nonfib(int,int);
int main()
{
	int n,a=0,b=1,s;
	printf("Enter the number : ");
	scanf("%d",&n);
	while(s<n)
	{
		s=a+b;
		a=b;
		b=s;
		if(s<n)
		{
			nonfib(a,b);	
		}
	}
}
void nonfib(int a,int b)
{
	int i;
	for(i=a+1;i<b;i++)
	{
		printf("%d\n",i);
	}
}
