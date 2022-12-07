#include<stdio.h>
int main()
{
	int a;
	printf("Enter the marks : ");
	scanf("%d",&a);
	if(a>=95)&&(a<=100)
	{
	    printf("A+");
	}
	else if(a>=90)&&(a<=94)
	{
	    printf("A");
	}
	else if(a>=80)&&(a<=89)
	{
	    printf("B+");
	}
	else if(a>=75)&&(a<=79)
	{
	    printf("B");
	}
	else if(a>=70)&&(a<=74)
	{
	    printf("C+");
	}
	else if(a>=60)&&(a<=69)
	{
	    printf("C");
	}
	else if(a>=50)&&(a<=59)
	{
	    printf("D");
	}
	else if(a>=40)&&(a<=49)
	{
	    printf("P");
	}
	else
	{
	    printf("F");
	}
	return 0;
}
