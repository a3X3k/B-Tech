#include<stdio.h>
int main()
{
    int r,c,i,j,sum=0,sum1=0;
    printf("Enter the rows : ");
    scanf("%d",&r);
    printf("Enter the columns : ");
    scanf("%d",&c);
    int arr[r][c],c1=c-1;
    for(i=0;i<r;i++)
    {
        printf("Enter the Elements in the row %d : ",i+1);
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The given matrix is : \n");
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
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                sum+=arr[i][j];
            }
        }
    }
    printf("The Sum of the Main Diagonal Elements is : %d.\n",sum);
    for(i=0;i<r;i++)
    {
        sum1=sum1+arr[i][c1];
        c1-=1;
    }
    printf("The Sum of the Opposite Diagonal Elements is : %d.",sum1);
    return 0;
}
