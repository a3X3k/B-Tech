#include<stdio.h>
int main()
{
	char c;
	int vow=0,cons=0;
	while((c=getchar())!=EOF)
	{
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
		{
			vow+=1;
		}
		else if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u')
		{
			cons+=1;
		}
	}
	printf("There are %d vowels and %d consonants.",vow,cons);
	return 0;
}
		
