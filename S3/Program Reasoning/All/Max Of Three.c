/*@   requires \valid(a) && \valid(b) && \valid(c) && \valid(d);
	requires *a>=0 && *a<=10000000;
	requires *b>=0 && *b<=10000000;
	requires *c>=0 && *c<=10000000;
	requires *d>=0 && *d<=10000000;
	assigns *d;
	ensures (*a > *b && *a > *c) ==> *d == *a;
	ensures (*b > *a && *b > *c) ==> *d == *b;
	ensures (*c > *a && *c > *b) ==> *d == *c;
*/
void max_ptr(int* a, int* b,int* c,int* d){
	if(*a > *b && *a > *c)
	{
		*d=*a;
	}
	else if(*b > *a && *b > *c)
	{
		*d=*b;
	}
	else if(*c > *a && *c > *b)
	{
		*d=*c;
	}
}


int main(){
	int a = 24 ;
	int b = 42 ;
	int c = 65;
	int d=0;
	max_ptr(&a, &b, &c, &d) ;
}
