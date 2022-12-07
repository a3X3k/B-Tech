#include<stdio.h>
int main()
{
	int a,a1,b,c=0,i,temp,rev=1;
	while(1)
	{
		printf("Enter the value : ");
		scanf("%d",&a);
		if(a>100 && a<9999)
		{
			break;
		}
	}
	temp=a;
	while(temp>0)
	{
		c+=1;
		rev=rev*10+temp%10;
		temp=temp/10;
	}
	for(i=0;i<c;i++)
	{
		b=rev%10;
		switch(b)
		{
			case 1 : printf("One ");
						break;
			case 2 : printf("Two ");
						break;
			case 3 : printf("Three ");
						break;
			case 4 : printf("Four ");
						break;
			case 5 : printf("Five ");
						break;
			case 6 : printf("Six ");
						break;
			case 7 : printf("Seven ");
						break;
			case 8 : printf("Eight ");
						break;
			case 9 : printf("Nine ");
						break;			
		}
		rev=rev/10;
	}
				
}
