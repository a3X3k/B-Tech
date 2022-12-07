#include <stdio.h>
int doit(int,int,int,int);
int main()
{
    int a,b,radius;
    printf("1.Area of Circle\n");
    printf("2.Perimeter of circle\n");
    printf("3.Area of rectangle\n");
    printf("4.Perimeter of a rectangle\n");
    int choice;

    printf("Enter your choice : ");
    scanf("%d",&choice);
    if(choice==1||choice==2){
        printf("Enter radius : ");
        scanf("%d",&radius);
    }
    else if(choice==3||choice==4){
        printf("Enter a and b : ");
        scanf("%d %d",&a,&b);
    }
    float result=doit(a,b,choice,radius);
    printf("%f",result);
    return 0;
}
int doit(int a,int b,int choice,int radius)
{
    float result;
    if(choice==1){
        result=3.14*radius*radius;
    }
   else if(choice==2){
        result=3.14*2*radius;
    }
    else if(choice==3){
        result=a*b;
    }
    else if(choice==4){
        result=2*a+2*b;
    }
    return result;
}
