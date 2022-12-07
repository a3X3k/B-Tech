#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
 
int partition(int *A, int left, int right){
 
    int pivot = A[right], i = left, x;
 
    for (x = left; x < right; x++){
        if (A[x] <= pivot){
            swap(&A[i], &A[x]);
            i++;
        }
    }
 
    swap(&A[i], &A[right]);
    return i;
}
 
 
int quickselect(int *A, int left, int right, int k){
 
    //p is position of pivot in the partitioned array
    int p = partition(A, left, right);

    if (p == k-1){
        return A[p];
    }
    //k less than pivot
    else if (k - 1 < p){
        return quickselect(A, left, p - 1, k);
    }
    //k greater than pivot
    else{
        return quickselect(A, p + 1, right, k);
    }
}
 
int ksmallest(int *A, int n, int k){
 
    int left = 0; 
    int right = n - 1; 
 
    return quickselect(A, left, right, k);
}
 
int main()
{
	int A[10] = {1,3,8,2,4,9,7,10,6,5};
	int k;
	scanf("%d", &k);
	printf("%d\n", ksmallest(A, 7, k));
	return 0;
}