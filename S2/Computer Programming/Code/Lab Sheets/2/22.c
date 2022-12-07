#include<stdio.h>
int gcd(int,int);

int main()
{
	int n,m,num;
	printf("Enter the two number : ");
	scanf("%d %d",&m,&n);
	printf("\nThe answer is %d",gcd(m,n));
	return 0;
}
int gcd(int m,int n)
{
	if (m == 0 || n == 0) 
		return 0; 
   	else if (m == n) 
      	return m; 
    else if (m > n) 
      	return gcd(m-n,n); 
   	else return gcd(m, n-m);    
}
