import java.io.*;
class Main
{
	public static void main(String args[]) throws IOExpection
	{
		Yylex lex = new Yylex(new BufferdReader(new InputStreamReader(System.in)));
		Token token = lex.yylex();
		
		while(token.text != null)
		{
			token = lex.yylex();
		}
	}
}

class Token
{
	String text;
	Token(String t)
	{
		text = t;
	}
}
%%
Int = [0-9]

%type Token

%eofval{
	return new Token(null);
%eofval}

%%

\".*\" {System.out.println("string");}
{Int}+ {System.out.println("Integer");}
{Int}+"."+{Int}+ {System.out.println("Float");}
[ \t\n]+ {}
. {}

