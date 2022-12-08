package demoDB;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class Establish_Connection {

	public static void main(String[] args) {
		
		Connection c = null;
		Statement stmt = null;
		
	      try {
	    	  
	    	//Load Postgre SQL Driver
	         Class.forName("org.postgresql.Driver");
	         
	         //Establish connnection with DB
	         c = DriverManager.getConnection("jdbc:postgresql://localhost:5432/example", "postgres", "1");
	      }
	      catch (Exception e) {
	    	  
	    //It is a method of Java’s throwable class.
	    //It prints the throwable along with line number and class name where the exception occurred.
		         e.printStackTrace();
		         
		         System.err.println(e.getClass().getName()+": "+e.getMessage());
		         System.exit(0);
		      }
		      System.out.println("Opened database successfully");
	}
}

