#include<stdio.h>
int bin(int*,int,int,int);
int main()
{
	int n,m,i,j,temp,c=0,low,high,ans;
	printf("Enter the number of elements in the array : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("\nEnter the element : ");
		scanf("%d",&a[i]);	
	}
	printf("\nEnter the element to be found : ");
	scanf("%d",&m);
	for (i=0;i<5;i++)
	{
		for (j=0;j<(5-i-1);j++)
		{
			if (a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j + 1] = temp;
			}
		}
	}
	low=0;
	high=n-1;
	ans=bin(a,low,high,m);
	if(ans!=-1)
	{
		printf("Found");
	}
	else
	{
		printf("Not Found");
	}
	return 0;	
}
int bin(int a[],int low,int high,int key)
{
    while(low<=high)
    {
     int mid=(low+high)/2;
     if(a[mid]<key)
     {
         low=mid+1;
     }
     else if(a[mid]>key)
     {
         high=mid-1;
     }
     else
     {
         return mid;
     }
    }
   return -1;                //key not found
 }
