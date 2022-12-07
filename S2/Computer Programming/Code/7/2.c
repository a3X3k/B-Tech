#include<stdio.h>

//To find the sum of the even positioned number.

/* NAME : S.ABHISHEK
ROLL NUMBER : AM.EN.U4CSE19147
BATCH : S2 CSE-B */

int main()
{
    int n,i,sum=0;//n - Size of the Array.
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)//Getting Input from the user.
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The array is : ");
    for(i=0;i<n;i++)//Print the Array elements.
    {
        printf("%d ",arr[i]);
        if(i%2==0)//It enters the condition only if its divisible by 2 (ie) Even number
        {
            sum+=arr[i];//Sum up all the elements.
        }
    }
    printf("\nThe sum of the even positioned number is %d",sum);
    return 0;
}
