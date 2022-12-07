#include<stdio.h>
int main()
{
	int r,c,i,j,sum=0;
	printf("Enter the number of rows : ");
	scanf("%d",&r);
	printf("Enter the number of columns : ");
	scanf("%d",&c);
	int arr[r][c],sum1[r][1];
	for(i=0;i<r;i++)
	{
		printf("Enter the elements in row %d : ",i+1);
		sum=0;
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
			sum+=arr[i][j];
		}
		sum1[i][0]=sum;
	}
	printf("The matrix is : ");
	for(i=0;i<r;i++)
	{
		printf("\n");
		for(j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("--> Sum is %d",sum1[i][0]);
	}
	return 0;
}











