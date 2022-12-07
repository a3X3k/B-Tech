#include<iostream>
#include<algorithm>
using namespace std;
class Point{
   private:
   int x, y;
   public:
   Point(int x = 0, int y = 0){
      this->x = x;
      this->y = y;
   }
   void display(){
      cout << "("<<x<<", "<<y<<")";
   }
   friend bool comparePoints(Point &p1, Point &p2);
};
bool comparePoints(Point &p1, Point &p2){
   float dist1 = (p1.x * p1.x) + (p1.y * p1.y);
   float dist2 = (p2.x * p2.x) + (p2.y * p2.y);
   return dist1 < dist2;
}
void closestKPoints(Point points[], int n, int k){
   sort(points, points+n, comparePoints);
   for(int i = 0; i<k; i++){
      points[i].display();
      cout << endl;
   }
}
int main() {
   Point points[] = {{3, 3},{5, -1},{-2, 4}};
   int n = sizeof(points)/sizeof(points[0]);
   int k = 2;
   closestKPoints(points, n, k);
}