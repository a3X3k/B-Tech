#include<stdio.h>
/*NAME : S.ABHISHEK
ROLL NUMBER : AM.EN.U4CSE19147
BATCH : S2-CSE-B*/
int find(int,int,int*);
int main()
{
    int n,i,ele;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element : ");
        scanf("%d",arr+i);
    }
    printf("Enter the element to be found : ");
    scanf("%d",&ele);
    find(n,ele,arr);
    return 0;
}

int find(int n,int ele,int arr[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            printf("The element %d is found in the position %d .",ele,i);
            return;
        }
    }
    printf("The element %d is not found.",ele);
    return 0;
}
