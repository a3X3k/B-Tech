#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    multiset<string>  ms;
    
    ms.insert("abc");
    ms.insert("123");
    ms.insert("111");
    ms.insert("aaa");
    ms.insert("123");
        

   
    multiset<string>::iterator it;
    for (it = ms.begin(); it!= ms.end(); ++it)
        cout << *it << endl;

    return 0;
}
