#include<stdio.h> 
#include<sys/ipc.h> 
#include<sys/shm.h>
#include<unistd.h>
#include<sys/wait.h>

int main() 
{         
    int shmid;         
    
    shmid = shmget(IPC_PRIVATE, sizeof(char), 0777|IPC_CREAT);                         
    
    if (fork() == 0) 
    {                 
        char *a;
        a = (char *) shmat(shmid, 0, 0);                 
        sleep(5);                         
        printf("Child reads: %s\n",a);
        for(int i=0; a[i]!='\0'; i++)
        {
            if(a[i]>='a' && a[i]<='z')
            {
                a[i] = a[i] - 32;
            }
        }
        printf("Upper Case : %s",a);
        shmdt(a);         
    }         
    else 
    {                 
        char *a;
        a = (char *) shmat(shmid, 0, 0);                 
        printf("Enter the String : ");
        scanf("%s",a);
        printf("Parent writes: %s\n",a);                 
        wait(NULL);               
        shmdt(a);                 
        shmctl(shmid, IPC_RMID, 0);         
    } 
}














