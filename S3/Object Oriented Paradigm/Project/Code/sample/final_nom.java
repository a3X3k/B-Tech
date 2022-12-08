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

public class final_nom implements ActionListener {
	private Connection con = null;
    private Statement st = null; 
    private ResultSet rs = null;
    private PreparedStatement ps = null;
	JFrame final_nom_frame;
	JScrollPane scroll_pan;
	DefaultTableModel final_table_model;
    JTable final_nom_table;
    JButton back;
	public final_nom(){
		final_nom_frame = new JFrame("TABLE");
		final_nom_frame.setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);
		final_table_model = new DefaultTableModel();
    	final_nom_table = new JTable(final_table_model);
    	back = new JButton("BACK");
    	back.setForeground(Color.black);
		final_table_model.addColumn("INVENTION ID");
		final_table_model.addColumn("INVENTION NAME");
		final_table_model.addColumn("INVENTOR NAME");
		final_table_model.addColumn("AWARD NAME");
		final_table_model.addColumn("AWARD CATEGORY");
		final_table_model.addColumn("YEAR OF INVENTION");
		back.addActionListener(this);
		final_nom_table.setPreferredScrollableViewportSize(new Dimension(400,400));
		final_nom_table.setFillsViewportHeight(true);
		JTableHeader Theader = final_nom_table.getTableHeader();
        ((DefaultTableCellRenderer)Theader.getDefaultRenderer()).setHorizontalAlignment(JLabel.CENTER); 
        Theader.setFont(new Font("Times New Roman", Font.BOLD, 15)); 
        Theader.setForeground(Color.BLACK);
		scroll_pan = new JScrollPane(final_nom_table);
		final_nom_frame.getContentPane().add(BorderLayout.SOUTH,back);
		final_nom_frame.getContentPane().add(BorderLayout.CENTER,scroll_pan);
	    final_nom_frame.setSize(900,600);
	    final_nom_frame.setVisible(true);
	    final_table_model.setRowCount(0);
	    int i=0;
    	try 
    	{
    		Class.forName("org.postgresql.Driver");
    		con = DriverManager.getConnection("jdbc:postgresql://localhost:5432/OOPS", "postgres", "1");
    		st = con.createStatement();
			String query = "SELECT INVENTION_ID,INVENTION_NAME,NAME,AWARD_NAME,AWARD_CATEGORY,YEAR_OF_INVENTION FROM INVENTS NATURAL JOIN INVENTOR NATURAL JOIN INVENTION NATURAL JOIN AWARDS ORDER BY AWARD_CATEGORY ;";
			rs = st.executeQuery(query);
			while(rs.next())
			{
				final_table_model.insertRow(i,new Object[] {rs.getString(1),rs.getString(2),rs.getString(3),rs.getString(4),rs.getString(5),rs.getString(6)});
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
			final_nom_frame.setVisible(false);
		}
		else if(login.tab == 3)
		{
			new inventor();
			final_nom_frame.setVisible(false);
		}
	}
		
	public static void main(String[] args) {
		
		new final_nom();

	}

}