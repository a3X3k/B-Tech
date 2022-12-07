#include<stdio.h>
int main()
{
	int i,j,s=1,s1=5;
	for(i=1;i<=5;i++)
	{
		for(j=s;j<=s1;j++)
		{
			printf("%d",j);
		}
		s+=1;
		s1+=1;
		printf("\n");
	}
}
