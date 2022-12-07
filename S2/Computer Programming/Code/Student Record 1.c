#include<stdio.h>

struct student{
    int roll;
    char* name[10];
    float math;
    float sanskrit;
    float programming;
};

void dis(struct student s[5])
{
    int i;
    printf("The name of the students :\n");
    for(i=0;i<5;i++)
    {
        printf("%s\n",s[i].name);
    }
}

void avg(struct student s[5])
{
    int i;
    float avg=0;
    for(i=0;i<5;i++)
    {
        avg+=s[i].math;
    }
    avg=avg/5;
    printf("\nThe average of all students in Math subject is %f",avg);
}

void search(struct student s[5])
{
    int i,ele;
    printf("Enter the Roll number of the student whose name has to be found : ");
    scanf("%d",&ele);
    for(i=0;i<5;i++)
    {
        if(s[i].roll==ele)
        {
            break;
        }
    }
    printf("The Name of the Student with the Roll number %d is %s",ele,s[i].name);
}

int read(struct student s[5])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the Roll number of the Student %d : ",i+1);
        scanf("%d",&s[i].roll);
        printf("Enter the Name of the Student %d : ",i+1);
        scanf("%s",&s[i].name);
        printf("Enter the Math Mark of the Student %d : ",i+1);
        scanf("%f",&s[i].math);
        printf("Enter the Sanskrit Mark of the Student %d : ",i+1);
        scanf("%f",&s[i].sanskrit);
        printf("Enter the Programming Mark of the Student %d : ",i+1);
        scanf("%f",&s[i].programming);
    }
    return s;
}

void main()
{
    struct student s[5];
    int option=0,opt;
    read(s);
    while(option!=1)
    {
        printf("Menu : \n");
        printf("\nPress 1 to Display the name of all students");
        printf("\nPress 2 to find the average marks of all students in Math");
        printf("\nPress 3 to search the student using the Roll number : ");
        scanf("%d",&opt);
        if(opt==1)
        {
            dis(s);
        }
        else if(opt==2)
        {
            avg(s);
        }
        else
        {
            search(s);
        }
        printf("\n\nEnter 1 to Exit or Anyother key to continue : ");
        scanf("%d",&option);
        printf("\n");
    }
}
