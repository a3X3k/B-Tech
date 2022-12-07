#include<stdio.h>
int main()
{
	int n,i,j,temp;
	printf("Enter the number of elements in the array : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("\nEnter the element : ");
		scanf("%d",&a[i]);	
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<(n-i-1);j++)
		{
			if (a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("\nThe Sorted Array is : ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);	
	}
	return 0;
}

