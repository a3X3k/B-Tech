package GUI;
import java.awt.*;
import javax.swing.*;
import javax.swing.UIManager.*;
import javax.swing.plaf.FontUIResource;

public class login {
	JFrame f1;
	JPanel p;
	JLabel l1;
	JRadioButton r1;
	JRadioButton r2;
	JLabel l2;
	JRadioButton r3;
	JLabel l3;
	JTextField t1;
	JPasswordField p1;
	JLabel l4;
	JButton b1;
	ButtonGroup bg;
	login() 
	{
		f1 = new JFrame("LOGIN PAGE");
		p = new JPanel();
		f1.setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);
		l2 = new JLabel("LOGIN AS");
	    r1 = new JRadioButton("ADMIN");
	    r2 = new JRadioButton("INVENTOR");
	    l1 = new JLabel("LOGIN PAGE");
	    r3 = new JRadioButton("JURY");
	    l3 = new JLabel("USERNAME");
	    t1 = new JTextField(10);
	    p1 = new JPasswordField(10);
	    l4 = new JLabel("PASSWORD");
	    b1 = new JButton("LOGIN");
	    bg = new ButtonGroup();

	    bg.add(r1);
	    bg.add(r2);
	    bg.add(r3);
	    p.add(l2);
	    p.add(r1);
	    p.add(r2);
	    p.add(l1);
	    p.add(r3);
	    p.add(l3);
	    p.add(t1);
	    p.add(p1);
	    p.add(l4);
	    p.add(b1);

	    l1.setFont(new Font("Times New Roman", Font.BOLD, 35));
	    l1.setForeground(Color.white);
	    
	    r1.setFont(new Font("Times New Roman", Font.PLAIN, 15));
	    r2.setFont(new Font("Times New Roman", Font.PLAIN, 15));
	    r3.setFont(new Font("Times New Roman", Font.PLAIN, 15));
	    
	    r1.setBounds(250, 130, 100, 30);
	    r2.setBounds(340, 130, 100, 30);
	    r3.setBounds(455, 130, 100, 30);
	    
	    r1.setForeground(Color.yellow);
	    r2.setForeground(Color.red);
	    r2.setForeground(Color.green);
	    
	    l1.setBounds(225, 45, 250, 35);
	    l2.setBounds(100, 130, 200, 30);
	    
	    l3.setBounds(100, 215, 200, 25);
	    l4.setBounds(100, 285, 200, 25);
	    
	    t1.setBounds(250, 210, 200, 35);
	    p1.setBounds(250, 280, 200, 35);

	    b1.setBounds(260, 360, 110, 32);
	    
	    b1.setBackground(Color.WHITE);
	    b1.setForeground(Color.BLACK);
	    
	    l2.setForeground(Color.white);
	    l3.setForeground(Color.white);
	    l4.setForeground(Color.white);
	    
	    p.setSize(1000, 600);
	    p.setLayout(null);
	    f1.setSize(645, 500);
	    f1.add(p);
	    f1.setLayout(null);
	    f1.setVisible(true);
	    
	}


	public static void main(String[] args) {
		 
		  UIManager.put( "control", new Color( 5, 10, 15) );
		  UIManager.put( "info", new Color(128,128,128) );
		  UIManager.put( "nimbusBase", new Color( 18, 30, 49) );
		  UIManager.put( "nimbusAlertYellow", new Color( 18, 187, 0) );
		  UIManager.put( "nimbusDisabledText", new Color( 58, 128, 128) );
		  UIManager.put( "nimbusFocus", new Color(115,164,209) );
		  UIManager.put( "nimbusGreen", new Color(176,179,50) );
		  UIManager.put( "nimbusInfoBlue", new Color( 200, 139, 221) );
		  UIManager.put( "nimbusLightBackground", new Color( 5, 10, 25) );
		  UIManager.put( "nimbusOrange", new Color(191,98,4) );
		  UIManager.put( "nimbusRed", new Color(169,46,34) );
		  UIManager.put( "nimbusSelectedText", new Color( 155, 155, 155) );
		  UIManager.put( "nimbusSelectionBackground", new Color( 0, 93, 156) );
		  UIManager.put( "text", new Color( 10, 230, 230) );
		  UIManager.put("Label.font", new FontUIResource(new Font("Times New Roman", Font.BOLD, 19)));
		  UIManager.put("Button.font", new FontUIResource(new Font("Times New Roman", Font.BOLD, 17)));
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
		
	        login l =new login();
	        
	    }
	}



