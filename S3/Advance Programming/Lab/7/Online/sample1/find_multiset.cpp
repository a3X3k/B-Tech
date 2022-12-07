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
    it = ms.find("123");
    
   
    if (it != ms.end()) // bingo
        cout << *it << endl;
    else
        cout << " not found " << endl;
        
        
    return 0;
}
