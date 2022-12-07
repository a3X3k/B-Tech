#include <iostream>
using namespace std;

// create a class
class Room {

   private:
    double length;
    double breadth;
    double height;
   public:
	
	Room(double l,double b,double h) : length(l), breadth(b), height(h)
       {
		   cout << "Overloaded constructor ..."  <<  endl;
       };
    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {// create object of Room class
    Room room1(10.8,8.6,15.5);

    // calculate and display the area and volume of the room
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}

