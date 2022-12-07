#include<stdio.h>
int main()
{
	float a;
	printf("Enter the consumption in units : ");
	scanf("%f",&a);
	if(a>=0)&&(a<=150)
	{
	    printf("%f",a*3);
	    break;
	}
	else if(a>=151)&&(a<=350)
	{
	    printf("%f",(a*3.75)+100);
	    break;
	}
	else if(a>=351)&&(a<=450)
	{
	    printf("%f",(a*4)+250);
	    break;
	}
	else if(a>=451)&&(a<=600)
	{
	    printf("%f",(a*4.5)+300);
	    break;
	}
	else
	{
		printf("%f",(a*5)+1000);
		break;
	}
	return 0;
}
