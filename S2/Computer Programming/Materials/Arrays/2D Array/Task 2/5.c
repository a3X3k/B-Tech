#include<stdio.h>
int r,c;

int job(int row,int col)
{
    if(row==0)
    {
        if(col==0)
        {
            printf("A - Job-1");
        }
        else if(col==1)
        {
            printf("A - Job-2");
        }
        else if(col==2)
        {
            printf("A - Job-3");
        }
        else if(col==3)
        {
            printf("A - Job-4");
        }
    }
    else if(row==1)
    {
        if(col==0)
        {
            printf("B - Job-1");
        }
        else if(col==1)
        {
            printf("B - Job-2");
        }
        else if(col==2)
        {
            printf("B - Job-3");
        }
        else if(col==3)
        {
            printf("B - Job-4");
        }
    }
    else if(row==2)
    {
        if(col==0)
        {
            printf("C - Job-1");
        }
        else if(col==1)
        {
            printf("C - Job-2");
        }
        else if(col==2)
        {
            printf("C - Job-3");
        }
        else if(col==3)
        {
            printf("C - Job-4");
        }
    }
    else if(row==3)
    {
        if(col==0)
        {
            printf("D - Job-1");
        }
        else if(col==1)
        {
            printf("D - Job-2");
        }
        else if(col==2)
        {
            printf("D - Job-3");
        }
        else if(col==3)
        {
            printf("D - Job-4");
        }
    }
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

int main()
{
    int i,j,row,col,min;
    printf("Enter the number of Rows : ");
    scanf("%d",&r);
    printf("Enter the number of Columns : ");
    scanf("%d",&c);
    int arr[r][c];
    inp(arr,r,c);
    min=100;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]<min)
            {
                row=i;
                col=j;
                min=arr[i][j];
            }
        }
    }
    job(row,col);
    printf("\n");
    int a1[r-1][c-1],k1=0,k2;
    for(i=0;i<r;i++)
    {
        if(i!=row)
        {
            k2=0;
            for(j=0;j<c;j++)
            {
                if(j!=col)
                {
                    a1[k1][k2]=arr[i][j];
                    k2++;
                }
            }
            k1++;
        }
    }
    int r1,c1;
    min=100;
    for(i=0;i<r-1;i++)
    {
        for(j=0;j<c-1;j++)
        {
            if(a1[i][j]<=min)
            {
                r1=i;
                c1=j;
                min=a1[i][j];
            }
        }
    }
    job(r1,c1);
    printf("\n");
    k1=0;
    int a2[r-2][c-2];
    for(i=0;i<r-1;i++)
    {
        if(i!=r1)
        {
            k2=0;
            for(j=0;j<c-1;j++)
            {
                if(j!=c1)
                {
                    a2[k1][k2]=a1[i][j];
                    k2++;
                }
            }
            k1++;
        }
    }
    int r2,c2;
    min=100;
    for(i=0;i<r-2;i++)
    {
        for(j=0;j<c-2;j++)
        {
            if(a2[i][j]<=min)
            {
                r2=i;
                c2=j;
                min=a2[i][j];
            }
        }
    }
    for(i=0;i<r;i++)
    {
        if(i!=row)
        {
            if(i!=r1)
            {
                for(j=0;j<c;j++)
                {
                    if(j!=col)
                    {
                        if(j!=c1)
                        {
                            if(arr[i][j]==min)
                            {
                                r2=i;
                                c2=j;
                            }
                        }
                    }
                }
            }
        }
    }
    job(r2,c2);
    printf("\n");
    k1=0;
    int a3[r-3][c-3];
    for(i=0;i<r-2;i++)
    {
        if(i!=r2)
        {
            k2=0;
            for(j=0;j<c-2;j++)
            {
                if(j!=c2)
                {
                    a3[k1][k2]=a2[i][j];
                    k2++;
                }
            }
            k1++;
        }
    }
    int r3,c3;
    min=a3[0][0];
    for(i=0;i<r;i++)
    {
        if(i!=row)
        {
            if(i!=r1)
            {
                if(i!=r2)
                {
                    for(j=0;j<c;j++)
                    {
                        if(j!=col)
                        {
                            if(j!=c1)
                            {
                                if(j!=c2)
                                {
                                    if(arr[i][j]==min)
                                    {
                                        r3=i;
                                        c3=j;
                                    }
                                }

                            }
                        }
                    }
                }
            }
        }
    }
    job(r3,c3);
    return 0;
}
