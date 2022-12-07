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
		   cout << "Default constructor " << endl;
		   };
		   
	Room(Room &temp)
	{
		length= temp.length;
		breadth= temp.breadth;
		height=temp.height;
	}
	
    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {// create object of Room class
    Room room1,room2(room1);

    // calculate and display the area and volume of the room
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;
    cout<<"\n";
	cout << "Copy constructor " << endl;
	cout << "Area of Room =  " << room2.calculateArea() << endl;
    cout << "Volume of Room =  " << room2.calculateVolume() << endl;
    return 0;
}

