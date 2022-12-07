#include<iostream>
#include<array>
#include<algorithm>
#include<numeric>  
#include<vector>
using namespace std;

int myfun(int x, int y)  
{ 
    if((x-y)<0)
    {
        return -(x-y);
    }
    else
    {
        return x-y; 
    }

} 

void display(int a[], int n) 
{ 
    for (int i = 0; i < n; i++) { 
        cout << a[i] << "  "; 
    } 
    cout << endl; 
} 

int main()
{
    vector<int> a={20,25,25,50,40,22,25,45,42,44,33,35,44,48};
    int a1[]={20,25,25,50,40,22,25,45,42,44,33,35,44,48};
    vector<int>::iterator it;

    for(it=a.begin();it!=a.end();it++)
    {
        cout<<*it<<" ";
    }
    
    int f=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]%2==0)
        {
            cout<<"\nAll Members are not Odd.";
            f=1;
            break;
        }
    }
    
    if(f==0)
    {
        cout<<"\nAll Members are Odd.";
    }
    
    f=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]%2==0)
        {
            cout<<"\nThere are Odd Members.";
            f=1;
            break;
        }
    }
    if(f==0)
    {
        cout<<"\nThere is no Odd Members.";
    }
    
    f=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]<20)
        {
            cout<<"\nThere are Marks Less than 20.";
            f=1;
            break;
        }
    }
    if(f==0)
    {
        cout<<"\nAll Marks are above 20.";
    }
    
    f=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==50)
        {
            cout<<"\nThere is a Student who Scored 50.";
            f=1;
            break;
        }
    }
    if(f==0)
    {
        cout<<"\nNone of the Student Scored 50.";
    }
    
    f=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]<0)
        {
            cout<<"\nThere is Negative Marks.";
            f=1;
            break;
        }
    }
    if(f==0)
    {
        cout<<"\nThere is No Negative Marks.\n";
    }
    
    cout<<"Marks after adding Attendance Marks : ";
    for(it=a.begin();it!=a.end();it++)
    {
        cout<<*it+5<<" ";
    }
    
    cout<<"\nThe Indices where the Mark is 44 are : ";
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==44)
        {
            cout<<i<<" ";
        }
    }
    
    int sum=0;
    cout<<"\nThe Average of the Marks is "<<accumulate(a1,a1+14,sum)/14;
    
    cout<<"\nThe Marks after Sorting : ";
    sort(a.begin(),a.end());
    for(it=a.begin();it!=a.end();it++)
    {
        cout<<*it<<" ";
    }
    
    sum=0;
    cout<<"\nThe Adjacent Difference Between the Marks is "<<accumulate(a1,a1+14,sum,myfun);
    
    vector<int> arr1 = {44,43,25,39,33,38}; 
    vector<int> arr2 = {30,44,35,22,38,49,33,41}; 
    vector<int> arr3(14);
    
    sort(arr1.begin(),arr1.end()); 
    sort(arr2.begin(),arr2.end());
    
    merge(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),arr3.begin());
    
    cout<<"\nThe Marks after Merging : ";
    for(it=arr3.begin();it!=arr3.end();it++)
    {
        cout<<*it<<" ";
    }
    
    int arr[] = {1,3,2,5}; 
    int n=4;
    sort(arr,arr+n); 
    cout<<"\nPermutation :\n";
    do { 
        display(arr, n); 
    } while (next_permutation(arr,arr+n));
}
