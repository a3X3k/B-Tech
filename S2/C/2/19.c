#include<stdio.h>
int main () 
{ 
  int n,m,num,i,lcm=1; 
  printf("Enter the two numbers : ");
  scanf("%d %d",&n,&m);
  if(n<m)
  {
  	num=m;
  }
  else
  {
  	num=n;
  }
  while(1)
  {
  	if(num%n==0 && num%m ==0)
  	{
  		lcm=num;
  		break;
	}
	num++;
  }
  printf("The lcm of %d and %d is %d.",n,m,lcm);
  return 0; 
}
