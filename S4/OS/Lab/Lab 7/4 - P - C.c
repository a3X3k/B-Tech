#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include <sys/ipc.h> 
#include <sys/shm.h>
#include<sys/wait.h>

int main()
{
    int shmid,*arr,index=2,f=0;
    char str[10];
    
    shmid = shmget(IPC_PRIVATE, 100*sizeof(int), 0777|IPC_CREAT);  
	arr = (int *)shmat(shmid, 0, 0);
	
	printf("PID --> %d and PPID --> %d\n",getpid(),getppid());
	
    while(1)
    {
        printf("Enter the number : ");
        scanf ("%s", str);
        int len = strlen (str);
            
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
            printf("Oops!!..Special Character Found!\n\n");
            break;
        }
        
        int x = atoi(str);
        arr[index] = x*x;
        index++;    
    }
    
    if(fork())
	{
		if(!fork())
		{
            int sum=0,i=2;
			arr = (int *)shmat(shmid, 0, 0);
			printf("\nPID --> %d and PPID --> %d.",getpid(),getppid());
	        printf("\nNumbers to be added are : ");
            while(arr[i])
			{
                sum = sum+arr[i];
                printf("%d ",arr[i]);
                i++;
            }
            printf("\nSum of Numbers is %d.\n",sum);
            arr[0] = sum;
            
		}
		else
		{
			wait(NULL);
			printf("\nPID --> %d and PPID --> %d.\n",getpid(),getppid());
			printf("Mean of Square of Numbers is %.2f.",(float)arr[0]/arr[1]);
			shmdt(arr);  
			shmctl(shmid, IPC_RMID, 0); 
		}
	}
	else
	{
	    int count=2;
		arr = (int *)shmat(shmid, 0, 0);
		while(arr[count])
		{
			count++;
		}
		arr[1] = count;
		printf("PID --> %d and PPID --> %d.\n",getpid(),getppid());
		printf("Count is %d\n",count);
		shmdt(arr);
	}
}


