#include<iostream>
using namespace std;

class circle{
	
	private: 
		 double radius;
   		 string color;
   		 
   	public:
   		
   		circle(double r=1.0, string c="red")
		{
      		radius = r;
      		color = c;
   		}
   
   /** Returns the radius */
		double getRadius() 
		{
     		return radius; 
   		}
   		
   /** Returns the Color */
   		string getColor() 
		{
     		return color; 
   		}
   		
   /** Returns the area of this Circle instance */
   		double getArea() {
      		return radius*radius*3.14;
   		}
};

int main()
{
	circle x(2.0,"blue");
	cout<<"Radius="<<x.getRadius()<<" Area="<<x.getArea()<<" Color="<<x.getColor()<<endl;
	circle y(2.0);
	cout<<"Radius="<<y.getRadius()<<" Area="<<y.getArea()<<" Color="<<y.getColor()<<endl;
	circle z;
	cout<<"Radius="<<z.getRadius()<<" Area="<<z.getArea()<<" Color="<<z.getColor()<<endl;
}
