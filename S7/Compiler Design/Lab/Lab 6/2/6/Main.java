import java.io.*; 

public class Main 
{ 	
	public static void main(String[] args)throws Exception 
	{ 
		parser p = new parser(new Yylex(new FileReader("Input.txt"))); 		
					
		p.parse(); 
	} 
}
