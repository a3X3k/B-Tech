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
    for(i=0;i<n;i++)//Getting input from the user.
    {
        printf("Enter the element : ");
        scanf("%d",&arr[i]);
        sum+=arr[i];//sum up elements directly while getting input.
    }
    printf("The sum of the element is : %d.",sum);
    return 0;
}
