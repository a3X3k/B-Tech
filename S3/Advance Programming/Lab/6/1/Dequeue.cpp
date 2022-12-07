#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> a;

    a.push_front(1);
    a.push_front(2);
    a.push_back(3);
    a.push_back(4);
    
    deque<int>::iterator it;
    for(it=a.begin();it!=a.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
    a.pop_front();
    a.pop_back();
    for(it=a.begin();it!=a.end();it++)
    {
        cout<<*it<<" ";
    }
}
