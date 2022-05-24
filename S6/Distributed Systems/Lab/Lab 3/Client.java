import java.rmi.*;  

public class Client
{  
	public static void main(String args[]) throws Exception
	{  	  
		AddI obj = (AddI) Naming.lookup("CALC");
		System.out.println("This is S Abhishek (AM.EN.U4CSE19147)");
		System.out.println("Addition of 5 and 4 is : " + obj.add(5, 4));
		System.out.println("Subtraction of 5 and 4 is : " + obj.sub(5, 4));
		System.out.println("Multiplication of 5 and 4 is : " + obj.mul(5, 4));
		System.out.println("Division of 5 and 4 is : " + obj.div(5, 4));
	}  
}  