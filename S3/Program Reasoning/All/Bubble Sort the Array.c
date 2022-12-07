/*@
	requires n > 0;
	requires \valid(a + (0..n−1));
	ensures \forall integer i;
	0 <= i < n−1 ==> a[n−1] >= a[i];
*/

void bubble_inner_loop(int a[], int n) 
{

/*@
	loop invariant \forall integer i;
	0 <= i < j ==> a[j] >= a[i];
	loop invariant 0 <= j <= n−1;
	loop assigns j, a[0..j+1];
	loop variant n − 1 − j;
*/
	for(int j=0;j<n-1;j++) 
	{
		if (a[j] > a[j+1]) 
		{
			int temp = a[j];
			a[j] = a[j+1];
			a[j+1] = temp;
		}
	}
}
