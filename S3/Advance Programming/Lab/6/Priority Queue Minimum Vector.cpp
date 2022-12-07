#include <queue>
#include <iostream>

using namespace std; 

void max(vector<int> v) 
{ 
    for(int i=0; i<v.size();i++) 
    { 
        cout<<v[i]<<" "; 
    } 
    cout<<endl; 
    return; 
};

struct my_comparator
{
    bool operator()(vector<int> const& a,vector<int> const& b) const
    {
        return a>b;
    }
};

priority_queue<vector<int>, vector<vector<int>>, my_comparator>pq;

int main() 
{
    vector<int> inp1{10,20,30,40}; 
    vector<int> inp2{10,20,35,40}; 
    vector<int> inp3{30,25,10,50};
    vector<int> inp4{20,10,30,40};
    vector<int> inp5{5,10,30,40};

    pq.push(inp1); 
    pq.push(inp2); 
    pq.push(inp3); 
    pq.push(inp4); 
    pq.push(inp5); 
 
    max(pq.top()); 
} 