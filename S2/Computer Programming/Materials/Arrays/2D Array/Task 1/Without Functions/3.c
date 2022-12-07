#include<stdio.h>
int main()
{
    int r,c,i,j,sum=0;
    printf("Enter the number of Rows : ");
    scanf("%d",&r);
    printf("Enter the number of Columns : ");
    scanf("%d",&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        printf("Enter the elements in the row %d : \n",i+1);
        for(j=0;j<c;j++)
        {
            printf("Enter : ");
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
        }
    }
    printf("The Array is : ");
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
            if(i>j)
            {
                arr[i][j]=0;
            }
        }
        printf("\n");
    }
    printf("The Upper Triangular Matrix is :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("The sum of the Elements of the matrix is : %d",sum);
    printf("\n%s",(sum>100)?"Yes":"No");
    return 0;
}

