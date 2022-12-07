#include <iostream>
using namespace std;

int main() {
    
    // initialize an array without specifying size
    double numbers[] = {7, 5, 6, 12, 35, 27};

    

    cout << "The numbers are (simple for loop): ";

    for (int i = 0; i <= 5; i++) 
        cout << numbers[i] << "  ";
    cout << endl;
    
     cout << "The numbers are (range-based for loop): ";
    
    //  print array elements
    // use of range-based for loop
    for (const double n : numbers) 
        cout << n << "  ";

     cout << endl;
     
     cout << "Using auto .." << endl;     
    for (auto i : numbers) 
         cout << i << ' '; 
    cout << endl;
  
    return 0;
}
