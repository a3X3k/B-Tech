%option noyywrap

%{
	#include <stdlib.h>
	#include <stdio.h>
%}

number [0-9]+
op [+|_|*|%]
word [a-z][a-z0-9]*

%%

{number} {printf("Number ");}
{op} {printf("Operator ");} 
{word} {printf("Word ");}

%%

 int main()
{
	yylex();
	return 1;
}
