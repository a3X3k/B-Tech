#include<stdio.h>
#include<math.h>

int main()
{
	int i,n,fd,ld,n1,n11,r1=0,r11,s=0,rev=0,s1=0,rev1;
	printf("Enter the number : ");
	scanf("%d",&n);
	
//------------------------// 

	ld=n%10;
	//printf("\nThe last digit = %d",ld);
	
//------------------------//

	n1=n;
	while(n1>0)
	{
		n1=n1/10;
		s+=1;
	}
	fd=n/pow(10,s-1);
	//printf("\nThe first digit = %d",fd);
	
//------------------------// 

	n11=n/10;
	for(i=1;i<s-1;i++)
	{
		r11=n11%10;
		r1=r1*10+r11;
		n11=n11/10;	
	}
		//printf("\nThe middle digits are %d.",r1);

//--------------------------------------------//

	for(i=1;i<s-1;i++)
	{
		rev=rev*10+(r1%10);
		r1=r1/10;
	}
	//printf("\nThe middle digits are %d.",rev);
	
//------------------------------------------//

	rev1=rev;
	while(rev1>0)
	{
		s1+=1;
		rev1/=10;
	}
	//printf("\nThe length is %d.",s1);
	
//---------------------------------------------//
	
	ld=ld*pow(10,s1);
	ld=ld+rev;
	ld=ld*10+fd;
	printf("Digits are : %d.",ld);
	return 0;
}
