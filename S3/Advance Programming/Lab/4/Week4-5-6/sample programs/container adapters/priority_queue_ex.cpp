#include <iostream> 
#include <vector>
#include <queue>

using namespace std;

template <typename T> 
void print_queue(T &q)
{
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
 }

int main()
{
   priority_queue<int> q;
  
   
   for (int elm:{1,8,5,6,3,4,4,0,9,7,2})
     {
      q.push(elm);
      
     }
     print_queue(q);
     
     
     priority_queue<int,vector<int>, greater<int>> q2;
     
     for (int elm:{1,8,5,6,3,4,0,9,7,2})
     {
      q2.push(elm);
      
     }
     print_queue(q2);
     
     
    auto cmp = [](int left, int right)
    { return (left) < (right) ;};
    
     priority_queue<int,vector<int>, decltype(cmp)  > q3(cmp);
     
     for (int elm:{1,8,5,6,3,4,0,9,7,2})
     {
      q3.push(elm);
      
     }
     print_queue(q3);
     
     
     
    
 }
   
