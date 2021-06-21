#include<stdio.h>
int main()
{
    int a,i=1;
    printf("Enter the no : \n");
    scanf("%d",&a);
    while(i<a)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}
