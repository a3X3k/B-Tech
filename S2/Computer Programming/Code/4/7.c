#include<stdio.h>
#include <stdlib.h>
int main()
{
	int max=0,i,a[5];
	for(i=0;i<5;i++)
	{
		a[i]=rand()%100;
		printf("%d\n",a[i]);
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("The largest number is %d\n",max);
}
			

