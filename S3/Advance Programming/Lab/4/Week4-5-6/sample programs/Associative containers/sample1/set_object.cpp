#include <iostream>
#include <string>
#include <set>
using namespace std;

struct Info {
    string name;
    float score;
    bool operator < (const Info &a) const {
        return a.score < score;
    }
};

int main()
{
    set<Info> s;     Info a;
    a.name = "Jack";
    a.score = 80;
    s.insert(a);
    
    a.name = "Tom";
    a.score = 70;
    s.insert(a);
    
    a.name = "Mary";
    a.score = 85;
    s.insert(a);
    

    set<Info>::iterator it;

    
    
    for (it = s.begin(); it != s.end(); it++)
       cout << (*it).name << " : " << (*it).score << endl;
       
    
    cout << endl;

    return 0;
}
