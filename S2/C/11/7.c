#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the marks in four subjects : ");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("\n The total marks is %d",a+b+c+d);
	printf("\n The average marks is %f",float(a+b+c+d)/4);
	return 0;
}
