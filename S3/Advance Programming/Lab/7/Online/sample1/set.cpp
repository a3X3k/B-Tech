#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> coll;

    /* insert 1 to 6 in arbitrary order
     * 1 gets inserted twice
     */
    coll.insert(3);
    coll.insert(1);
    coll.insert(5);
    coll.insert(4);
    coll.insert(1);
    coll.insert(6);
    coll.insert(2);

    set<int>::const_iterator pos;
    for (pos = coll.begin(); pos != coll.end(); ++pos)
        cout << *pos << ' ';
    cout << endl;

    return 0;
}
