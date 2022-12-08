package features;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;

import javax.swing.JFrame;
import javax.swing.JOptionPane;

import sample.*;

public class inventor extends user{
	
	private Connection con = null;
    private Statement st = null; 
    private ResultSet rs = null;
    private PreparedStatement ps = null;
	String job_type;
	String specialization;
	int year_of_experience;
	
	public void add_invention(invention obj,JFrame inventor_frame)
	{
		String id,name,award,year,story;
		id = obj.invention_id;
		name = obj.invention_name;
		award = obj.category;
		year = obj.year_of_invention;
		story = obj.story_behind;
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
		if(id.isEmpty()||name.isEmpty()||year.isEmpty()||story.isEmpty())
		{
			JOptionPane.showMessageDialog(inventor_frame,"SOME FIELDS ARE NOT FILLED");
		}
		else
		{
			PreparedStatement ps1;
			try 
			{
				ps = con.prepareStatement("INSERT INTO INVENTION VALUES(?,?,?,?,?,0);");
				ps.setString(1, id);
				ps.setString(2, name);
				ps.setString(3, award);
				ps.setString(4, year);
				ps.setString(5, story);
				ps.executeUpdate();

				ps1 = con.prepareStatement("INSERT INTO INVENTS VALUES(?,?);");
				ps1.setString(1, login.userid);
				ps1.setString(2, id);
				ps1.executeUpdate();
				JOptionPane.showMessageDialog(inventor_frame,"SUCCESSFULLY ADDED");
			}
			catch (Exception e1) {
				System.err.println(e1.getClass().getName()+": "+e1.getMessage());
				System.exit(0);
			}
		}
	}
	
	public void viewInvention()
	{
		new final_nom();
	}
	
	public void view_result()
	{
		new results();
	}
}
