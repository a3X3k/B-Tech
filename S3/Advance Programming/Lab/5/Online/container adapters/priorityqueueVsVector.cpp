#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;


typedef pair<int, int> pi; 

// type 1 insert an element to the list
// type 2 = output the largest element which is there in the list
// type 3 remove the largest element from the list

//if you implement in vector

int main()
{

vector<int> v;
int q;
cout << "Enter array size ";
cin >> q;
cout << endl;

while (q--) {
	
		int type;
		cout << "Enter In vector 1 - insert 2  - To find Max ";
		cin >> type;
		cout << endl;
		
		if (type == 1)
		{
			int x;
			cout << "Enter number to insert ";
			cin >> x;
			v.push_back(x);
			//anoter option for option 2 is sort the vector gain when you insert
			sort(v.begin(),v.end()); // O(nlogn)
			// 3rd option is have max variabe outside, when you interst search andfind the max and output that in option 2
		}
		if (type == 2)
		{
			// difficult in vector, iterate all over the vector and find the max  O(N)
			int max1 = 0;
			for(int i = 0; i < v.size();i++) {
				max1 = max(max1,v[i]);
			}
			cout << max1 << endl;
			
		}
		else
		{
			
	     }
	     
	  }
	  
	  
	  // priority queue
	  
	  priority_queue<int> pq;
	  //pq.top() return max element in a priority queue  - O(1)
	 //pq.pop() removes the max element from the priroity queue - O(logn)
	 //pq.push() add element to priorit queueu - O(log n)
	 // internally stored as binary tree
      cout << "Enter priority queue  size ";
     cin >> q;
     cout << endl;
	  
	     while (q--) {// O(q.N) --> Q(q.logn)
	
	    cout << "Enter In priority queue 1 - insert 2  - To find Max  3 - delete Max element";
		int type;
		cin >> type;
		cout << endl;
		if (type == 1)
		{
			int x;
			cout << "Enter number to insert ";
			cin >> x;
			pq.push(x);
			
		}
		if (type == 2)
		{
			cout << " Max element ";
			cout << pq.top()<< endl;
		}
		else
		{
			cout << "Deleting Max element ";
			pq.pop();
	     }
	     
	  }
	  
	  
	  // priority queue you may need to print from minimum element to maximum element
	  priority_queue<int, vector<int>, greater<int>> pq1;
	//  priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq3;//stores minimum
	//   priority_queue<pi, vector<pi>, greater<pi> > pq2;
	   //minimum priority queueu check geeks
	   
	   
 }
	  
	     
