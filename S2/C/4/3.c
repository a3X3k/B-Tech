#include<stdio.h>
#define n 10
int m1(int *);
int main()
{
	int m[n];
	m1(m);
	return 0;
}
int m1(int m[])
{
	int max=0,i,s=0;
	float s1;
	for(i=0;i<10;i++)
	{
		printf("\nEnter the number : ");
		scanf("%d",&m[i]);
		s+=m[i];
		if(m[i]>max)
		{
			max=m[i];
		}
	}
	s1=s/n;
	printf("\nThe largest number is : %d and mean is %f.\n",max,s1);
}

