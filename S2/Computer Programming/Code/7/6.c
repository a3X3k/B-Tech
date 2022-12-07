#include<stdio.h>

//To left or right rotate depending on the User's choice.

/* NAME : S.ABHISHEK
ROLL NUMBER : AM.EN.U4CSE19147
BATCH : S2 CSE-B */

int right(int,int,int*);
int left(int,int,int*);
int main()
{
    int n,i,j,choice,ele;//n - Size of the Array.
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)//Getting Input.
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The array is : ");
    for(i=0;i<n;i++)//Printing the Array.
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter 1 to right rotate and 2 to left rotate : ");//Getting Choice from User.
    scanf("%d",&choice);
    if(choice==1)//If choice is 1 Right Rotate the Array.
    {
        printf("Enter the number of elements to be right rotated : ");
        scanf("%d",&ele);
        right(n,ele,arr);
    }
    else//If choice is 2 Left Rotate the Array.
    {
        printf("Enter the number of elements to be left rotated : ");
        scanf("%d",&ele);
        left(n,ele,arr);
    }
    return 0;
}

int right(int n,int ele,int arr[n])
{
    int i,j,temp;
    for(i=0;i<ele;i++)
    {
        temp=arr[n-1];//Assigning last element to a temporary variable.
        for(j=n-1;j>0;j--)//From reverse assigning all elements to its next position.
        {
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
    printf("The right rotated array is : ");
    for(i=0;i<n;i++)//Print the rotated Array.
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

int left(int n,int ele,int arr[n])
{
    int i,j,temp;
    for(i=0;i<ele;i++)//
    {
        temp=arr[0];//Storing the first element in a temporary variable.
        for(j=0;j<n-1;j++)//Assigning the values of next elements to the current element.
        {
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
    printf("The left rotated array is : ");
    for(i=0;i<n;i++)//Printing the Array.
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
