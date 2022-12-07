#include<iostream>
#include<stdlib.h>
using namespace std;

class Circle
{
    public:
    double radius;
    string color;
    double getRadius()
    {
      return radius;
    }
    string getColor()
    {
        return color;
    }
    double getArea()
    {
        return 3.14 * radius * radius ;
    }
    Circle()
    {
        radius=1.0;
        color="red";
    }
    Circle(double r, string c)
    {
        color=c;
        radius=r;
    }

};
int main()
{
   Circle C;
   Circle c1(2.0,"blue");
   Circle c2(2.0,"red");
   Circle c3(1.0,"red");

   //Display information
   cout<<"----------------Default Constructor----------\n";
   cout<<"Radius="<<C.getRadius()<<endl;
   cout<<"Color="<<C.getColor()<<endl;
   cout<<"Area="<<C.getArea()<<endl;
   cout<<"----------------C1----------\n";
    cout<<"Radius="<<c1.getRadius()<<endl;
   cout<<"Color="<<c1.getColor()<<endl;
   cout<<"Area="<<c1.getArea()<<endl;
   //c2
   cout<<"----------------C2----------\n";
   cout<<"Radius="<<c2.getRadius()<<endl;
   cout<<"Color="<<c2.getColor()<<endl;
   cout<<"Area="<<c2.getArea()<<endl;
   //c3
   cout<<"----------------C3----------\n";
   cout<<"Radius="<<c3.getRadius()<<endl;
   cout<<"Color="<<c3.getColor()<<endl;
   cout<<"Area="<<c3.getArea()<<endl;
   return 0;
}
