#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s1,s2,temp;
	cout<<"Enter the String 1 : ";
	cin>>s1;
	cout<<"\nEnter the String 1 : ";
	cin>>s2;
	temp=s1+s1;
	int i=temp.find(s2);
	if(i>=0)
	{
		cout<<"\nString is Found"<<endl;
	}
	else
	{
		cout<<"\nString is not Found"<<endl;
	}	
}
