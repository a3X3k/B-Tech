package swing;

import java.util.Scanner;

import javax.swing.table.DefaultTableModel;
import javax.swing.*;

import java.awt.BorderLayout;
import java.awt.Dimension;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.sql.PreparedStatement;

public class ebookswing implements ActionListener{
	private Connection con = null;
    private Statement st = null; 
    private ResultSet rs = null;
    private PreparedStatement ps = null;
    Scanner sc = new Scanner(System.in);
    JFrame a,f1,f2,f,f3,s;
    JMenuItem display,update,search,delete,insert,close;
    JMenuBar m1;
    JMenu menu;
    JTextField t1,t2,t11,t22,t111,t222,t3,t4,t5;
    JButton b1,b11,b2;
    JScrollPane sp,sp1;
    DefaultTableModel table1,table;
    JTable tt,t;
    
    ebookswing()
    {
    	//MENU
		a = new JFrame("BOOKS");
		a.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		menu = new JMenu("MENU");
	    m1 = new JMenuBar();
	    display = new JMenuItem("DISPLAY");
		update = new JMenuItem("UPDATE");
		search = new JMenuItem("SEARCH");
		delete = new JMenuItem("DELETE");
		insert = new JMenuItem("INSERT");
		close = new JMenuItem("CLOSE");
		
	    menu.add(display);
	    menu.add(update);
	    menu.add(search);
	    menu.add(delete);
	    menu.add(insert);
	    menu.add(close);
	    
	    display.addActionListener(this);
	    update.addActionListener(this);
	    search.addActionListener(this);
	    delete.addActionListener(this);
	    insert.addActionListener(this);
	    close.addActionListener(this);
	    m1.add(menu);
	    a.setJMenuBar(m1);
	    a.setSize(300,300);
	    a.setLayout(null);
	    a.setVisible(true);
	    
	    //UPDATE
	    f = new JFrame();
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	    JLabel l1 = new JLabel("ENTER ID");
    	t1 = new JTextField();
    	JLabel l2 = new JLabel("ENTER NEW PRICE");
    	t2 = new JTextField();
    	b1 = new JButton("UPDATE");
	    b1.addActionListener(this);
    	l1.setBounds(30, 30, 150, 25);
		l2.setBounds(30, 70, 150, 25);
		t1.setBounds(160, 30, 150, 25);
		t2.setBounds(160, 70, 150, 25);
		b1.setBounds(120, 120, 150, 25);
    	f.add(l1);
    	f.add(t1);
    	f.add(l2);
    	f.add(t2);
    	f.add(b1);
    	f.setLayout(null);
    	f.setSize(400,250);
    	f.setVisible(false);
    	
    	//SEARCH
    	f1 = new JFrame();
    	f1.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	    JLabel l11 = new JLabel("ENTER MINIMUM PRICE");
    	t11 = new JTextField();
    	JLabel l22 = new JLabel("ENTER MAXIMIM PRICE");
    	t22 = new JTextField();
    	b11 = new JButton("SEARCH");
	    b11.addActionListener(this);
    	l11.setBounds(100, 150, 150, 25);
		l22.setBounds(100, 200, 150, 25);
		t11.setBounds(250, 150, 150, 25);
		t22.setBounds(250, 200, 150, 25);
		b11.setBounds(175, 250, 150, 25);
    	f1.add(l11);
    	f1.add(t11);
    	f1.add(l22);
    	f1.add(t22);
    	f1.add(b11);
    	table1 = new DefaultTableModel();
    	table1.addColumn("ID");
		table1.addColumn("TITLE");
		table1.addColumn("AUTHOR");
		table1.addColumn("PRICE");
		table1.addColumn("QTY");
    	tt = new JTable(table1);
    	sp1 = new JScrollPane(tt);
    	f1.add(sp1);
    	f1.setSize(500,400);
    	f1.setVisible(false);
    	
    	//INSERT
    	f3 = new JFrame();
    	f3.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	    JLabel l111 = new JLabel("ENTER ID");
    	t111 = new JTextField();
    	JLabel l222 = new JLabel("ENTER TITLE");
    	t222 = new JTextField();
    	JLabel l3 = new JLabel("ENTER AUTHOR");
    	t3 = new JTextField();
    	JLabel l4 = new JLabel("ENTER PRICE");
    	t4 = new JTextField();
    	JLabel l5 = new JLabel("ENTER QUANTITY");
    	t5 = new JTextField();
    	b2 = new JButton("INSERT");
    	b2.addActionListener(this);
    	l111.setBounds(100, 50, 150, 25);
		l222.setBounds(100, 80, 150, 25);
		t111.setBounds(250, 50, 150, 25);
		t222.setBounds(250, 80, 150, 25);
		l3.setBounds(100, 110, 150, 25);
		l4.setBounds(100, 140, 150, 25);
		t3.setBounds(250, 110, 150, 25);
		t4.setBounds(250, 140, 150, 25);
		l5.setBounds(100, 170, 150, 25);
		t5.setBounds(250, 170, 150, 25);
		b2.setBounds(175, 200, 150, 25);
    	f3.add(l111);
    	f3.add(t111);
    	f3.add(l222);
    	f3.add(t222);
    	f3.add(l3);
    	f3.add(t3);
    	f3.add(l4);
    	f3.add(t4);
    	f3.add(l5);
    	f3.add(t5);
    	f3.add(b2);
    	f3.setLayout(null);
    	f3.setSize(500,500);
    	f3.setVisible(false);
    	
    	//DISPLAY
    	s=new JFrame();
    	table = new DefaultTableModel();
    	t = new JTable(table);
		table.addColumn("ID");
		table.addColumn("TITLE");
		table.addColumn("AUTHOR");
		table.addColumn("PRICE");
		table.addColumn("QTY");
		sp = new JScrollPane(t);
		s.add(sp);
		
	    
    	try 
    	{
    		Class.forName("org.postgresql.Driver");
    		con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/ebookshop", "postgres", "1");
    	}
    	catch (Exception e)
    	{
    		e.printStackTrace();
    		System.err.println(e.getClass().getName()+": "+e.getMessage());
    		System.exit(0);
    	}
    }
	public void actionPerformed(ActionEvent e) {
		if(e.getSource()==display)
		{
			Display();
		}
		if(e.getSource()==update)
		{
			f.setJMenuBar(m1);
			a.setVisible(false);
		    s.setVisible(false);
		    f1.setVisible(false);
		    f3.setVisible(false);
		    f.setVisible(true);
			
		}
		if(e.getSource()==b1)
		{
			Update();
		}
		if(e.getSource()==search)
		{
			f1.setJMenuBar(m1);
			a.setVisible(false);
		    s.setVisible(false);
		    f1.setVisible(true);
		    f3.setVisible(false);
		    f.setVisible(false);
		}
		if(e.getSource()==b11)
		{
			Search();
		}
		if(e.getSource()==delete)
		{
			Delete();
		}
		if(e.getSource()==insert)
		{
			f3.setJMenuBar(m1);
			a.setVisible(false);
		    s.setVisible(false);
		    f3.setVisible(true);
		    f1.setVisible(false);
		    f.setVisible(false);
		}
		if(e.getSource()==b2)
		{
			Insert();
		}
		if(e.getSource()==close)
		{
			Exit();
		}
	}
	
