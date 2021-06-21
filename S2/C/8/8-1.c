#include<stdio.h>

/*Get the input array from the user and a element.
To Find : Find all the pairs whose sum is equal to the input.*/

/*NAME : S.ABHISHEK
ROLL NUMBER : AM.EN.U4CSE19147
BATCH : S2-CSE-B*/

int find(int,int,int*);
int main()
{
    int n,i,sum;//sum - The element to store the sum value from the User.
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element : ");
        scanf("%d",arr+i);
    }
    printf("The Array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the sum that has to be found : ");
    scanf("%d",&sum);
    find(n,sum,arr);
    return 0;
}

int find(int n,int sum,int arr[n])
{
    int i,j;
    /* This for loop is to find the non repeated pair of elements.
    Example : (2,3) and (3,2) appears if the sum is 5.
    To avoid this repeatation i+1 is given in the second for loop.
    This condition keeps track of the second element and avoids it.*/
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                printf("(%d,%d) ",arr[i],arr[j]);
            }
        }
    }
    printf("\n");
    /*This for loop finds all pairs that repeats.
    Example : (3,2) and (2,3) */
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                printf("(%d,%d) ",arr[i],arr[j]);
            }
        }
    }
    printf("\n");
    /* This for loop finds all the pairs that repeats and the pairs whose both elements are same.
    Example : (2,2) if the sum is 4 */
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]+arr[j]==sum && i!=j)//Additional condition To ignore the same (a,b) elements.
            {
                printf("(%d,%d) ",arr[i],arr[j]);
            }
        }
    }
}
