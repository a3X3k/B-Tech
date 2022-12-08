package sample;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Dimension;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JScrollPane;
import javax.swing.JTable;
import javax.swing.UIManager;
import javax.swing.plaf.FontUIResource;
import javax.swing.table.DefaultTableCellRenderer;
import javax.swing.table.DefaultTableModel;
import javax.swing.table.JTableHeader;

public class view_inventions implements ActionListener {
	private Connection con = null;
    private Statement st = null; 
    private ResultSet rs = null;
    private PreparedStatement ps = null;
	JFrame invention_table_frame;
	JScrollPane scroll;
	DefaultTableModel invention_table_model;
    JTable invention_table;
    JButton back;
	public view_inventions(){
		invention_table_frame = new JFrame("TABLE");
		invention_table_frame.setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);
		invention_table_model = new DefaultTableModel();
    	invention_table = new JTable(invention_table_model);
    	back = new JButton("BACK");
    	back.setForeground(Color.black);
		invention_table_model.addColumn("INVENTION ID");
		invention_table_model.addColumn("INVENTION NAME");
		invention_table_model.addColumn("AWARD CATEGORY");
		invention_table_model.addColumn("YEAR OF INVENTION");
		invention_table_model.addColumn("STORY BEHIND");
		back.addActionListener(this);
		invention_table.setPreferredScrollableViewportSize(new Dimension(400,400));
		invention_table.setFillsViewportHeight(true);
		JTableHeader Theader = invention_table.getTableHeader();
        Theader.setFont(new Font("Times New Roman", Font.BOLD, 15)); 
        Theader.setForeground(Color.BLACK);
        ((DefaultTableCellRenderer)Theader.getDefaultRenderer()).setHorizontalAlignment(JLabel.CENTER);
		scroll = new JScrollPane(invention_table);
		invention_table_frame.getContentPane().add(BorderLayout.SOUTH,back);
		invention_table_frame.getContentPane().add(BorderLayout.CENTER,scroll);
	    invention_table_frame.setSize(900,600);
	    invention_table_frame.setVisible(true);
	    invention_table_model.setRowCount(0);
	    int i=0;
    	try 
    	{
    		Class.forName("org.postgresql.Driver");
    		con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/OOPS", "postgres", "1");
    		st = con.createStatement();
			String query = "SELECT * FROM INVENTION;";
			rs = st.executeQuery(query);
			while(rs.next())
			{
				invention_table_model.insertRow(i,new Object[] {rs.getString(1),rs.getString(2),rs.getString(3),rs.getString(4),rs.getString(5)});
				i++;
			}
    	}
    	catch (Exception e)
    	{
    		System.err.println(e.getClass().getName()+": "+e.getMessage());
    		System.exit(0);
    	}
	}
	public void actionPerformed(ActionEvent e){  
		if(login.tab == 1)
		{
			new admin();
			invention_table_frame.setVisible(false);
		}
		else if(login.tab == 2)
		{
			new jury();
			invention_table_frame.setVisible(false);
		}
		else if(login.tab == 3)
		{
			new inventor();
			invention_table_frame.setVisible(false);
		}
	}

}
