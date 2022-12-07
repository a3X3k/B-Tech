#include <iostream> 
#include <deque> 
  
using namespace std; 
  
int main() 
{ 
    deque <int> dq={1,5,8,9,3}; 
    cout<<"The Size of the Deque is : "<<dq.size();
    cout<<"\nThe Max Size of the Deque is : "<<dq.max_size();
    cout<<"\nDeque : ";
    dq.push_back(10);
    dq.push_front(20);
    
    deque <int>::iterator it; 
    
    for (it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" "; 
    }
    cout<<"\nDeque : ";
    dq.insert(dq.begin()+2,15);  
    
    for (it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" "; 
    }
    
    dq.push_front(7);
    dq.push_front(8);
    dq.push_front(9);
    dq.push_front(10);
    cout<<"\nDeque : ";
    for (it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" "; 
    }
    
    dq.pop_front(); 
    dq.pop_back(); 
    
    cout<<"\nDeque : ";
    for (it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" "; 
    }
}