#include<stdio.h> 
int step(int);
  
int main () 
{ 
  int n; 
  printf("Enter the number of steps : ");
  scanf("%d",&n);
  printf("There are %d ways to run up the ladder.", step(n)); 
  return 0; 
}

int step(int n) 
{ 
   if (n <= 2) 
      return n; 
   return step(n-1)+step(n-2); 
} 
