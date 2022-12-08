package sample;
import java.awt.Color;
import java.awt.Font;

import javax.swing.*;
import javax.swing.plaf.FontUIResource;
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
	JFrame admin_frame;
	JPanel admin_panel;
	JLabel admin_title;
	ButtonGroup button_group;
	JRadioButton add_ward_radio;
	JRadioButton add_panel_radio;
	JRadioButton remove_award_radio;
	JRadioButton remove_jury_radio;
	
	JButton add_jurymember;
	JButton view_awards;
	JButton view_inventions;
	JButton declare_final_nomination;
	JButton declare_result;
	JButton logout;
	
	//add awards 
	JLabel award_id_label;
	JLabel award_name_label;
	JLabel award_category_label;
	JLabel reward_amount_label;
	JLabel sponsored_by_label;
	JLabel award_details_label;
	JTextField award_id_text;
	JTextField award_name_text;
	JTextField award_category_text;
	JTextField reward_amount_text;
	JTextField sponsored_by_text;
	JButton add_award;
	
	JLabel panel_id_label;
	JLabel panel_name_label;
	JLabel award_category_in_panel_label;
	JLabel panel_details_label;
	JTextField panel_id_text;
	JTextField panel_name_text;
	JTextField award_category_in_panel_text;
	JButton add_panel;
	
	private void panelV(boolean t) {
		panel_id_label.setVisible(t);
		panel_name_label.setVisible(t);
		award_category_in_panel_label.setVisible(t);
		panel_details_label.setVisible(t);
		panel_id_text.setVisible(t);
		panel_name_text.setVisible(t);
		award_category_in_panel_text.setVisible(t);
		add_panel.setVisible(t);
	}
	private void awardV(boolean t) {
		award_id_label.setVisible(t);
		award_name_label.setVisible(t);
		award_category_label.setVisible(t);
		reward_amount_label.setVisible(t);
		sponsored_by_label.setVisible(t);
		award_details_label.setVisible(t);
		award_id_text.setVisible(t);
		award_name_text.setVisible(t);
		award_category_text.setVisible(t);
		reward_amount_text.setVisible(t);
		sponsored_by_text.setVisible(t);
		add_award.setVisible(t);
	}
	
	features.admin obj ;
	features.award obj_award ;
	features.panel obj_panel;
	
	admin(){
		
		login.flag=1;
		
		obj = new features.admin();
		obj_award = new features.award();
		obj_panel = new features.panel();
		admin_frame = new JFrame("ADMIN");
		admin_panel = new JPanel();
		admin_title = new JLabel("ADMIN PAGE");
		admin_frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		admin_panel.setSize(960,850);
        admin_panel.setLayout(null);
        
        add_jurymember = new JButton("ADD JURY MEMBER");
        view_awards = new JButton("VIEW AWARDS");
        view_inventions = new JButton("VIEW INVENTIONS");
        declare_final_nomination = new JButton("DECLARE NOMINATION");
        declare_result = new JButton("DECLARE RESULTS");
        logout = new JButton("LOGOUT");
		add_ward_radio = new JRadioButton("ADD AWARD");
		add_panel_radio = new JRadioButton("ADD PANEL");
		remove_award_radio = new JRadioButton("REMOVE AWARD");
		remove_jury_radio = new JRadioButton("REMOVE JURY MEMBERS");
		

	    add_ward_radio.addActionListener(this);
	    add_panel_radio.addActionListener(this);
	    remove_award_radio.addActionListener(this);
	    remove_jury_radio.addActionListener(this);
		
	    button_group = new ButtonGroup();
		button_group.add(add_ward_radio);
		button_group.add(add_panel_radio);
		button_group.add(remove_award_radio);
		button_group.add(remove_jury_radio);
	    admin_panel.add(add_ward_radio);
	    admin_panel.add(add_panel_radio);
	    admin_panel.add(remove_award_radio);
	    admin_panel.add(remove_jury_radio);
	    admin_panel.add(admin_title);
	    admin_panel.add(add_jurymember);
	    admin_panel.add(view_awards);
	    admin_panel.add(view_inventions);
	    admin_panel.add(declare_final_nomination);
	    admin_panel.add(declare_result);
	    admin_panel.add(logout);
	    
	    
	    add_ward_radio.setBounds(50, 150, 200, 30);
	    add_panel_radio.setBounds(50, 200, 200, 30);
	    remove_award_radio.setBounds(50, 250, 200, 30);
	    remove_jury_radio.setBounds(50, 300, 300, 30);
	    
	    add_ward_radio.setFont(new Font("Times New Roman", Font.PLAIN, 19));
	    add_panel_radio.setFont(new Font("Times New Roman", Font.PLAIN, 19));
	    remove_award_radio.setFont(new Font("Times New Roman", Font.PLAIN, 19));
	    remove_jury_radio.setFont(new Font("Times New Roman", Font.PLAIN, 19));

	    add_jurymember.setBounds(150, 600, 200, 30);
	    view_awards.setBounds(360, 600, 200, 30);
	    view_inventions.setBounds(570, 600, 200, 30);
	    
	    declare_final_nomination.setBounds(150, 650, 250, 30);
	    declare_result.setBounds(520, 650, 250, 30);
	    logout.setBounds(50, 370, 100, 30);

	    add_jurymember.setBackground(Color.BLACK);
	    add_jurymember.setForeground(Color.WHITE);
	    view_awards.setBackground(Color.BLACK);
	    view_awards.setForeground(Color.WHITE);
	    view_inventions.setBackground(Color.BLACK);
	    view_inventions.setForeground(Color.WHITE);
	    declare_final_nomination.setBackground(Color.BLACK);
	    declare_final_nomination.setForeground(Color.WHITE);
	    declare_result.setBackground(Color.BLACK);
	    declare_result.setForeground(Color.WHITE);
	    logout.setBackground(Color.BLACK);
	    logout.setForeground(Color.WHITE);
	    
		//add awards
		award_id_label = new JLabel("AWARD ID");
		award_name_label = new JLabel("AWARD NAME");
		award_category_label = new JLabel("AWARD CATEGORY");
		reward_amount_label = new JLabel("REWARD AMOUNT");
		sponsored_by_label = new JLabel("SPONSORED BY");
		award_details_label = new JLabel("AWARD DETAILS");
		
		award_id_text = new JTextField(10);
		award_name_text = new JTextField(10);
		award_category_text = new JTextField(10);
		reward_amount_text = new JTextField(10);
		sponsored_by_text = new JTextField(10);
		
		add_award = new JButton("ADD AWARD");
		
		award_details_label.setFont(new Font("Times New Roman", Font.PLAIN, 22));
	    award_details_label.setForeground(Color.WHITE);
	    award_details_label.setBounds(500, 120, 200, 30);
	    
		admin_panel.add(award_id_label);
        admin_panel.add(award_name_label);
        admin_panel.add(award_category_label);
        admin_panel.add(reward_amount_label);
        admin_panel.add(sponsored_by_label);
        admin_panel.add(award_id_text);
        admin_panel.add(award_name_text);
        admin_panel.add(award_category_text);
        admin_panel.add(reward_amount_text);
        admin_panel.add(sponsored_by_text);
        admin_panel.add(add_award);
        admin_panel.add(award_details_label);
        
        award_id_label.setBounds(400, 190, 150, 30);
        award_name_label.setBounds(400, 250, 150, 30);
        award_category_label.setBounds(400, 310, 200, 30);
        reward_amount_label.setBounds(400, 370, 200, 30);
        sponsored_by_label.setBounds(400, 430, 150, 30);
        
        award_id_text.setBounds(610, 190, 150, 30);
        award_name_text.setBounds(610, 250, 150, 30);
        award_category_text.setBounds(610, 310, 150, 30);
        reward_amount_text.setBounds(610, 370, 150, 30);
        sponsored_by_text.setBounds(610, 430, 150, 30);
        
        add_award.setBounds(510, 490, 130, 30);
	    add_award.setBackground(Color.BLACK);
	    add_award.setForeground(Color.WHITE);
	    
        //add panel
        panel_id_label = new JLabel("PANEL ID");
		panel_name_label = new JLabel("PANEL NAME");
		award_category_in_panel_label = new JLabel("AWARD CATEGORY");
		panel_details_label = new JLabel("PANEL DETAILS");
		panel_id_text = new JTextField(10);
		panel_name_text = new JTextField(10);
		award_category_in_panel_text = new JTextField(10);
		
		add_panel = new JButton("ADD PANEL");
		
		admin_panel.add(panel_id_label);
        admin_panel.add(panel_name_label);
        admin_panel.add(award_category_in_panel_label);
        admin_panel.add(panel_details_label);
        admin_panel.add(panel_id_text);
        admin_panel.add(panel_name_text);
        admin_panel.add(award_category_in_panel_text);
        admin_panel.add(add_panel);
        
        panel_id_label.setBounds(410, 190, 200, 30);
        panel_name_label.setBounds(410, 250, 200, 30);
        award_category_in_panel_label.setBounds(400, 310, 250, 30);
        
        panel_id_text.setBounds(660, 190, 150, 30);
        panel_name_text.setBounds(660, 250, 150, 30);
        award_category_in_panel_text.setBounds(660, 310, 150, 30);
        
        panel_details_label.setBounds(500, 120, 200, 30);
        panel_details_label.setFont(new Font("Times New Roman", Font.BOLD, 22));
	    panel_details_label.setForeground(Color.white);
	    
        add_panel.setBounds(550, 400, 150, 30);
	    add_panel.setBackground(Color.BLACK);
	    add_panel.setForeground(Color.WHITE);
	    
	    admin_title.setBounds(300, 40, 300, 30);
        admin_title.setFont(new Font("Times New Roman", Font.BOLD, 39));
	    admin_title.setForeground(Color.white);
	    
        awardV(false);
        panelV(false);
		admin_frame.add(admin_panel);
		admin_frame.setLayout(null);
        admin_frame.setSize(900,800);
        admin_frame.setVisible(true);
        
        add_award.addActionListener(this);
	    add_panel.addActionListener(this);
	    add_jurymember.addActionListener(this);
	    logout.addActionListener(this);
	    view_inventions.addActionListener(this);
	    view_awards.addActionListener(this);
	    declare_result.addActionListener(this);
	    declare_final_nomination.addActionListener(this);
	
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
	   
	}
	public void actionPerformed(ActionEvent e){ 
		
		
		if(e.getSource()==add_ward_radio)
		{
			awardV(true);
	        panelV(false);
		}
		
		else if(e.getSource()==add_panel_radio)
		{
			awardV(false);
	        panelV(true);
		}
		
		else if(e.getSource()==remove_award_radio)
		{
			obj.remove_awards(admin_frame);	
		}
		
		else if(e.getSource()==remove_jury_radio)
		{
			obj.remove_jury_members(admin_frame);
		}
		else if(e.getSource()==add_award)
		{
			if(award_id_label.getText().isEmpty() || award_name_label.getText().isEmpty() || award_category_label.getText().isEmpty() || reward_amount_label.getText().isEmpty() || sponsored_by_label.getText().isEmpty() || award_details_label.getText().isEmpty() ||
					award_id_text.getText().isEmpty() || award_name_text.getText().isEmpty() || award_category_text.getText().isEmpty() || reward_amount_text.getText().isEmpty() || sponsored_by_text.getText().isEmpty())
			{
				JOptionPane.showMessageDialog(admin_frame,"EMPTY FIELD");
			}
			else
			{
				obj_award.award_id = award_id_text.getText();
				obj_award.award_name = award_name_text.getText();
				obj_award.award_category = award_category_text.getText();
				obj_award.reward_amount = reward_amount_text.getText();
				obj_award.sponsored_by = sponsored_by_text.getText();
				obj.add_awards(obj_award);
				JOptionPane.showMessageDialog(admin_frame,"SUCCESSFULLY ADDED");
				award_id_text.setText("");
				award_name_text.setText("");
				award_category_text.setText("");
				reward_amount_text.setText("");
				sponsored_by_text.setText("");
			}
		}
		else if(e.getSource()==add_panel)
		{
			if(panel_id_label.getText().isEmpty() || panel_name_label.getText().isEmpty() || award_category_in_panel_label.getText().isEmpty()  || panel_details_label.getText().isEmpty() ||
					 panel_id_text.getText().isEmpty() || panel_name_text.getText().isEmpty() || award_category_in_panel_text.getText().isEmpty() )
			{
				JOptionPane.showMessageDialog(admin_frame,"EMPTY FIELD");
			}
			else
			{
				obj_panel.panel_id = panel_id_text.getText();
		        obj_panel.panel_name = panel_name_text.getText();
		        obj_panel.award_category = award_category_in_panel_text.getText();
				obj.add_panel(obj_panel,admin_frame);
				panel_id_text.setText("");
				panel_name_text.setText("");
				award_category_in_panel_text.setText("");
			}
		}
		else if(e.getSource()==view_awards)
		{
			new awards();
			admin_frame.setVisible(false);
		}
		else if(e.getSource()==view_inventions)
		{
			new view_inventions();
			admin_frame.setVisible(false);
		}
		else if(e.getSource()==add_jurymember)
		{
			new register();
			admin_frame.setVisible(false);
		}
		else if(e.getSource()==logout)
		{

			JOptionPane.showMessageDialog(admin_frame,"SUCCESSFULLY LOGOUT");
			new login();
			admin_frame.setVisible(false);
		}
		else if(e.getSource()==declare_result)
		{
			obj.declare_result(admin_frame);
			login.result=1;
		    declare_result.setEnabled(false);
		}
		else if(e.getSource()==declare_final_nomination)
		{
			obj.declare_final_nominations(admin_frame);
			login.f_nom=1;
		    declare_final_nomination.setEnabled(false);
		}
	}

}
