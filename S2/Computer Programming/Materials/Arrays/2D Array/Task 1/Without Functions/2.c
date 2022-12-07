#include<stdio.h>
int main()
{
    int r,c,i,j,sum=0,col,max=0;
    printf("Enter the number of Rows : ");
    scanf("%d",&r);
    printf("Enter the number of Columns : ");
    scanf("%d",&c);
    int arr[r][c];
    col=c-1;
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
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        sum+=arr[i][col];
        if(arr[i][col]>max)
        {
            max=arr[i][col];
        }
        col--;
    }
    printf("The Maximum element of the Anti Diagonal is : %d.",max);
    printf("\nThe sum of the Anti Diagonal Element is %d.",sum);
    return 0;
}
