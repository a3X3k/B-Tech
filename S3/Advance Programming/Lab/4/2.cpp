#include<iostream>
#include<string>

using namespace std;

template <class T>

class mymax
{ 
    public: T getMax(T x,T y) 
	{
    	if(x>y)
    	{
    		cout<<"The Max of "<<x<<" And "<<y<<" is "<<x<<".\n";
		}   
    	else
    	{
    		cout<<"The Max of "<<x<<" And "<<y<<" is "<<y<<".\n";	
		}
    }
};


int main() 
{
	mymax <int> obj;
	mymax <float> obj1;
    mymax <string> obj2;
    
    obj.getMax(3,5);
    obj1.getMax(5.6,7.3);
	obj2.getMax("donkey","apple");
    return 0;
}
