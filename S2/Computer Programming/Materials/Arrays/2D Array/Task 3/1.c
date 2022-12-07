#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j=0,cup,rack,f=0;
    printf("\n\n\t\t\t\tWELCOME TO LIBRARY MANAGEMENT SYSTEM\n");
    printf("\n\t\t\t\tRECORD ENTRY : ");
    printf("\n\n\t\t\t\tENTER THE NUMBER OF CUPBOARD IN THE LIBRARY : ");
    scanf("%d",&cup);
    printf("\n\t\t\t\tENTER THE NUMBER OF RACKS IN EACH CUPBOARD : ");
    scanf("%d",&rack);
    char arr[cup][rack][20];
    char book[20];
    fgets(arr[i][j],20,stdin);
    for(i=0;i<cup;i++)
    {
        printf("\n\t\t\t\tCUPBOARD %d : \n",i+1);
        for(j=0;j<rack;j++)
        {
            printf("\n\t\t\t\tENTER THE NAME OF THE BOOK IN THE RACK %d : ",j+1);
            fgets(arr[i][j],20,stdin);
        }
    }
    printf("\n\t\t\t\tSYSTEM UPDATED");
    printf("\n\n\t\t\t\tENTER THE NAME OF THE BOOK TO SEARCH IN THE LIBRARY : ");
    fgets(book,20,stdin);
    for(i=0;i<=cup;i++)
    {
        for(j=0;j<=rack;j++)
        {
            if(strcmp(arr[i][j],book)==0)
            {
                if(i==0 && j>rack-1)
                {
                    j=j%2;
                    printf("\n\t\t\t\tTHE BOOK IS FOUND IN THE CUPBOARD %d AND RACK %d.\n\n",i+2,j+1);
                    return 0;
                }
                printf("\n\t\t\t\tTHE BOOK IS FOUND IN THE CUPBOARD %d AND RACK %d.\n\n",i+1,j+1);
                return 0;
            }
        }
    }
    printf("\n\t\t\t\tTHE BOOK IS NOT FOUND.");
    return 0;
}
