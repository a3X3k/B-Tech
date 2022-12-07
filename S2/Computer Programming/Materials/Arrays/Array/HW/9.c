#include<stdio.h>

/*Get two input array from the user and merge two sorted array to one which is sorted */

/*NAME : S.ABHISHEK
ROLL NUMBER : AM.EN.U4CSE19147
BATCH : S2-CSE-B*/

int join(int,int,int*,int*);
int main()
{
    int n,m,i;
    printf("Enter the number of elements in the array 1 : ");//First Array
    scanf("%d",&n);
    int arr1[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("Enter the number of elements in the array 2 : ");//Second Array
    scanf("%d",&m);
    int arr2[m];
    for(i=0;i<m;i++)
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr2[i]);
    }
    join(n,m,arr1,arr2);//Function Declaration
    return 0;
}

int join(int n,int m,int arr1[n],int arr2[m])
{
    int arr[n+m],i=0,j=0,k=0;
    while(i<n && j<m) /*Adds elements to the New Array till both the 'i'
                        and 'j' pointer is less than the size of the Array 1 and Array 2 respectively*/
    {
        if(arr1[i]<arr2[j])
        {
            arr[k++]=arr1[i++];
        }
        else
        {
            arr[k++]=arr2[j++];
        }
    }
    while(i<n) /*Adds the remaining elements in Array 1 */
    {
        arr[k++]=arr1[i++];
    }
    while(j<m) /*Adds the remaining elements in Array 2 */
    {
        arr[k++]=arr2[j++];
    }
    printf("The sorted array is : "); //Print the sorted Array.
    for(i=0;i<m+n;i++)
    {
        printf("%d ",arr[i]);
    }
}
