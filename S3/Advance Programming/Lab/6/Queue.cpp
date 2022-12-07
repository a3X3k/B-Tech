#include<iostream>
#include<queue>
#include<array>

using namespace std;

int main()
{
    queue <int> q1;
    if(q1.empty())
    {
        cout<<"Queue is Empty!";
    }
    else
    {
        cout<<"Queue is not Empty!";
    }
    q1.emplace(3);
    q1.emplace(6);
    q1.emplace(7);
    
    queue <int> q2;
    q2.emplace(1);
    q2.emplace(2);
    q2.emplace(3);
    
    q2.swap(q1);
    
    cout<<"\nQueue 1 = "; 
    while (!q1.empty()) 
    { 
        cout<<q1.front()<<" "; 
        q1.pop(); 
    } 
    
    cout<<"\nQueue 2 = "; 
    while (!q2.empty()) 
    { 
        cout<<q2.front()<<" "; 
        q2.pop(); 
    } 
    
    q1.emplace(10);
    q1.emplace(20);
    q2.emplace(30);
    q2.emplace(40);
    q2.emplace(50);
    
    q2.swap(q1);
    queue <int> temp;
    cout<<"\nThe Size of Queue 1 : "<<q1.size();
    cout<<"\nThe Size of Queue 2 : "<<q2.size();
    
    while (!q1.empty()) 
    {
        q2.emplace(q1.front());
        temp.emplace(q1.front());
        q1.pop();
    }
    
    cout<<"\nThe Size of Queue 1 After Copying : "<<q1.size();
    cout<<"\nThe Size of Queue 2 After Copying : "<<q2.size();
    cout<<"\nThe Size of Queue 3 which is Replaced by the Queue 1 : "<<temp.size();
    
}