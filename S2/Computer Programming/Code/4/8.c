#include<stdio.h>
#include <stdlib.h>
int main()
{
	int max=0,i,j,a[5],temp;
	for(i=0;i<5;i++)
	{
		a[i]=rand()%100;
		printf("%d\n",a[i]);
	}
	for (i=0;i<5;i++)
	{
		for (j=0;j<(5-i-1);j++)
		{
			if (a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j + 1] = temp;
			}
		}
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
}
			

