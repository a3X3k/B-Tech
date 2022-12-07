#include<stdio.h>
int main()
{
	int r1,c1,r2,c2,i,j,k,prod,sum;
	printf("Enter the number of rows of the first matrix : ");
	scanf("%d",&r1);
	printf("Enter the number of columns of the first matrix : ");
	scanf("%d",&c1);
	int arr1[r1][c1];
	printf("First matrix : \n");
	for(i=0;i<r1;i++)
	{
		printf("Enter the elements in row %d : ",i+1);
		for(j=0;j<c1;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Second matrix : \n");
	printf("Enter the number of rows of the second matrix : ");
	scanf("%d",&r2);
	printf("Enter the number of columns of the second matrix : ");
	scanf("%d",&c2);
	int arr2[r2][c2];
	int arr3[r1][c2];
	for(i=0;i<r2;i++)
	{
		printf("Enter the elements in row %d : ",i+1);
		for(j=0;j<c2;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	if(c1==r2)
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				sum=0;
				for(k=0;k<r2;k++)
				{
					prod=arr1[j][k]*arr2[k][j];
					sum+=prod;
				}
				arr3[i][j]=sum;
			}
		}
		printf("The product of the matrix is : ");
		for(i=0;i<r1;i++)
		{
			printf("\n");
			for(j=0;j<c2;j++)
			{
				printf("%d ",arr3[i][j]);
			}
		}
	}
	else if(c1!=r2)
	{
		printf("Invalid order: Multiplication is not possible!");
	}
	return 0;
}











