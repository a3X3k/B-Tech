#include<stdio.h>

//Get two Input Array from the User and find the number of Odd pairs.

/* NAME : S.ABHISHEK
ROLL NUMBER : AM.EN.U4CSE19147
BATCH : S2 CSE-B */

int main()
{
    int n,i,j,m,c=0;//n - Size of the Array 1.
    printf("Enter the number of elements in the array 1 : ");
    scanf("%d",&n);
    int arr1[n];
    for(i=0;i<n;i++)//Getting the Input of Array 1.
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("The array 1 is : ");
    for(i=0;i<n;i++)//Printing the Array 1.
    {
        printf("%d ",arr1[i]);
    }
    printf("\nEnter the number of elements in the array 2 : ");
    scanf("%d",&m);//m - Size of the Array 1.
    int arr2[m];
    for(i=0;i<m;i++)//Getting the Input of Array 2.
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr2[i]);
    }
    printf("The array 2 is : ");
    for(i=0;i<m;i++)//Printing the Array 2.
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)//Find the Odd pairs by summing up the elements of both Array.
    {
        for(j=0;j<m;j++)
        {
            if((arr1[i]+arr2[j])%2!=0)//Summing up all elements.
            {
                printf("(%d,%d) ",arr1[i],arr2[j]);//Printing all Odd pairs.
                c+=1;
            }
        }
    }
    printf("\nTotal number of odd pairs is : %d",c);//Total number of odd pairs.
    return 0;
}
