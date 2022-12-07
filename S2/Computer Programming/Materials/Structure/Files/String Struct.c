#include<stdio.h>

void main()
{
    char a[10],b[10];
    scanf("%s",a);
    getchar();
    printf("%s\n",a);
    fgets(b,10,stdin);
    puts(b);
}
