package demoDB;

import java.util.Scanner;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class ebookshop {

	public static void main(String[] args) {
		
		Connection c = null;
		Statement stmt = null;
		
		try {
	         Class.forName("org.postgresql.Driver"); 
	         c = DriverManager.getConnection("jdbc:postgresql://localhost:5432/ebookshop", "postgres", "1");
	         
	         stmt = c.createStatement();
	         String sql = "CREATE TABLE BOOKS (ID INT PRIMARY KEY NOT NULL,TITLE VARCHAR(50) NOT NULL,AUTHOR VARCHAR(50) NOT NULL,PRICE FLOAT,QUANTITY INT)";
	         stmt.executeUpdate(sql);
	         
	         c.setAutoCommit(false);

	         stmt = c.createStatement();
	         sql = "INSERT INTO BOOKS VALUES (1001, 'Java for Dummies','Tan Ah Teck', 11.11, 11);";
	         stmt.executeUpdate(sql);
	         
	         sql = "INSERT INTO BOOKS VALUES (1002, 'More Java for Dummies','Tan Ah Teck', 22.22, 22);";
	         stmt.executeUpdate(sql);
	         
	         sql = "INSERT INTO BOOKS VALUES (1003, 'More Java for More Dummies','Mohammad Ali',33.33, 33);";
	         stmt.executeUpdate(sql);
	         
	         sql = "INSERT INTO BOOKS VALUES (1004, 'A Cup of Java','Kumar',44.44, 44);";
	         stmt.executeUpdate(sql);
	         
	         sql = "INSERT INTO BOOKS VALUES (1005, 'A Teaspoon of Java','Kevin Jones', 55.55, 55);";
	         stmt.executeUpdate(sql);
	         
	         c.commit();
	      
	      } catch (Exception e) {
	         e.printStackTrace();
	         System.err.println(e.getClass().getName()+": "+e.getMessage());
	         System.exit(0);
	      }
		
		while(true)
		{
			System.out.println("\n\n\t\t\tMENU");
			System.out.println("\n\t\t1 - Display the Records");
			System.out.println("\t\t2 - Update the Records");
			System.out.println("\t\t3 - Search the Records");
			System.out.println("\t\t4 - Delete the Records");
			System.out.println("\t\t5 - Insert the Records");
			System.out.println("\t\t6 - Exit");
			
			System.out.print("\n\tEnter the Option to Proceed : ");
			
			Scanner scan = new Scanner(System.in);
			
			int option = scan.nextInt();
			
			if(option==1)
			{
				try {
					ResultSet rs = stmt.executeQuery( "SELECT * FROM BOOKS;" );
			         while ( rs.next() ) {
			        	int id = rs.getInt("id");
				         String  title = rs.getString("title");
				         String author  = rs.getString("author");
				         float price = rs.getFloat("price");
				         int quantity = rs.getInt("quantity");
			            System.out.println( "ID = " + id );
			            System.out.println( "TITLE = " + title );
			            System.out.println( "AUTHOR = " + author );
			            System.out.println( "PRICE = " + price );
			            System.out.println( "QUANTITY = " + quantity );
			            System.out.println();
			         }
			         rs.close();
				}catch (Exception e) {
			         e.printStackTrace();
			         System.err.println(e.getClass().getName()+": "+e.getMessage());
			         System.exit(0);
			      }
			}
			
			if(option==2)
			{
				try {
					
					System.out.print("\nEnter the ID : ");
					int id1 = scan.nextInt();
					
					System.out.print("\nEnter the Price : ");
					float price1 = scan.nextFloat();
					
					String sql = "UPDATE BOOKS SET PRICE = "+price1+"WHERE ID="+id1+";";
			        stmt.executeUpdate(sql);
			        c.commit();
				}catch (Exception e) {
			         e.printStackTrace();
			         System.err.println(e.getClass().getName()+": "+e.getMessage());
			         System.exit(0);
			      }
			}
			if(option==3)
			{
				try {
					
					System.out.print("\nEnter the Minimum Price : ");
					float p1 = scan.nextFloat();
					
					System.out.print("\nEnter the Maximum Price : ");
					float p2 = scan.nextFloat();
					
					ResultSet rs = stmt.executeQuery( "SELECT * FROM BOOKS;" );
			         while ( rs.next() ) {
			            int id = rs.getInt("id");
			            String  title = rs.getString("title");
			            String author  = rs.getString("author");
			            float price = rs.getFloat("price");
			            int quantity = rs.getInt("quantity");
			            
			            if(price>p1 && price<p2)
			            {
			            	System.out.println( "ID = " + id );
				            System.out.println( "TITLE = " + title );
				            System.out.println( "AUTHOR = " + author );
				            System.out.println( "PRICE = " + price );
				            System.out.println( "QUANTITY = " + quantity );
				            System.out.println();
			            }
			         }
			         rs.close();
				}catch (Exception e) {
			         e.printStackTrace();
			         System.err.println(e.getClass().getName()+": "+e.getMessage());
			         System.exit(0);
			      }
			} 
			else if(option==4)
			{
				try {
				System.out.print("\nEnter the ID to Delete the Details of the Book : ");
				int id = scan.nextInt();
				String sql = "DELETE from BOOKS where ID ="+id+";";
		         stmt.executeUpdate(sql);
		         c.commit();
			}catch (Exception e) {
		         e.printStackTrace();
		         System.err.println(e.getClass().getName()+": "+e.getMessage());
		         System.exit(0);
		      }
			
			}
			else if(option==5)
			{
				
				try {
				System.out.print("\nEnter the ID : ");
				int id = scan.nextInt();
				
				System.out.print("\nEnter the TITLE : ");
				String title = scan.nextLine();
				title = scan.nextLine();
				
				System.out.print("\nEnter the AUTHOR : ");
				String author = scan.nextLine();
				
				System.out.print("\nEnter the PRICE : ");
				float price = scan.nextFloat();
				
				System.out.print("\nEnter the QUANTITY : ");
				int quantity = scan.nextInt();
				
				 String sql = "INSERT INTO BOOKS VALUES("+id+","+title+","+author+","+price+","+quantity+");";
		         stmt.executeUpdate(sql);
		         
		         c.commit();
		         
			}catch (Exception e) {
		         e.printStackTrace();
		         System.err.println(e.getClass().getName()+": "+e.getMessage());
		         System.exit(0);
		      }
			}
			
			else if(option==6)
			{
				System.out.print("\nEXITED");
				break;
			}
		}
		
	}

}
