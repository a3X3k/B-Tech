#include<stdio.h>
int main()
{
	int n,m,i,c=0;
	printf("Enter the number of elements in the array : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("\nEnter the element : ");
		scanf("%d",&a[i]);	
	}
	printf("\nEnter the element to be found : ");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		if(a[i]==m)
		{
			printf("\nFound");
			c=1;
			break;
		}
	}
	if(c==0)
	{
		printf("\nNot Found");	
	}
	return 0;
}
