#include<stdio.h>
int main()
{
	int n,i=1,i1,i2,i3,pro;
	printf("Enter the number : ");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i<10)
		{
			i=i*2;
			printf("\n%d",i);
		}
		else
		{
			i1=i;
			pro=1;
			while(i1>0)
			{
				i2=i1%10;
				pro=pro*i2;
				i1=i1/10;
			}
			i3=pro+i;
			if(i3<100)
			{
				printf("\n%d",i3);
				i=i3;
			}
			
		}			
	}
	return 0;
}
