#include <iostream>
#include <string>
using namespace std;

int main()
{

// Declaring string 
    string str; 
  
    // Taking string input using getline() 
    // "geeksforgeek" in givin output 
    cout  << "input a string ...";
    
    getline(cin,str); 
  
    // Displaying string 
    cout << "The initial string is : "; 
    cout << str << endl; 
  
    // Using push_back() to insert a character 
    // at end 
    // pushes 's' in this case 
    str.push_back('s'); 
  
    // Displaying string 
    cout << "The string after push_back operation is : "; 
    cout << str << endl; 
  
    // Using pop_back() to delete a character 
    
    // from end 
    // pops 's' in this case 
    str.pop_back(); 
  
    // Displaying string 
    cout << "The string after pop_back operation is : "; 
    cout << str << endl; 
    
    str = " ";
    string str2 = "writing ";
    string str3 = "print 10";
     str.append(str2);                       // "Writing "
     cout << str << endl; 
    str.append(str3,6,3);                   // "10 "
    cout << str << endl; 
     str.append(" dots are cool",5);          // "dots "
     cout << str << endl; 
     str.append(" here: ");                   // "here: "
     cout << str << endl; 
   
   
     str="to be question";
     str2="the ";
     str3="or not to be";
     
     str.insert(6,str2);                 // to be (the )question        
     cout << str << endl; 
    str.insert(6,str3,3,4);             // to be (not )the question
    cout << str << endl;             
    str.insert(10,"that is cool",8);    // to be not (that is )the question
    cout << str << endl; 
    str.insert(10,"to be ");            // to be not (to be )that is the question
    cout << str << endl; 
    str.insert(15,1,':');               // to be not to be(:) that is the question
    cout << str << endl;    
                 
     str = "This is an example sentence.";
     cout << str << '\n';
                                           // "This is an example sentence."
     cout << str << '\n';
                                           // "This is an example sentence."
      str.erase (10,8);                        //            ^^^^^^^^
      cout << str << '\n';
                                           // "This is an sentence."
      str.erase (str.begin()+9);               //           ^
      cout << str << '\n';
                                           
      str.erase (str.begin()+5, str.end()-9);  //       ^^^^^
      std::cout << str << '\n';    // "This sentence."
                                          
     
     string base="this is a test string.";
     str2="n example";
     str3="sample phrase";
     str = base;
     str.replace(9,5,str2);          // "this is an example string." (1)
     std::cout << str << endl;
     str.replace(19,6,str3,7,6);     // "this is an example phrase." (2)
     std::cout << str << endl;
     str.replace(8,10,"just a");     // "this is just a phrase."     (3)
     std::cout << str << endl;
     
  
    return 0; 
    
 }
  
