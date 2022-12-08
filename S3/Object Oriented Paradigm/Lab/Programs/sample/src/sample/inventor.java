package sample;

import java.awt.Color;
import java.awt.Font;
import java.awt.event.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;

import javax.swing.*;
import javax.swing.plaf.FontUIResource;

import features.invention;
import features.user;

public class inventor implements ActionListener {
		
		private Connection con = null;
		private Statement st = null; 
		private ResultSet rs = null;
		private PreparedStatement ps = null;
		JFrame inventor_frame;
		JPanel inventor_panel;
		JLabel invention_id_label;
		JLabel invention_name_label;
		JLabel category_label;
		JLabel year_of_invention_label;
		JLabel story_behind_label;
		JLabel invention_details_title;
		JTextField invention_id_text;
		JTextField invention_name_text;
		JComboBox category_combo;
		JTextField year_of_invention_text;
		JTextArea story_behind_text;
		JButton add_invention;
		JButton view_invention;
		JButton view_award;
		JButton view_nominations;
		JButton view_result;
		JButton logout;
		
		features.invention obj_invention;
		features.inventor obj_inventor;
		features.user obj_user;
		
		inventor(){
				
			inventor_frame = new JFrame("INVENTOR");
			inventor_panel = new JPanel();
			inventor_frame.setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);
			obj_invention= new features.invention();
			obj_inventor= new features.inventor();
			obj_user = new features.user();
			
			invention_id_label = new JLabel("INVENTION ID");
			invention_name_label = new JLabel("INVENTION NAME");
			category_label = new JLabel("CATEGORY");
			year_of_invention_label = new JLabel("YEAR OF INVENTION");
			story_behind_label = new JLabel("STORY BEHIND");
			invention_details_title = new JLabel("INVENTION DETAILS");
			invention_id_text = new JTextField(10);
			invention_name_text = new JTextField(10);
			category_combo = new JComboBox();
			year_of_invention_text = new JTextField(10);
			story_behind_text = new JTextArea(10,10);
			add_invention = new JButton("ADD INVENTION");
			view_invention = new JButton("VIEW INVENTIONS");
			view_award = new JButton("VIEW AWARDS");
			view_nominations = new JButton("VIEW NOMINATIONS");
			view_result = new JButton("VIEW RESULT");
			logout = new JButton("LOGOUT");
			
			inventor_panel.add(invention_id_label);
	        inventor_panel.add(invention_name_label);
	        inventor_panel.add(category_label);
	        inventor_panel.add(year_of_invention_label);
	        inventor_panel.add(story_behind_label);
	        inventor_panel.add(invention_id_text);
	        inventor_panel.add(invention_name_text);
	        inventor_panel.add(category_combo);
	        inventor_panel.add(year_of_invention_text);
	        inventor_panel.add(story_behind_text);
	        inventor_panel.add(add_invention);
	        inventor_panel.add(view_invention);
	        inventor_panel.add(invention_details_title);
	        inventor_frame.add(inventor_panel);
	        inventor_panel.add(view_award);
	        inventor_panel.add(view_nominations);
	        inventor_panel.add(view_result);
	        inventor_panel.add(logout);
	        
	        invention_details_title.setBounds(230, 60, 350, 30);
		    invention_details_title.setFont(new Font("Times New Roman", Font.PLAIN, 35));
		    invention_details_title.setForeground(Color.WHITE);
		    
	        invention_id_label.setBounds(190, 150, 150, 30);
	        invention_name_label.setBounds(190, 200, 250, 30);
	        category_label.setBounds(190, 250, 150, 30);
	        year_of_invention_label.setBounds(190, 300, 250, 30);
	        story_behind_label.setBounds(190, 350, 150, 30);
	        
	        invention_id_text.setBounds(450, 150, 150, 30);
	        invention_name_text.setBounds(450, 200, 150, 30);
	        category_combo.setBounds(450, 250, 150, 30);
	        year_of_invention_text.setBounds(450, 300, 150, 30);
	        story_behind_text.setBounds(450, 350, 150, 50);
	        
		    invention_id_label.setFont(new Font("Times New Roman", Font.PLAIN, 20));
		    
