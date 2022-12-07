#include<stdio.h>
/*NAME : S.ABHISHEK
ROLL NUMBER : AM.EN.U4CSE19147
BATCH : S2-CSE-B*/
int insert(int,int,int,int*);
int del(int,int,int*);
int main()
{
    int n,i,ele,pos,choice;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
    {
        printf("Enter the element : ");
        scanf("%d",arr+i);
    }
    printf("Enter 1 to insert an element and 2 to delete an element : ");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter the element to be inserted : ");
        scanf("%d",&ele);
        printf("Enter the position in which the element has to be inserted : ");
        scanf("%d",&pos);
        insert(n,ele,pos,arr);
    }
    else
    {
        printf("Enter the element to be deleted : ");
        scanf("%d",&ele);
        del(n,ele,arr);
    }
    return 0;
}

int insert(int n,int ele,int pos,int arr[n+1])
{
    int i;
    for(i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=ele;
    for(i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
}

int del(int n,int ele,int arr[n+1])
{
    int i,j,c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            c+=1;
            for(j=i;j<n;j++)
            {
                arr[j]=arr[j+1];
            }
            i--;
        }
    }
    for(i=0;i<n-c;i++)
    {
        printf("%d ",arr[i]);
    }
}
