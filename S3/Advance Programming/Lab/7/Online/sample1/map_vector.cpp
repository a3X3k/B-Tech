#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

using namespace std;

// sybtax map<T1,T2> obj; where T1 is key type and T2 is value type
//std::map is associative container that stores element in key pair combination
// where key should be unique else it will overrides the previous values
// it is implemented using AVL /Red Black tree - self balancing BST
// it store key value pairin sorted order on the basis of key <ascending/descending
// map is used in dictionary kind of problem

int main()
{
	
   map<string, int> Map1;
   Map1["j11"] = 112;
   Map1["j22"] = 211;
   Map1.insert(make_pair("j333",444));
   
  
     cout << Map1["j22"] << endl;
    for (auto &el1: Map1)
	{
	   	    cout << el1.first << " " << el1.second << endl; 
     }
// key an be one and values can be multiple 
	map<string,vector<int>> Map;
	
    Map["jaya"].push_back(333);
    Map["jaya"].push_back(777);
    Map["jay"].push_back(111);


	
	for (auto &el1: Map)
	{
	   	    cout << el1.first << " "  << endl;
 // for vector 
          for (auto el2:el1.second)
               cout << el2 << " "  << endl;   
      }     
 

	return 0;
}


