package GUI;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;

import javax.swing.*;

public class jury implements ActionListener{
	private Connection con = null;
    private Statement st = null; 
    private ResultSet rs = null;
    private PreparedStatement ps = null;
	JFrame fj;
	JPanel pj;
	JLabel l1;
	JLabel l2;
	JLabel l3;
	JLabel l4;
	JLabel l5;
	JLabel l6;
	JComboBox cb1;
	JTextField t2;
	JTextField t3;
	JTextField t4;
	JButton b1;
	JButton b2;
	JButton b3;
	JButton b4;
	JButton b5;
	JButton b6;
	JSpinner s;
	JLabel l7;
	JLabel l8;
	
	
	jury(){
		fj = new JFrame("JURY");
		pj = new JPanel();
		fj.setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);
		
		l1 = new JLabel("INVENTION ID");
		l2 = new JLabel("INVENTION NAME");
		l3 = new JLabel("CATEGORY");
		l4 = new JLabel("AWARD MARKS");
		l5 = new JLabel("INVENTOR NAME");
		l7 = new JLabel("JURY MEMBER NAME  :  ");
		l8 = new JLabel("PANEL NAME  :  ");
		cb1 = new JComboBox();
		t2 = new JTextField(10);
		t3 = new JTextField(10);
		t4 = new JTextField(10);
		b1 = new JButton("ADD MARKS");
		b2 = new JButton("VIEW INVENTIONS");
		b3 = new JButton("VIEW AWARDS");
		b4 = new JButton("VIEW NOMINATIONS");
		b5 = new JButton("VIEW RESULT");
		b6 = new JButton("LOGOUT");
		s = new JSpinner(new SpinnerNumberModel(0, 0, 10, 0.5));
		
		pj.add(l1);
        pj.add(l2);
        pj.add(l3);
        pj.add(l4);
        pj.add(cb1);
        pj.add(t2);
        pj.add(t3);
        pj.add(s);
        pj.add(b1);
        pj.add(b2);
        fj.add(pj);
        pj.add(b3);
        pj.add(b4);
        pj.add(b5);
        pj.add(b6);
        pj.add(l7);
        pj.add(l8);
        pj.add(l5);
        pj.add(t4);
       
        
        l1.setBounds(100, 150, 100, 30);
        l2.setBounds(100, 200, 150, 30);
        l3.setBounds(100, 300, 150, 30);
        l4.setBounds(100, 350, 150, 30);
        l5.setBounds(100, 250, 150, 30);
        t4.setBounds(300, 250, 150, 30);
        cb1.setBounds(300, 150, 150, 30);
        t2.setBounds(300, 200, 150, 30);
        t3.setBounds(300, 300, 150, 30);
        s.setBounds(300, 350, 150, 30);
        
        b1.setBounds(100, 450, 200, 30);
	    b2.setBounds(350, 450, 200, 30);
	    b3.setBounds(600, 450, 200, 30);
	    b4.setBounds(100, 500, 200, 30);
	    b5.setBounds(350, 500, 200, 30);
	    b6.setBounds(600, 500, 200, 30);
	    
	    l7.setBounds(350, 30, 200, 30);
        l8.setBounds(400, 60, 200, 30);
        
        t2.setEditable(false);
        t3.setEditable(false);
        t4.setEditable(false);

        pj.setLayout(null);
        pj.setSize(900,600);
        fj.setSize(900,600);
        fj.setLayout(null);
        fj.setVisible(true);
        b1.addActionListener(this);
        b6.addActionListener(this);
        cb1.addActionListener(this);
        
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
        	ps = con.prepareStatement("SELECT INVENTION_ID FROM JURY_MEMBERS NATURAL JOIN INVENTION WHERE JURY_ID = ?;");
			ps.setString(1, login.userid);
			rs = ps.executeQuery();
			while(rs.next())
			{
				cb1.addItem(rs.getString(1));
			}
			
		}
		catch (Exception e) {
	         System.err.println(e.getClass().getName()+": "+e.getMessage());
	         System.exit(0);
		}
        
	}
	public void actionPerformed(ActionEvent e)
    { 
    	if(e.getSource()==b1)
    	{
    		
    		String iid = (String)cb1.getSelectedItem();
    		float mark = (float)s.getValue();
    		try 
			{
    			ps = con.prepareStatement("UPDATE INVENTION SET MARKS = ? WHERE INVENTION_ID = ? ;");
    			ps.setString(2, iid);
    			ps.setFloat(1, mark);
    			ps.executeUpdate();
    			t2.setText("");
        		t3.setText("");
        		t4.setText("");
        		s.setValue(0);
        		JOptionPane.showMessageDialog(fj, "SUCCESSFULLY ADDED");
			}
    		catch (Exception e1) {
				System.err.println(e1.getClass().getName()+": "+e1.getMessage());
				System.exit(0);
			}
    		
    	}
    	else if(e.getSource()==b6)
    	{
    		JOptionPane.showMessageDialog(fj, "SUCCESSFULLY LOGOUT");
    		new login();
    		fj.setVisible(false);
    	}
    	else if(e.getSource()==cb1)
    	{
    		
    		String iid = (String)cb1.getSelectedItem();
    		try
    	    {
            	ps = con.prepareStatement("SELECT INVENTION_NAME,NAME,AWARD_CATEGORY FROM INVENTS NATURAL JOIN INVENTION NATURAL JOIN INVENTOR WHERE INVENTION_ID = ?;");
    			ps.setString(1, iid);
    			rs = ps.executeQuery();
    			if(rs.next())
    			{
    				t2.setText(rs.getString(1));
    				t3.setText(rs.getString(3));
    				t4.setText(rs.getString(2));
    			}
    			
    		}
    		catch (Exception e1) {
    	         System.err.println(e1.getClass().getName()+": "+e1.getMessage());
    	         System.exit(0);
    		}
    		
    	}
    }

	public static void main(String[] args) {
		new jury();

	}

}
