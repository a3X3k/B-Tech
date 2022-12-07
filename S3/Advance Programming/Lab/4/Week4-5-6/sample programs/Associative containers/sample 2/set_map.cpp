#include <iostream>
#include <set>
#include <map>
using namespace std;

int main()
{
	
	set<int> myset;
	
	myset.insert(100);
	myset.insert(200);
	myset.insert(300);
	myset.insert(40);
	myset.insert(40);
	myset.insert(50);
	
	cout <<"\n\r set .."  << endl;
	
	for (auto &k : myset) 
	     cout << k << endl;
	     
	multiset<int> mymultiset;
	mymultiset.insert(100);
	mymultiset.insert(200);
	mymultiset.insert(300);
	mymultiset.insert(40);
	mymultiset.insert(40);
	mymultiset.insert(50);
	
	cout <<"\n\r multiset .." << endl;
	for (auto &j : mymultiset) 
	     cout << j << endl;
	     
	return 0;
}
	
