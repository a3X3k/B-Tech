#include<stdio.h>
int main()
{
    int a,i,s,c,s1=0,c1=0;
    printf("Enter the no : \n");
    scanf("%d",&a);
    do{
        s=i*i;
        c=i*i*i;
        s1=s1+s;
        c1=c1+c;
        i++;
    }while(i<=a)
    printf("The square and cube are %d and %d.",s1,c1);
    return 0;
}
