#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    typedef map<string, float> StringFloatMap;

    StringFloatMap coll;

    coll.insert(make_pair("MAP", 1.23));
    coll["VAT"] = 0.15;
    coll["Pi"] = 3.1415;
    coll["an arbitrary number"] = 4983.223;
    coll["Null"] = 0;

    StringFloatMap::iterator pos;
    for (pos = coll.begin(); pos != coll.end(); ++pos) {
        cout << "key: \"" << pos->first << "\" "
             << "value: " << pos->second << endl;
    }

    return 0;
}
