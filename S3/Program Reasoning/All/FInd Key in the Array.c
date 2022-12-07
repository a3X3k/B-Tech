/*@	requires n > 0;
	requires \valid_read(arr + (0..n−1));
	behavior not_found:
		assumes \forall integer i;
			0 <= i < n ==> arr[i]  !=  key;
		ensures \result == 0;
	behavior found:
		assumes \exists integer i;
		0 <= i < n && arr[i] == key;
		ensures \result == 1;
	complete behaviors;
	disjoint behaviors; 
*/

int linearsearch(int arr[], int n, int key) {
/*@	loop invariant \forall integer j;
		0 <= j < i ==> arr[j] != key;
	loop invariant 0 <= i <= n;
	loop assigns i;
	loop variant n − i; */
	for (int i=0; i<n; i++) {
		if (arr[i] == key)
			return 1;}
	return 0; }
