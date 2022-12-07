#include <iostream>
#include <vector>
#include <set>

#include <algorithm>

using namespace std;


bool f(int x, int y)
{
	return x > y;
}

int main()
{
	// set - we need something which gets sorted automatically so that we can do lower bound , upper bound. No additional
	// O(log N) like vectors.
	set<int> s;
	// det interanlly mainains the ascending sequence numbers and ach operation is O(log N)
	s.insert(1);
	s.insert(2);
	s.insert(-1);
	s.insert(-10);
	
	
	for (int x:s)
	   cout << x << ' ';
	cout << endl;
	
	//-10 -1 1 2
	
	auto it = s.find(-1); // it will pint to element -1, if not ound return s.end()
	if (it == s.end())
	   cout << "-1 element not present ";
	 else
	     cout << "it is present"  << *it;
	cout << endl;
	
	// to find an element > an element
	
	auto it2 = s.lower_bound(-1);
	auto it3 = s.upper_bound(-1);
	
	auto it4= s.upper_bound(2);
	if (it4 == s.end())
	   cout << " element > 2 not present ";
	   
	else
	     cout << " element > 2 is present"  << *it4;
	cout << endl;
	
	s.erase(1);
	
	for (int x:s)
	   cout << x << ' ';
	cout << endl;
	
	
}	
	
	   
	
	
	
	   
	
	



void vector_demo()
{

vector<int>  A = {11,2,3,44};

//access 2nd element

cout << A[1] << endl;

sort(A.begin(), A.end()); //sort O(NlogN) 
//2,3,11,44

//search on O(log N) times

//O(log N)
bool present = binary_search(A.begin(), A.end(), 3);

present = binary_search(A.begin(), A.end(), 5); // returns false

A.push_back(100);

present = binary_search(A.begin(), A.end(), 100);

// 2,3,11,44,100

A.push_back(100);
A.push_back(100);
A.push_back(100);

A.push_back(100);

// 2,3,11,44,100,100,100,100

A.push_back(123);

// 2,3,11,44,100,100,100,100, 123

//vector<int>::iterator it = lower_bound(A.begin(),A.end(), 100);// first element >= 100. return 4

//use auto 
auto it = lower_bound(A.begin(),A.end(), 100);// first element >= 100. return 4
//vector<int>::iterator it2 = upper_bound(A.begin(),A.end(), 100);// first element > 100  returns 8
vector<int>::iterator it2 = upper_bound(A.begin(),A.end(), 100);// first element > 100  returns 8


cout << *it << " " << *it2 << endl;


// gives count of 100
std::cout << (it2 - it) << endl; // 4 - iterators in vectors are in random so we can perform arithemetic operations on constant time. O(1)




sort(A.begin(), A.end(), f); //sort in descending order , overloaded function

vector<int>::iterator it3;

for(it3= A.begin();it3 != A.end();it3++)
{
	  cout << *it3 << " ";
	  
  }
  cout << endl;
  
  for (int x: A)
      cout << x << ' ' ;
  cout << endl;
  
for (int &x: A)// iterate by refernce on vector
{
	  x++;  //particular element of the vector will be incremented.
}	  
	  
for (int x: A)
      cout << x << ' ' ;
  
cout << endl;

}



