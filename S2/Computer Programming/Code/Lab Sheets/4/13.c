#include<stdio.h>
int left(int*,int,int);
int right(int*,int,int);
int main()
{
	int n,a[n],i,j,c,k,temp,ch;
	printf("Enter the number of elements in the array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the Element %d : ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nElements before rotation : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nEnter no of elements to rotate : ");
	scanf("%d",&k);
	printf("\nEnter 1 to right rotate or 2 to left rotate : ");
	scanf("%d",&ch);
	if(ch==1)
	{
		right(a,n,k);
	}
	else if(ch==2)
	{
		left(a,n,k);
	}
	else
	{
		printf("Invalid option.");
	}
	return 0;
}

int left(int a[],int n,int k)
{
	int temp,i,j;
	for(i=0;i<k;i++)
	{
		temp=a[0];
		for(j=0;j<=n-1;j++)
		{
			a[j]=a[j+1];	
		}
		a[n-1]=temp;
	}
	printf("\nElements after %d left rotation : ",k);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}		
}
int right(int  a[],int n,int k)
{
	int i,j,temp;
	for(i=0;i<k;i++)
    {
 		temp=a[n-1];
    	for(j=n-1;j>0;j--)
    	{
        	a[j]=a[j-1];
    	}
    	a[0]=temp;
    }
	printf("\nElements after %d right rotation : ",k);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

