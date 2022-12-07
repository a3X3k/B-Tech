/*@   requires first >=0 && first<=180;
	requires second >=0 && second<=180;

	ensures \result >=0 && \result<=180;
	ensures \result==180-first-second;
	ensures \result + first + second ==180;

*/

int last_angle(int first, int second){
	
	return 180 - first - second ;

}




