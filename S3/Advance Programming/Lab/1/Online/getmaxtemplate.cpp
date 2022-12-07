#include <iostream>

using namespace std;

template <typename T>
T myMax(T x, T y)
{
	return(x >y)? x : y;
 }	 

int getMaximun(int x, int y)
{
  return(x >y)? x : y;
 }
 
float getMaximun(float x, float y)
{
  return(x >y)? x : y;
 }
 
 int main()
 {
    int a,b,x;
    float c,d,y;
    
   
    
    cout << "Enter A, B values (int)" ;
    cin >> a >> b;
    
  //  x = getMaximun(a, b);
  x = myMax<int>(a,b);
    
    cout << " Result Max in int : " << x;
    
    cout << "Enter C, D values (float)" ;
    cin >> c >> d;
    
 //   y = getMaximun(c, d);
   y = myMax<float>(c,d);
    
    cout << " Result Max in float : " << y;
     
    }
