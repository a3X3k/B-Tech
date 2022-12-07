#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

// sybtax map<T1,T2> obj; where T1 is key type and T2 is value type
//std::map is associative container that stores element in key pair combination
// where key should be unique else it will overrides the previous values
// it is implemented using AVL /Red Black tree - self balancing BST
// it store key value pairin sorted order on the basis of key <ascending/descending
// map is used in dictionary kind of problem

int main()
{
	map<string, int> Map;
// 	map<string, int, greater<>> Map;


	Map["jaya"] = 999;
	Map["j"] = 888;


	
	Map.insert(make_pair("JA",777));
	
	for (auto &ell: Map)
	{
	   cout << ell.first << " " << ell.second << endl;
	  } 
         
 	   
	cout << Map["j"] << endl;
	return 0;
}


