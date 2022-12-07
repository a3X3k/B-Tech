/*@
requires n > 0;
requires k > 0;
requires \valid(a + (0..k−1));
ensures \forall integer i;
	0 <= i < k−1 ==> a[k−1] >= a[i];
*/
void bubble_inner_loop(int a[], int n,int k) 
{
	/*@
	loop invariant \forall integer i;
		0 <= i < j ==> a[j] >= a[i];
	loop invariant 0 <= j <= k−1;
	loop assigns j, a[0..j+1];
	loop variant k − 1 − j;
	*/

	for(int j=0;j<k-1;j++)
	{
		if (a[j] > a[j+1]) 
		{
			int temp = a[j];
			a[j] = a[j+1];
			a[j+1] = temp;
		}
	}
}
