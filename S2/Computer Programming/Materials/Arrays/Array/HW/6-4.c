#include<stdio.h>
/*NAME : S.ABHISHEK
ROLL NUMBER : AM.EN.U4CSE19147
BATCH : S2-CSE-B*/
int main()
{
    int n,sum=0,i;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element : ");
        scanf("%d",&arr[i]);
    }
    printf("The elements are : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
        sum+=arr[i];
    }
    printf("\nThe sum of the element is : %d.",sum);
    for(i=0;i<n;i++)
    {
        arr[i]=arr[i]+1;
    }
    printf("\nThe modified array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
