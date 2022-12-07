#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(8);
    s.insert(1);
    s.insert(12);
    s.insert(6);
    s.insert(8);

    set<int>::iterator it;
    it = s.find(6);
    
    if (it != s.end())
       cout << *it << endl;
    else
       cout << "not find " << endl;
       
       
    it = s.find(20);
    
    if (it != s.end())
       cout << *it << endl;
    else
       cout << "not find " << endl;
    

    return 0;
}
