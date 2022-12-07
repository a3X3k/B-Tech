#include<stdio.h>

//To Find the Largest and Smallest Element in the Array.
//To Interchange the Largest and Smallest Element.

int main()
{
    int n,i,pos,max=0,pos1,temp;//n - Size of the Array.
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n],min=arr[0];
    for(i=0;i<n;i++)//Getting Input.
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]>max)/*Finding the largest value directly while inputing the values*/
        {
            max=arr[i];/*The largest element*/
            pos=i;/*The index of the Largest element*/
        }
    }
    printf("The array is : ");
    for(i=0;i<n;i++)/*Finding the smallest element from the array*/
    {
        printf("%d ",arr[i]);
        if(arr[i]<=min)
        {
            min=arr[i];/*The smallest element*/
            pos1=i;/*The index of the Smallest element*/
        }
    }
    printf("\nThe largest number in the array is : %d",max);
    printf("\nThe smallest number in the array is : %d",min);
    for(i=0;i<n;i++)//To Interchange the Largest and Smallest Values.
    {
        if(i==pos)
        {
            temp=arr[i];//Store the Largest value in the temporary variable.
            arr[i]=arr[pos1];//Store the Smallest value in the index of Largest value.
            arr[pos1]=temp;//Storing the temporary value in the Smallest position.
        }
    }
    printf("\nThe modified array is : ");
    for(i=0;i<n;i++)//Print the Array.
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
