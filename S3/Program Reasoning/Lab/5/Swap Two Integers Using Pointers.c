/*@ ensures *a == \old(*b) && *b == \old(*a); */
 
void swap(int *a, int *b) 
{ 

	int temp = *a; 
	*a = *b; 
	*b = temp; 

}
