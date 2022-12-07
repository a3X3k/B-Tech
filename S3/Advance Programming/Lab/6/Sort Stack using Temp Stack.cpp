#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack <int> s;
    stack <int> s1;
    s.push(34);
    s.push(3);
    s.push(31);
    s.push(98);
    s.push(92);
    s.push(23);
    while(!s.empty())
    {
        int temp=s.top();
        s.pop();
        while(!s1.empty() && s1.top()>temp)
        {
            s.push(s1.top());
            s1.pop();
        }
        s1.push(temp);
    }
    
    cout<<"Stack Sorted View : ";
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s.push(s1.top());
        s1.pop();
    }
    
    cout<<"\nNormal Sorted View : ";
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}

