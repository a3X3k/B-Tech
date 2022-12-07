#include<stdio.h> 
int rev(int);
int sum1(int);

 int main() 
 { 
   int n; 
   printf("Enter a number: "); 
   scanf("%d",&n);  
   printf("Reverse of given number is: %d and the sum is %d",rev(n),sum1(n)); 
   return 0; 
 } 
 int rev(int num) 
 { 
   int static sum,s1=0;
   int r;
   if(num) 
   { 
     r=num%10; 
     s1+=r;
     sum=sum*10+r; 
     rev(num/10); 
   } 
   else 
     return 0; 
   return sum; 
 }
 
 int sum1(int n)
 {
 	if(n<=0)
 	{
 		return 0;
	}
	else
	{
 		return n%10+sum1(n/10);
	}
}

