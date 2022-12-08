package GUI;

import java.awt.*;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;

import javax.swing.*;

public class admin implements ActionListener{
	private Connection con = null;
    private Statement st = null; 
    private ResultSet rs = null;
    private PreparedStatement ps = null;
	JFrame fa;
	JPanel pa;
	JLabel l13;
	ButtonGroup bg1;
	JRadioButton ra1;
	JRadioButton ra2;
	JRadioButton ra3;
	JRadioButton ra4;
	
	JButton ba3;
	JButton ba4;
	JButton ba5;
	JButton ba6;
	JButton ba7;
	JButton ba8;
	
	//add awards 
	JLabel l1;
	JLabel l2;
	JLabel l3;
	JLabel l4;
	JLabel l5;
	JLabel l6;
	JTextField t1;
	JTextField t2;
	JTextField t3;
	JTextField t4;
	JTextField t5;
	JButton ba1;
	
	JLabel l7;
	JLabel l8;
	JLabel l9;
	JLabel l10;
	JLabel l11;
	JLabel l12;
	JTextField t7;
	JTextField t8;
	JTextField t9;
	JTextField t10;
	JButton ba2;
	DefaultListModel<String> jl1 ; 
	JList<String> list1;
	
	private void panelV(boolean t) {
		l7.setVisible(t);
		l8.setVisible(t);
		l9.setVisible(t);
		l10.setVisible(t);
		l11.setVisible(t);
		l12.setVisible(t);
		t7.setVisible(t);
		t8.setVisible(t);
		t9.setVisible(t);
		t10.setVisible(t);
		list1.setVisible(t);
		ba2.setVisible(t);
	}
	private void awardV(boolean t) {
		l1.setVisible(t);
		l2.setVisible(t);
		l3.setVisible(t);
		l4.setVisible(t);
		l5.setVisible(t);
		l6.setVisible(t);
		t1.setVisible(t);
		t2.setVisible(t);
		t3.setVisible(t);
		t4.setVisible(t);
		t5.setVisible(t);
		ba1.setVisible(t);
	}
	
