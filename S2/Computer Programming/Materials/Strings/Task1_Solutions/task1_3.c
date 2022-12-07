
/*
 * Program to input a string and check if contains only unique characters.
*/ 
#include<stdio.h>
#include<string.h>

void unique(char *);// To check unique characters

int main()
{
	char s[25];
	gets(s);
	unique(s);
	return 0;
}

void unique(char *s)
{
	int i,j,flg=0;
	for(i=0;i<strlen(s);i++)
	{
		for(j=i+1;j<strlen(s);j++)
		{
			if(s[i]==s[j]){flg=1;break;}
		}
		if(flg) break;
	}
	if(flg) printf("\nNO");
	else 	printf("\nYES");
}
