#include<stdio.h>
#include<string.h>
int len(char*);
int cpy(char*,char*);
int cpyn(char*,char*);
int cat1(char*,char*);
int catn1(char*,char*);
int low(char*);
int upper(char*);
int cmp(char*,char*);
int cmpi(char*,char*);
int main()
{
    char a[]="Amrita Vishwa Vidyapeetham";
    /*To find the length of the string : strlen()*/
    printf("The Length of the string is : %d",len(a));

    /*To copy one string to another : strcpy()*/
    char a1[10],a2[10]="Kollam";
    printf("\nThe copied string is %s",cpy(a1,a2));

    /*To copy n number of characters to another string : strncpy()*/
    char a11[10],a22[10]="Kollam";
    printf("\nThe copied string is %s",cpyn(a11,a22));

    /*To concatenate two strings : strcat()*/
    char b1[]="Amrita ",b2[]="Kollam";
    printf("\nThe concatenated string is %s",cat1(b1,b2));

    /*To concatenate only n number of characters : strncat()*/
    char b11[]="Amrita ",b22[]="Kollam";
    printf("\nThe concatenated string is %s",catn1(b11,b22));

    /*To make the string to Lower Case : strlwr*/
    char c1[]="AMRITA";
    printf("\nThe Lower case string is %s",low(c1));

    /*To make the string to Upper Case : strlwr*/
    char c2[]="amrita";
    printf("\nThe Upper case string is %s",upper(c2));

    /*To compare two strings : strcmp()*/
    char e1[]="Amrita",e2[]="amrita";
    printf("\nThe compared string result is %d",cmp(e1,e2));

    /*To compare two strings ignoring lower and upper case: strcmpi()*/
    char f1[]="amrita",f2[]="amritA";
    printf("\nThe compared string result is %d",cmpi(f1,f2));

    /*To find the 1st Occurance of the character in a string*/
    char d1[]="amrita",d2='a';
    printf("\nThe First occurance of the character is %d",strchr(d1,d2));

    /*To find the last Occurance of the character in a string*/
    char g1[]="amrita",g2='a';
    printf("\nThe last occurance of the character is %d",strrchr(g1,g2));

    /*To find the 1st Occurance of the string in a string*/
    char h1[]="The amritam is in amritapuri",h2[]="amrita";
    printf("\nThe first occurance of the string is %s",strstr(h1,h2));

    /*To find the reverse of the string*/
    char h11[]="Amrita";
    printf("\nThe reverse of the string is %s",strrev(h11));

    /*To find the duplicate of the string*/
    char *i1="Amrita";
    char *i2;
    i2=strdup(i1);
    printf("\nThe duplicate of the string is %s",i2);

    /*To set all characters in a string to the particular string*/
    char j1[]="Amrita";
    printf("\nThe string after setting it to a particular character is %s",strset(j1,'a'));

    /*To set n characters in a string to the particular string*/
    char j11[]="Amrita";
    printf("\nThe string after setting it to a particular character is %s",strnset(j11,'a',3));

    /*To return the token*/
    char k[] = "Amrita-Vishwa-Vidyapeetham";
    // Returns first token
    char* token = strtok(k, "-");
    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL) {
        printf("\n%s", token);
        token = strtok(NULL, "-");
    }

    return 0;
}

int len(char *a)
{
    return strlen(a);
}

int cpy(char *a1,char *a2)
{
    return strcpy(a1,a2);
}

int cpyn(char *a1,char *a2)
{
    return strncpy(a1,a2,4);
}

int cat1(char *b1,char *b2)
{
    return strcat(b1,b2);
}

int catn1(char *b1,char *b2)
{
    return strncat(b1,b2,4);
}

int low(char *c1)
{
    return strlwr(c1);
}

int upper(char *c2)
{
    return strupr(c2);
}

int cmp(char *b1,char *b2)
{
    return strcmp(b1,b2);
}

int cmpi(char *b1,char *b2)
{
    return strcmpi(b1,b2);
}
