/*@   requires \valid(a) && \valid(b) && \valid(c);
	requires *a>=0 && *a<=10000000;
	requires *b>=0 && *b<=10000000;
	requires *b>=0 && *b<=10000000;
	assigns *c;
	ensures (*a < *b) ==> *c == *b;
	ensures (*a > *b) ==> *c == *a;
*/
void max_ptr(int* a, int* b,int* c){
	*c=(*a < *b) ? *b : *a ; 
}


int main(){
	int a = 24 ;
	int b = 42 ;
	int c = 0;
	max_ptr(&a, &b, &c) ;
}
