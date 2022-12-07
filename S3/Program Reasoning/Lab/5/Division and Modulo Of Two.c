/*@  requires \valid(q) && \valid(r);
	requires \separated(q, r);
        requires x>0 && x<1000000 && y>0 && y<1000000;
	ensures *q == x/y;
	ensures *r == x%y;
*/

void div_rem(unsigned x, unsigned y, unsigned* q, unsigned* r)
{
	*q = x / y ;
	*r = x % y ;
}
