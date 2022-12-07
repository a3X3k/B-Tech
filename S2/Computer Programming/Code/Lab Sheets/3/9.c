#include<stdio.h>
int main()
{
	int i,j,s=6,k,p;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i+1;j++)
		{
			printf("%d",j);
		}
		for(k=1;k<=s;k++)
		{
			printf(" ");
		}
		s-=2;
		for(p=i+1;p>=1;p--)
		{
			printf("%d",p);
		}
		printf("\n");
	}
}
