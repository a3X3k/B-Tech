#include<stdio.h>
int count1(int);
int total(int);
int discount(int,int);

int main()
{
	int type,n,t1,t2,c1=1,c2=0,c3=0,c4=0,dis;
	char c;
	while((c=getchar())!=EOF)
	{
		printf("Type '1' for White Chocolate '2' for Dark Chocolate '3' for Raw Chocolate '4' for Bittersweet Chocolate\n");
		scanf("%d",&type);
		printf("\nEnter the number of pieces : ");
		scanf("%d",&n);
		int count1(type);
		dis=int discount(n,type);
		printf("%d White chocolates are sold in this day",c1);
		printf("%d Dark chocolates are sold in this day",c2);
		printf("%d Raw chocolates are sold in this day",c3);
		printf("%d Bittersweet chocolates are sold in this day",c4);
		return 0;
	}
}

int count1(int t1)
{
	int c1=0,c2=0,c3=0,c4=0;
	if(t1==1)
		c1+=1;
	else if(t1==2)
		c2+=1;
	else if(t1==3)
		c3+=1;
	else if(t1==4)
		c4+=1;
}

int dis(int n1,int type1)
{
	int tot=0,t0t1=0,tot2=0;
	if(type1==1)
	{
		tot=n1*50;
		tot1=tot*(10/100);
		tot2=tot-tot1;
		printf("The total amount is %d and the amount after discount is %d and the discount amount %d",tot,tot2,tot1);

	}
	else if(type1==2)
	{
		tot=n1*60;
		tot1=tot*(12/100);
		tot2=tot-tot1;
		return tot;
		printf("The total amount is %d and the amount after discount is %d and the discount amount %d",tot,tot2,tot1);
	}
	else if(type1==3)
	{
		tot=n1*42;
		tot1=tot*(6/100);
		tot2=tot-tot1;
		return tot;
		printf("The total amount is %d and the amount after discount is %d and the discount amount %d",tot,tot2,tot1);
	}
	else if(type1==4)
	{
		tot=n1*55;
		tot1=tot*(8/100);
		tot2=tot-tot1;
		printf("The total amount is %d and the amount after discount is %d and the discount amount %d",tot,tot2,tot1);
	}
}


















