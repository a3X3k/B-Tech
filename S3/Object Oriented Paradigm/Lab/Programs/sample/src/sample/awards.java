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

import javax.swing.*;
import javax.swing.plaf.FontUIResource;
import javax.swing.table.DefaultTableCellRenderer;
import javax.swing.table.DefaultTableModel;
import javax.swing.table.JTableHeader;

public class awards implements ActionListener {
	private Connection con = null;
    private Statement st = null; 
    private ResultSet rs = null;
    private PreparedStatement ps = null;
    
	JFrame award_table_frame;
	JScrollPane s;
	DefaultTableModel award_column_title;
    JTable award_table;
    JButton back;
    
	public awards()
	{
		award_table_frame = new JFrame("TABLE");
		award_table_frame.setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);
		award_column_title = new DefaultTableModel();
    	award_table = new JTable(award_column_title);
    	back = new JButton("BACK");
    	back.setForeground(Color.black);
		award_column_title.addColumn("AWARD ID");
		award_column_title.addColumn("AWARD NAME");
		award_column_title.addColumn("AWARD CATEGORY");
		award_column_title.addColumn("REWARD AMOUNT");
		award_column_title.addColumn("SPONSORED BY");
		back.addActionListener(this);
		award_table.setPreferredScrollableViewportSize(new Dimension(400,400));
		award_table.setFillsViewportHeight(true);
		JTableHeader Theader = award_table.getTableHeader();
        ((DefaultTableCellRenderer)Theader.getDefaultRenderer()).setHorizontalAlignment(JLabel.CENTER); 
        Theader.setFont(new Font("Times New Roman", Font.BOLD, 15)); 
        Theader.setForeground(Color.BLACK);
		s = new JScrollPane(award_table);
		award_table_frame.getContentPane().add(BorderLayout.SOUTH,back);
		award_table_frame.getContentPane().add(BorderLayout.CENTER,s);
	    award_table_frame.setSize(900,600);
	    award_table_frame.setVisible(true);
	    award_column_title.setRowCount(0);
	    int i=0;
    	try 
    	{
    		Class.forName("org.postgresql.Driver");
    		con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/OOPS", "postgres", "1");
    		st = con.createStatement();
			String query = "SELECT * FROM AWARDS;";
			rs = st.executeQuery(query);
			while(rs.next())
			{
				award_column_title.insertRow(i,new Object[] {rs.getString(1),rs.getString(2),rs.getString(3),rs.getString(4),rs.getString(5)});
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
			award_table_frame.setVisible(false);
		}
		
		else if(login.tab == 2)
		{
			new jury();
			award_table_frame.setVisible(false);
		}
		
		else if(login.tab == 3)
		{
			new inventor();
			award_table_frame.setVisible(false);
		}
	}

}
