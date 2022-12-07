/*@
requires n>0; 
requires \valid_read(arr + (0..n-1)); 
*/

void cumulativearray(int arr[], int n) 
{
	int x,y;
	/*@
		loop invariant \exists integer i;
		1<=i<j ==> arr[i] == x+y; 
		loop invariant 	1<=j<=n; 
		loop assigns j, arr[0..j],x,y; 
		loop variant n-j-1;
	*/ 
	for(int j=1;j<n;j++)
	{
		x = arr[j]; 
		y = arr[j-1];
		arr[j] = arr[j]+arr[j-1];
	}
}