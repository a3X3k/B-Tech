#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    vector<int>::iterator it;
    for(it=a.begin();it!=a.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
    a.pop_back();
    
    for(it=a.begin();it!=a.end();it++)
    {
        cout<<*it<<" ";
    }
}
