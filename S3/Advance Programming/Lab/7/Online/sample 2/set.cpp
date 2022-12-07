#include <iostream>
#include <vector>
#include <set>
using namespace std;


int main()
{
	set<int> s;
	s.insert(5);
	s.insert(5);// will store only one variable with value 5
	s.insert(4); // values are always sorted
	
	vector<int> v;
	v.push_back(5);
	v.push_back(5);// vector strores 2 variables with value 5
	v.push_back(4);
	
	cout << " set prints in sorted order and removes duplicates" << endl;
	for (int k:s)  cout <<k<<" "; // prints in sorted order
	cout << endl;
	
	cout << "vector output  " << endl;
	for (int k:v)  cout <<k<<" "; // will not change the order
	cout << endl;
	
	//vector push_back is O(1)  and set insert is O(logN)
	
	// Type 1 query to insert an alement into the set
	// Type 2 query  for an element x, output the first element >= x in the set.  outpit -1 if no such element exist.
	
	int q;
	

	
	// if you have sorted element
	auto it = lower_bound(v.begin(),v.end(), q);
	int pos = it - v.begin();
	// this trip doesnot work in a set beause we cano acess random access ekement in set.
	v[5]; // returns the elemnt at the 5th position.
	//s[5] ; // you can't do this. can't access randomly, only using iterators
	
	
	cout << "Howmany iterations ...." << endl;
	cin >> q;
	
	
	while (q--)
	{
		int type, x;
		cout << "SET : enter 1 to insert ,  2 to search for the element " << endl;
		
		cin >> type >> x;
		if (type == 1)
		{
			 s.insert(x);
		}
		if (type == 2)
		{
			// 2 important functions of set . lower bound and upperbound
	//		s.lowerbountd(x); // returns an iterator to the first element in the set >= x
	//		s.upperbountd(x); // returns an iterator to the first element in the set strictly > x
			
			// if n such iterator exist => ierator to s.end()
	//		s.begin(); // iterator to the first element of s
	//		s.end(); //iterator to the position AFTER the final elemen of the set
			
			// to access final element of he set you have to do
	//		--s.end();
	
	  auto it = s.lower_bound(x);
	  if (it == s.end()) // no such element exists
	     cout << -1 << endl;
	  else
	     cout << *it << endl;
	     
	     
		}
	} 
}
			 
		
		
	
	
	
	
