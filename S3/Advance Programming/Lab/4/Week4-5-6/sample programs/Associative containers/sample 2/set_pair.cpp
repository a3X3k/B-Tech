#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <limits>


using namespace std;

int main()
{
	set <pair<int,int>> s;

     s.insert({401,450});
     s.insert({2,3});
     s.insert({10,20});
     s.insert({30,400});
     
     int point = 50;
     auto it = s.upper_bound({point,INT8_MAX});
     if (it == s.begin())
        {
			cout << "The given point is not lying in any of the interval...";
			return;
	    }
     it--;
     pair<int, int> current = *it;
     
     if (current.first <= point && point <= current.second) {
		 cout << "yes it is present " << current.first << " " << current.second << endl;
      }
      else
      {
		  cout << "The given point is not lying in any of the interval...";
	   }
	   
	   return(0);
}
	
     
     
