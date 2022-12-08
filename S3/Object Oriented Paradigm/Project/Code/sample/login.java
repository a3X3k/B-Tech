package sample;

import java.awt.*;
import javax.swing.*;
import javax.swing.plaf.FontUIResource;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.sql.PreparedStatement;
import java.awt.event.*;

public class login implements ActionListener{
	
	private Connection con = null;
    private Statement st = null; 
    private ResultSet rs = null;
    private PreparedStatement ps = null;
    
	JFrame login_frame;
	JPanel login_panel;
	JLabel login_title;
	JRadioButton admin_radio;
	JRadioButton inventor_radio;
	JLabel loginas_label;
	JRadioButton jury_radio;
	JLabel username_label;
	JTextField username_text;
	JPasswordField password_text;
	JLabel password_label;
	JButton login_button;
	ButtonGroup bgl;
	
	public static String userid;
	public static int flag;
	public static int tab;
	public static int result=0;
	public static int f_nom=0;
	
	features.user obj_user = new features.user();
	
	login() 
	{
		flag=0;
		login_frame = new JFrame("LOGIN PAGE");
		login_panel = new JPanel();
		
		login_frame.setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);
		loginas_label = new JLabel("LOGIN AS");
	    admin_radio = new JRadioButton("ADMIN",true);
	    inventor_radio = new JRadioButton("INVENTOR");
	    login_title = new JLabel("LOGIN PAGE");
	    jury_radio = new JRadioButton("JURY");
	    username_label = new JLabel("USERNAME");
	    username_text = new JTextField(10);
	    password_text = new JPasswordField(10);
	    password_label = new JLabel("PASSWORD");
	    login_button = new JButton("LOGIN");
	    bgl = new ButtonGroup();
	    login_button.addActionListener(this);
	    inventor_radio.addActionListener(this);
	    
	    admin_radio.setFont(new Font("Times New Roman", Font.PLAIN, 19));
	    inventor_radio.setFont(new Font("Times New Roman", Font.PLAIN, 19));
	    jury_radio.setFont(new Font("Times New Roman", Font.PLAIN, 19));
	    
	    admin_radio.setBounds(300, 160, 150, 30);
	    jury_radio.setBounds(440, 160, 150, 30);
	    inventor_radio.setBounds(545, 160, 150, 30);
	    
	    login_title.setFont(new Font("Times New Roman", Font.PLAIN, 30));
	    login_title.setBounds(360, 50, 250, 40);
	    login_title.setForeground(Color.WHITE);
	    
	    loginas_label.setBounds(150, 160, 100, 30);
	    loginas_label.setForeground(Color.WHITE);
	    loginas_label.setFont(new Font("Times New Roman", Font.BOLD, 20));
	    
	    username_label.setFont(new Font("Times New Roman", Font.BOLD, 20));
	    password_label.setFont(new Font("Times New Roman", Font.BOLD, 20));
	    
	    username_label.setForeground(Color.WHITE);
	    password_label.setForeground(Color.WHITE);
	    

	    bgl.add(admin_radio);bgl.add(inventor_radio);bgl.add(jury_radio);
	    login_panel.add(loginas_label);
	    login_panel.add(admin_radio);
	    login_panel.add(inventor_radio);
	    login_panel.add(login_title);
	    login_panel.add(jury_radio);
	    login_panel.add(username_label);
	    login_panel.add(username_text);
	    login_panel.add(password_text);
	    login_panel.add(password_label);
	    login_panel.add(login_button);
	    
	    username_label.setBounds(275, 270, 150, 25);
	    password_label.setBounds(275, 345, 150, 25);
	    
	    username_text.setBounds(430, 270, 150, 30);
	    password_text.setBounds(430, 345, 150, 30);
	    
	    login_button.setBounds(400, 420, 100, 30);
	    login_button.setBackground(Color.BLACK);
	    login_button.setForeground(Color.WHITE);
	    login_button.setFont(new Font("Times New Roman", Font.BOLD, 15));
	    
	    
	    login_panel.setSize(900, 600);
	    login_panel.setLayout(null);
	    login_frame.setSize(900, 600);
	    login_frame.add(login_panel);
	    login_frame.setLayout(null);
	    login_frame.setVisible(true);
	    
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
	
