#include<stdio.h>
/*NAME : S.ABHISHEK
ROLL NUMBER : AM.EN.U4CSE19147
BATCH : S2-CSE-B*/
int main()
{
    int a=36,*ptr=&a;
    printf("%u %u",*&ptr,&*ptr);
    return 0;
}
