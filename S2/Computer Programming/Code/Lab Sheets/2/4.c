#include<stdio.h>
int sum_n(int);
int main()
{
	int n,s;
	printf("enter the limit that is the n value");
	scanf("%d",&n);
	s=sum_n(n);
	printf("sum of n numbers is %d",s);
}
int sum_n(int n)
{
	int sum=0,i=1;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	return sum;
}
