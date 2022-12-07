
#include <iostream> 
#include <vector>
#include <list>
#include <stack>
#include <queue> 
  
using namespace std; 
  
void showq(queue <int> gq) 
{ 
    queue <int> g = gq; 
    while (!g.empty()) 
    { 
        cout << '\t' << g.front(); 
        g.pop(); 
    } 
    cout << '\n'; 
} 
  
int main() 
{ 
       queue <int> gquiz; 
  //    queue<int,deque<int>> gquiz;
//    queue<int,list<int>> gquiz;
    gquiz.push(10); 
    gquiz.push(20); 
    gquiz.push(30); 
  
    cout << "The queue gquiz is : "; 
    showq(gquiz); 
    
    cout << "\ngquiz.size() : " << gquiz.size(); 
    cout << "\ngquiz.front() : " << gquiz.front(); 
    cout << "\ngquiz.back() : " << gquiz.back(); 
  
    cout << "\ngquiz.pop() : "; 
    gquiz.pop(); 
    showq(gquiz); 
    
    cout << '\n'; 
  
    return 0; 
} 
