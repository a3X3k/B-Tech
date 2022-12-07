#include<stdio.h>
int largest_digit(int);
int main()
{
	int num,s;
	printf("enter the number");
	scanf("%d",&num);
	s=largest_digit(num);
	printf("largest digit is %d",s);
}
int largest_digit(int x)
{
	int rem,temp,l=-1;
	temp=x;
	while(temp!=0)
	{
		rem=temp%10;
		temp=temp/10;
		if(rem>l)
		{
			l=rem;
		}
	}
	return l;
}

