#include <iostream>
#include <map>


#include <algorithm>

using namespace std;

struct Color{
public:
    Color();
    Color(int r, int g, int b);
    int red() const {return m_red;}
    int green() const {return m_green;}
    int blue() const {return m_blue;}
    bool areValid() const;
private:
    int m_red;
    int m_green;
    int m_blue;
};

std::ostream& operator<<(std::ostream &output, const Color &c);
bool operator<(const Color &c1, const Color &c2);

bool operator<(const Color &c1, const Color &c2){
    return c1.red() + c1.green() + c1.blue() <
                c2.red() + c2.green() + c2.blue();
}



int main()
{
    std::map<Color, int> myMap;
    
   myMap[Color(230, 159, 0)] = 1;
   myMap[Color(86, 180, 233)] = 2;
    myMap[Color(128, 128, 0)] = 3;

    std::map<Color, int>::iterator it;
    for (it = myMap.begin(); it != myMap.end(); ++it)
        std::cout << it->first << " " << it->second << '\n';

    return 0;
}
