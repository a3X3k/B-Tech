#include<stdio.h>
#include<string.h>

struct student
{
    char name[10];
    int roll;
    int age;
    float cgpa;
};

void main()
{
    int i,option=1,position=0,f=0;
    struct student s;
    char c;
    FILE *ptr;
    while(option)
    {
        printf("Click Options to continue :\n\n");
        printf("\t\tA - To add a student detail....\n\n");
        printf("\t\tB - To Update a student detail.....\n\n");
        printf("\t\tC - To seek a student using the Rollno....\n\n");
        printf("\t\tD - To count the number of students Records entered in file....\n\n");
        printf("\t\tE - To delete a specific student from a file....\n\n");
        printf("Enter Your Choice Here..... : ");
        scanf(" %c",&c);
        if(c=='A')
        {
            ptr=fopen("Abhi1.dat","a");
            if(ptr==NULL)
            {
                printf("Error in File Opening!");
                return;
            }
            printf("\nEnter the Name of the Student : ");
            gets(s.name);
            fgets(s.name,sizeof(s.name),stdin);
            printf("\nEnter the Roll number of the Student : ");
            scanf("%d",&s.roll);
            printf("\nEnter the Age of the Student : ");
            scanf("%d",&s.age);
            printf("\nEnter the CGPA of the Student : ");
            scanf("%f",&s.cgpa);
            i=fwrite(&s,sizeof(struct student),1,ptr);
            if(i>0)
            {
                printf("\n\nStudent Added Successfully!");
            }
            fclose(ptr);
            ptr=fopen("Abhi1.dat","r");
            i=0;
            while(fread(&s,sizeof(struct student),1,ptr))
            {
                printf("\n\nStudent %d :\n",++i);
                printf("\nName = %s \nRoll Number = %d \n\nAge = %d \n\nCGPA = %f \n\n",s.name,s.roll,s.age,s.cgpa);
            }
            fclose(ptr);
        }
        else if(c=='B')
        {
            ptr=fopen("Abhi1.dat","r");
            if(ptr==NULL)
            {
                printf("Error in File Opening!");
                return;
            }
            printf("\nEnter the Roll of the Student to find : ");
            scanf("%d",&i);
            f=0;
            while(fread(&s,sizeof(struct student),1,ptr))
            {
                if(s.roll==i)
                {
                    printf("\nEnter the Name of the Student : ");
            		gets(s.name);
                    fgets(s.name,sizeof(s.name),stdin);
            		printf("\nEnter the Roll number of the Student : ");
            		scanf("%d",&s.roll);
            		printf("\nEnter the Age of the Student : ");
            		scanf("%d",&s.age);
            		printf("\nEnter the CGPA of the Student : ");
            		scanf("%f",&s.cgpa);
            		rewind(ptr);
            		fseek(ptr,-sizeof(struct student),SEEK_CUR) ;
                    fwrite(&s,sizeof(struct student),1,ptr) ;
                    printf("\nData Updated.....\n") ;
                    f=1;
                    break;
                }
            }
            fclose(ptr);
            if(f==0)
            {
                printf("\nNo Record Found....\n");
            }
        }
        else if(c=='C')
        {
            ptr=fopen("Abhi1.dat","r");
            if(ptr==NULL)
            {
                printf("Error in File Opening!");
                return;
            }
            printf("\nEnter the Roll of the Student to find : ");
            scanf("%d",&i);
            while(fread(&s,sizeof(struct student),1,ptr))
            {
                if(s.roll==i)
                {
                    printf("\nStudent Details :\n");
                    printf("\n\t\tName = %s \n\t\tRoll Number = %d \n\n\t\tAge = %d \n\n\t\tCGPA = %f \n\n",s.name,s.roll,s.age,s.cgpa);
                    break;
                }
            }
            fclose(ptr);
        }

        else if(c=='D')
        {
            ptr=fopen("Abhi1.dat","r");
            i=0;
            while(fread(&s,sizeof(struct student),1,ptr))
            {
                printf("\n\nStudent %d :\n",++i);
                printf("\nName = %s \nRoll Number = %d \n\nAge = %d \n\nCGPA = %f \n\n",s.name,s.roll,s.age,s.cgpa);
            }
            while(fread(&s,sizeof(struct student),1,ptr))
            {
                i++;
            }
            printf("\nThe Number of Students in the Database = %d.\n",i);
            fclose(ptr);
        }

        else if(c=='E')
        {
            FILE *ptr1;
            f=0;
            printf("\nDelete Record");
            printf("\n\nEnter The Roll Number You want to Delete: ");
            scanf("%d",&i);
            ptr=fopen("Abhi1.dat","r");
            ptr1=fopen("temp.dat","w");
            rewind(ptr);
            while(fread(&s,sizeof(struct student),1,ptr))
            {
                if (s.roll!=i)
                {
                    fwrite(&s,sizeof(struct student),1,ptr1);
                }
                else
                {
                    f=1;
                }
            }
            fclose(ptr);
            fclose(ptr1);
            remove("Abhi1.dat");
            rename("temp.dat", "Abhi1.dat");
            if(f==1)
            {
                printf("\nRecord Deleted....\n");
            }
            else
            {
                printf("\nNo Record Found....\n");
            }
            ptr=fopen("Abhi1.dat","r");
            i=0;
            while(fread(&s,sizeof(struct student),1,ptr))
            {
                printf("\n\nStudent %d :\n",++i);
                printf("\nName = %s \nRoll Number = %d \n\nAge = %d \n\nCGPA = %f \n\n",s.name,s.roll,s.age,s.cgpa);
            }
            fclose(ptr);
        }
        printf("\nClick 0 to Exit or Any other Key to continue.... : ");
        scanf("%d",&option);
        printf("\n");
    }
}
