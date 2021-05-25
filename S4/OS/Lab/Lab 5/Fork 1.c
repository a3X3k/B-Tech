#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{

    pid_t pid = getpid();
    pid_t pptd = getppid();

    printf("Label -> A PID -> %d PPID -> %d\n", getpid(),getppid());

    if(fork())
    {
        wait(NULL);

        if(fork())
        {
            wait(NULL);
            if(!fork())
            {
                printf("Label -> D PID -> %d PPID -> %d\n", getpid(),getppid());
                if(!fork())
                {
                    printf("Label -> G PID -> %d PPID -> %d\n", getpid(),getppid());
                    if(fork())
                    {
                        wait(NULL);
                        if(!fork())
                        {
                            printf("Label -> I PID -> %d PPID -> %d\n", getpid(),getppid());
                        }
                        else
                        {
                            wait(NULL);
                        }
                    }
                    else
                    {
                        printf("Label -> H PID -> %d PPID -> %d\n", getpid(),getppid());
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
            printf("Label -> C PID -> %d PPID -> %d\n", getpid(),getppid());
            if(fork())
            {
                wait(NULL);
                if(!fork())
                {
                    printf("Label -> F PID -> %d PPID -> %d\n", getpid(),getppid());
                }
                else
                {
                    wait(NULL);
                }
            }
            else
            {
                printf("Label -> E PID -> %d PPID -> %d\n", getpid(),getppid());
            }
        }
    }
    else
    {
        printf("Label -> B PID -> %d PPID -> %d\n", getpid(),getppid());
    }

    return 0;
}








