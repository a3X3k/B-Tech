#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,i;
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
    
    sort(arr.begin(),arr.end());
    
    cout<<"\n";
    for(it=arr.begin();it!=arr.end();it++)
    {
        cout<<*it<<" ";
    }
}
