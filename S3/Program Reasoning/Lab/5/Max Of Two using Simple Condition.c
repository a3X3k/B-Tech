/*@ 
	ensures \result == a && \result > b || \result > a && \result == b || \result == a && \result == b; 
*/

int max(int a, int b) 
{
	return a > b ? a : b; 
} 

