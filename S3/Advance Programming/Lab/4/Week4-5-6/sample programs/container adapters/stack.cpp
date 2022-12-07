#include <iostream> 
#include <vector>
#include <list>
#include <stack>
#include <queue> 

using namespace std; 


int main()
{
   //  stack<int> cstk;
   
     stack<int,deque<int>> cstk;
   //stack<int,list<int>> cstk;
   
   cstk.push(100);
   cstk.push(200);
   cstk.push(300);
   cstk.push(300);
   cout << "size " << cstk.size() << endl; 
   
   // cstk.size() != 0;
   while (!cstk.empty())
     {
        cout << cstk.top() << endl;
         cstk.pop();
      }
      cout << endl;
      return(0);
}
