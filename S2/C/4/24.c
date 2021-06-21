#include<stdio.h>
int main()
{
	int r,c,i,j,min;
	printf("Enter the number of rows : ");
	scanf("%d",&r);
	printf("Enter the number of columns : ");
	scanf("%d",&c);
	int arr[r][c],row[r][c],col[r][c];

	//---------------------------------------------//

	for(i=0;i<r;i++)
	{
		printf("Enter the elements in row %d : ",i+1);
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	printf("The original matrix : \n");
	for(i=0;i<r;i++)
	{
	    printf("\n");
		for(j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
		}
	}

	//----------------------------------------------------//

	int temp[c],temp1,k,k1;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			temp[j]=arr[i][j];
		}
    for(k=0;k<r;k++)
		{
			for(k1=0;k1<c-k-1;k1++)
			{
				if(temp[k1]>temp[k1+1])
				{
					temp1=temp[k1];
					temp[k1]=temp[k1+1];
					temp[k1+1]=temp1;
				}
			}
		}


		for(k=0;k<c;k++)
		{
			row[i][k]=temp[k];
		}
	}

	//------------------------------------------------//

	printf("\nThe matrix after arranging the row in ascending order : ");
	for(i=0;i<r;i++)
	{
		printf("\n");
		for(j=0;j<c;j++)
		{
			printf("%d ",row[i][j]);
		}
	}

	//--------------------------------------------------------------//

	int t1[r],l,temp3;
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			t1[j]=arr[j][i];
		}
		for(k=0;k<r;k++)
		{
			for(l=0;l<r-k-1;l++)
			{
				if(t1[l]<t1[l+1])
				{
					temp3=t1[l];
					t1[l]=t1[l+1];
					t1[l+1]=temp3;
				}
			}
		}
		for(j=0;j<r;j++)
		{
			col[j][i]=t1[j];
		}
	}

	//----------------------------------------------//

	printf("\nThe matrix after arranging the column in descending order : ") ;
	for(i=0;i<r;i++)
	{
		printf("\n");
		for(j=0;j<c;j++)
		{
			printf("%d ",col[i][j]);
		}
	}

	//-------------------------------------------------------//

	return 0;
}
