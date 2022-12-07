#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
	int arr[5];
	
	  
	array<int,5> myarray = {5,4,3,2,1};
	array<int,5> myarray2  {5,4,9,3,1};
	
	array<int,5> myarray3;
	myarray3 = {9,10,11,12,13};
	
	array<int,5>::iterator i;
	
	for(i= myarray2.begin(); i < myarray2.end(); i++)
	    cout << *i << " ";
	  cout << endl;
	  
	 myarray2[1] = 1;
	 
	 for (int j:myarray2)
	     cout << j << " ";
	  cout << endl; 
	  
	  cout << myarray2.at(3);
	  
	  cout << " " << myarray2[3] << endl;
	  
	  cout << " size ";
	  
	  cout <<myarray2.size();
	  
	  cout << " Mx size ";
	  
	  cout <<myarray2.max_size();
	  
	  myarray2.fill(5);
	  
	  
	  for (int j:myarray2)
	     cout << j << " ";
	  cout << endl; 
	  
	  
	  myarray2.swap(myarray);
	 
	  
	  for (int j:myarray2)
	     cout << j << " ";
	  cout << endl; 
	  sort(myarray2.begin(), myarray2.end());
	  
	  
	  cout << "after sortng ";
	  
	  for (int j:myarray2)
	     cout << j << " ";
	  cout << endl; 
	  
}
	
	
	
	     

	
	
	
	
	 
	 
	 
	 

	
	
	
	
