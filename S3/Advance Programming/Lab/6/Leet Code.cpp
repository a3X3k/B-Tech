#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Limit : ";
    cin>>n;
    vector <int> arr(n);
    vector <int> arr1={1,2,3};
    vector <string> arr2;
    for(int i=0;i<n;i++)
    {
        arr[i]=i+1;
    }
    for(int i=0;i<arr.size();i++)
    {
        arr2.push_back("Push");
        int f=0;
        for(int j=0;j<arr1.size();j++)
        {
            if(arr[i]==arr1[j])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            arr2.push_back("Pop");
        }
        if(i==arr1.size()-1)
        {
            break;
        }
    }
    for(int i=0;i<arr2.size();i++)
    {
        cout<<arr2[i]<<" ";
    }
}

