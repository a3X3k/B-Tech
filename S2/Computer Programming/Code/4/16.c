#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("Enter the number of rows : ");
	scanf("%d",&r);
	printf("Enter the number of columns : ");
	scanf("%d",&c);
	int arr1[r][c],arr2[r][c],sum[r][c];
	printf("First matrix : \n");
	for(i=0;i<r;i++)
	{
		printf("Enter the elements in row %d : ",i+1);
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Second matrix : ");
	for(i=0;i<r;i++)
	{
		printf("Enter the elements in row %d : ",i+1);
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	printf("The sum of the matrix is : ");
	for(i=0;i<r;i++)
	{
		printf("\n");
		for(j=0;j<c;j++)
		{
			printf("%d ",sum[i][j]);
		}
	}
	return 0;
}











