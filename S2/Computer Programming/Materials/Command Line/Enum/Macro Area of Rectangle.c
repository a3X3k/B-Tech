#include <stdio.h>
#define AREA(l,b)( printf("The Area of the Rectangle is %d.",l*b))

void main()
{
    int l,b;
    printf("Enter the Length of the Rectangle : ");
    scanf("%d",&l);
    printf("Enter the Width of the Rectangle : ");
    scanf("%d",&b);
    AREA(l,b);
}
