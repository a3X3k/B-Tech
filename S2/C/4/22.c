#include<stdio.h>
int main()
{
	int r,c,i,j,find,c1=0;
	printf("Enter the number of rows : ");
	scanf("%d",&r);
	printf("Enter the number of columns : ");
	scanf("%d",&c);
	int arr[r][c];
	printf("The matrix is : \n");
	for(i=0;i<r;i++)
	{
		printf("Enter the elements in row %d : ",i+1);
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Enter the element to find : ");
	scanf("%d",&find);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(arr[i][j]==find)
			{
				printf("The element is found");
				printf("\nThe Position of the element is Array[%d][%d]",i,j);
				c1=1;
				break;
			}	
		}
		if(c1==1)
		{
			break;
		}
	}
	if(c1!=1)
	{
		printf("The Element is not found!.");
	}
	return 0;
}
