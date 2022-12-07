#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a;
    a.push_front(1);
    a.push_front(2);
    vector<int>::iterator it;
    for(it=a.begin();it!=a.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
    a.pop_front();
    
    for(it=a.begin();it!=a.end();it++)
    {
        cout<<*it<<" ";
    }
}
