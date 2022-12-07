/*@  
	requires x<100000 && y <100000;
	requires x>-100000 && y >-100000;
	ensures \result==x+y;
*/

int add(int x,int y){

	return x + y ;
}
