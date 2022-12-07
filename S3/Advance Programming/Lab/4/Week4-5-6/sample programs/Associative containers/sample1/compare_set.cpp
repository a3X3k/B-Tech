#include <iostream>
#include <set>
using namespace std;

struct myComp {
    bool operator()(const int &a, const int &b) {
        return a > b;
    }
};

int main()
{
    set<int, myComp> s;

    s.insert(8);
    s.insert(1);
    s.insert(12);
    s.insert(6);
    s.insert(8);

    set<int, myComp>::iterator it;
    for( it = s.begin(); it != s.end(); it++)
        cout << *it << ' ';
    cout << endl;

    return 0;
}
