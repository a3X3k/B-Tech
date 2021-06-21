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
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
		}
	}

  printf("Sorted list in ascending order:\n");

  for (i=0;i<n;i++)
    printf("%d\n", a[i]);
  return 0;
}
