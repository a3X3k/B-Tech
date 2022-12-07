#include<stdio.h>
int main()
{
    int r,c,i,j,sum=0;
    printf("Enter the number of Rows : ");
    scanf("%d",&r);
    printf("Enter the number of Columns : ");
    scanf("%d",&c);
    int arr[r][c],arr1[r];
    for(i=0;i<r;i++)
    {
        printf("Enter the elements in the row %d : \n",i+1);
        for(j=0;j<c;j++)
        {
            printf("Enter : ");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The Array is : ");
    printf("\n");
    for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
            sum+=arr[i][j];
        }
        arr1[i]=sum;
        printf("\n");
    }
    printf("The row sum is : \n");
    for(i=0;i<r;i++)
    {
        printf("%d\n",arr1[i]);
    }
    return 0;
}
