#include<stdio.h>

struct student{
    char name[10];
    int roll;
    int math;
    int sans;
    int cpro;
};

void dis(struct student s[])
{
    int i;
    printf("\nThe Names of all Students : ");
    for(i=0;i<5;i++)
    {
        printf("%s ",s[i].name);
    }
}

void avg(struct student s[])
{
    int i;
    int s1=0;
    for(i=0;i<5;i++)
    {
        s1+=s[i].math;
    }
    printf("\nThe Average marks of all students in Math : %f",((float)s1/5));
}

void search(struct student s[])
{
    int i,n;
    printf("\n\nEnter the Roll Number of the Student : ");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        if(s[i].roll==n)
        {
            printf("\n\nThe Name of the student is %s",s[i].name);
            printf("\n\nThe Roll Number of the student is %d",s[i].roll);
            printf("\n\nThe Math Mark of the student is %d",s[i].math);
            printf("\n\nThe Sanskrit Mark of the student is %d",s[i].sans);
            printf("\n\nThe Programming Mark of the student is %d",s[i].cpro);
        }
    }
}

void main()
{
    struct student s[5];
    int i,op=1,opt;
    for(i=0;i<5;i++)
    {
        printf("Enter the Name of the Student %d : ",i+1);
        scanf(" %s",s[i].name);
        printf("Enter the Roll number of Student %d : ",i+1);
        scanf("%d",&s[i].roll);
        printf("Enter the Math Mark of Student %d : ",i+1);
        scanf("%d",&s[i].math);
        printf("Enter the Sanskrit Mark of Student %d : ",i+1);
        scanf("%d",&s[i].sans);
        printf("Enter the Programming Mark of Student %d : ",i+1);
        scanf("%d",&s[i].cpro);
    }

    while(op!=0)
    {
        printf("\n\nOPTIONS : ");
        printf("\n\n\t\tEnter 1 to Display the names of all students : ");
        printf("\n\n\t\tEnter 2 to Find the average marks of all students in Math : ");
        printf("\n\n\t\tEnter 3 to Search for a Particular student : ");
        printf("\n\n\t\tOPTION : ");
        scanf("%d",&opt);
        if(opt==1)
        {
            dis(s);
        }
        else if(opt==2)
        {
            avg(s);
        }
        else if(opt==3)
        {
            search(s);
        }
        else
        {
            printf("\n\t\tEnter 0 to exit and any other key to continue : ");
            scanf("%d",&op);
            continue;
        }
        printf("\n\n\t\tEnter 0 to exit and any other key to continue : ");
        scanf("%d",&op);
    }
}
