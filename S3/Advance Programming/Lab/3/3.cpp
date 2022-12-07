#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1,s2;
	cout<<"Enter the String : ";
	cin>>s1;
	for(int i=0;i<s1.length();i++)
	{
		if(s1[i]=='(' || s1[i]=='{' || s1[i]=='[')
		{
			s2.push_back(s1[i]);
		}
		else if(s1[i]==')' || s1[i]=='}' || s1[i]==']')
		{
			if(s1[i]==')' && s2.back()=='(')
			{
				s2.pop_back();
			}
			else if(s1[i]=='}' && s2.back()=='{')
			{
				s2.pop_back();
			}
			else if(s1[i]==']' && s2.back()=='[')
			{
				s2.pop_back();
			}
			else
			{
				cout<<"Not Balanced";
				return 0;
			}
		}
	}
	if(s2.empty())
	{
		cout<<"Balanced\n";
	}
	else
	{
		cout<<"Not Balanced\n";
	}
}
