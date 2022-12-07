/*@
	requires a<100000 && b <100000;
	requires a>-100000 && b >-100000;
	
	ensures (a<b ==> \result == b-a) &&
	(a>b ==> \result == a-b);
*/
int distance(int a, int b){
	if(a < b) return b - a ;
	else return a - b ;
}
