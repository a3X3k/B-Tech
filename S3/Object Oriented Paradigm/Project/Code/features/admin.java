package features;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;

import javax.swing.JFrame;
import javax.swing.JOptionPane;
import javax.swing.JPasswordField;

import sample.login;

public class admin extends user{
	
		private Connection con = null;
		private Statement st = null; 
    	private ResultSet rs = null;
    	private PreparedStatement ps = null;
    	private PreparedStatement ps1 = null;
    	private PreparedStatement ps2 = null;
    	
		public void add_awards(award obj)
		{
			String id,name,category,sponsor,amount;
			id = obj.award_id;
			name = obj.award_name;
			category = obj.award_category;
			amount = obj.reward_amount;
			sponsor = obj.sponsored_by;
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
				ps = con.prepareStatement("INSERT INTO AWARDS VALUES(?,?,?,?,?);"); 
				ps.setString(1, id);
				ps.setString(2, name);
				ps.setString(3, category);
				ps.setString(4, amount);
				ps.setString(5, sponsor);
				ps.executeUpdate();

			}
			catch (Exception ev) {
		         System.err.println(ev.getClass().getName()+": "+ev.getMessage());
		         System.exit(0);
			}
		}
		
		public void remove_awards(JFrame admin_frame)
		{
			String n = JOptionPane.showInputDialog(admin_frame,"ENTER AWARD ID OR AWARD NAME");
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
			if(n!=null)
			{
				try 
				{
					ps = con.prepareStatement("DELETE FROM AWARDS WHERE AWARD_ID = ? OR AWARD_NAME = ?;");
					ps.setString(1, n);
					ps.setString(2, n);
					ps.executeUpdate();
			    	JOptionPane.showMessageDialog(admin_frame,"SUCCESSFULLY DELETED");
				}
				catch (Exception e1) {
			         System.err.println(e1.getClass().getName()+": "+e1.getMessage());
			         System.exit(0);
				}
			}
		}
	
		public void remove_jury_members(JFrame admin_frame)
		{
			String n = JOptionPane.showInputDialog(admin_frame,"ENTER JURY MEMBER ID ");
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
			if(n!=null)
			{
				try 
				{
					ps1 = con.prepareStatement("DELETE FROM PANEL_JURY WHERE JURY_ID = ? ;");
					ps2 = con.prepareStatement("DELETE FROM LOGIN WHERE ID = ? ;");
					ps = con.prepareStatement("DELETE FROM JURY_MEMBERS WHERE JURY_ID = ? ;");
					ps.setString(1, n);
					ps1.setString(1, n);
					ps2.setString(1, n);
					ps1.executeUpdate();
					ps2.executeUpdate();
					ps.executeUpdate();
			    	JOptionPane.showMessageDialog(admin_frame,"SUCCESSFULLY DELETED");
				}
				catch (Exception e1) {
			         System.err.println(e1.getClass().getName()+": "+e1.getMessage());
			         System.exit(0);
				}
			}
			
		}
		
		public void add_panel(panel obj,JFrame admin_frame)
		{
			String pid,pname,pcategory;
			pid = obj.panel_id;
			pname = obj.panel_name;
			pcategory = obj.award_category;
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
				ps = con.prepareStatement("INSERT INTO PANEL VALUES(?,?,?);");
				ps.setString(1, pid);
				ps.setString(2, pname);
				ps.setString(3, pcategory);
				ps.executeUpdate();
				JOptionPane.showMessageDialog(admin_frame,"SUCCESSFULLY ADDED");

			}
			catch (Exception ev) {
		         System.err.println(ev.getClass().getName()+": "+ev.getMessage());
		         System.exit(0);
			}
		}
		
		public void declare_final_nominations(JFrame admin_frame)
		{
			JOptionPane.showMessageDialog(admin_frame,"FINAL NOMINATION HAVE BEEN DECLARED");
		}
		
		public void declare_result(JFrame admin_frame)
		{
			JOptionPane.showMessageDialog(admin_frame,"RESULTS HAVE BEEN DECLARED");
		}
}
