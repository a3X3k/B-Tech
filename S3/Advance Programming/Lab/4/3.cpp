#include<iostream>
#include<string>

using namespace std;

template <class T>

class temp
{ 
    public: T join(T x,T y) 
	{
    	cout<<x+y;
    }
};

int main() 
{
	temp <int> obj;
	temp <float> obj1;
    temp <string> obj2;
    
	int n,i=0;
	cin>>n;
	
	while(i<n)
	{
		string type;
		cin>>type;
		if(type=="int")
		{
			int a,b;
			cin>>a>>b;
			obj.join(a,b);
		}
		else if(type=="float")
		{
			float a,b;
			cin>>a>>b;
			obj1.join(a,b);
		}
		if(type=="string")
		{
			string a,b;
			cin>>a>>b;
			obj2.join(a,b);
		}
	}
    return 0;
}