	public void actionPerformed(ActionEvent e)
	{
	    
	    obj_user.username = username_text.getText();
	    obj_user.password = password_text.getText();
		if(e.getActionCommand()=="LOGIN")
		{
			String name = username_text.getText();
			String pass = password_text.getText();
			try 
			{
				ps = con.prepareStatement("SELECT * FROM LOGIN WHERE USERNAME = ? AND PASSWORD = ? AND CATEGORY = ? ;");
				ps.setString(1, name);
				ps.setString(2, pass);
				if(admin_radio.isSelected())
				{    
					ps.setString(3, admin_radio.getLabel());
					rs = ps.executeQuery();
					if(rs.next())
					{
						String user = rs.getString(1);
						String p = rs.getString(2);
						userid = rs.getString(4);
						tab = 1;
						if(obj_user.login(user,p))
						{
							username_text.setText("");
							password_text.setText("");
							login_frame.setVisible(false);
							new admin();
							
						}
					}
					else
					{
						JOptionPane.showMessageDialog(login_frame, "INCORRECT USERNAME OR PASSWORD","ERROR", JOptionPane.WARNING_MESSAGE);

					}
					
				}   
				else if(inventor_radio.isSelected())
				{   
					ps.setString(3, inventor_radio.getLabel());
					rs = ps.executeQuery();
					if(rs.next())
					{
						String user = rs.getString(1);
						String p = rs.getString(2);
						userid = rs.getString(4);
						tab = 3;
						if(obj_user.login(user,p))
						{
							username_text.setText("");
							password_text.setText("");
							login_frame.setVisible(false);  
							new inventor();
						}
					}
					else
					{
						JOptionPane.showMessageDialog(login_frame, "INCORRECT USERNAME OR PASSWORD","ERROR", JOptionPane.WARNING_MESSAGE);

					}
					
				} 
				else if(jury_radio.isSelected())
				{    
					ps.setString(3, jury_radio.getLabel());
					rs = ps.executeQuery();
					if(rs.next())
					{
						String user = rs.getString(1);
						String p = rs.getString(2);
						userid = rs.getString(4);
						tab = 2;
						if(obj_user.login(user,p))
						{
							username_text.setText("");
							password_text.setText("");
							login_frame.setVisible(false);  
							new jury();
						}
					}
					else
					{
						JOptionPane.showMessageDialog(login_frame, "INCORRECT USERNAME OR PASSWORD","ERROR", JOptionPane.WARNING_MESSAGE);
					}
				}
			}
			catch (Exception e1) 
			{
		         e1.printStackTrace();
		         System.err.println(e1.getClass().getName()+": "+e1.getMessage());
		         System.exit(0);
			}
			 
		}
		else if(e.getActionCommand()=="INVENTOR")
		{
			int result = JOptionPane.showConfirmDialog(login_frame, "ARE YOU AN EXISTING USER?","INVENTOR",JOptionPane.YES_NO_OPTION);
			if(result == JOptionPane.NO_OPTION)
			{
				login_frame.setVisible(false);
				new register();
			}
		}
	}


	public static void main(String[] args) {
			
		  UIManager.put( "control", new Color(5,5,15) );
		  UIManager.put( "info", new Color(25,25,112) );
		  UIManager.put( "nimbusBase", new Color(0,0,255) );
		  UIManager.put( "nimbusAlertYellow", new Color(0,0,255) );
		  UIManager.put( "nimbusDisabledText", new Color( 58, 128, 128) );
		  UIManager.put( "nimbusFocus", new Color(0,0,255) );
		  UIManager.put( "nimbusGreen", new Color(0,0,255) );
		  UIManager.put( "nimbusInfoBlue", new Color(0,0,255) );
		  UIManager.put( "nimbusGreen", new Color(0,0,255) );
		  UIManager.put( "nimbusInfoBlue", new Color( 200, 50, 25) );
		  UIManager.put( "nimbusLightBackground", new Color(0,0,0) );
		  UIManager.put( "nimbusOrange", new Color(191,98,4) );
		  UIManager.put( "nimbusRed", new Color(169,46,34) );
		  UIManager.put( "nimbusSelectedText", new Color( 155, 155, 155) );
		  UIManager.put( "nimbusSelectionBackground", new Color( 0, 93, 156) );
		  UIManager.put( "text", new Color( 5, 230, 230) );
		  UIManager.put("Label.font", new FontUIResource(new Font("Times New Roman", Font.BOLD, 19)));
		  UIManager.put("Button.font", new FontUIResource(new Font("Cambria", Font.BOLD, 17)));
		  UIManager.put("TextField.font", new FontUIResource(new Font("Cambria", Font.PLAIN, 17)));
		  try {
		    for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
		      if ("Nimbus".equals(info.getName())) {
		          javax.swing.UIManager.setLookAndFeel(info.getClassName());
		          break;
		      }
		    }
		  } catch (ClassNotFoundException e) {
		    e.printStackTrace();
		  } catch (InstantiationException e) {
		    e.printStackTrace();
		  } catch (IllegalAccessException e) {
		    e.printStackTrace();
		  } catch (javax.swing.UnsupportedLookAndFeelException e) {
		    e.printStackTrace();
		  } catch (Exception e) {
		    e.printStackTrace();
		  }
	        new login();
	        
	    }
	}