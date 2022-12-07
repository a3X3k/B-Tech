#include <iostream>
using namespace std;

// create a class
class Room {

   private:
    double length;
    double breadth;
    double height;
   public:
   	Room(): length(10.8), breadth(8.6), height(15.5){ 
		   cout << " Default constructor " << endl;
		   };
    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {// create object of Room class
    Room room1;

    // calculate and display the area and volume of the room
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}

