#include<stdio.h>
int main()
{
	int i,n,j;
	printf("Enter the number of items : ");
	scanf("%d",&n);
	int m[n];
	for(i=0;i<n;i++)
	{
		printf("\nEnter the number : ");
		scanf("%d",&m[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(m[j]==m[i])
			{
				printf("%d\t",j);
			}
		}
		printf("\n");
	}
}
			
