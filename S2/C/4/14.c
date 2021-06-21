#include<stdio.h>

int main()
{
	int n,sum,i,j;
	printf("Enter the no of elements in the array : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("\nEnter the %d element : ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the sum : ");
	scanf("%d",&sum);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]+a[j]==sum)
			{
				printf("\n(%d,%d)",a[i],a[j]);
			}
		}
	}
	return 0;
}
	

