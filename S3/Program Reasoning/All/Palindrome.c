/*@  
	requires n>0;
	requires \valid_read(arr + (0..n−1));
	behavior inc:
		assumes \forall integer i;
				0 <= i < n/2 ==> arr[i] == arr[n-i-1];
				ensures \result==1;
	behavior not_inc:
		assumes \exists integer i;
				0 <= i < n/2 && arr[i] != arr[n-i-1];
				ensures \result==0;
*/
int array(int arr[], int n)
{
	/*@ 
		loop invariant \forall integer i;
				0<= i< j ==> arr[i] == arr[n-i-1];
		loop invariant 0<= j <= n/2;
		loop assigns j;
		loop variant n−j;
	*/
	for (int j=0; j<n/2; j++)
	{
		if (arr[j]!=arr[n-j-1])
		{
			return 0;
		}
	}
	return 1;
}