	admin(){
		login.t=1;
		fa = new JFrame("ADMIN");
		pa = new JPanel();
		l13 = new JLabel("ADMIN PAGE");
		fa.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		pa.setSize(900,600);
        pa.setLayout(null);
        
        ba3 = new JButton("ADD JURY MEMBER");
        ba4 = new JButton("VIEW AWARDS");
        ba5 = new JButton("VIEW INVENTIONS");
        ba6 = new JButton("DECLARE FINALISTS");
        ba7 = new JButton("DECLARE RESULTS");
        ba8 = new JButton("LOGOUT");
		ra1 = new JRadioButton("ADD AWARD");
		ra2 = new JRadioButton("ADD PANEL");
		ra3 = new JRadioButton("REMOVE AWARD");
		ra4 = new JRadioButton("REMOVE JURY MEMBERS");
		

	    ra1.addActionListener(this);
	    ra2.addActionListener(this);
	    ra3.addActionListener(this);
	    ra4.addActionListener(this);
		
	    bg1 = new ButtonGroup();
		bg1.add(ra1);bg1.add(ra2);bg1.add(ra3);bg1.add(ra4);
	    pa.add(ra1);
	    pa.add(ra2);
	    pa.add(ra3);
	    pa.add(ra4);
	    pa.add(l13);
	    pa.add(ba3);
	    pa.add(ba4);
	    pa.add(ba5);
	    pa.add(ba6);
	    pa.add(ba7);
	    pa.add(ba8);
	    ra1.setBounds(50, 150, 200, 30);
	    ra2.setBounds(50, 200, 200, 30);
	    ra3.setBounds(50, 250, 200, 30);
	    ra4.setBounds(50, 300, 200, 30);
	    l13.setBounds(300, 30, 300, 30);
	    ba3.setBounds(100, 450, 200, 30);
	    ba4.setBounds(350, 450, 200, 30);
	    ba5.setBounds(600, 450, 200, 30);
	    ba6.setBounds(100, 500, 200, 30);
	    ba7.setBounds(350, 500, 200, 30);
	    ba8.setBounds(600, 500, 200, 30);
	    ba6.setEnabled(false);
	    ba7.setEnabled(false);
		
		//add awards
		l1 = new JLabel("AWARD ID");
		l2 = new JLabel("AWARD NAME");
		l3 = new JLabel("AWARD CATEGORY");
		l4 = new JLabel("REWARD AMOUNT");
		l5 = new JLabel("SPONSORED BY");
		l6 = new JLabel("AWARD DETAILS");
		t1 = new JTextField(10);
		t2 = new JTextField(10);
		t3 = new JTextField(10);
		t4 = new JTextField(10);
		t5 = new JTextField(10);
		ba1 = new JButton("ADD AWARD");
		pa.add(l1);
        pa.add(l2);
        pa.add(l3);
        pa.add(l4);
        pa.add(l5);
        pa.add(t1);
        pa.add(t2);
        pa.add(t3);
        pa.add(t4);
        pa.add(t5);
        pa.add(ba1);
        pa.add(l6);
        l6.setBounds(550, 80, 100, 30);
        l1.setBounds(450, 130, 100, 30);
        l2.setBounds(450, 180, 100, 30);
        l3.setBounds(450, 230, 150, 30);
        l4.setBounds(450, 280, 150, 30);
        l5.setBounds(450, 330, 100, 30);
        t1.setBounds(650, 130, 100, 30);
        t2.setBounds(650, 180, 100, 30);
        t3.setBounds(650, 230, 100, 30);
        t4.setBounds(650, 280, 100, 30);
        t5.setBounds(650, 330, 100, 30);
        ba1.setBounds(550, 380, 150, 30);
        
        //add panel
        l7 = new JLabel("PANEL ID");
		l8 = new JLabel("PANEL NAME");
		l9 = new JLabel("AWARD CATEGORY");
		l10 = new JLabel("NO. OF JURY MEMBERS");
		l11 = new JLabel("SELECT JURY MEMBERS");
		l12 = new JLabel("PANEL DETAILS");
		t7 = new JTextField(10);
		t8 = new JTextField(10);
		t9 = new JTextField(10);
		t10 = new JTextField(10);
		jl1 = new DefaultListModel<>(); 
		list1 = new JList<>(jl1);
		//list1.setVisibleRowCount(1);
		 JScrollPane scrollPane = new JScrollPane(list1);
		 scrollPane.getViewport().add(list1);
		 pa.add(scrollPane);
		ba2 = new JButton("ADD PANEL");
		pa.add(l7);
        pa.add(l8);
        pa.add(l9);
        pa.add(l10);
        pa.add(l11);
        pa.add(l12);
        pa.add(t7);
        pa.add(t8);
        pa.add(t9);
        pa.add(t10);
        pa.add(list1);
        pa.add(ba2);
        l12.setBounds(550, 80, 100, 30);
        l7.setBounds(450, 130, 100, 30);
        l8.setBounds(450, 180, 100, 30);
        l9.setBounds(450, 230, 150, 30);
        l10.setBounds(450, 280, 150, 30);
        l11.setBounds(450, 330, 150, 30);
        t7.setBounds(650, 130, 100, 30);
        t8.setBounds(650, 180, 100, 30);
        t9.setBounds(650, 230, 100, 30);
        t10.setBounds(650, 280, 100, 30);
        list1.setBounds(650, 330, 150, 50);
        ba2.setBounds(550, 400, 150, 30);
        

        awardV(false);
        panelV(false);
		fa.add(pa);
		fa.setLayout(null);
        fa.setSize(900,600);
        fa.setVisible(true);
        
        ba1.addActionListener(this);
	    ba2.addActionListener(this);
	    ba3.addActionListener(this);
	    ba8.addActionListener(this);
	   
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
			String query = "SELECT JURY_NAME||'('||JURY_ID||')' FROM JURY_MEMBERS;";
			rs = st.executeQuery(query);
			while(rs.next())
			{
				jl1.addElement(rs.getString(1));
			}
			
		}
		catch (Exception e) {
	         e.printStackTrace();
	         System.err.println(e.getClass().getName()+": "+e.getMessage());
	         System.exit(0);
		}
		
	}
	
	public void actionPerformed(ActionEvent e){  
		if(e.getSource()==ra1)
		{
			awardV(true);
	        panelV(false);
		}
		else if(e.getSource()==ra2)
		{
			awardV(false);
	        panelV(true);
		}
		else if(e.getSource()==ra3)
		{
			String n = JOptionPane.showInputDialog(fa,"ENTER AWARD ID OR AWARD NAME");
			if(n!=null)
			{
				try 
				{
					ps = con.prepareStatement("DELETE FROM AWARDS WHERE AWARD_ID = ? OR AWARD_NAME = ?;");
					ps.setString(1, n);
					ps.setString(2, n);
					ps.executeUpdate();
			    	JOptionPane.showMessageDialog(fa,"SUCCESSFULLY DELETED");
				}
				catch (Exception e1) {
			         System.err.println(e1.getClass().getName()+": "+e1.getMessage());
			         System.exit(0);
				}
			}
			
		}
		else if(e.getSource()==ra4)
		{
			String n = JOptionPane.showInputDialog(fa,"ENTER JURY MEMBER ID OR JURY MEMBER NAME");
			if(n!=null)
			{
				try 
				{
					ps = con.prepareStatement("DELETE FROM JUEY_MEMBERS WHERE JURY_ID = ? OR JURY_NAME = ?;");
					ps.setString(1, n);
					ps.setString(2, n);
					ps.executeUpdate();
			    	JOptionPane.showMessageDialog(fa,"SUCCESSFULLY DELETED");
				}
				catch (Exception e1) {
			         System.err.println(e1.getClass().getName()+": "+e1.getMessage());
			         System.exit(0);
				}
			}
		}
		else if(e.getSource()==ba1)
		{
			if(l1.getText().isEmpty() || l2.getText().isEmpty() || l3.getText().isEmpty() || l4.getText().isEmpty() || l5.getText().isEmpty() || l6.getText().isEmpty() ||
					t1.getText().isEmpty() || t2.getText().isEmpty() || t3.getText().isEmpty() || t4.getText().isEmpty() || t5.getText().isEmpty())
			{
				JOptionPane.showMessageDialog(fa,"EMPTY FIELD");
			}
			else
			{
				String id,name,category,amount,sponsor;
				id = t1.getText();
				name = t2.getText();
				category = t3.getText();
				amount = t4.getText();
				sponsor = t5.getText();
				try 
				{
					ps = con.prepareStatement("INSERT INTO AWARDS VALUES(?,?,?,?,?);");
					ps.setString(1, id);
					ps.setString(2, name);
					ps.setString(3, category);
					ps.setString(4, amount);
					ps.setString(5, sponsor);
					ps.executeUpdate();
					JOptionPane.showMessageDialog(fa,"SUCCESSFULLY ADDED");
					t1.setText("");
					t2.setText("");
					t3.setText("");
					t4.setText("");
					t5.setText("");
				}
				catch (Exception ev) {
			         System.err.println(ev.getClass().getName()+": "+ev.getMessage());
			         System.exit(0);
				}
			}
		}
		else if(e.getSource()==ba2)
		{
			if(l7.getText().isEmpty() || l8.getText().isEmpty() || l9.getText().isEmpty() || l10.getText().isEmpty() || l11.getText().isEmpty() || l12.getText().isEmpty() ||
					t10.getText().isEmpty() || t7.getText().isEmpty() || t8.getText().isEmpty() || t9.getText().isEmpty() )
			{
				JOptionPane.showMessageDialog(fa,"EMPTY FIELD");
			}
			else
			{
				String pid,pname,pcategory;
				pid = t7.getText();
				pname = t8.getText();
				pcategory = t9.getText();
				try 
				{
					ps = con.prepareStatement("INSERT INTO PANEL VALUES(?,?,?);");
					ps.setString(1, pid);
					ps.setString(2, pname);
					ps.setString(3, pcategory);
					ps.executeUpdate();
					JOptionPane.showMessageDialog(fa,"SUCCESSFULLY ADDED");
					t7.setText("");
					t8.setText("");
					t9.setText("");
					t10.setText("");
				}
				catch (Exception ev) {
			         System.err.println(ev.getClass().getName()+": "+ev.getMessage());
			         System.exit(0);
				}
			}
		}
		else if(e.getSource()==ba3)
		{
			new register();
			fa.setVisible(false);
		}
		else if(e.getSource()==ba8)
		{

			JOptionPane.showMessageDialog(fa,"SUCCESSFULLY LOGOUT");
			new login();
			fa.setVisible(false);
		}
	}

	public static void main(String[] args) {
		new admin();

	}

}
