/*@   requires \valid(a) && \valid(b);
	requires *a>=0 && *a<=10000000;
	requires *b>=0 && *b<=10000000;
	assigns \nothing;
	ensures (*a < *b) ==> \result == *b;
	ensures (*a > *b) ==> \result == *a;
*/
int max_ptr(int* a, int* b){
	return (*a < *b) ? *b : *a ; 
}

int main(){
	int a = 24 ;
	int b = 42 ;
	int x = max_ptr(&a, &b) ; 
	//@ assert x == 42 ;
}
