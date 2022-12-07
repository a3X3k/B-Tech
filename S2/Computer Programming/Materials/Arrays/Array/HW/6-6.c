#include<stdio.h>
/*NAME : S.ABHISHEK
ROLL NUMBER : AM.EN.U4CSE19147
BATCH : S2-CSE-B*/
int main()
{
    int i=6,*j=&i;
    printf("The value of (i)*(*j)*(i)+(*j) is %d.",i**j*i+*j);
    return 0;
}
