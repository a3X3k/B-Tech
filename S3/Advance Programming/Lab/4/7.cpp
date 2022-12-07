#include<iostream>
#include<array>

using namespace std;

int main() 
{
    int i=0,m=8,j;
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
	
	i=0;
    for (j=1;j<m;j++) 
    {
        if (a[j] != a[i]) 
        {
            i++;
            a[i]=a[j];
        }
    }
  
    cout<<"\nThe Elements are : ";
    for(j=0;j<=i;j++)
    {
        cout<<a[j]<<" ";
    }
    return 0;
}
