#include<stdio.h>
int main()
{
	int n,i,j,s=0;
	printf("Enter the interval : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				s+=j;
			}
		}
		if(s==i)
		{
			printf("%d ",s);
		}
	}
	return 0;
}
