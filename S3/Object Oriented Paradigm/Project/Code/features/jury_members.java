package features;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;

import javax.swing.JOptionPane;

public class jury_members extends user 
{
	String category;
	String year_of_experience;
	
	private Connection con = null;
	private Statement st = null; 
	private ResultSet rs = null;
	private PreparedStatement ps = null;
	
	public void addmarks(double marks,String invention_id)
	{
		try 
    	{
    		Class.forName("org.postgresql.Driver");
    		con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/OOPS", "postgres", "1");
    	}
    	catch (Exception e)
    	{
    		System.err.println(e.getClass().getName()+": "+e.getMessage());
    		System.exit(0);
    	}
		try 
		{
			ps = con.prepareStatement("UPDATE INVENTION SET MARKS = MARKS+? WHERE INVENTION_ID = ? ;");
			ps.setDouble(1, marks);
			ps.setString(2, invention_id);
			ps.executeUpdate();
		}
		catch (Exception e1)
		{
			System.err.println(e1.getClass().getName()+": "+e1.getMessage());
			System.exit(0);
		}
	}
}
