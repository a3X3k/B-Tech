#include<stdio.h>

//Bubble Sort the Array and Display it.

/* NAME : S.ABHISHEK
ROLL NUMBER : AM.EN.U4CSE19147
BATCH : S2 CSE-B */

int main()
{
    int n,i,j,temp;//n - Size of the Array
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)//Getting input from the User.
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The array is : ");//Printing the Array.
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)//Bubble sort the array for Simple Steps.
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])/*If the element is Greater than the next element
            then the smaller element is pushed to left side and Larger element is pushed to right side*/
            {
                temp=arr[j];//Storing the current value in the temporary variable.
                arr[j]=arr[j+1];//Swapping
                arr[j+1]=temp;//Swapping
            }
        }
    }
    printf("\nThe sorted array is : ");
    for(i=0;i<n;i++)//Print the Sorted Array.
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
