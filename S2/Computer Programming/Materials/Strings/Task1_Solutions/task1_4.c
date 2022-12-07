
/*
 * Program to input a binary string contains binary numbers only. 
 * Convert it to an encoding such that the encoding has counts of 
 * contiguous 1s (separated by 0s). 
*/ 
#include<stdio.h>
#include<string.h>

void encode(char *);

int main()
{
	char s[25];
	gets(s);
	encode(s);
	return 0;
}

void encode(char *s)
{
	int i,cnt=0;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]=='0'){if(cnt){printf("%d ",cnt);}cnt=0;continue;}
		cnt++;
	}
	if(s[i-1]=='1' && cnt>0)printf("%d ",cnt);
}

