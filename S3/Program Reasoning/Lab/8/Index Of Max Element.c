/*@  
	requires n>0;
	requires \valid_read(arr + (0..n−1));
	ensures \forall integer i;
				0 <= i < n ==> arr[\result] >= arr[i];
*/
int arraymax(int arr[], int n)
{
	int max = 0;
	/*@ 
		loop invariant \forall integer i;
				0<= i< j ==> arr[max] >=arr[ i];
		loop invariant 1<= j <= n;
		loop assigns j, max;
		loop variant n−j;
	*/
	for (int j=1; j<n; j++)
	{
		if (arr[j]>arr[max])
			max = j;
	}
	return max;
}
