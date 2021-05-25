#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    pid_t pid = getpid();
    pid_t pptd = getppid();
    printf("Label -> 0 PID -> %d PPID -> %d\n", getpid(),getppid());
    
    if(!fork())
    {
        printf("Label -> 1 PID -> %d PPID -> %d\n", getpid(),getppid());
        if(fork())
        {
            wait(NULL);
            if(!fork())
            {
                printf("Label -> 3 PID -> %d PPID -> %d\n", getpid(),getppid());
                if(!fork())
                {
                    printf("Label -> 5 PID -> %d PPID -> %d\n", getpid(),getppid());
                    if(fork())
                    {
                        wait(NULL);
                        if(!fork())
                        {
                            printf("Label -> 9 PID -> %d PPID -> %d\n", getpid(),getppid());
                        }
                        else
                        {
                            wait(NULL);
                        }
                    }
                    else
                    {
                        printf("Label -> 8 PID -> %d PPID -> %d\n", getpid(),getppid());
                    }
                }
                else
                {
                    wait(NULL);
                }
            }
            else
            {
                wait(NULL);
            }
        }
        
        else
        {
            printf("Label -> 2 PID -> %d PPID -> %d\n", getpid(),getppid());
            if(!fork())
            {
                printf("Label -> 4 PID -> %d PPID -> %d\n", getpid(),getppid());
                if(fork())
                {
                    wait(NULL);
                    if(!fork())
                    {
                        printf("Label -> 7 PID -> %d PPID -> %d\n", getpid(),getppid());
                    }
                    else
                    {
                        wait(NULL);
                    }
                }
                else
                {
                    printf("Label -> 6 PID -> %d PPID -> %d\n", getpid(),getppid());
                }
            }
            else
            {
                wait(NULL);
            }
        }
    }
    else
    {
        wait(NULL);
    }
}