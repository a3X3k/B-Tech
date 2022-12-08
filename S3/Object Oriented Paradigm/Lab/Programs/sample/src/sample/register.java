package sample;

import java.lang.String;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;
import javax.swing.plaf.FontUIResource;

public class register implements ActionListener {
	private Connection con = null;
    private Statement st = null; 
    private ResultSet rs = null;
    private PreparedStatement ps = null;
    String Job_type;
	String Specialization;
	String year_of_experience;
	
	JFrame register_frame;
	JPanel register_panel;
   JLabel id_label;
   JLabel inventor_details_label;
   JLabel name_label;
   JLabel country_label;
   JLabel email_label;
   JLabel gender_label;
   JLabel phone_no_label;
   JLabel qualification_label;
   JTextField id_text;
   JTextField name_text;
   JTextField country_text;
   JTextField email_text;
   JTextField gender_text;
   JTextField qualification_text;
   JTextField phone_no_text;
   JTextField job_type_text;
   JTextField specialization_text;
   JTextField year_of_exp_text;
   JLabel job_type_label;
   JLabel specialization_label;
   JLabel year_of_exp_label;
   JLabel username_label;
   JTextField username_text;
   JLabel password_label;
   JPasswordField password_text;
   JButton register;
   JButton back;
   JComboBox combo_box;

    public register() {
        register_frame = new JFrame("REGISTER");
        register_panel = new JPanel();
        register_frame.setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);
        
        id_label = new JLabel("ID");
        inventor_details_label = new JLabel("INVENTOR DETAILS");
        name_label = new JLabel("NAME");
        country_label = new JLabel("COUNTRY");
        email_label = new JLabel("EMAIL");
        gender_label = new JLabel("GENDER");
        phone_no_label = new JLabel("PHONE NO");
        qualification_label = new JLabel("QUALIFICATION");
        
        id_text = new JTextField(5);
        name_text = new JTextField(5);
        country_text = new JTextField(5);
        email_text = new JTextField(5);
        gender_text = new JTextField(5);
        qualification_text = new JTextField(5);
        phone_no_text = new JTextField(5);
        job_type_text = new JTextField(5);
        specialization_text = new JTextField(5);
        year_of_exp_text = new JTextField(5);
        
        job_type_label = new JLabel("JOB TYPE");
        specialization_label = new JLabel("SPECIALIZATION");
        year_of_exp_label = new JLabel("YEAR OF EXPERIENCE");
        username_label = new JLabel("ENTER USERNAME");
        username_text = new JTextField(5);
        password_label = new JLabel("ENTER PASSWORD");
        password_text = new JPasswordField(5);
        register = new JButton("REGISTER");
        back = new JButton("BACK");
        combo_box = new JComboBox();

        register_panel.setSize(900,600);
        register_frame.setSize(920, 600);
        register_panel.setLayout(null);

        //add components
        register_panel.add(id_label);
        register_panel.add(inventor_details_label);
        register_panel.add(name_label);
        register_panel.add(country_label);
        register_panel.add(email_label);
        register_panel.add(gender_label);
        register_panel.add(phone_no_label);
        register_panel.add(qualification_label);
        register_panel.add(id_text);
        register_panel.add(name_text);
        register_panel.add(country_text);
        register_panel.add(email_text);
        register_panel.add(gender_text);
        register_panel.add(qualification_text);
        register_panel.add(phone_no_text);
        register_panel.add(job_type_text);
        register_panel.add(combo_box);
        register_panel.add(specialization_text);
        register_panel.add(year_of_exp_text);
        register_panel.add(job_type_label);
        register_panel.add(specialization_label);
        register_panel.add(year_of_exp_label);
        register_panel.add(username_label);
        register_panel.add(password_label);
        register_panel.add(username_text);
        register_panel.add(password_text);
        register_panel.add(register);
        register_panel.add(back);
        register_frame.add(register_panel);
        
        inventor_details_label.setBounds(280, 50, 500, 30);
        inventor_details_label.setFont(new Font("Times New Roman", Font.PLAIN, 38));
        inventor_details_label.setForeground(Color.WHITE);
        
