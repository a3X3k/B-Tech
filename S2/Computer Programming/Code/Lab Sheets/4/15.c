#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("Enter the number of rows : ");
	scanf("%d",&r);
	printf("Enter the number of columns : ");
	scanf("%d",&c);
	int arr[r][c];
	for(i=0;i<r;i++)
	{
		printf("Enter the elements in row %d : ",i+1);
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The matrix is : ");
	for(i=0;i<r;i++)
	{
		printf("\n");
		for(j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
		}
	}
	return 0;
}











