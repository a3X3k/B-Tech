/*
 *  Program to input a string and swap the adjacent characters of the string. 
*/ 
#include<stdio.h>
#include<string.h>

void swap(char *);// To swap adjacent characters

int main()
{
	char s[25];
	gets(s);
	swap(s);
	return 0;
}

void swap(char *s)
{
	int i;char t;
	if(strlen(s)%2!=0)
		printf("\nNot possible as string length is odd");
	else{
		for(i=0;i<strlen(s);i+=2)
		{
			t=s[i];s[i]=s[i+1];s[i+1]=t;
		}
		puts(s);
	}
}

