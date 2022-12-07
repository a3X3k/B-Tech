#include<stdio.h>

//Find the Closest value to the Element
//Get Input from the User whose Closest value has to be found and display it.

/* NAME : S.ABHISHEK
ROLL NUMBER : AM.EN.U4CSE19147
BATCH : S2 CSE-B */
int main()
{
    int n,i,j,temp,ele,pos,nearest;//n - Size of the Array.
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
    printf("\nEnter the element whose closest value has to be found : ");
    scanf("%d",&ele);//Get Input from the User whose Closest value has to be found.
    printf("Enter the Kth nearest to be found : ");
    scanf("%d",&nearest);//Get the K'th Closest from the User.
    for(i=0;i<n;i++)
    {
        if(arr[i]==ele)//To find the position of the Inputed Element.
        {
            pos=i;
        }
    }
    printf("The closest element smaller than the element %d is %d",ele,arr[pos-nearest]);/*Its Index - K'th value
                                                                                            gives the K'th Smallest to that element*/
    printf("\nThe closest element greater than the element %d is %d",ele,arr[pos+nearest]);/*Its Index + K'th value
                                                                                            gives the K'th Largest to that element*/
    return 0;
}

