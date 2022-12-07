#include <stdio.h>
int main()
{
    int n,m,i,gcd,num;
    printf("Enter two integers: ");
    scanf("%d %d",&n,&m);
    if(n<m)
    {
    	num=n;
	}
	else
	{
		num=m;
	}
	for(i=2;i<=num;i++)
    {
        if(n%i==0 && m%i==0)
            gcd=i;
    }
	printf("G.C.D of %d and %d is %d",n,m,gcd);
	return 0;
}
