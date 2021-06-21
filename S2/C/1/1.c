#include<stdio.h>
int main()
{
	int a;
	printf("Enter the age : ");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("\n Eligible to vote");
	}
	else
	{
		printf("\n Not eligible");
	}
	return 0;
}
