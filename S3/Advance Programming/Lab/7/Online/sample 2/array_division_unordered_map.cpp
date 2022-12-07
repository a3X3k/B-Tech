#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

using namespace std;

//codeforces.com array division
int main()
{
	 int n;
	 cin >> n;
	 
	 vector<int> A(n+5,0);
	 long long S = 0;
	 
      for (int i =0; i < n ; i++)
      {
          cin >> A[i];
          S+= A[i];
       }
      
      if (S& 1 )
         {
			 cout << "Answer won't exist"  << endl;
			 return 0;
			 
		}   
      unordered_map <long long,long long> first,second;
      
      first[A[0]] = 1;
      
      for (int i = 1; i <n ; i++)
            second[A[i]]++;  // array can have duplicates
      
      long long sdash = 0;
            
      for (int i = 0; i <n ; i++)
      {
         sdash += A[i];
         if (sdash == S/2) 
         {
			 cout << "YES " << endl;
			 return 0;
		  }
		  if (sdash  < S/2) {
			  long long x = S/2 - sdash;
			  // delete element from second half, insert inot firts half
			  if (second[x] > 0) {
				  cout << "YES " << endl;
				  return 0;
			  }
			  else {
				  long long y = sdash - S/2;
				  if (first[y] > 0)
				  {
					  cout << "YES" << endl;
					  return 0;
					}
					
				}
				
				first[A[i+1]]++;
				second[A[i+1]]--;
			}
			cout << "NO" << endl;
		}
	}
				
			  
			  
			  
			  
		  
