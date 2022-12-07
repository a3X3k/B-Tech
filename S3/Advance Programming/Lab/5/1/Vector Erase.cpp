#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,i,del1,del2;
    vector<int>::iterator it;
    cout<<"Enter the Number of Elements : ";
    cin>>n;
    vector <int> arr(n);
    
    for(i=0;i!=n;i++)
    {
        cin>>arr[i];
    }
    
    for(it=arr.begin();it!=arr.end();it++)
    {
        cout<<*it<<" ";
    }
    
    cout<<"\nEnter the Position to Delete : ";
    cin>>del1;
    arr.erase(arr.begin()+del1-1);
    
    cout<<"\nEnter the Index Range to Delete : ";
    cin>>del1>>del2;
    
    arr.erase(arr.begin()+del1-1,arr.begin()+del2-1);
    
    for(it=arr.begin();it!=arr.end();it++)
    {
        cout<<*it<<" ";
    }
    
}

