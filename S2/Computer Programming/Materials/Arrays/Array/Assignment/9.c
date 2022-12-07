#include<stdio.h>

/*Get the input from the User and perform corresponding -
    Push(),Pop(),Top(),Next() Element in the Car Queue.

/* NAME : S.ABHISHEK
ROLL NUMBER : AM.EN.U4CSE19147
BATCH : S2 CSE-B */

int register1(int,int*);
int whonext(int,int*);
int delete1(int,int*);
int display(int,int*);

int main()
{
    int choice,arr[10],pos=-1,add,view,del,dis;
    printf("To continue to the car wash management click 1 or to exit click 2 : ");
    scanf("%d",&choice);
    //Input to run the While Loop to continue the Tasks.
    while(choice!=2)
    {
        printf("\nPress 1 to add a car to wash queue or to skip press 2 : ");
        scanf("%d",&add);//Push() the car to the Queue.
        if(add==1)
        {
            pos+=1;//Initially the position is -1 and when +1 is added it becomes 0.
            register1(pos,arr);//Function to Get input and store it in the queue.
        }
        printf("\nPress 1 to view the next car in the Queue or to skip press 2 : ");
        scanf("%d",&view);//View the next car in the queue.
        if(view==1)
        {
            if(pos>=0)//If the position is greater than or equal to 0 then there is a car in the Queue.
            {
                whonext(pos,arr);//Function to view the Next car in the Queue.
            }
            else
            {
                printf("\nThere is no car to be serviced.");
            }

        }
        printf("\nPress 1 to delete the serviced car from the Queue or to skip press 2 : ");
        scanf("%d",&del);//Pop() the car from the Queue.
        if(del==1)
        {
            delete1(pos,arr);//Function to Pop() the car from the Queue.
            if(pos==0)
            {
                pos=-1;//Position Update.
            }
            else
            {
                pos-=1;//Position Update.
            }
        }
        printf("\nPress 1 to view the cars in the Queue or to skip press 2 : ");
        scanf("%d",&dis);//View the current car.
        if(dis=1)
        {
            display(pos,arr);//Function to display the car in the queue.
        }
        printf("\n");
        printf("To continue to the car wash management click 1 or to exit click 2 : ");
        //Again to continue enter the Correct Choice or Exit.
        scanf("%d",&choice);
    }
    if(choice==0)
    {
        printf("\nYou have Exited the Deck Process.");
    }
    return 0;
}

int register1(int pos,int arr[10])//Function to Get input and store it in the queue.
{
    printf("\nEnter the car number : ");
    scanf("%d",&arr[pos]);
    return arr;
}

int whonext(int pos,int arr[10])//Function to view the Next car in the Queue.
{
    printf("\nThe next car to be serviced is %d ",arr[0]);
    printf("\n");
    return 0;
}

int delete1(int pos,int arr[10])//Pop() the car from the Queue.
{
    int i;
    for(i=0;i<pos;i++)
    {
        arr[i]=arr[i+1];
    }
    return arr;
}

int display(int pos,int arr[10])//Function to display the car in the queue.
{
    int i;
    if(pos==-1)
    {
            printf("\nThere are no cars in the Queue.");
    }
    else
    {
        printf("\nThe cars in the Queue are : ");
        for(i=0;i<=pos;i++)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
