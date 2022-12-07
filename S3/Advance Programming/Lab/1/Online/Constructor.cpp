#include <iostream>
#include <string>

using namespace std;

class Student
{
    private:
       string fname;
       string lname;
       int age;

    public:
       // Constructor
       Student(): fname("\0"), lname("\0"), age(0){ 
		   cout << " default constructor " << endl;
		   };
      // Constructor overloading
       Student(string f, string l, int a) : fname(f),lname(l), age(a)
       {
		   cout << "overloaded constructor ..."  <<  endl;
        };
         //   copy constructor
	    Student(Student& s)
	    {
			fname= s.fname;
			lname = s.lname;
			age = s.age;
			cout << " copy constructor " << endl;
		}
       void Displaystudentdetails()
       {
           cout << "Details of student: " << fname << " " << lname << " " << age << "\n";
       }
       
       ~Student()
       {
		   cout << " Default destructor .." << endl;
		}
};

int main()
{
    Student A1;  //calls default constructor 
    Student A2("aaa","bbb",20);  //calls overloaded constrcutor
    
    
    // Copies the content of A2 to A3 -  copy constructor
    
    Student A3(A2);
    
    A1.Displaystudentdetails();
    A2.Displaystudentdetails();
    A3.Displaystudentdetails();
   
  

    return 0;
}
