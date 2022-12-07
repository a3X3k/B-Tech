/*@  
	requires n>0;
	requires \valid(arr + (0..n−1));
	ensures \forall integer i;
				0 <= i < n ==> arr[i] == 0;
*/
void arraymax(int arr[], int n)
{
	/*@ 
		loop invariant \forall integer i;
				0<= i< j ==> arr[i] == 0;
		loop invariant 0<= j <= n;
		loop assigns j,arr[0..n-1];
		loop variant n−j;
	*/
	for (int j=0; j<n; j++)
	{
		arr[j]=0;
	}
}
