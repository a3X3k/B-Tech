#include<stdio.h>
int main()
{
	char c;
	int c1,c2;
	while((c=getchar())!=EOF)
	{	
		c1=0;
		c1=c+13;
		printf("\nThe answer is %c.",c1);
		c2=0;
		c2=c1-13;
		printf("\nThe answer is %c.",c2);
		
	}
	return 0;
}
