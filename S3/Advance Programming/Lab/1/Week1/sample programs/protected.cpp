// classes example
#include <iostream>
using namespace std;

class point {
  protected: int x, y;
  public:
    point():x(0),y(0){ };
    void set_values (int,int);
    void get_values (int*, int*);
};

void point::set_values (int x, int y) {
  this->x = x;
  this->y = y;
};
void point::get_values (int *x, int *y) {
  
  *x = this->x;
  *y = this->y;
};

// Sub class inheriting from Base Class(Point) 
  class point3D  : public point 
	{
		public : int z;
		point3D(): point(),z(0){ };
		void set_3Dvalues(int x, int y, int z){
			set_values(x,y);
			this->z = z;
		}
		
		void get_3Dvalues(int *x, int *y, int *z) {
			get_values(x,y);
			*z = this->z;
	}
  };
		
		
		
  

int main () {
  point3D p;
  int x,y,z;
 // p.x = p.y = 0;
   p.set_3Dvalues (3,4,5);
  p.get_3Dvalues(&x,&y,&z);
  cout << "point x: " << x << "  point y " << y << "  point z " << z << "\n";
  return 0;
}
