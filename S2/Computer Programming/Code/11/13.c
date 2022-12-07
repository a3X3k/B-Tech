#include<stdio.h>
int main()
{
    int a,c=0,i=1;
    printf("Enter the no : \n");
    scanf("%d",&a);
    while(i<=a)
    {
        c=c+i;
        i++;
    }
    printf("%d",c);
    return 0;
}

/*
#include<stdio.h>
int main()
{
    int a,c=0,i=1;
    printf("Enter the no : \n");
    scanf("%d",&a);
    do{
        c=c+i;
        i++;
    }while(i<=a)
    printf("%d",c);
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int a,c=0,i=1;
    printf("Enter the no : \n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        c+=i;
    }
    printf("%d",a);
    return 0;
}
*/







