#include<stdio.h>
int main()
{
	int r,c,i,j,find,c1=0;
	printf("Enter the number of rows : ");
	scanf("%d",&r);
	printf("Enter the number of columns : ");
	scanf("%d",&c);
	int arr[r][c],arr1[r][c],arr2[r][c],arr3[r][c];
	for(i=0;i<r;i++)
	{
		printf("Enter the elements in row %d : ",i+1);
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The original matrix is : ");
	for(i=0;i<r;i++)
	{
		printf("\n");
		for(j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==0)
			{
				arr1[i][j]=arr[1][j];
			}
			else if(i==1)
			{
				arr1[i][j]=arr[0][j];
			}
			else
			{
				arr1[i][j]=arr[i][j];
			}
		}
	}
	printf("\nThe matrix after row transformation is : ");
	for(i=0;i<r;i++)
	{
		printf("\n");
		for(j=0;j<c;j++)
		{
			printf("%d ",arr1[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j==0)
			{
				arr2[i][j]=arr[i][1];
			}
			else if(j==1)
			{
				arr2[i][j]=arr[i][0];
			}
			else
			{
				arr2[i][j]=arr[i][j];
			}
		}
	}
	printf("\nThe matrix after column transformation is : ");
	for(i=0;i<r;i++)
	{
		printf("\n");
		for(j=0;j<c;j++)
		{
			printf("%d ",arr2[i][j]);
		}
	}
	return 0;
}
