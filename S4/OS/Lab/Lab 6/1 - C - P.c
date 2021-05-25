#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<sys/wait.h>
  
int main()
{
    int fd1[2];
    pid_t p;
  
    if (pipe(fd1)==-1)
    {
        printf("Pipe Failed");
        return 1;
    }
    
    p = fork();
  
    if (p < 0)
    {
        printf("Fork Failed");
        return 1;
    }
    
     // child process
    else if (p == 0)
    {
        close(fd1[0]); // Close Read End
        printf("Child is Executed to get the Input!\n");
        printf("Enter the String to Send to Parent : ");
        char input_str[100];
        scanf("%s", input_str); 
        write(fd1[1], input_str, strlen(input_str)+1);
        close(fd1[1]); // Close write End
    }
    
    // Parent process
    else
    {
        wait(NULL);
        printf("\nParent is Executed to Print the Input!\n");
        close(fd1[1]);  // Close write end of the pipe
        char inp[100];
        read(fd1[0], inp, 100);
        for(int i=0; inp[i]!='\0'; i++)
        {
            if(inp[i]>='a' && inp[i]<='z')
            {
                inp[i] = inp[i] - 32;
            }
        }
        printf("Input is : %s\n", inp);
        close(fd1[0]);
    }
}
