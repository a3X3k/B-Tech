#include <stdio.h> 

int max(int a, int b) 
{ 
    return (a > b)? a : b; 
} 
  
int max(int a, int b, int c) 
{ 
    return max(max(a, b), c); 
} 

int maxSum(int arr[], int l, int m, int h) 
{ 
    int sum = 0; 
    int ls = -246387976; 
    for (int i = m; i >= l; i--) 
    { 
        sum = sum + arr[i]; 
        if (sum > ls) 
        {
            ls = sum; 
        }
    } 
  
    sum = 0; 
    int rs = -246387976; 
    for (int i = m+1; i <= h; i++) 
    { 
        sum = sum + arr[i]; 
        if (sum > rs) 
        {
            rs = sum; 
        }
    } 
    return max(ls + rs, ls, rs); 
} 

int maxSub(int arr[], int l, int h) 
{ 

   if (l == h) 
   {
       return arr[l];
   }

   int m = (l + h)/2; 

   return max(maxSub(arr, l, m),maxSub(arr, m+1, h),maxSum(arr, l, m, h)); 
} 
  
int main() 
{ 
   int a[] = {-2,1,-3,4,-1,2,1,-5,4}; 
   int n = sizeof(a)/sizeof(a[0]); 
   int m = maxSub(a, 0, n-1); 
   printf("%d",m); 
   return 0; 
} 