#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define SIZE 100

int main()
{
    int p1[2],p2[2],c1[2],c2[2],arrw[10],arrr[10],f=0,sum=0,index=0,count=0;
    
    char str[10];
    
    pipe(p1),pipe(p2),pipe(c1),pipe(c2);
    
    if(fork())
    {
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
                write(p1[1],arrw,index*sizeof(int));
                close(p1[1]);
                write(p2[1],arrw,index*sizeof(int));
                close(p2[1]);
                break;
            }
        
            int x = atoi(str);
            arrw[index] = x*x;
            index++;
        }
    
        if(fork())
        {
            close(c1[1]);
            read(c1[0],&sum,sizeof(int));
            close(c1[0]);
            close(c2[1]);
            read(c2[0],&count,sizeof(int));
            close(c2[0]);
            printf("\nTotal Sum is : %d\n", sum);
            printf("Count is %d\n",count);
            printf("Mean of Square is %.2f\n",(float)sum/count);
        }
        else
        {
            close(p1[1]);
            count = read(p1[0],arrr,SIZE*sizeof(int));
            close(p1[0]);
            count = count/sizeof(int);
            close(c2[0]);
            write(c2[1],&count,sizeof(int));
            close(c2[1]);
        }
    }
    else
    {
        close(p2[1]);
        index = read(p2[0],arrr,SIZE*sizeof(int));
        close(p2[0]);
        index = index/sizeof(int);
	    printf("Numbers to be added are : ");
        for(int i=0;i<index;i++)
        {
            sum = sum+arrr[i];
	        if (i == index-1)
	        {
		        printf("%d",arrr[i]);
	        }	
	        else
	        {
		        printf("%d + ",arrr[i]);
	        }	
        }
        close(c1[0]);
        write(c1[1], &sum,sizeof(int));
        close(c1[1]);
    }
}


