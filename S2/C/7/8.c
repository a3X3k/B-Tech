#include <stdio.h>

//Input two Array from the User and Pick the Element Alternately so that the new Array should be sorted.

/* NAME : S.ABHISHEK
ROLL NUMBER : AM.EN.U4CSE19147
BATCH : S2 CSE-B */
int main()
{
	int n,m,i,l,f=0;
	printf("Enter the size of Array 1 : ");
	scanf("%d",&n);//Size of Array 1.
	int arr1[n];
	printf("Enter the elements of Array 1 : ");
	for(i = 0;i<n;i++)//Getting Input for the Array 1.
    {
		scanf("%d",&arr1[i]);
    }
	printf("Enter the size of Array 2 : ");
	scanf("%d",&m);//Size of Array 2.
	int arr2[m];
	printf("Enter the elements of Array 2 : ");
	for(i = 0;i<m;i++)//Getting Input for the Array 2.
    {
		scanf("%d",&arr2[i]);
    }
	int arr[n+m];//New array combining the size of Array 1 and Array 2.
	int actr = 0,bctr = 0;//Loop control variables to keep track of the Indices.
	arr[0] = arr1[actr++];
	for(i = 1;i<(n+m);i++)
	{
		if(i%2 == 0)//For the elements from Array 1.
		{
			while(arr1[actr]<arr[i-1] && actr<n)
  /*While the index of First Array is less than n and
                        the Elements in the Array 1 is less than the element in the New Array*/
				actr++;
			if(actr>=n)
			{
				f=1;//Flag is used here to store the remaining elements of the Array 1 in the Array.
				break;
			}
			else
				arr[i] = arr1[actr++];
		}
		else//For the elements from Array 2.
		{
			while(arr2[bctr]<arr[i-1] && bctr<m)
  /*While the index of Second Array is less than m and
                        the Elements in the Array 2 is less than the element in the New Array*/
				bctr++;
			if(bctr>=m)
			{
				f=0;//Flag is used here to store the remaining elements of the Array 2 in the New Array.
				break;
			}
			else
				arr[i] = arr2[bctr++];
		}
	}
	if(f==1)//Stores the Remaining element of Array 2.
	{
		for(;bctr<m;bctr++)
			arr[i] = arr2[bctr];
	}
	else if(f==0)//Stores the Remaining element of Array 1.
	{
		for(;actr<n;actr++)
			arr[i] = arr1[actr];
	}
	printf("The Sorted Array is  : ");
	for(l = 0;l<i;l++)//Print the Array.
    {
		printf("%d ",arr[l]);
    }
	return 0;
}

