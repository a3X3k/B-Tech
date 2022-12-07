#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, char>  m;

    
    m[25] = 'm';
    m[28] = 'k';
    m[10] = 'x';
    m[30] = 'a';
    
    

    m.erase(28);

    map<int, char>::iterator it;
    for(it = m.begin(); it != m.end(); it++)
        cout << (*it).first << " : " << (*it).second << endl;
        
    it = m.find(30);
    if (it != m.end() )
        cout << (*it).first << " : " << (*it).second << endl;
    else
        cout << "not found it " << endl;
        
        


    return 0;
}
