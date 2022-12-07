#include<stdio.h>
int main()
{
    char a;
    printf("Enter the character : ");
    scanf("%c",&a);
    switch(a)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':printf("\nIts a vowel");
                    break;
        default : printf("\nIts not a vowel.");
                    break;
    }
    return 0;
}
