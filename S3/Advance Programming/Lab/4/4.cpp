#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{ 
	array<int,5> a1 = {3,4,5,1,2};
	array<int,5> a2 = {1,2,3,5};
	
	cout<<"Size Of Array 1 : "<<a1.size()<<endl;
	cout<<"Size Of Array 2 : "<<a2.size()<<"\n"<<endl;
	
	cout<<"Max Size Of Array 1 : "<<a1.max_size()<<endl;
	cout<<"Max Size Of Array 1 : "<<a2.max_size()<<"\n"<<endl;
	
	cout<<"The Elements of the Array 1 is : "; 
	for(int i:a1)
	{
	    cout<<i<<" ";
	}
	cout<<endl; 
	
	cout<<"The Elements of the Array 2 is : "; 
	for(int i:a2)
	{
	    cout<<i<<" ";
	}
	cout<<endl; 
	
	cout<<"The First Element in the Array 1 is : "<<a1.at(0);
	cout<<"\nThe First Element in the Array 2 is : "<<a2.at(0);
	cout<<"\n\nThe Last Element in the Array 1 is : "<<a1.at(a1.size()-1);
	cout<<"\nThe Last Element in the Array 2 is : "<<a2.at(a2.size()-2);
	
	cout<<"\n\nEnter the Position to Insert : ";
	int p,n;
	cin>>p;
	
	cout<<"Enter the Element to Insert : ";
	cin>>n;
	
	for(int i=p-1;i<a2.size()-1;i++)
	{
	    a2[i+1]=a2[i];
	}
	a2[p-1]=n;
	
	cout<<"\nThe Elements of the New Array 2 is : "; 
	for(int i:a2)
	{
	    cout<<i<<" ";
	}
	cout<<endl;
	
	sort(a1.begin(),a1.end());
	cout<<"\nThe Sorted Array is : "; 
	for(int i:a1)
	{
	    cout<<i<<" ";
	}
	cout<<endl; 
	
	a2.swap(a1);
	cout<<"\nThe Swapped Array 1 is : "; 
	for(int i:a1)
	{
	    cout<<i<<" ";
	}
	cout<<endl; 
	cout<<"\nThe Swapped Array 2 is : "; 
	for(int i:a2)
	{
	    cout<<i<<" ";
	}
	cout<<endl; 
	
	a2.fill(5);
	cout<<"\nThe New Array 2 is : "; 
	for(int i:a2)
	{
	    cout<<i<<" ";
	}
	cout<<endl; 
	
	for(int i=0;i<a2.size();i++)
	{
	    a2[i]=i+1;
	}
	cout<<"\nThe New Array 2 is : "; 
	for(int i:a2)
	{
	    cout<<i<<" ";
	}
	cout<<endl; 
}