	public void Display() {

		table.setRowCount(0);
	    int i=0;
		try 
		{
			st = con.createStatement();
			String query = "SELECT * FROM BOOKS;";
			rs = st.executeQuery(query);
			while(rs.next())
			{
				table.insertRow(i,new Object[] {rs.getInt(1),rs.getString(2),rs.getString(3),rs.getFloat(4),rs.getInt(5)});
				i++;
			}
			
		}
		catch (Exception e) {
	         e.printStackTrace();
	         System.err.println(e.getClass().getName()+": "+e.getMessage());
	         System.exit(0);
		}
		s.setSize(500,500);
		s.setJMenuBar(m1);
		a.setVisible(false);
	    s.setVisible(true);
	    f1.setVisible(false);
	    f3.setVisible(false);
	    f.setVisible(false);
	}
	public void Update() {
		int id;
		float price;
		id = Integer.parseInt(t1.getText());
		price = Float.parseFloat(t2.getText());
		try 
		{
			ps = con.prepareStatement("UPDATE BOOKS SET PRICE = ? WHERE ID = ?;");
			ps.setFloat(1, price);
			ps.setInt(2, id);
			ps.executeUpdate();
			JOptionPane.showMessageDialog(f,"UPDATED SUCCESSFULLY");
			t1.setText("");
			t2.setText("");
		}
		catch (Exception e) {
	         e.printStackTrace();
	         System.err.println(e.getClass().getName()+": "+e.getMessage());
	         System.exit(0);
		}
	}
	
