#include<stdio.h> 
#include<sys/ipc.h> 
#include<sys/shm.h>
#include<unistd.h>
#include<sys/wait.h>

int main() 
{         
    int shmid;         
    
    shmid = shmget(IPC_PRIVATE, sizeof(int), 0777|IPC_CREAT);                         
    
    if (fork() == 0) 
    {                 
        int *a;
        a = (int *) shmat(shmid, 0, 0);                 
        sleep(4);                         
        printf("Child reads: %d\n",a[0]);
        
        printf("All odd numbers till %d : ",a[0]);
        
        for(int i=1;i<=a[0];i++)
        {
            if(i%2!=0)
            {
                printf("%d ",i);
            }
        }
        
        shmdt(a);         
    }         
    else 
    {                 
        int *a;
        a = (int *) shmat(shmid, 0, 0);                 
        printf("Enter the Number : ");
        int i;
        scanf("%d",&i);
        a[0] = i;
        printf("Parent writes: %d\n",a[0]);                 
        wait(NULL);               
        shmdt(a);                 
        shmctl(shmid, IPC_RMID, 0);         
    } 
}














