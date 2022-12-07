#include<stdio.h>
/*NAME : S.ABHISHEK
ROLL NUMBER : AM.EN.U4CSE19147
BATCH : S2-CSE-B*/
int main()
{
    int a[5]={15,20,30,55,70};
    int *ptr=a;
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    while(*ptr<30)
    {
        if((*ptr%2)!=0)
        {
            *ptr=*ptr+2;
        }
        else
        {
            *ptr=*ptr+1;
        }
        ptr=ptr+1;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
