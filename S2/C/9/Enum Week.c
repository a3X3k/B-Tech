#include<stdio.h>

enum week{Sunday=1,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};

void main()
{
    for(int i=Sunday;i<=Saturday;i++)
    {
       switch(i)
       {
            case 1:
                printf("%d - %s\n",i,"Sunday");
                break;
            case 2:
                printf("%d - %s\n",i,"Monday");
                break;
            case 3:
                printf("%d - %s\n",i,"Tuesday");
                break;
            case 4:
                printf("%d - %s\n",i,"Wednesday");
                break;
            case 5:
                printf("%d - %s\n",i,"Thursday");
                break;
            case 6:
                printf("%d - %s\n",i,"Friday");
                break;
            case 7:
                printf("%d - %s\n",i,"Saturday");
                break;
        }
    }
}