		    invention_name_label.setFont(new Font("Times New Roman", Font.PLAIN, 20));
		    invention_name_label.setForeground(Color.WHITE);
		    
		    category_label.setFont(new Font("Times New Roman", Font.PLAIN, 20));
		    
		    year_of_invention_label.setFont(new Font("Times New Roman", Font.PLAIN, 20));
		    year_of_invention_label.setForeground(Color.WHITE);
		    
		    story_behind_label.setFont(new Font("Times New Roman", Font.PLAIN, 20));
	        
	        add_invention.setBounds(120, 450, 190, 30);
		    view_invention.setBounds(315, 450, 190, 30);
		    view_award.setBounds(505, 450, 190, 30);
		    view_nominations.setBounds(120, 510, 190, 30);
		    view_result.setBounds(315, 510, 190, 30);
		    logout.setBounds(510, 510, 190, 30);
		    
		    add_invention.setBackground(Color.BLACK);
		    add_invention.setForeground(Color.WHITE);
		    view_invention.setBackground(Color.BLACK);
		    view_invention.setForeground(Color.WHITE);
		    view_award.setBackground(Color.BLACK);
		    view_award.setForeground(Color.WHITE);
		    view_nominations.setBackground(Color.BLACK);
		    view_nominations.setForeground(Color.WHITE);
		    view_result.setBackground(Color.BLACK);
		    view_result.setForeground(Color.WHITE);
		    logout.setBackground(Color.BLACK);
		    logout.setForeground(Color.WHITE);

	        inventor_panel.setLayout(null);
	        inventor_panel.setSize(900,600);
	        inventor_frame.setSize(810,650);
	        inventor_frame.setLayout(null);
	        inventor_frame.setVisible(true);
	        add_invention.addActionListener(this);
	        logout.addActionListener(this);
	        view_invention.addActionListener(this);
	        view_award.addActionListener(this);
	        view_nominations.addActionListener(this);
	        view_result.addActionListener(this);
	        
			
	        
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
					category_combo.addItem(rs.getString(1));
				}
				
			}
			catch (Exception e) 
	        {
		         e.printStackTrace();
		         System.err.println(e.getClass().getName()+": "+e.getMessage());
		         System.exit(0);
			}
		}
		
		public void actionPerformed(ActionEvent e)
	    { 
			user ref;
	    	if(e.getSource()==add_invention)
	    	{
	    		obj_invention.invention_id = invention_id_text.getText();
				obj_invention.invention_name = invention_name_text.getText();
				obj_invention.category = (String)category_combo.getSelectedItem();
				obj_invention.year_of_invention = year_of_invention_text.getText();
				obj_invention.story_behind = story_behind_text.getText();
	    		obj_inventor.add_invention(obj_invention,inventor_frame);
				invention_id_text.setText("");
				invention_name_text.setText("");
				year_of_invention_text.setText("");
				story_behind_text.setText("");
	    	}
	    	else if(e.getSource()==logout)
	    	{
	    		JOptionPane.showMessageDialog(inventor_frame, "SUCCESSFULLY LOGOUT");
	    		new login();
	    		inventor_frame.setVisible(false);
	    	}
	    	else if(e.getSource()==view_award)
			{
	    		obj_inventor.viewAwards();
				inventor_frame.setVisible(false);
			}
			else if(e.getSource()==view_invention)
			{
				ref = obj_user;
				ref.viewInvention();
				inventor_frame.setVisible(false);
			}
			else if(e.getSource()==view_result)
			{
				if(login.result==0)
				{
					JOptionPane.showMessageDialog(inventor_frame, "RESULT NOT DECLARED");
				}
				else if(login.result==1)
				{
					obj_inventor.view_result();
					inventor_frame.setVisible(false);
				}
				
			}
			else if(e.getSource()==view_nominations)
			{
				if(login.f_nom==0)
				{
					JOptionPane.showMessageDialog(inventor_frame, "FINAL NOMINATION IS NOT DECLARED");
				}
				else if(login.f_nom==1)
				{

					ref = obj_inventor;
					ref.viewInvention();
					inventor_frame.setVisible(false);
				}
				
			}
	    }
		

	}


