int a, b; 
/*@ 
ensures a == \old(b) && b == \old(a); 
*/ 

void old_swap() 
{ 
	int temp = a; 
	a = b; 
	b = temp; 
}

