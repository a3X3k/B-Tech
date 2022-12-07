#include <iostream> 
#include <vector>
#include <list>
#include <stack>
#include <queue> 

using namespace std; 

int main()
{
   // priority_queue<int> cstk;
 // priority_queue<int,deque<int>> cstk;
//  priority_queue<int,vector<int>> cstk;
 // priority_queue<int,vector<int>,std::greater<int>> cstk;
 priority_queue<int,vector<int>,std::less<int>> cstk;
  
  cstk.push(1000);
  cstk.push(100);
  cstk.push(30);
  cstk.push(400);
  cstk.push(500);
  
  while (!cstk.empty())
     {
        cout << cstk.top() << endl;
        cstk.pop();
      }
  return(0);    
}
