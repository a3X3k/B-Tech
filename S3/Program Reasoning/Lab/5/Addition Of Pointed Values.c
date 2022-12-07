/*@ requires \valid(p) && \valid(q);
	requires *p >=0 && *p <= 1000000;
	requires *q >=0 && *q <= 1000000;
	assigns \nothing;	
	ensures \result == *p+*q ;
*/

int add(int *p, int *q)
{
	return *p + *q ;
}
int main()
{
	int a = 24 ;
	int b = 42 ;
	int x ;
	
	x = add(&a, &b) ;
	//@ assert x == a + b ;
	//@ assert x == 66 ;

	x = add(&a, &a) ;
	//@ assert x == a + a ;
	//@ assert x == 48 ;
}

