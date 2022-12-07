#include<string>
#include<iostream>

using namespace std;

int main()
{
	string str;
	cout<<"Enter the String : ";
	cin>>str;
	int pos,f=0,len=str.length();
	for(int i=0;i<len;i++)
	{
		if(str[i]=='(')
		{
			pos=i;
			f=1;
			break;
		}
	}
	if(f==1)
	{
		for(int i=pos+1;i<len;i++)
		{
			if(str[i]==')')
			{
				cout<<"It's a Valid String!..";
				f=0;
				break;
			}
		}
		if(f==1)
		{
			cout<<"It's not a Valid String!..";
		}	
	}
	else
	{
		cout<<"The Input String Does'nt have any '(' or ')'.";
	}
	
}
