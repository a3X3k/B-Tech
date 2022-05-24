import java.rmi.*;  
import java.rmi.registry.*;  

public class Server
{  
	public static void main(String args[])
	{  
		try
		{  
			AddC obj = new AddC();  
			Naming.rebind("CALC", obj);  
			System.out.println("Server Started");
		}
		
		catch(Exception e)
		{
			System.out.println(e);
		}  
	}  
}  