#include <stdio.h>
#define PI 3.14
#define AREA(r)( printf("The Area of the Circle is %f.",PI*r*r) )

void main()
{
    int r;
    printf("Enter the Radius of the Circle : ");
    scanf("%d",&r);
    AREA(r);
}
