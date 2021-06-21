#include<stdio.h>
int m1(int *,int);
int main()
{
	int n;
	printf("Enter the number of items : ");
	scanf("%d",&n);
	int m[n];
	m1(m,n);
	return 0;
}
int m1(int m[],int n)
{
	int max=0,i,max1=0;
	for(i=0;i<n;i++)
	{
		printf("\nEnter the number : ");
		scanf("%d",&m[i]);
		if(m[i]>max)
		{
			max=m[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(m[i]>max1 && m[i]<max)
		{
			max1=m[i];
		}
	}
	
	printf("\nThe second largest number is : %d\n",max1);
}
