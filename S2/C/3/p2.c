#include<stdio.h>
int main()
{
	int n,m,f,i,j,fact,k;
	float sum=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		f=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}		
		}
		if(f==0)
		{
			fact=1;
			for(k=1;k<=i;k++)
			{
				fact=fact*k;	
			}
			sum=sum+((float)i/fact);	
		}	
	}
	printf("Ans : %f",sum);
	return 0;	
}
