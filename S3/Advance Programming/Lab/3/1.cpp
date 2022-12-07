#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1="String class is part of C++ library";
	char str2[13];
	str1.copy(str2,12,1);
	str2[12]='\0';
	cout<<"Original String : "+str1<<endl;
	cout<<"Copied String : "<<str2<<endl;
	cout<<"The First Index is : "<<str1.at(0)<<endl;
	cout<<"The Last Index is : "<<str1.at(str1.length()-1)<<endl;
	cout<<"The Middle Index is : "<<str1.at(str1.length()/2)<<endl;
	str1.append("Object");
	cout<<"Appended String : "<<str1<<endl;
	string str3="Hello Hello Hello";
	cout<<"First occurrence is "<<str3.find("Hello")<<endl;
	int pos=str3.find("Hello");
	pos=str3.find("Hello",pos+1);
	pos=str3.find("Hello",pos+1);
	str3.erase(pos);
	cout<<"New String is : "<<str3<<endl;
	pos=str3.find("Hello");
	pos=str3.find("Hello",pos+1);
	string str4;
	cout<<"Enter the String : ";
	cin>>str4;
	str3.replace(pos,str4.length(),str4);
	cout<<"New String is : "<<str3<<endl;
}
