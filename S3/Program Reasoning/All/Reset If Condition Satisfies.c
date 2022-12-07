/*@ requires \valid(a) && \valid(b);	
	assigns *a;
	behavior ret_a:
		assumes *b==0;
		ensures *a==\old(*a) && *b==\old(*b);		
	ensures (*b==1) ==> *a==0 && *b==\old(*b);
*/
void reset_1st_if_2nd_is_true(int* a, int const* b)
{
	if(*b) *a = 0 ;
}
int main()
{
	int a = 5 ;
	int x = 0 ;
	reset_1st_if_2nd_is_true(&a, &x);
	//@ assert a == 5 ;
	//@ assert x == 0 ;
	int const b = 1 ;
	reset_1st_if_2nd_is_true(&a, &b);
	//@ assert b == 1 ;
}

