#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
  
int main()
{
    int fd1[2];
    int arr[100];
    int index = 0;
    pipe(fd1);
    
    if(fork())
    {
    	close(fd1[0]); 
        while(1)
        {
            char str[10];
            int f = 0;
            printf("Enter the number : ");
            scanf("%s", str);
            int len = strlen(str);
            for (int i=0;i<len; i++)
            {
                if (!isdigit(str[i]))
                {
                    f = 1;
                    break;
                }
            }
            
            if (f == 1)
            {
                write(fd1[1], arr,(index)*sizeof(int));
                close(fd1[1]);
                break;
            }
            else
            {
                int x = atoi(str);
                arr[index] = x;
                index++;
            }
        }
    }
    else
    {
        int inp[100],sum=0;
        close(fd1[1]);
        int s = read(fd1[0], inp,400);
        close(fd1[0]);
        s=s/sizeof(int);
        printf("Size is : %d\n", s);
        for(int i=0;i<s;i++)
        {
            sum = sum+inp[i];
        }
        
        printf("Sum is : %d\n", sum);
    }
}

