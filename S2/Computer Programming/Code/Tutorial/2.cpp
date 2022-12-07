#include<stdio.h>
int main()
{
	int num; 
	float fnum; char ch; double dnum; short snum; long int lnum; 
	printf("\n Enter the Values");
	scanf("%d %f %c %e %h d%ld",&num,&fnum,&ch,&dnum,&snum,&lnum);  
	printf("\n num=%d \n fnum=%f \n ch=%c \n dnum=%e\nsnum=%hd \n lnum=%ld", num,fnum,ch,dnum,snum,lnum); 	
	
}

