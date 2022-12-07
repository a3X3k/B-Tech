#include <iostream>
#include <string>

using namespace std;

template <typename T>

T printIt(T a,T b)
{
    cout<<"You gave me "<<a<<" and "<<b<<".\n";
    cout<<"Together they make "<<a+b<<".\n"<<endl;
}	

int main()
{
    string sA = "Oh";
    string sB = " noes!";
    printIt<int>(1,2);
    printIt<float>(2.6, 3.7);
    printIt<char>('A','1');
    printIt<string>(sA, sB);
}


