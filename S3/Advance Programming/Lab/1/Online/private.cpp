// classes example
#include <iostream>
using namespace std;

class point {
  private: int x, y;
  public:
    point():x(0),y(0){ };
    void set_values (int,int);
    void get_values (int*, int*);
};

void point::set_values (int x, int y) {
  this->x = x;
  this->y = y;
}
void point::get_values (int *x, int *y) {
  
  *x = this->x;
  *y = this->y;
}

int main () {
  point p;
  int x,y;
  // p.x = p.y = 0;
   p.set_values (3,4);
  p.get_values(&x,&y);
  cout << "point x: " << x << "  point y " << y << "\n";
  return 0;
}
