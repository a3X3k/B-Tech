/*@
	requires n>0; 
	requires \valid_read(arr+(0..n-1)); 
	ensures \forall integer i; 
		0<=i<n ==> arr[n-1]>=arr[i];
*/

void selection(int arr[], int n) 
{
	int max_index = 0;
	/*@
		loop invariant \forall integer i;
			0<=i<j ==> arr[max_index] >= arr[i]; 
		loop invariant 1<=j<=n; 
		loop assigns j,max_index; 
		loop variant n-j; 
	*/
	for(int j=1;j<n;j++)
	{
		if(arr[max_index]<arr[j]) 
		{
			max_index = j;
		}
	}
	int temp=arr[max_index]; 
	arr[max_index]=arr[n-1]; 
	arr[n-1] = temp;
}