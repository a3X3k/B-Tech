package GUI;

import java.awt.Color;
import java.awt.event.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;

import javax.swing.*;

public class inventor implements ActionListener {
		private Connection con = null;
		private Statement st = null; 
		private ResultSet rs = null;
		private PreparedStatement ps = null;
		JFrame fi;
		JPanel pi;
		JLabel l1;
		JLabel l2;
		JLabel l3;
		JLabel l4;
		JLabel l5;
		JLabel l6;
		JTextField t1;
		JTextField t2;
		JComboBox t3;
		JTextField t4;
		JTextArea t5;
		JButton b1;
		JButton b2;
		JButton b3;
		JButton b4;
		JButton b5;
		JButton b6;
		inventor(){
			fi = new JFrame("INVENTOR");
			pi = new JPanel();
			fi.setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);
			
			l1 = new JLabel("INVENTION ID");
			l2 = new JLabel("INVENTION NAME");
			l3 = new JLabel("CATEGORY");
			l4 = new JLabel("YEAR OF INVENTION");
			l5 = new JLabel("STORY BEHIND");
			l6 = new JLabel("INVENTION DETAILS");
			t1 = new JTextField(10);
			t2 = new JTextField(10);
			t3 = new JComboBox();
			t4 = new JTextField(10);
			t5 = new JTextArea(10,10);
			b1 = new JButton("ADD INVENTION");
			b2 = new JButton("VIEW INVENTIONS");
			b3 = new JButton("VIEW AWARDS");
			b4 = new JButton("VIEW NOMINATIONS");
			b5 = new JButton("VIEW RESULT");
			b6 = new JButton("LOGOUT");
			
			pi.add(l1);
	        pi.add(l2);
	        pi.add(l3);
	        pi.add(l4);
	        pi.add(l5);
	        pi.add(t1);
	        pi.add(t2);
	        pi.add(t3);
	        pi.add(t4);
	        pi.add(t5);
	        pi.add(b1);
	        pi.add(b2);
	        pi.add(l6);
	        fi.add(pi);
	        pi.add(b3);
	        pi.add(b4);
	        pi.add(b5);
	        pi.add(b6);
	       
	        
	        l6.setBounds(200, 50, 150, 30);
	        l1.setBounds(100, 100, 100, 30);
	        l2.setBounds(100, 150, 150, 30);
	        l3.setBounds(100, 200, 150, 30);
	        l4.setBounds(100, 250, 150, 30);
	        l5.setBounds(100, 300, 100, 30);
	        t1.setBounds(300, 100, 100, 30);
	        t2.setBounds(300, 150, 100, 30);
	        t3.setBounds(300, 200, 100, 30);
	        t4.setBounds(300, 250, 100, 30);
	        t5.setBounds(300, 300, 200, 50);
	        b1.setBounds(75, 380, 150, 30);
	        b2.setBounds(275, 380, 150, 30);
	        
	        b1.setBounds(100, 450, 200, 30);
		    b2.setBounds(350, 450, 200, 30);
		    b3.setBounds(600, 450, 200, 30);
		    b4.setBounds(100, 500, 200, 30);
		    b5.setBounds(350, 500, 200, 30);
		    b6.setBounds(600, 500, 200, 30);

	        pi.setLayout(null);
	        pi.setSize(900,600);
	        fi.setSize(900,600);
	        fi.setLayout(null);
	        fi.setVisible(true);
	        b1.addActionListener(this);
	        b6.addActionListener(this);
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
				st = con.createStatement();
				String query = "SELECT AWARD_CATEGORY FROM AWARDS;";
				rs = st.executeQuery(query);
				while(rs.next())
				{
					t3.addItem(rs.getString(1));
				}
				
			}
			catch (Exception e) {
		         e.printStackTrace();
		         System.err.println(e.getClass().getName()+": "+e.getMessage());
		         System.exit(0);
			}
		}
		
		public void actionPerformed(ActionEvent e)
	    { 
	    	if(e.getSource()==b1)
	    	{
	    		String id,name,award,year,story;
	    		id = t1.getText();
	    		name = t2.getText();
	    		award = (String)t3.getSelectedItem();
	    		year = t4.getText();
	    		story = t5.getText();
	    		if(id.isEmpty()||name.isEmpty()||year.isEmpty()||story.isEmpty())
	    		{
	    			JOptionPane.showMessageDialog(fi,"SOME FIELDS ARE NOT FILLED");
	    		}
	    		else
	    		{
	    			PreparedStatement ps1;
	    			try 
	    			{
	    				ps = con.prepareStatement("INSERT FROM INVENTION VALUES(?,?,?,?,?;");
	    				ps.setString(1, id);
	    				ps.setString(2, name);
	    				ps.setString(3, award);
	    				ps.setString(4, year);
	    				ps.setString(5, story);
	    				ps.executeUpdate();
	    				t1.setText("");
	    				t2.setText("");
	    				t4.setText("");
	    				t5.setText("");
	    				ps1 = con.prepareStatement("INSERT FROM INVENTS VALUES(?,?;");
	    				ps1.setString(1, login.userid);
	    				ps1.setString(2, id);
	    				ps1.executeUpdate();
	    				JOptionPane.showMessageDialog(fi,"SUCCESSFULLY ADDED");
	    			}
	    			catch (Exception e1) {
	    				System.err.println(e1.getClass().getName()+": "+e1.getMessage());
	    				System.exit(0);
	    			}
	    		}
	    	}
	    	else if(e.getSource()==b6)
	    	{
	    		JOptionPane.showMessageDialog(fi, "SUCCESSFULLY LOGOUT");
	    		new login();
	    		fi.setVisible(false);
	    	}
	    }
		
		public static void main(String[] args) {
			new inventor();

		}

	}


