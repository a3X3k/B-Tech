#include<iostream>
#include<array>

using namespace std;

int main() 
{
    int i=0,n,m=8;
	array <int,8>a;
	for(i=0;i<m;i++)
	{
		cout<<"Enter the Element "<<i+1<<" : ";
		cin>>a[i];
	}
	
	cout<<"\nThe Elements are : ";
	for(int  j:a)
	{
		cout<<j<<" ";
	}
    
    cout<<"\n\nEnter the value to Remove its Instances : ";
    cin>>n;
    cout<<"\nThe Value is : "<<n;
    
    int p=0,f=0,k=0;
    for(i=0;i<m;i++)
    {
        f=0;
        if(a[i]==n)
        {
            f=1;
            p++;
        }
        if(f==0)
        {
            a[k++]=a[i];
        }
    }
    
    cout<<"\nThe new Size is : "<<m-p;
    
    cout<<"\nThe Elements are : ";
	for(i=0;i<m-p;i++)
	{
		cout<<a[i]<<" ";
	}
    
    return 0;
}
