package demoDB;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class Select_Query {

	public static void main(String[] args) {
		
		Connection c = null;
		Statement stmt = null;
	      try {
	         Class.forName("org.postgresql.Driver");
	         c = DriverManager.getConnection("jdbc:postgresql://localhost:5432/example", "postgres", "1");
	         
	         c.setAutoCommit(false);
	         System.out.println("Opened database successfully");

	         stmt = c.createStatement();
	         String sql = "DELETE from COMPANY where ID = 2;";
	         stmt.executeUpdate(sql);
	         c.commit();

	         ResultSet rs = stmt.executeQuery( "SELECT * FROM COMPANY;" );
	         while ( rs.next() ) {
	            int id = rs.getInt("id");
	            String  name = rs.getString("name");
	            int age  = rs.getInt("age");
	            String  address = rs.getString("address");
	            float salary = rs.getFloat("salary");
	            System.out.println( "ID = " + id );
	            System.out.println( "NAME = " + name );
	            System.out.println( "AGE = " + age );
	            System.out.println( "ADDRESS = " + address );
	            System.out.println( "SALARY = " + salary );
	            System.out.println();
	         }
	         rs.close();
	         stmt.close();
	         c.close();
	      
	      } catch (Exception e) {
	         e.printStackTrace();
	         System.err.println(e.getClass().getName()+": "+e.getMessage());
	         System.exit(0);
	      }
	      System.out.println("Delete Operation Done successfully");
		
	}
}

