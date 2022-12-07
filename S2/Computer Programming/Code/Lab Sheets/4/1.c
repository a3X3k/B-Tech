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
	int max=0,i;
	for(i=0;i<10;i++)
	{
		printf("\nEnter the number : ");
		scanf("%d",&m[i]);
		if(m[i]>max)
		{
			max=m[i];
		}
	}
	printf("\nThe largest number is : %d\n",max);
}

	
	
