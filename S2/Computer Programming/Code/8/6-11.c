#include<stdio.h>
/*NAME : S.ABHISHEK
ROLL NUMBER : AM.EN.U4CSE19147
BATCH : S2-CSE-B*/
int main()
{
    int a[5]={1,2,3,4,5};
    int *ptr=a+2;
    for(int i=0;i<5;i++)
    {
        *ptr=(*ptr)*2;
        --ptr;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
