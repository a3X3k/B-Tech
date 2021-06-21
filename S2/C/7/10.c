#include<stdio.h>

//To Perform a card operation in the deck of card.
//Stack Operation. Push(),Pop(),Whonext(),Top().


int entry(int,int*);
int display(int,int*);
int delete1(int,int*);
int whonext(int,int*);
int main()
{
    int choice,ins,arr[10],pos=-1,dis,del,view;
    printf("Enter 1 to continue card operation or 0 to exit : ");//Getting User's Choice.
    scanf("%d",&choice);
    while(choice!=0)
    {
        printf("\nPress 1 to insert a card or press 2 to skip : ");
        scanf("%d",&ins);
        if(ins==1)
        {
            pos+=1;
            entry(pos,arr);//Function to Insert a Card to the Queue.
        }
        printf("\nPress 1 to display the deck or press 2 to skip : ");
        scanf("%d",&dis);
        if(dis==1)
        {
            display(pos,arr);//View the Card in the Queue.
        }
        printf("\n\nPress 1 to delete the card from the deck or press 2 to skip : ");
        scanf("%d",&del);
        if(del==1)
        {
            delete1(pos,arr);//Delete a Card from the Queue.
            if(pos==0)
            {
                pos=-1;
            }
            else
            {
                pos-=1;
            }
        }
        printf("\nPress 1 to view the next card in the Desk or to skip press 2 : ");
        scanf("%d",&view);
        if(view==1)
        {
            if(pos>=0)
            {
                whonext(pos,arr);//Display Next card in the Deck.
            }
            else
            {
                printf("\nThere is no card in the desk.\n");
            }

        }
        printf("\nEnter 1 to continue card operation or 0 to exit : ");
        scanf("%d",&choice);//Getting User's choice to continue.
    }
    if(choice==0)
    {
        printf("\nYou have Exited the Deck Process.");
    }
    return 0;
}

int entry(int pos,int arr[10])//Function to Insert a Card to the Queue.
{
    int i;
    for(i=0;i<pos;i++)
    {
        arr[i+1]=arr[i];
    }
    printf("\nEnter the card number : ");
    scanf("%d",&arr[0]);

    return arr;
}

int display(int pos,int arr[10])//Display the Current card in the Deck.
{
    int i;
    printf("\nThe cards in the Deck are : ");
    for(i=0;i<=pos;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

int delete1(int pos,int arr[10])//Delete a CArd from the Deck.
{
    int i;
    for(i=0;i<pos;i++)
    {
        arr[i]=arr[i+1];
    }
    return arr;
}

int whonext(int pos,int arr[10])//Display Next card in the Deck.
{
    if(pos>=0)
    {
        printf("\nThe next card in the deck is %d ",arr[0]);
    }
    else
    {
        printf("\nThere is no card to be displayed");
    }
    printf("\n");
    return 0;
}
