#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    set<pair <int,int>> s;
    s.insert({1,9});
    s.insert({10,20});
    s.insert({21,40});
    s.insert({41,60});
    s.insert({61,80});
    s.insert({81,100});
    int a=0,b=0,c=0,d=0,e=0,f=0;
    for (auto const &var:s) 
    {
        cout<<"("<<var.first<<", "<<var.second<<")"<<" ";
    }
    vector<int> v{1,30,25,60,75,41};
    for (int i = 0; i < v.size() - 1; i++) 
    {
        for (auto const &var:s) 
        {
            if(v[i]>=var.first && v[i]<=var.second)
            {
                cout<<"\n"<<v[i]<<" Falls into Category "<<var.first<<" - "<<var.second;
                if(v[i]>=1 && v[i]<=9)
                {
                    a++;
                }
                else if(v[i]>=10 && v[i]<=20)
                {
                    b++;
                }
                else if(v[i]>=21 && v[i]<=40)
                {
                    c++;
                }
                else if(v[i]>=41 && v[i]<=60)
                {
                    d++;
                }
                else if(v[i]>=61 && v[i]<=80)
                {
                    e++;
                }
                else if(v[i]>=81 && v[i]<=100)
                {
                    f++;
                }
            }
        }
    }
    cout<<"\nNumber Of People in Category 1-9 --> "<<a;
    cout<<"\nNumber Of People in Category 10-20 --> "<<b;
    cout<<"\nNumber Of People in Category 21-40 --> "<<c;
    cout<<"\nNumber Of People in Category 41-60 --> "<<d;
    cout<<"\nNumber Of People in Category 61-80 --> "<<e;
    cout<<"\nNumber Of People in Category 81-100 --> "<<f;
    return 0;
}