	public void Search() {
		float min,max;
		int i=0;
		table1.setRowCount(0);
		min = Float.parseFloat(t11.getText());
		max = Float.parseFloat(t22.getText());
		try 
		{
			ps = con.prepareStatement("SELECT * FROM BOOKS WHERE PRICE BETWEEN ? AND ? ;");
			ps.setFloat(1, min);
			ps.setFloat(2, max);
			rs = ps.executeQuery();
			while(rs.next())
			{
				
				table1.insertRow(i,new Object[] {rs.getInt(1),rs.getString(2),rs.getString(3),rs.getFloat(4),rs.getInt(5)});
				i++;			
			}
		}
		catch (Exception e) {
	         e.printStackTrace();
	         System.err.println(e.getClass().getName()+": "+e.getMessage());
	         System.exit(0);
		}
		
	}
	
	public void Delete() {
		int id;
		String del = JOptionPane.showInputDialog(f2,"ENTER ID TO BE DELETED");
		id = Integer.parseInt(del);
		try 
		{
			ps = con.prepareStatement("DELETE FROM BOOKS WHERE ID = ?;");
			ps.setFloat(1, id);
			ps.executeUpdate();
	    	JOptionPane.showMessageDialog(f2,"SUCCESSFULLY DELETED");
		}
		catch (Exception e) {
	         e.printStackTrace();
	         System.err.println(e.getClass().getName()+": "+e.getMessage());
	         System.exit(0);
		}
		
	}
	
	public void Insert() {
		int id,qty;
		float price;
		String author,title;
		id = Integer.parseInt(t111.getText());
		title = t222.getText();
		author = t3.getText();
		price = Float.parseFloat(t4.getText());
		qty = Integer.parseInt(t5.getText());
		try 
		{
			ps = con.prepareStatement("INSERT INTO BOOKS VALUES(?,?,?,?,?);");
			ps.setInt(1, id);
			ps.setString(2, title);
			ps.setString(3, author);
			ps.setFloat(4, price);
			ps.setInt(5, qty);
			ps.executeUpdate();
			JOptionPane.showMessageDialog(f3, "INSERTED SUCCESSFULLY");
			t111.setText("");
			t222.setText("");
			t3.setText("");
			t4.setText("");
			t5.setText("");
		}
		catch (Exception e) {
	         e.printStackTrace();
	         System.err.println(e.getClass().getName()+": "+e.getMessage());
	         System.exit(0);
		}
	}
	public void Exit()
	{
		try
		{
			rs.close();
			st.close();
			con.close();
			System.exit(0);
		}
		catch(Exception e)
		{
			System.out.println("ERROR : "+e.getMessage());
		}
	}
	
	public static void main(String[] args)
	{
		new ebookswing();
	}
}
