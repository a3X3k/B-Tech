#include<iostream>

using namespace std;

template <class T>

class search
{ 
    public: T find(T x[],T y) 
	{
    	int i=0;
    	for(i=0;i<5;i++)
    	{
    		if(x[i]==y)
    		{
    			cout<<"\nThe Element "<<x[i]<<" Is Found In The Position "<<i+1;
    			break;
			}
		}
    }
};

int main() 
{
	search <int> obj;
	search <float> obj1;
    
	int a[5],b;
    
    cout<<"Enter 5 Elements :\n";
    for(int i=0;i<5;i++)
    {
    	cout<<"Enter the Element "<<i+1<<" : ";
    	cin>>a[i];
	}
	cout<<"\nEnter the Element to Find : ";
	cin>>b;
    obj.find(a,b);
    
    float a1[5],b1;
    cout<<"\n\nEnter 5 Elements :\n\n";
    for(int i=0;i<5;i++)
    {
    	cout<<"Enter the Element "<<i+1<<" : ";
    	cin>>a1[i];
	}
	cout<<"\nEnter the Element to Find : ";
	cin>>b1;
    obj1.find(a1,b1);
    return 0;
}
