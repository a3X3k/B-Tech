%option noyywrap 

%{ 
    #include<stdio.h> 
%}

Tag <[^>]*>

%%

{Tag} printf("%s", yytext);

\n printf("\n");

. "";

%% 

int main() 
{ 
    FILE * f; 
    f=fopen("1.html","r"); 
    yyin=f; 
    yylex();
    return 0; 
}
