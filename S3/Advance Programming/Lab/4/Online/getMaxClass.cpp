#include<iostream>

using namespace std;


// Template Declaration

template <class T>
class mymax {
    
  public:
    mymax ()
      {   }
    // Template Function
    T getMaximum(T x, T y) {
    if (x > y)
        return x;
    else
        return y;
   }
};



int main() {
	
	mymax <int> myobject;
	mymax <float> myobject1;
    
   
    cout << myobject.getMaximum(100,75)  << endl;
    
    cout << "Result Max Float : " << myobject1.getMaximum(100.5, 100.8)  << endl;

    return 0;
}
