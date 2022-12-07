#include<stdio.h> 
int main()
{
    int i, carry = 1;
    char num[8], one[8], two[8];
    printf("Enter the binary number : ");
    scanf("%s",&num);
    for(i = 0; i <= 7; i++)
    {
        if(num[i] == '0')
        {
            one[i] = '1';
        }
        else if(num[i] == '1') 
        {
            one[i] = '0';
        }
    }
    one[8] = '\0';
    printf("\nOnes' complement of binary number %s is %s\n",num, one);
    for(i = 7; i >= 0; i--)
    {
        if(one[i] == '1' && carry == 1)
        {
            two[i] = '0';
        }
        else if(one[i] == '0' && carry == 1)
        {
            two[i] = '1';
            carry = 0;
        }
        else
        {
            two[i] = one[i];
        }
    }
    two[8] = '\0';
    printf("\nTwo's complement of binary number %s is %s\n",num, two);
    return 0;
}

