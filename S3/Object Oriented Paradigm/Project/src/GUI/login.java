package GUI;
import java.awt.*;
import javax.swing.*;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.sql.PreparedStatement;


import java.awt.event.*;

public class login implements ActionListener{
	private Connection con = null;
    private Statement st = null; 
    private ResultSet rs = null;
    private PreparedStatement ps = null;
	JFrame fl;
	JPanel pl;
	JLabel ll1;
	JRadioButton rl1;
	JRadioButton rl2;
	JLabel ll2;
	JRadioButton rl3;
	JLabel ll3;
	JTextField tl1;
	JPasswordField pl1;
	JLabel ll4;
	JButton bl1;
	ButtonGroup bgl;
	public static String userid;
	public static int t;
	login() 
	{
		t=0;
		fl = new JFrame("LOGIN PAGE");
		pl = new JPanel();
		
		fl.setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);
		ll2 = new JLabel("LOGIN AS");
	    rl1 = new JRadioButton("ADMIN",true);
	    rl2 = new JRadioButton("INVENTOR");
	    ll1 = new JLabel("LOGIN PAGE");
	    rl3 = new JRadioButton("JURY");
	    ll3 = new JLabel("USERNAME");
	    tl1 = new JTextField(10);
	    pl1 = new JPasswordField(10);
	    ll4 = new JLabel("PASSWORD");
	    bl1 = new JButton("LOGIN");
	    bgl = new ButtonGroup();
	    bl1.addActionListener(this);
	    rl2.addActionListener(this);

	    bgl.add(rl1);bgl.add(rl2);bgl.add(rl3);
	    pl.add(ll2);
	    pl.add(rl1);
	    pl.add(rl2);
	    pl.add(ll1);
	    pl.add(rl3);
	    pl.add(ll3);
	    pl.add(tl1);
	    pl.add(pl1);
	    pl.add(ll4);
	    pl.add(bl1);

	    ll2.setBounds(150, 160, 100, 30);
	    rl1.setBounds(300, 160, 100, 30);
	    rl2.setBounds(600, 160, 100, 30);
	    ll1.setBounds(380, 35, 105, 35);
	    rl3.setBounds(450, 160, 100, 30);
	    ll3.setBounds(275, 290, 100, 25);
	    tl1.setBounds(460, 290, 100, 25);
	    pl1.setBounds(460, 365, 100, 25);
	    ll4.setBounds(275, 365, 100, 25);
	    bl1.setBounds(360, 470, 100, 25);
	    
	    pl.setSize(900, 600);
	    pl.setLayout(null);
	    fl.setSize(900, 600);
	    fl.add(pl);
	    fl.setLayout(null);
	    fl.setVisible(true);
	    
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
	}
	
	public void actionPerformed(ActionEvent e){  
		if(e.getActionCommand()=="LOGIN")
		{
			String name = tl1.getText();
			String pass = pl1.getText();
			try 
			{
				ps = con.prepareStatement("SELECT * FROM LOGIN WHERE USERNAME = ? AND PASSWORD = ? AND CATEGORY = ? ;");
				ps.setString(1, name);
				ps.setString(2, pass);
				if(rl1.isSelected())
				{    
					ps.setString(3, rl1.getLabel());
					rs = ps.executeQuery();
					if(rs.next())
					{
						String user = rs.getString(1);
						String p = rs.getString(2);
						userid = rs.getString(4);
						if(user.equals(name)&&p.equals(pass))
						{
							tl1.setText("");
							pl1.setText("");
							fl.setVisible(false);
							new admin();
							
						}
					}
					else
					{
						JOptionPane.showMessageDialog(fl, "INCORRECT USERNAME OR PASSWORD","ERROR", JOptionPane.WARNING_MESSAGE);

					}
					
				}   
				else if(rl2.isSelected())
				{   
					ps.setString(3, rl2.getLabel());
					rs = ps.executeQuery();
					if(rs.next())
					{
						String user = rs.getString(1);
						String p = rs.getString(2);
						userid = rs.getString(4);
						if(user.equals(name)&&p.equals(pass))
						{
							tl1.setText("");
							pl1.setText("");
							fl.setVisible(false);  
							new inventor();
						}
					}
					else
					{
						JOptionPane.showMessageDialog(fl, "INCORRECT USERNAME OR PASSWORD","ERROR", JOptionPane.WARNING_MESSAGE);

					}
					
				} 
				else if(rl3.isSelected())
				{    
					ps.setString(3, rl3.getLabel());
					rs = ps.executeQuery();
					if(rs.next())
					{
						String user = rs.getString(1);
						String p = rs.getString(2);
						userid = rs.getString(4);
						if(user.equals(name)&&p.equals(pass))
						{
							tl1.setText("");
							pl1.setText("");
							fl.setVisible(false);  
							new jury();
						}
					}
					else
					{
						JOptionPane.showMessageDialog(fl, "INCORRECT USERNAME OR PASSWORD","ERROR", JOptionPane.WARNING_MESSAGE);

					}
				}
			}
			catch (Exception e1) 
			{
		         e1.printStackTrace();
		         System.err.println(e1.getClass().getName()+": "+e1.getMessage());
		         System.exit(0);
			}
			 
		}
		else if(e.getActionCommand()=="INVENTOR")
		{
			int result = JOptionPane.showConfirmDialog(fl, "ARE YOU AN EXTSTING USER?","INVENTOR",JOptionPane.YES_NO_OPTION);
			if(result == JOptionPane.NO_OPTION)
			{
				fl.setVisible(false);
				new register();
			}
		}
	}


	public static void main(String[] args) {
	        new login();
	        
	    }
	}



