#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cout<<"Enter the String : ";
	cin>>s;
	int i,j,f=0;
	for(i=0;i<s.length();i++)
	{
		f=0;
		for(j=i+1;j<s.length();j++)
		{
			if(s[i]==s[j])
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			cout<<s[i]<<" is found in "<<i<<"th Index!.";
			return 0;
		}
	}
	cout<<"All characters are repeated!";
	return 0;
}
