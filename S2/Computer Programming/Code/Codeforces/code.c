#include<stdio.h>
int main()
{
    //Declarations//
	int n,i,c1=0,c2=0,c3=0,i1=0,i2=0,i3=0;
	scanf("%d",&n);
	int arr[n],a1[n],a2[n],a3[n];

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]>0)
		{
			c1+=1;
			a1[i1]=i;
			i1++;
		}
		else if(arr[i]<0)
		{
			c2+=1;
			a2[i2]=i;
			i2++;

		}
		else
		{
			c3+=1;
			a3[i3]=i;
			i3++;
		}
	}
	if((c2%2)!=0 && c1>0)
	{
		printf("%d",c2);
		for(i=0;i<c2;i++)
		{
			printf(" %d",arr[a2[i]]);
		}
		printf("\n");
		printf("%d",c1);
		for(i=0;i<c1;i++)
		{
			printf(" %d ",arr[a1[i]]);
		}
		printf("\n");
		printf("%d ",c3);
		for(i=0;i<c3;i++)
		{
			printf("%d ",arr[a3[i]]);
		}
	}
	else if((c2%2)==0 && c1>0)
	{
		printf("%d",c2-1);
		for(i=0;i<c2-1;i++)
		{
			printf(" %d",arr[a2[i]]);
		}
		printf("\n");
		printf("%d",c1);
		for(i=0;i<c1;i++)
		{
			printf(" %d ",arr[a1[i]]);
		}
		printf("\n");
		printf("%d ",c3+1);
		for(i=0;i<c3;i++)
		{
			printf("%d ",arr[a3[i]]);
		}
		printf("%d",arr[a2[c2-1]]);
	}
	else
	{
		printf("%d",c2-2);
		for(i=0;i<c2-2;i++)
		{
			printf(" %d",arr[a2[i]]);
		}
		printf("\n");
		printf("%d",c1+2);
		for(i=0;i<c1;i++)
		{
			printf(" %d",arr[a1[i]]);
		}
		printf(" %d",arr[a2[c2-2]]);
		printf(" %d",arr[a2[c2-1]]);
		printf("\n");
		printf("%d ",c3);
		for(i=0;i<c3;i++)
		{
			printf("%d ",arr[a3[i]]);
		}
	}
	return 0;
}
