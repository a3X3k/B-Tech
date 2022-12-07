
%option noyywrap

%{
	#include <stdlib.h>
  	#include <stdio.h>
%}
number [0-9]+
op [+|_|*|%]
word [a-z][a-z 0-9]*
%%
{number} {printf("number");}
{op} {printf("operator");}
{word} {printf("word");}
%%
int main()
{
	yylex();
	return 1;
}
