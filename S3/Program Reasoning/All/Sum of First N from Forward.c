/*@ requires n > 0;
ensures \result == n*(n+1)/2;
*/
int sigma(int n) {
	int s = 0;
	int i = 1;
	/*@
	loop invariant s == (i−1)*i/2;
	loop invariant 1 <= i <= n+1;
	loop assigns s, i;
	loop variant n − i;
	*/
	while (i <= n) {
		s = s + i;
		i = i + 1;
	}
	return s;
}