        id_label.setBounds(100, 130, 100, 30);
        name_label.setBounds(100, 175, 100, 30);
        country_label.setBounds(100, 220, 100, 30);
        email_label.setBounds(100, 270, 100, 30);
        gender_label.setBounds(100, 320, 100, 30);
        phone_no_label.setBounds(100, 370, 100, 30);
        
        id_text.setBounds(220, 130, 150, 30);
        name_text.setBounds(220, 175, 150, 30);
        country_text.setBounds(220, 220, 150, 30);
        email_text.setBounds(220, 270, 150, 30);
        gender_text.setBounds(220, 320, 150, 30);
        phone_no_text.setBounds(220, 370, 150, 30);
        
        qualification_label.setBounds(430, 130, 200, 30);
        job_type_label.setBounds(430, 175, 200, 30);
        specialization_label.setBounds(430, 220, 200, 30);
        year_of_exp_label.setBounds(430, 270, 200, 30);
        username_label.setBounds(430, 320, 200, 30);
        password_label.setBounds(430, 370, 200, 25);
        
        qualification_text.setBounds(650, 130, 150, 30);
        job_type_text.setBounds(650, 175, 150, 30);
        specialization_text.setBounds(650, 220, 150, 30);
        year_of_exp_text.setBounds(650, 270, 150, 30);
        username_text.setBounds(650, 320, 150, 30);
        password_text.setBounds(650, 370, 150, 30);
        
	    id_label.setFont(new Font("Times New Roman", Font.PLAIN, 18));
	    name_label.setFont(new Font("Times New Roman", Font.PLAIN, 18));
	    country_label.setFont(new Font("Times New Roman", Font.PLAIN, 18));
	    email_label.setFont(new Font("Times New Roman", Font.PLAIN, 18));
	    gender_label.setFont(new Font("Times New Roman", Font.PLAIN, 18));
	    phone_no_label.setFont(new Font("Times New Roman", Font.PLAIN, 18));
	    qualification_label.setFont(new Font("Times New Roman", Font.PLAIN, 18));
	    job_type_label.setFont(new Font("Times New Roman", Font.PLAIN, 18));
	    specialization_label.setFont(new Font("Times New Roman", Font.PLAIN, 18));
	    year_of_exp_label.setFont(new Font("Times New Roman", Font.PLAIN, 18));
	    username_label.setFont(new Font("Times New Roman", Font.PLAIN, 18));
	    password_label.setFont(new Font("Times New Roman", Font.PLAIN, 18));
	    
	    name_label.setForeground(Color.WHITE);
	    email_label.setForeground(Color.WHITE);
	    phone_no_label.setForeground(Color.WHITE);
	    
	    job_type_label.setForeground(Color.WHITE);
	    year_of_exp_label.setForeground(Color.WHITE);
	    password_label.setForeground(Color.WHITE);
	    
        combo_box.setBounds(650, 175, 150, 30);

        register.setBounds(300, 450, 110, 30);
        back.setBounds(500, 450, 100, 30);
        
        register.addActionListener(this);
        back.addActionListener(this);
        
	    register.setBackground(Color.BLACK);
	    register.setForeground(Color.WHITE);
	    back.setBackground(Color.BLACK);
	    back.setForeground(Color.WHITE);
 
        combo_box.setVisible(false);
        register_frame.setVisible(true);
        
