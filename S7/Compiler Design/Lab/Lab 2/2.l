%option noyywrap

%{
	#include <stdlib.h>
	#include <stdio.h>
%}

%%

[\n] {printf("\n\nEnter the Input : ");}

auto|double|int|struct|break|else|long|switch|case|enum|register|typedef|char|extern|return|union|continue|for|signed|void|do|if|static|while|default|goto|sizeof|volatile|const|float|short {printf("Keyword ");}

[+-/*%=] {printf("Operator ");}

[,;!~$&>@.:\?^<(){}#] {printf("Symbol ");}

%%

int main()
{
	yylex();
	return 1;
}

