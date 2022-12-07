/*@  
	requires n>0;
	requires \valid_read(arr + (0..n−1));
	behavior inc:
		assumes \forall integer i;
				1 <= i < n ==> arr[i] > arr[i-1];
				ensures \result==1;
	behavior not_inc:
		assumes \exists integer i;
				1 <= i < n && arr[i] <= arr[i-1];
				ensures \result==0;
*/
int array(int arr[], int n)
{
	/*@ 
		loop invariant \forall integer i;
				1<= i< j ==> arr[i] > arr[i-1];
		loop invariant 1<= j <= n;
		loop assigns j;
		loop variant n−j;
	*/
	for (int j=1; j<n; j++)
	{
		if (arr[j]<=arr[j-1])
		{
			return 0;
		}
	}
	return 1;
}
