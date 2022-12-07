#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{

vector<int> A;


cout << "size: " << A.size() << endl;
cout << "Resize the array ...." << endl;

A.resize(5);
cout << "After resize size: " << A.size() << endl;
cout << "capacity : " << A.capacity() << endl;

cout << "Max size : " << A.max_size() << endl;


vector<int >::iterator it1;

int i = 0;
for (i = 0; i != A.size(); i++)
      A[i] = i+1;

     
for (it1 = A.begin(); it1 != A.end(); it1++)
  {
	  cout << *it1 << " ";
  }
cout << endl;  


cout << "size " << A.size() << "  MAX Size " << A.max_size() << endl;

vector< int > v(20);
for(int i = 0; i < 20; i++) {
v[i] = i+1;
}

for (it1 = v.begin(); it1 != v.end(); it1++)
  {
	  cout << *it1 << " ";
  }
cout << endl;  

v.resize(25);
for(int i = 20; i < 25; i++) {
v[i] = i*2;
}

for (it1 = v.begin(); it1 != v.end(); it1++)
  {
	  cout << *it1 << " ";
  }
cout << endl; 

for(int i = 20; i < 25; i++) {
   v.push_back(i*2); // Writes to elements with indices [25…30), not [20…25) ! <
} 

for (it1 = v.begin(); it1 != v.end(); it1++)
  {
	  cout << *it1 << " ";
  }
cout << endl; 

}

