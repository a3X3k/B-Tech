#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    if(fork())
    {
        wait(NULL);
        int radius;
        printf("\n\nEnter the Radius of the Circle : ");
        scanf("%d",&radius);
        printf("Perimeter of the Circle : %0.2f",2*3.14*radius);
    	printf("\nArea of the Circle : %0.2f",3.14*radius*radius);
    }
    else
    {
        float side;
        printf("Enter length of side of square : ");
        scanf("%f", &side);
        printf("Area of square : %0.2f",side*side);
        printf("\nPerimeter of the Square : %0.2f",4*side);
    }
}