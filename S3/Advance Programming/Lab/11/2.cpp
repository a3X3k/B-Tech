#include<iostream>

using namespace std;
int merge(int arr[],int l,int m,int r)
{
    int n1 = m - l + 1; 
    int n2 = r - m; 
    int L[n1], R[n2]; 
    
    for(int i = 0; i < n1; i++)
    {
        L[i] = arr[l + i]; 
    }
    for(int j = 0; j < n2; j++) 
    {
        R[j] = arr[m + 1 + j];
    }
         
    int i = 0,j = 0,k = l; 
      
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j])  
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else 
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 

    while (i < n1)  
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
    
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
}

int sort(int arr[],int l,int r)
{
    if(l<r)
    {
       int m=(l+(r-1))/2;
       sort(arr,l,m);
       sort(arr,m+1,r);
       merge(arr,l,m,r);
    }
}

int main()
{
    int n,i;
    cout<<"Enter the number of Elements in the Array : ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter the Element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"The Array is : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    sort(arr,0,n);    
    cout<<"\nThe Sorted Array is : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}