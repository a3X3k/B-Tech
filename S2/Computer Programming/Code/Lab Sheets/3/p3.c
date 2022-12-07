#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,s,i,sum=0,j,pro=1;
	printf("Enter the number : ");
	scanf("%d",&m);
	printf("\nEnter the even power : ");
	scanf("%d",&n);
	while(n%2!=0)
	{
		printf("\nEnter the even power : ");
		scanf("%d",&n);	
	}
	for(i=2;i<=n;i++)
	{
		pro=1;
		for(j=1;j<=i;j++)
		{
			pro*=m;
		}
		sum+=pro;
		i++;
	}
	printf("Ans is %d.",sum);
	return 0;
}
