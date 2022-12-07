/*@	requires n > 0;
	requires \valid_read(a + (0..n-1));
	requires \valid_read(b + (0..n-1));
	behavior equal:
	assumes \forall integer i;
			0 <= i < n ==> a[i] == b[i];
		ensures \result==1;
	behavior not_equal:
	assumes \exists integer i;
			0 <= i < n && a[i] != b[i];
		ensures \result==0; */
int equal(int a[],int b[], int n) {
/*@	loop invariant \forall integer i;
			0 <= i < j ==> a[i] == b[i];
	loop invariant 0 <= j <= n;
	loop assigns j;
	loop variant n−j; */
	for(int j=0;j<n;j++){
		if (a[j] != b[j]) {
			return 0; } }
	return 1;
}
