#include<stdio.h>
int r,c;

int find(int arr[r][c],int arr1[r][c],int r,int c1,int x,int y)
{
    int i,j,c=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c1;j++)
        {
           if(arr[i][j]==1)
           {
                c=0;
                if(i==0 && j==0)
                {
                    (arr[i][i+1]==1)?c++:c;
                    (arr[i+1][i]==1)?c++:c;
                    (arr[i+1][i+1]==1)?c++:c;
                    if(c==x)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else if(i==3 && j==0)
                {
                    (arr[i][j+1]==1)?c++:c;
                    (arr[i-1][j]==1)?c++:c;
                    (arr[i-1][j+1]==1)?c++:c;
                    if(c==x)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else if(i==0 && j==3)
                {
                    (arr[i][j-1]==1)?c++:c;
                    (arr[i+1][j-1]==1)?c++:c;
                    (arr[i+1][j]==1)?c++:c;
                    if(c==x)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else if(i==3 && j==3)
                {
                    (arr[i][j-1]==1)?c++:c;
                    (arr[i-1][j-1]==1)?c++:c;
                    (arr[i-1][j-2]==1)?c++:c;
                    if(c==x)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else if(i==1 && j==0)
                {
                    (arr[i-1][j]==1)?c++:c;
                    (arr[i-1][j+1]==1)?c++:c;
                    (arr[i][j+1]==1)?c++:c;
                    (arr[i+1][j+2]==1)?c++:c;
                    (arr[i+1][j+1]==1)?c++:c;
                    if(c==x)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else if(i==2 && j==0)
                {
                    (arr[i-1][j]==1)?c++:c;
                    (arr[i-1][j+1]==1)?c++:c;
                    (arr[i][j+1]==1)?c++:c;
                    (arr[i+1][j]==1)?c++:c;
                    (arr[i+1][j+1]==1)?c++:c;
                    if(c==x)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else if(i==1 && j==3)
                {
                    (arr[i-1][j-1]==1)?c++:c;
                    (arr[i-1][j]==1)?c++:c;
                    (arr[i][j-1]==1)?c++:c;
                    (arr[i+1][j-1]==1)?c++:c;
                    (arr[i+1][j]==1)?c++:c;
                    if(c==x)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else if(i==2 && j==3)
                {
                    (arr[i-1][j-1]==1)?c++:c;
                    (arr[i-1][j]==1)?c++:c;
                    (arr[i][j-1]==1)?c++:c;
                    (arr[i+1][j-1]==1)?c++:c;
                    (arr[i+1][j]==1)?c++:c;
                    if(c==x)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else if(i==0 && j==1)
                {
                    (arr[i][j-1]==1)?c++:c;
                    (arr[i+1][j-1]==1)?c++:c;
                    (arr[i+1][j]==1)?c++:c;
                    (arr[i+1][j+1]==1)?c++:c;
                    (arr[i][j+1]==1)?c++:c;
                    if(c==x)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else if(i==0 && j==2)
                {
                    (arr[i][j-1]==1)?c++:c;
                    (arr[i][j+1]==1)?c++:c;
                    (arr[i+1][j-1]==1)?c++:c;
                    (arr[i+1][j]==1)?c++:c;
                    (arr[i+1][j+1]==1)?c++:c;
                    if(c==x)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else if(i==3 && j==1)
                {
                    (arr[i-1][j-1]==1)?c++:c;
                    (arr[i-1][j]==1)?c++:c;
                    (arr[i-1][j+1]==1)?c++:c;
                    (arr[i][j-1]==1)?c++:c;
                    (arr[i][j+1]==1)?c++:c;
                    if(c==x)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else if(i==3 && j==2)
                {
                    (arr[i-1][j-1]==1)?c++:c;
                    (arr[i-1][j]==1)?c++:c;
                    (arr[i-1][j+1]==1)?c++:c;
                    (arr[i][j-1]==1)?c++:c;
                    (arr[i][j+1]==1)?c++:c;
                    if(c==x)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else if(i==1 && j==1)
                {
                    (arr[i-1][j-1]==1)?c++:c;
                    (arr[i-1][j]==1)?c++:c;
                    (arr[i-1][j+1]==1)?c++:c;
                    (arr[i][j-1]==1)?c++:c;
                    (arr[i][j+1]==1)?c++:c;
                    (arr[i+1][j-1]==1)?c++:c;
                    (arr[i+1][j]==1)?c++:c;
                    (arr[i+1][j+1]==1)?c++:c;
                    if(c==x)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else
                {
                    (arr[i-1][j-1]==1)?c++:c;
                    (arr[i-1][j]==1)?c++:c;
                    (arr[i-1][j+1]==1)?c++:c;
                    (arr[i][j-1]==1)?c++:c;
                    (arr[i][j+1]==1)?c++:c;
                    (arr[i+1][j-1]==1)?c++:c;
                    (arr[i+1][j]==1)?c++:c;
                    (arr[i+1][j+1]==1)?c++:c;
                    if(c==x)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
           }
           else
           {
                c=0;
                if(i==0 && j==0)
                {
                    (arr[i][i+1]==1)?c++:c;
                    (arr[i+1][i]==1)?c++:c;
                    (arr[i+1][i+1]==1)?c++:c;
                    if(c==y)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else if(i==3 && j==0)
                {
                    (arr[i][j+1]==1)?c++:c;
                    (arr[i-1][j]==1)?c++:c;
                    (arr[i-1][j+1]==1)?c++:c;
                    if(c==y)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else if(i==0 && j==3)
                {
                    (arr[i][j-1]==1)?c++:c;
                    (arr[i+1][j-1]==1)?c++:c;
                    (arr[i+1][j]==1)?c++:c;
                    if(c==y)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else if(i==3 && j==3)
                {
                    (arr[i][j-1]==1)?c++:c;
                    (arr[i-1][j-1]==1)?c++:c;
                    (arr[i-1][j]==1)?c++:c;
                    if(c==y)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else if(i==1 && j==0)
                {
                    (arr[i-1][j]==1)?c++:c;
                    (arr[i-1][j+1]==1)?c++:c;
                    (arr[i][j+1]==1)?c++:c;
                    (arr[i+1][j]==1)?c++:c;
                    (arr[i+1][j+1]==1)?c++:c;
                    if(c==y)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else if(i==2 && j==0)
                {
                    (arr[i-1][j]==1)?c++:c;
                    (arr[i-1][j+1]==1)?c++:c;
                    (arr[i][j+1]==1)?c++:c;
                    (arr[i+1][j]==1)?c++:c;
                    (arr[i+1][j+1]==1)?c++:c;
                    if(c==y)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else if(i==1 && j==3)
                {
                    (arr[i-1][j-1]==1)?c++:c;
                    (arr[i-1][j]==1)?c++:c;
                    (arr[i][j-1]==1)?c++:c;
                    (arr[i+1][j-1]==1)?c++:c;
                    (arr[i+1][j]==1)?c++:c;
                    if(c==y)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else if(i==2 && j==3)
                {
                    (arr[i-1][j-1]==1)?c++:c;
                    (arr[i-1][j]==1)?c++:c;
                    (arr[i][j-1]==1)?c++:c;
                    (arr[i+1][j-1]==1)?c++:c;
                    (arr[i+1][j]==1)?c++:c;
                    if(c==y)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else if(i==0 && j==1)
                {
                    (arr[i][j-1]==1)?c++:c;
                    (arr[i+1][j-1]==1)?c++:c;
                    (arr[i+1][j]==1)?c++:c;
                    (arr[i+1][j+1]==1)?c++:c;
                    (arr[i][j+1]==1)?c++:c;
                    if(c==y)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else if(i==0 && j==2)
                {
                    (arr[i][j-1]==1)?c++:c;
                    (arr[i][j+1]==1)?c++:c;
                    (arr[i+1][j-1]==1)?c++:c;
                    (arr[i+1][j]==1)?c++:c;
                    (arr[i+1][j+1]==1)?c++:c;
                    if(c==y)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else if(i==3 && j==1)
                {
                    (arr[i-1][j-1]==1)?c++:c;
                    (arr[i-1][j]==1)?c++:c;
                    (arr[i-1][j+1]==1)?c++:c;
                    (arr[i][j-1]==1)?c++:c;
                    (arr[i][j+1]==1)?c++:c;
                    if(c==y)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else if(i==3 && j==2)
                {
                    (arr[i-1][j-1]==1)?c++:c;
                    (arr[i-1][j]==1)?c++:c;
                    (arr[i-1][j+1]==1)?c++:c;
                    (arr[i][j-1]==1)?c++:c;
                    (arr[i][j+1]==1)?c++:c;
                    if(c==y)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else if(i==1 && j==1)
                {
                    (arr[i-1][j-1]==1)?c++:c;
                    (arr[i-1][j]==1)?c++:c;
                    (arr[i-1][j+1]==1)?c++:c;
                    (arr[i][j-1]==1)?c++:c;
                    (arr[i][j+1]==1)?c++:c;
                    (arr[i+1][j-1]==1)?c++:c;
                    (arr[i+1][j]==1)?c++:c;
                    (arr[i+1][j+1]==1)?c++:c;
                    if(c==y)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
                else
                {
                    (arr[i-1][j-1]==1)?c++:c;
                    (arr[i-1][j]==1)?c++:c;
                    (arr[i-1][j+1]==1)?c++:c;
                    (arr[i][j-1]==1)?c++:c;
                    (arr[i][j+1]==1)?c++:c;
                    (arr[i+1][j-1]==1)?c++:c;
                    (arr[i+1][j]==1)?c++:c;
                    (arr[i+1][j+1]==1)?c++:c;
                    if(c==y)
                    {
                        arr1[i][j]=1;
                    }
                    else
                    {
                        arr1[i][j]=0;
                    }
                    continue;
                }
           }

        }
    }
    return arr1;
}

int inp(int arr[r][c],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        printf("Enter the elements in the row %d : \n",i+1);
        for(j=0;j<c;j++)
        {
            printf("Enter : ");
            scanf("%d",&arr[i][j]);
        }
    }
    return arr;
}

int print(int arr[r][c],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int x1,y1,k,i,x2,y2;
    printf("Enter the number of Rows : ");
    scanf("%d",&r);
    printf("Enter the number of Columns : ");
    scanf("%d",&c);
    int arr[r][c],arr1[r][c],arr2[r][c];
    inp(arr,r,c);
    printf("The Matrix is :\n");
    print(arr,r,c);
    printf("Enter the k for number of Iterations : ");
    scanf("%d",&k);
    arr1[r][c]=arr[r][c];
    printf("The Limit for 1 in First Iteration : ");
    scanf("%d",&x1);
    printf("The Limit for 0 in First Iteration : ");
    scanf("%d",&y1);
    printf("The Limit for 1 in Second Iteration : ");
    scanf("%d",&x2);
    printf("The Limit for 0 in Second Iteration : ");
    scanf("%d",&y2);
    find(arr,arr1,r,c,x1,y1);
    print(arr1,r,c);
    printf("\n");
    arr2[r][c]=arr1[r][c];
    find(arr1,arr2,r,c,x2,y2);
    print(arr2,r,c);
    return 0;
}

