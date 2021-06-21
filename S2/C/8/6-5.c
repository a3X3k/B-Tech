#include<stdio.h>
/*NAME : S.ABHISHEK
ROLL NUMBER : AM.EN.U4CSE19147
BATCH : S2-CSE-B*/
int main()
{
    int a=5;
    int *b=&a;
    *b=*b*3;
    printf("The new value of 'a' is : %d.",a);
    return 0;
}
