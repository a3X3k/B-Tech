%option noyywrap

%{
	#include <stdlib.h>
  	#include <stdio.h>
%}

digit [0-9]
letter [a-zA-Z]
dot [.]

%%

{digit} {printf("Integer Found : %d\n", atoi(yytext));}
{letter} {printf("Letter Found : %s\n", yytext);}
{dot} {printf("Symbol Found : %s\n", yytext);}

%%

int main()
{
	FILE *f;
	f=fopen("Input.txt","r");
	yyin=f;
	yylex();
	return 1;
}