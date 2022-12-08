package GUI;

import java.lang.String;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;

public class register implements ActionListener {
	private Connection con = null;
    private Statement st = null; 
    private ResultSet rs = null;
    private PreparedStatement ps = null;
	JFrame fr;
	JPanel pr;
   JLabel l1;
   JLabel l2;
   JLabel l3;
   JLabel l4;
   JLabel l5;
   JLabel l6;
   JLabel l7;
   JLabel l8;
   JTextField t1;
   JTextField t2;
   JTextField t3;
   JTextField t4;
   JTextField t5;
   JTextField t6;
   JTextField t7;
   JTextField t8;
   JTextField t9;
   JTextField t10;
   JLabel l9;
   JLabel l10;
   JLabel l11;
   JLabel l12;
   JTextField t11;
   JLabel l13;
   JPasswordField pr1;
   JButton b1;
   JButton b2;
   JComboBox cb1;

    register() {
        fr = new JFrame("REGISTER");
        pr = new JPanel();
        fr.setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);
        l1 = new JLabel("ID");
        l2 = new JLabel("INVENTOR DETAILS");
        l3 = new JLabel("NAME");
        l4 = new JLabel("COUNTRY");
        l5 = new JLabel("EMAIL");
        l6 = new JLabel("GENDER");
        l7 = new JLabel("PHONE NO.");
        l8 = new JLabel("QUALIFICATION");
        t1 = new JTextField(5);
        t2 = new JTextField(5);
        t3 = new JTextField(5);
        t4 = new JTextField(5);
        t5 = new JTextField(5);
        t6 = new JTextField(5);
        t7 = new JTextField(5);
        t8 = new JTextField(5);
        t9 = new JTextField(5);
        t10 = new JTextField(5);
        l9 = new JLabel("JOB TYPE");
        l10 = new JLabel("SPECIALIZATION");
        l11 = new JLabel("YEAR OF EXPERIENCE");
        l12 = new JLabel("ENTER USERNAME");
        t11 = new JTextField(5);
        l13 = new JLabel("ENTER PASSWORD");
        pr1 = new JPasswordField(5);
        b1 = new JButton("REGISTER");
        b2 = new JButton("BACK");
        cb1 = new JComboBox();

        pr.setSize(900,600);
        fr.setSize(900, 600);
        pr.setLayout(null);

        //add components
        pr.add(l1);
        pr.add(l2);
        pr.add(l3);
        pr.add(l4);
        pr.add(l5);
        pr.add(l6);
        pr.add(l7);
        pr.add(l8);
        pr.add(t1);
        pr.add(t2);
        pr.add(t3);
        pr.add(t4);
        pr.add(t5);
        pr.add(t6);
        pr.add(t7);
        pr.add(t8);
        pr.add(cb1);
        pr.add(t9);
        pr.add(t10);
        pr.add(l9);
        pr.add(l10);
        pr.add(l11);
        pr.add(l12);
        pr.add(l13);
        pr.add(t11);
        pr.add(pr1);
        pr.add(b1);
        pr.add(b2);
        fr.add(pr);
        
