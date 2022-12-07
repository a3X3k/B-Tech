#include <iostream>
#include <string>
using namespace std;

int main()
{
	
   string str ("There are two needles in this haystack with needles.");
  string str2 ("needle");
  cout << str.substr(3).substr(4) << endl;
  // different member versions of find in the same order as above:
  size_t found = str.find(str2);
  if (found!=string::npos)
    cout << "first 'needle' found at: " << found << '\n';
    
  found=str.find("needles are small",found+1,6); /* found is after the position */
  if (found!= string::npos)
    {
     cout << "second 'needle' found at: " << found << '\n';
    }
   else 
      cout << " not found " << endl;
      
    str2.front() = 'N';
    cout << "first element modfied : "  << str2 << '\n';
    
    str2.front() = 'n';
    cout << "first element modfied : "  << str2 << '\n';  
    
    
      // let's replace the first needle:
  str.replace(str.find(str2),str2.length(),"preposition");
  std::cout << str << '\n';
    return(1);
 }
 
 int test1_str()
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
    
    cout << s2 << endl;
    
    printf("%s\n", s2.c_str());
    
    if(s2.compare(s4) == 0)
        cout << s2 << " is equal to " << s4 << endl;
    else
        cout << s2 << " is not equal to " << s4 << endl;
        
     
    return 0;
    
}

int test2_str()
 {
    // Declaring string 
    string str; 
  
    // Taking string input using getline() 
    // "geeksforgeek" in givin output 
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
  
    return 0; 
  
} 


int test3_str()
{
	string str ("There are two needles in this haystack with needles.");
  string str2 ("needle");

  // different member versions of find in the same order as above:
  size_t found = str.find(str2);
  if (found!=string::npos)
    cout << "first 'needle' found at: " << found << '\n';
    
  found=str.find("needles are small",found+1,6); /* found is after the position */
  if (found!= string::npos)
    {
     cout << "second 'needle' found at: " << found << '\n';
    }
   else 
      cout << " not found " << endl;
      
      // let's replace the first needle:
  str.replace(str.find(str2),str2.length(),"preposition");
  std::cout << str << '\n';
    return(1);
  
}
