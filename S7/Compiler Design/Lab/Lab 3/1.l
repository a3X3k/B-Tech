%option noyywrap

%{
	#include <stdlib.h>
  	#include <stdio.h>
%}

String ["](.)+["]

Number [0-9]+

Identifier [a-z]([a-z]|[0-9])*

%%

"#include<stdio.h>" printf("<INCLUDE, %s>",  yytext);
"(" printf("<LBRACKET>");
")" printf("<RBRACKET>");
"++" printf("<INC>"); 
"=" printf("<ASSIGN>");
";" printf("<SEMI>");
"<=" printf("<LE>");
"{" printf("<LPAREN>");
"}" printf("<RPAREN>");
"*" printf("<MULT>");
"," printf("<COMMA>");
"int" printf("<INT>");
"for" printf("<FOR>");

{Identifier} printf("<ID,%s>", yytext); 

{Number} printf("<NUM,%s>", yytext);

{String} printf("<STRING>");



%%

int main()
{
	FILE *f;
	f=fopen("Input.txt","r");
	yyin=f;
	yylex();
	return 1;
}