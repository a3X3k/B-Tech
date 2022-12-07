#include<stdio.h>
int m1(int *);
int main()
{
	int m[10];
	m1(m);
	return 0;
}
int m1(int m[])
{
	int max=0,i,min=10000,temp;
	for(i=0;i<10;i++)
	{
		printf("\nEnter the number : ");
		scanf("%d",&m[i]);
		if(m[i]>max)
		{
			max=i;
		}
		if(m[i]<min)
		{
			min=i;
		}
		
	}
	printf("\nThe original array is : ");
	for(i=0;i<10;i++)
	{
		printf("\t%d",m[i]);
	}
	printf("\nThe new array is : ");
	for(i=0;i<10;i++)
	{
		if(i==max)
		{
			temp=m[i];
			m[i]=m[min];
			m[min]=temp; 
		}
		
	}
	for(i=0;i<10;i++)
	{
		printf("\t%d",m[i]);
	}
}

	
	
