package sample;

import java.awt.Color;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;

import javax.swing.*;
import javax.swing.plaf.FontUIResource;

public class jury implements ActionListener,ItemListener{
	private Connection con = null;
    private Statement st = null; 
    private ResultSet rs = null,rs1=null;
    private PreparedStatement ps = null;
	JFrame jury_frame;
	JPanel jury_panel;
	JLabel invention_id_label;
	JLabel invention_name_label;
	JLabel category_label;
	JLabel award_marks_label;
	JLabel inventor_name_label;
	JLabel l6;
	JComboBox combo_box;
	JTextField invention_name_text;
	JTextField category_text;
	JTextField inventor_name_text;
	JButton add_marks;
	JButton view_invention;
	JButton view_awards;
	JButton view_nominations;
	JButton view_result;
	JButton logout;
	JSpinner award_marks_spinner;
	JLabel jury_member_name_label;
	JLabel panel_name_label;
	
	features.jury_members obj_jury; 
	
	jury(){
		jury_frame = new JFrame("JURY");
		jury_panel = new JPanel();
		jury_frame.setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);
		
		invention_id_label = new JLabel("INVENTION ID");
		invention_name_label = new JLabel("INVENTION NAME");
		category_label = new JLabel("CATEGORY");
		award_marks_label = new JLabel("AWARD MARKS");
		inventor_name_label = new JLabel("INVENTOR NAME");
		jury_member_name_label = new JLabel("JURY MEMBER NAME  :  ");
		obj_jury = new features.jury_members();
		panel_name_label = new JLabel("PANEL NAME  :  ");
		combo_box = new JComboBox();
		invention_name_text = new JTextField(10);
		category_text = new JTextField(10);
		inventor_name_text = new JTextField(10);
		add_marks = new JButton("ADD MARKS");
		view_invention = new JButton("VIEW INVENTIONS");
		view_awards = new JButton("VIEW AWARDS");
		view_nominations = new JButton("VIEW NOMINATIONS");
		view_result = new JButton("VIEW RESULT");
		logout = new JButton("LOGOUT");
		award_marks_spinner = new JSpinner(new SpinnerNumberModel(0, 0, 10, 0.5));
		
		jury_panel.add(invention_id_label);
        jury_panel.add(invention_name_label);
        jury_panel.add(category_label);
        jury_panel.add(award_marks_label);
        jury_panel.add(combo_box);
        jury_panel.add(invention_name_text);
        jury_panel.add(category_text);
        jury_panel.add(award_marks_spinner);
        jury_panel.add(add_marks);
        jury_panel.add(view_invention);
        jury_frame.add(jury_panel);
        jury_panel.add(view_awards);
        jury_panel.add(view_nominations);
        jury_panel.add(view_result);
        jury_panel.add(logout);
        jury_panel.add(jury_member_name_label);
        jury_panel.add(panel_name_label);
        jury_panel.add(inventor_name_label);
        jury_panel.add(inventor_name_text);
       
        invention_id_label.setBounds(100, 150, 150, 30);
        invention_name_label.setBounds(100, 200, 200, 30);
        category_label.setBounds(100, 300, 200, 30);
        award_marks_label.setBounds(100, 350, 200, 30);
        inventor_name_label.setBounds(100, 250, 200, 30);
        
        invention_id_label.setForeground(Color.WHITE);
        invention_name_label.setForeground(Color.WHITE);
        category_label.setForeground(Color.WHITE);
        award_marks_label.setForeground(Color.WHITE);
        inventor_name_label.setForeground(Color.WHITE);
        
	    invention_id_label.setFont(new Font("Times New Roman", Font.PLAIN, 18));
	    invention_name_label.setFont(new Font("Times New Roman", Font.PLAIN, 18));
	    category_label.setFont(new Font("Times New Roman", Font.PLAIN, 18));
	    award_marks_label.setFont(new Font("Times New Roman", Font.PLAIN, 18));
	    inventor_name_label.setFont(new Font("Times New Roman", Font.PLAIN, 18));
	    
	    jury_member_name_label.setBounds(350, 30, 300, 30);
        panel_name_label.setBounds(415, 60, 250, 30);
        jury_member_name_label.setForeground(Color.WHITE);
        panel_name_label.setForeground(Color.WHITE);
	    jury_member_name_label.setFont(new Font("Times New Roman", Font.PLAIN, 18));
	    panel_name_label.setFont(new Font("Times New Roman", Font.PLAIN, 18));
	    
        inventor_name_text.setBounds(300, 250, 150, 30);
        combo_box.setBounds(300, 150, 150, 30);
        invention_name_text.setBounds(300, 200, 150, 30);
        category_text.setBounds(300, 300, 150, 30);
        award_marks_spinner.setBounds(300, 350, 150, 30);
        
