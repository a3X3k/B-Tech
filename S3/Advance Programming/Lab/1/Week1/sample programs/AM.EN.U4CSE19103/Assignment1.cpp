#include <iostream>
using namespace std;

// create a class
class Room {

   private:
    double length;
    double breadth;
    double height;

   public:
    void set_length(double x)
    {
       length=x;
    }
    void set_breadth(double y)
    {
       breadth=y;
    }
    void set_height(double z)
    {
      height=z;
    }
    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
    Room(){length=0;breadth=0;height=0;};//default constructor
    Room(int l ,int b, int h){set_length(l);set_breadth(b);set_height(h);};//parameterized constructor
    Room(Room& s){
        length = s.length;
        breadth = s.breadth;
        height = s.height;
    }
};

int main() {// create object of Room class
    Room room1;
    Room room2(10.8,8.6,15.5);
    Room room3(room2);


    //Default Constructor
    cout<<"------------Default Constructor-----------"<<endl;
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    cout<<"------------Parameterized Constructor-----------"<<endl;
    //Parameterized Constructor
    cout << "Area of Room =  " << room2.calculateArea() << endl;
    cout << "Volume of Room =  " << room2.calculateVolume() << endl;

    cout<<"------------Copy Constructor-----------"<<endl;
    //Copy Constructor
    cout << "Area of Room =  " << room3.calculateArea() << endl;
    cout << "Volume of Room =  " << room3.calculateVolume() << endl;
    return 0;
}

