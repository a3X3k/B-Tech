#include <iostream>
using namespace std;

// create a class
class Room {

   private:
    double length;
    double breadth;
    double height;
   public:
   	void set(double,double,double);
    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

void Room::set(double length,double breadth,double height) 
{
  this->length = length;
  this->breadth = breadth;
  this->height = height;
}

int main() {// create object of Room class
    Room room1;

    // assign values to data members
    room1.set(10.8,8.6,15.5);

    // calculate and display the area and volume of the room
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}