        if(login.flag==1)
        {
        	job_type_label.setText("AWARD CATEGORY");
        	inventor_details_label.setText("JURY MEMBER DETAILS");
        	job_type_text.setVisible(false);
        	combo_box.setVisible(true);
        }
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
				combo_box.addItem(rs.getString(1));
			}
			
		}
		catch (Exception e) {
	         e.printStackTrace();
	         System.err.println(e.getClass().getName()+": "+e.getMessage());
	         System.exit(0);
		}
        
    }
    public void actionPerformed(ActionEvent e)
    { 
    	if(e.getActionCommand()=="REGISTER")
    	{
    		String id,name,gender,email,phone,country,job,cat,qua,spe,year,user,psw;
    		id = id_text.getText();
    		name = name_text.getText();
    		gender = gender_text.getText();
    		email = email_text.getText();
    		phone = phone_no_text.getText();
    		country = country_text.getText();
    		job = job_type_text.getText();
    		qua = qualification_text.getText();
    		spe = specialization_text.getText();
    		year = year_of_exp_text.getText();
    		cat = (String) combo_box.getSelectedItem();
    		user = username_text.getText();
    		psw = password_text.getText();
    		PreparedStatement ps1=null,ps2,ps3;
    		if(login.flag==1)
    		{
    			
    			try 
    			{
    				ps = con.prepareStatement("INSERT INTO JURY_MEMBERS VALUES(?,?,?,?,?,?,?,?,?,?);");
    				ps1 = con.prepareStatement("INSERT INTO LOGIN VALUES(?,?,'JURY',?);");
    				ps2 = con.prepareStatement("SELECT PANEL_ID FROM PANEL WHERE AWARD_CATEGORY = ?;");
    				ps2.setString(1,cat);
    				rs = ps2.executeQuery();
    				ps.setString(1, id);
    				ps.setString(2, name);
    				ps.setString(3, gender);
    				ps.setString(4, email);
    				ps.setString(5, phone);
    				ps.setString(6, country);
    				ps.setString(7, cat);
    				ps.setString(8, qua);
    				ps.setString(9, spe);
    				ps.setString(10, year);
    				
    			}
    			catch (Exception e1) {
    		         System.err.println(e1.getClass().getName()+": "+e1.getMessage());
    		         System.exit(0);
    			}
    		
    			
    		}
    		else if(login.flag==0)
    		{
    			cat = (String) combo_box.getSelectedItem();
    			try 
    			{
    				ps = con.prepareStatement("INSERT INTO INVENTOR VALUES(?,?,?,?,?,?,?,?,?,?);");
    				ps1 = con.prepareStatement("INSERT INTO LOGIN VALUES(?,?,'INVENTOR',?);");
    				ps.setString(1, id);
    				ps.setString(2, name);
    				ps.setString(3, gender);
    				ps.setString(4, email);
    				ps.setString(5, phone);
    				ps.setString(6, country);
    				ps.setString(7, job);
    				ps.setString(8, qua);
    				ps.setString(9, spe);
    				ps.setString(10, year);
    				
    			}
    			catch (Exception e1) {
    		         System.err.println(e1.getClass().getName()+": "+e1.getMessage());
    		         System.exit(0);
    			}
    		}
    		
			try
			{
			
				ps1.setString(1, user);
				ps1.setString(2, psw);
				ps1.setString(3, id);
				JPasswordField pwd = new JPasswordField(20);
	    		int pass = JOptionPane.showConfirmDialog(register_frame,pwd,"CONFIRM YOUR PASSWORD",JOptionPane.OK_CANCEL_OPTION);
	    		if(pass==0)
	    		{
	    			if(pwd.getText().equals(password_text.getText()))
	    			{
	    				ps.executeUpdate();
	    				ps1.executeUpdate();
	    				if(rs.next())
	    				{
	    					String pid = rs.getString(1);
	    					ps3 = con.prepareStatement("INSERT INTO PANEL_JURY VALUES(?,?);");
	    					ps3.setString(1, pid);
	    					ps3.setString(2, id);
	    					ps3.executeUpdate();
	    				}
	    				
	    				JOptionPane.showMessageDialog(register_frame, "SUCCESSFULLY CREATED");
	    				id_text.setText("");
						name_text.setText("");
						country_text.setText("");
						email_text.setText("");
						gender_text.setText("");
						qualification_text.setText("");
						phone_no_text.setText("");
						job_type_text.setText("");
						specialization_text.setText("");
						username_text.setText("");
						password_text.setText("");
						year_of_exp_text.setText("");
	    			
	    			}
	    			else
	    			{
	    				JOptionPane.showMessageDialog(register_frame, "INCORRECT PASSWORD","INCORRECT", JOptionPane.WARNING_MESSAGE);
	    			}
	    			
	    		}
				
			}
			catch (Exception e1) {
		         System.err.println(e1.getClass().getName()+": "+e1.getMessage());
		         System.exit(0);
			}
    		
    	}
    	else if(e.getActionCommand()=="BACK")
    	{
    		if(login.flag==1)
    		{
    			register_frame.setVisible(false);
    			new admin();
    			login.flag=0;
    		}
    		else if(login.flag==0)
    		{
    			register_frame.setVisible(false);
    			new login();
    		}
    		
    	}

    }
}

