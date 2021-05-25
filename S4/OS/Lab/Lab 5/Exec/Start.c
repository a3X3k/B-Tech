#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    printf("ID of the Process ( Parent ) = %d\n", getpid());
    if(fork())
    {
    	wait(NULL);
	if(!fork())
	{
		char *args[]={"./Happy_New_Year",NULL}; 
		execvp(args[0],args); 
	}
	else
	{
		wait(NULL);
		printf("\nParent Process Terminating.....\n");
	}
    }
    else
    {
	char *args[]={"./Sum",NULL}; 
	execvp(args[0],args); 
    }
}