        add_marks.setBounds(100, 500, 150, 30);
	    view_invention.setBounds(350, 450, 200, 30);
	    view_awards.setBounds(600, 450, 150, 30);
	    view_nominations.setBounds(100, 450, 200, 30);
	    view_result.setBounds(350, 500, 150, 30);
	    logout.setBounds(600, 500, 150, 30);
	    
	    add_marks.setForeground(Color.BLACK);
	    view_invention.setForeground(Color.BLACK);
	    view_awards.setForeground(Color.BLACK);
	    view_nominations.setForeground(Color.BLACK);
	    view_result.setForeground(Color.BLACK);
	    logout.setForeground(Color.BLACK);
	    
        invention_name_text.setEditable(false);
        category_text.setEditable(false);
        inventor_name_text.setEditable(false);

        jury_panel.setLayout(null);
        jury_panel.setSize(900,600);
        jury_frame.setSize(900,650);
        jury_frame.setLayout(null);
        jury_frame.setVisible(true);
        
        add_marks.addActionListener(this);
        logout.addActionListener(this);
        view_awards.addActionListener(this);
        view_invention.addActionListener(this);
        view_result.addActionListener(this);
        view_nominations.addActionListener(this);
        combo_box.addItemListener(this);
        
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
        	ps = con.prepareStatement("SELECT INVENTION_ID,JURY_NAME,PANEL_NAME FROM INVENTION NATURAL JOIN JURY_MEMBERS NATURAL JOIN PANEL_JURY NATURAL JOIN PANEL  WHERE JURY_ID = ?;");
			ps.setString(1, login.userid);
			rs = ps.executeQuery();
			while(rs.next())
			{
				combo_box.addItem(rs.getString(1));
				jury_member_name_label.setText("JURY MEMBER NAME : "+rs.getString(2));
				panel_name_label.setText("PANEL NAME : "+rs.getString(3));
			}
			
		}
		catch (Exception e) {
	         System.err.println(e.getClass().getName()+" : "+e.getMessage());
	         System.exit(0);
		}
        
	}
	public void itemStateChanged(ItemEvent e11) 
	    {  
	        if (e11.getSource() == combo_box)
	        { 
	        	String iid = (String)combo_box.getSelectedItem();
	    		try
	    	    {
	            	ps = con.prepareStatement("SELECT INVENTION_NAME,NAME,AWARD_CATEGORY FROM INVENTS NATURAL JOIN INVENTION NATURAL JOIN INVENTOR WHERE INVENTION_ID = ?;");
	    			ps.setString(1, iid);
	    			rs1 = ps.executeQuery();
	    			if(rs1.next())
	    			{
	    				invention_name_text.setText(rs1.getString(1));
	    				category_text.setText(rs1.getString(3));
	    				inventor_name_text.setText(rs1.getString(2));
	    			}
	    			
	    		}
	    		catch (Exception e1) {
	    	         System.err.println(e1.getClass().getName()+": "+e1.getMessage());
	    	         System.exit(0);
	    		}
	            
	        } 
	    } 
	public void actionPerformed(ActionEvent e)
    { 
    	if(e.getSource()==add_marks)
    	{
    		
    		String iid = (String)combo_box.getSelectedItem();
    		double mark = (double) award_marks_spinner.getValue();
    		
    		obj_jury.addmarks(mark,iid);
   			invention_name_text.setText("");
        	category_text.setText("");
        	inventor_name_text.setText("");
        	award_marks_spinner.setValue(0);
        	JOptionPane.showMessageDialog(jury_frame, "SUCCESSFULLY ADDED");
    	}
    	
    	else if(e.getSource()==logout)
    	{
    		JOptionPane.showMessageDialog(jury_frame, "SUCCESSFULLY LOGOUT");
    		new login();
    		jury_frame.setVisible(false);
    	}
    	
    	else if(e.getSource()==view_awards)
		{
    		obj_jury.viewAwards();
			jury_frame.setVisible(false);
		}
		else if(e.getSource()==view_invention)
		{
			obj_jury.viewInvention();
			jury_frame.setVisible(false);
		}
		else if(e.getSource()==view_result)
		{
			if(login.result==0)
			{
				JOptionPane.showMessageDialog(jury_frame, "RESULT NOT DECLARED");
			}
			else if(login.result==1)
			{
				new results();
				jury_frame.setVisible(false);
			}
			
		}
		else if(e.getSource()==view_nominations)
		{
			if(login.f_nom==0)
			{
				JOptionPane.showMessageDialog(jury_frame, "FINAL NOMINATION IS NOT DECLARED");
			}
			else if(login.f_nom==1)
			{
				new final_nom();
				jury_frame.setVisible(false);
			}
			
		}
    }
	
	public static void main(String[] args)
	{
		
	}

}
