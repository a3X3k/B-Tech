#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
	printf("\nThis is Happy_New_Year which is a Child 1!");
	printf("\nPID of Happy_New_Year.c = %d", getppid());
	printf("\nHappy New Year");
	printf("\nExiting Happy_New_Year.c......\n");
	return 0;
}
