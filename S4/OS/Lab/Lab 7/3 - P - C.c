#include <stdio.h> 
#include <sys/ipc.h> 
#include <sys/shm.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include<sys/wait.h>

int main() 
{
        int shmid;
  int *a, *b, *c;         
  int i=0, n;
  shmid = shmget(IPC_PRIVATE, sizeof(int), 0777|IPC_CREAT);   
  b = (int *)shmat(shmid, 0, 0);
  b[0]=1;
  if(!fork())
  {
    c = (int *)shmat(shmid, 0, 0);
    c[0] = 2;
    printf("Hello\n");
    shmdt(c);
    if(!fork())
    {
      a = (int *)shmat(shmid, 0, 0);
      a[0]=3;
      printf("Memory\n");
      shmdt(a);   
    } 
  }
  else
  {
    wait(NULL);
    printf("%d\n",b[0]);
    shmdt(b);
    
  }
  shmctl(shmid, IPC_RMID, 0); 
}