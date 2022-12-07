#include<iostream>
#include<cstdlib>

using namespace std;

void swap(int *a, int *b) {
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}

int partition(int a[], int l, int h) {
   int pivot, index, i;
   index = l;
   pivot = h;
   for(i = l; i < h; i++) {
      if(a[i] < a[pivot]) {
         swap(&a[i], &a[index]);
         index++;
      }
   }
   swap(&a[pivot], &a[index]);
   return index;
}
int pivot(int a[], int l, int h) {
   int pvt, n, temp;
   n = rand();
   pvt = l + n%(h-l+1);
   swap(&a[h], &a[pvt]);
   return partition(a, l, h);
}
int sort(int a[], int l, int h) {
   int pindex;
   if(l < h) {
      pindex = pivot(a, l, h);
      sort(a, l, pindex-1);
      sort(a, pindex+1, h);
   }
   return 0;
}
int main() {
   int n, i;
   cout<<"\nEnter the number of data element to be sorted: ";
   cin>>n;
   int arr[n];
   for(i = 0; i < n; i++) {
      cout<<"Enter element "<<i+1<<": ";
      cin>>arr[i];
   }
   sort(arr, 0, n-1);
   cout<<"\nSorted Data ";
   for (i = 0; i < n; i++)
      cout<<"->"<<arr[i];
   return 0;
}