#include <stdio.h>  
int bin(int);
int main() 
{ 
    int n; 
    printf("Enter the number : ");
	scanf("%d",&n);
    printf("%d", bin(n));  
    return 0; 
}

int bin(int n) 
{ 
    if (n == 0)  
        return 0;  
    else
        return (n%2+10*bin(n/2)); 
} 