        l1.setBounds(150, 100, 100, 30);
        l2.setBounds(300, 30, 500, 30);
        l3.setBounds(150, 155, 100, 30);
        l4.setBounds(150, 355, 100, 30);
        l5.setBounds(150, 255, 100, 30);
        l6.setBounds(150, 205, 100, 30);
        l7.setBounds(150, 305, 100, 30);
        l8.setBounds(550, 155, 110, 30);
        t1.setBounds(300, 105, 100, 30);
        t2.setBounds(300, 155, 100, 30);
        t3.setBounds(300, 205, 100, 30);
        t4.setBounds(300, 255, 100, 30);
        t5.setBounds(300, 305, 100, 30);
        t6.setBounds(715, 155, 100, 30);
        t7.setBounds(300, 355, 100, 30);
        t8.setBounds(715, 105, 100, 30);
        cb1.setBounds(715, 105, 100, 30);
        t9.setBounds(715, 205, 100, 30);
        t10.setBounds(715, 255, 100, 30);
        l9.setBounds(550, 105, 150, 30);
        l10.setBounds(550, 205, 120, 30);
        l11.setBounds(550, 255, 160, 30);
        l12.setBounds(550, 305, 132, 30);
        t11.setBounds(715, 305, 100, 30);
        l13.setBounds(550, 355, 129, 25);
        pr1.setBounds(715, 355, 100, 30);
        b1.setBounds(250, 450, 150, 25);
        b1.addActionListener(this);
        b2.setBounds(500, 450, 150, 25);
        b2.addActionListener(this);
        
        
        l2.setFont(new Font("MV BOLI",Font.PLAIN,30));
        cb1.setVisible(false);
        fr.setVisible(true);
        if(login.t==1)
        {
        	l9.setText("AWARD CATEGORY");
        	l2.setText("JURY MEMBER DETAILS");
        	t8.setVisible(false);
        	cb1.setVisible(true);
        }
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
				cb1.addItem(rs.getString(1));
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
    	if(e.getActionCommand()=="REGISTER")
    	{
    		String id,name,gender,email,phone,country,job,cat,qua,spe,year,user,psw;
    		id = t1.getText();
    		name = t2.getText();
    		gender = t3.getText();
    		email = t4.getText();
    		phone = t5.getText();
    		country = t7.getText();
    		job = t8.getText();
    		qua = t6.getText();
    		spe = t9.getText();
    		year = t10.getText();
    		cat = (String) cb1.getSelectedItem();
    		user = t11.getText();
    		psw = pr1.getText();
    		if(login.t==1)
    		{
    			
    			try 
    			{
    				ps = con.prepareStatement("INSERT FROM JURY_MEMBERS VALUES(?,?,?,?,?,?,?,?,?,?;");
    				ps.setString(1, id);
    				ps.setString(2, name);
    				ps.setString(3, gender);
    				ps.setString(4, email);
    				ps.setString(5, phone);
    				ps.setString(6, country);
    				ps.setString(7, cat);
    				ps.setString(8, qua);
    				ps.setString(9, spe);
    				ps.setString(10, year);
    				
    			}
    			catch (Exception e1) {
    		         System.err.println(e1.getClass().getName()+": "+e1.getMessage());
    		         System.exit(0);
    			}
    		
    			
    		}
    		else if(login.t==0)
    		{
    			cat = (String) cb1.getSelectedItem();
    			try 
    			{
    				ps = con.prepareStatement("INSERT FROM INVENTOR VALUES(?,?,?,?,?,?,?,?,?,?;");
    				ps.setString(1, id);
    				ps.setString(2, name);
    				ps.setString(3, gender);
    				ps.setString(4, email);
    				ps.setString(5, phone);
    				ps.setString(6, country);
    				ps.setString(7, job);
    				ps.setString(8, qua);
    				ps.setString(9, spe);
    				ps.setString(10, year);
    				
    			}
    			catch (Exception e1) {
    		         System.err.println(e1.getClass().getName()+": "+e1.getMessage());
    		         System.exit(0);
    			}
    		}
    		PreparedStatement ps1,ps2,ps3;
			try
			{
				ps1 = con.prepareStatement("INSERT INTO LOGIN VALUES(?,?,?,?);");
				ps2 = con.prepareStatement("SELECT PANEL_ID FROM PANEL WHERE AWARD_CATEGORY = ?;");
				ps2.setString(1,cat);
				rs = ps2.executeQuery();
				
				ps1.setString(1, user);
				ps1.setString(2, psw);
				ps1.setString(3, cat);
				ps1.setString(4, id);
				JPasswordField pwd = new JPasswordField(20);
	    		int pass = JOptionPane.showConfirmDialog(fr,pwd,"CONFIRM YOUR PASSWORD",JOptionPane.OK_CANCEL_OPTION);
	    		if(pass==0)
	    		{
	    			if(pwd.getText().equals(pr1.getText()))
	    			{
	    				if(rs.next())
	    				{
	    					String pid = rs.getString(1);
	    					ps3 = con.prepareStatement("INSERT INTO PANEL_JURY VALUES(?,?);");
	    					ps3.setString(1, pid);
	    					ps3.setString(2, id);
	    					ps3.executeUpdate();
	    				}
	    				ps.executeUpdate();
	    				ps1.executeUpdate();
	    				JOptionPane.showMessageDialog(fr, "SUCCESSFULLY CREATED");
	    				t1.setText("");
						t2.setText("");
						t3.setText("");
						t4.setText("");
						t5.setText("");
						t6.setText("");
						t7.setText("");
						t8.setText("");
						t9.setText("");
						t11.setText("");
						pr1.setText("");
						t10.setText("");
	    			
	    			}
	    			if(!(pwd.getText().equals(pr1.getText())))
	    			{
	    				JOptionPane.showMessageDialog(fr, "INCORRECT PASSWORD","INORRECT", JOptionPane.WARNING_MESSAGE);
	    			}
	    			
	    		}
				
			}
			catch (Exception e1) {
		         System.err.println(e1.getClass().getName()+": "+e1.getMessage());
		         System.exit(0);
			}
    		
    	}
    	else if(e.getActionCommand()=="BACK")
    	{
    		if(login.t==1)
    		{
    			fr.setVisible(false);
    			new admin();
    			login.t=0;
    		}
    		else if(login.t==0)
    		{
    			fr.setVisible(false);
    			new login();
    		}
    		
    	}
    }


	public static void main(String[] args) {
		new register();

	}

}

