#include<stdio.h>

/*Get the array input from the user and delete all the duplicate element from it */

/*NAME : S.ABHISHEK
ROLL NUMBER : AM.EN.U4CSE19147
BATCH : S2-CSE-B*/

int duplicate(int*,int*);
int main()
{
    int n,i;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    duplicate(&n,arr);//Function Declaration.
    return 0;
}

int duplicate(int* n,int arr[*n])
{
    int i,j,k;
    for(i=0;i<*n;i++)
    {
        for(j=i+1;j<*n;j++)
        {
            if(arr[i]==arr[j])/*If the element in Array1 is equal to
                              the element in Array 2 It call's the Delete function*/
            {
                del(j,&n,arr);
                n--;
                j--;
            }
        }
    }
    for(i=0;i<*n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

int del(int j,int* n,int arr[*n])/*It removes the element
                                   and left shifts other elements to occupy its position*/
{
    int k;
    for(k=j;k<*n;k++)
    {
        arr[k]=arr[k+1];
    }
    return 0;
}
