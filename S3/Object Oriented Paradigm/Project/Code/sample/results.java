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

public class results implements ActionListener {
	private Connection con = null;
    private Statement st = null; 
    private ResultSet rs = null;
    private PreparedStatement ps = null;
	JFrame results_frame;
	JScrollPane results_table_scroll;
	DefaultTableModel results_table_model;
    JTable results_table;
    JButton back;
	public results(){
		results_frame = new JFrame("TABLE");
		results_frame.setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);
		results_table_model = new DefaultTableModel();
    	results_table = new JTable(results_table_model);
    	back = new JButton("BACK");
    	back.setForeground(Color.black);
		results_table_model.addColumn("INVENTION ID");
		results_table_model.addColumn("INVENTION NAME");
		results_table_model.addColumn("INVENTOR NAME");
		results_table_model.addColumn("AWARD NAME");
		results_table_model.addColumn("AWARD CATEGORY");
		results_table_model.addColumn("YEAR OF INVENTION");
		back.addActionListener(this);
		results_table.setPreferredScrollableViewportSize(new Dimension(400,400));
		results_table.setFillsViewportHeight(true);
		JTableHeader Theader = results_table.getTableHeader();
        ((DefaultTableCellRenderer)Theader.getDefaultRenderer()).setHorizontalAlignment(JLabel.CENTER); 
        Theader.setFont(new Font("Times New Roman", Font.BOLD, 15)); 
        Theader.setForeground(Color.BLACK);
		results_table_scroll = new JScrollPane(results_table);
		results_frame.getContentPane().add(BorderLayout.SOUTH,back);
		results_frame.getContentPane().add(BorderLayout.CENTER,results_table_scroll);
	    results_frame.setSize(900,600);
	    results_frame.setVisible(true);
	    results_table_model.setRowCount(0);
	    int i=0;
    	try 
    	{
    		Class.forName("org.postgresql.Driver");
    		con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/OOPS", "postgres", "1");
    		st = con.createStatement();
			String query = "SELECT INVENTION_ID,INVENTION_NAME,NAME,AWARD_NAME,AWARD_CATEGORY,YEAR_OF_INVENTION,T.MARKS FROM INVENTS NATURAL JOIN INVENTOR NATURAL JOIN INVENTION NATURAL JOIN AWARDS NATURAL JOIN (SELECT MAX(MARKS) AS MARKS,AWARD_CATEGORY FROM INVENTION GROUP BY AWARD_CATEGORY) AS T ORDER BY AWARD_CATEGORY;";
			rs = st.executeQuery(query);
			while(rs.next())
			{
				results_table_model.insertRow(i,new Object[] {rs.getString(1),rs.getString(2),rs.getString(3),rs.getString(4),rs.getString(5),rs.getString(6)});
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
		if(login.tab == 2)
		{
			new jury();
			results_frame.setVisible(false);
		}
		else if(login.tab == 3)
		{
			new inventor();
			results_frame.setVisible(false);
		}
	}

}
