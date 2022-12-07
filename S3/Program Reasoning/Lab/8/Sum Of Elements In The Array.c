/*@
	requires n>0;
	requires \valid_read(arr + (0..n−1));
*/



int arraysum(int arr[], int n)
{
	int sum = 0,previous;
	/*@
		loop invariant \exists integer i;
			0<= i < j ==> sum == previous + arr[i];
		loop invariant 0<= j<= n;
		loop assigns j, sum,previous;
		loop variant n-j;
	*/
	for (int j=0; j<n; j++)	
	{
		previous = sum;
		sum = sum + arr[j];
	}
	return sum;
}
