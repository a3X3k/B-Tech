#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n,c,j,min=20,l;
	cout<<"No Of Strings : ";
	cin>>n;
	string a[n];
	string p="";
	for(int i=0;i<n;i++)
	{
	    cout<<"String "<<i+1<<" : ";
		cin>> a[i];
		l=a[i].size();
		if(l<min)
		{
			min=l;
		}
	}
	for(int i=0;i<min;i++)
	{
		c=0;
		for(j=0;j<n-1;j++)
		{
			if(a[j][i]==a[j+1][i])
			{
				c++;
			}
			else
			{
				break;
			}
		}
		if(c==n-1)
		{
			p.push_back(a[j][i]);
		}
		else
		{
			break;
		}
		
	}
	if(p.length()>0)
	{
	    cout <<"Result : " << p;
	}
	else
	{
	    cout <<"No Common Terms!!"; 
	}
}
