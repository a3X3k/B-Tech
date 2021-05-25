#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    float num;
    printf("Enter the Number : ");
    scanf("%f",&num);
    
    pid_t pid = getpid();
    pid_t pptd = getppid();
    
    if(fork())
    {
        if(!fork())
        {
            printf("\nChild -> 2  PID -> %d PPID -> %d\n", getpid(),getppid());
            printf("\nArea of square : %0.2f",num*num);
            printf("\nPerimeter of the Square : %0.2f",4*num);
        }
    }
    else
    {
        printf("\nChild -> 1  PID -> %d PPID -> %d\n", getpid(),getppid());
        printf("\nPerimeter of the Circle : %0.2f",2*3.14*num);
    	printf("\nArea of the Circle : %0.2f\n",3.14*num*num);
    }
}