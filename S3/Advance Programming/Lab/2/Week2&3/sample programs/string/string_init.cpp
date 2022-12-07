#include <iostream>
#include <string>
using namespace std;

int main()
{
	
    string s0;   //so = ""
   
   string s1("Hello");   //s1 = "Hello"

   string s2(s1);        //s2 = "Hello"
   
   string s3 (s1,1,2);   //s3 = "el"
   
   string s4 ("Hello world",5);
   
   
   string s5 (5,'*');  // s5 = "*****"
   
   string s6 (s1.begin(),s1.begin()+3);  //s6 = "Hel"
   

   if(s2.compare(s1) == 0)
        cout << s2 << " is equal to " << s1 << endl;
   else
        cout << s2 << " is not equal to " << s1 << endl;
    s2.append(" WORLD!");
    
    cout << " after appending world " << s2 << endl;
    
    cout <<" converting to c string " << s2.c_str() << endl;
   
    
    if(s2.compare(s4) == 0)
        cout << s2 << " is equal to " << s4 << endl;
    else
        cout << s2 << " is not equal to " << s4 << endl;
        
     
    return 0;
 }

