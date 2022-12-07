#include<stdio.h>
int main()
{
	char o;
	o=getchar();
	while(o!='e')
	{
		int a=0,b=0,c=0,tot,sm,lar;
		float avg;
		printf("Enter the numbers : ");
		scanf("%d %d %d",&a,&b,&c);
		tot=a+b+c;
		avg=(a+b+c)/3.0;
		if(a>b && a>c)
		{
			lar=a;
		}
		else if(b>a && b>c)
		{
			lar=b;
		}
		else
		{
			lar=c;
		}
		if(lar==a)
		{
			if(b<c)
			{
				sm=b;
			}
			else
			{
				sm=c;
			}
		}
		else if(lar==b)
		{
			if(a<c)
			{
				sm=a;
			}
			else
			{
				sm=c;
			}
		}
		else if(lar==c)
		{
			if(a<b)
			{
				sm=a;
			}
			else
			{
				sm=b;
			}
		}
		printf("The total is %d and the average is %f and the largest number is %d and the smallest number is %d.\n",tot,avg,lar,sm);
	}
}

		
		
