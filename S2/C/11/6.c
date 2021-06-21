#include<stdio.h>
int main()
{
    int s,s1;
    char g;
    printf("Enter the gender(m/f) and salary: ");
    scanf("%c %d",&g,&s);
    if(s>10000) && (g=="m")
    {
        s1=(5*s)/100;
        printf("\n The bonus amount is %d",s1);
        printf("He will get a salary of %d",s+s1);
        break;
    }
    else if(s>10000) && (g=="f")
    {
        s1=(10*s)/100;
        printf("\n The bonus amount is %d",s1);
        printf("She will get a salary of %d",s+s1);
        break;
    }
    else if(s<10000) && (g=="m")
    {
        s1=(7*s)/100;
        printf("\n The bonus amount is %d",s1);
        printf("He will get a salary of %d",s+s1);
        break;
    }
    else if
    {
        s1=(12*s)/100;
        printf("\n The bonus amount is %d",s1);
        printf("She will get a salary of %d",s+s1);
        break;
    }
    return 0;
}
