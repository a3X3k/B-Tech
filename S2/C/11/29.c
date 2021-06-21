#include<stdio.h>
int main()
{
	char o;
	while(o!='e')
	{
		printf("Enter e for exit or c for continue : ");
		scanf("%c",&o);
		int base,num,n1,i,s=1,b=1,add=0,tot=0,mul=0;
		printf("\nEnter the base : ");
		scanf("%d",&base);
		printf("\nEnter the number : ");
		scanf("%d",&num);
		if(base==2)
		{
			while(num>0)
			{
				s=1;
				n1=num%10;
				for(i=1;i<=b;i++)
				{
					s=s*2;
					if(s==2)
					{
						s=n1;
					}
					b++;
				}
				add=add+s;
				num=num/10;
				mul=n1*s;
				tot=tot+mul;
			}

		}
		else if(base==8)
		{
			while(num>0)
			{
				s=1;
				n1=num%10;
				for(i=1;i<=b;i++)
				{
					s=s*8;
					if(s==8)
					{
						s=n1;
					}
					b++;
				}
				add=add+s;
				num=num/10;
				mul=n1*s;
				tot=tot+mul;
			}

		}
		else if(base==16)
		{
			while(num>0)
			{
				s=1;
				n1=num%10;
				for(i=1;i<=b;i++)
				{
					s=s*16;
					if(s==16)
					{
						s=n1;
					}
					b++;
				}
				add=add+s;
				num=num/10;
				mul=n1*s;
				tot=tot+mul;
			}

		}
		printf("The answer is %d\n",tot);
	}
	return 0;		
}
