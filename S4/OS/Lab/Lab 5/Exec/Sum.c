#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
	printf("\nThis is Sum.c which is a Child 2!");
	printf("\nPID of Sum.c = %d\n", getppid());
	printf("Please enter a number : ");
	int num;
	scanf("%d",&num);
	int sum=0;
	while(num>0)
	{
		int k=num%10;
		sum+=k;
		num=num/10;
	}
	printf("Sum of Digits: %d\n", sum);
	printf("Exiting Sum.c......\n");
	return 0;
}

