package GUI;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;
import javax.swing.plaf.FontUIResource;

public class register  {
	JFrame f2;
	JPanel p;
   JLabel l1;
   JLabel l2;
   JLabel l3;
   JLabel l4;
   JLabel l5;
   JLabel l6;
   JLabel l7;
   JLabel l8;
   JTextField t1;
   JTextField t2;
   JTextField t3;
   JTextField t4;
   JTextField t5;
   JTextField t6;
   JTextField t7;
   JTextField t8;
   JTextField t9;
   JTextField t10;
   JLabel l9;
   JLabel l10;
   JLabel l11;
   JLabel l12;
   JTextField t11;
   JLabel l13;
   JPasswordField p1;
   JButton b1;

    register() {
        f2 = new JFrame("REGISTER");
        p = new JPanel();
        f2.setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);
        l1 = new JLabel("ID");
        l2 = new JLabel("INVENTOR DETAILS");
        l3 = new JLabel("NAME");
        l4 = new JLabel("COUNTRY");
        l5 = new JLabel("EMAIL");
        l6 = new JLabel("GENDER");
        l7 = new JLabel("PHONE NUMBER");
        l8 = new JLabel("QUALIFICATION");
        t1 = new JTextField(5);
        t2 = new JTextField(5);
        t3 = new JTextField(5);
        t4 = new JTextField(5);
        t5 = new JTextField(5);
        t6 = new JTextField(5);
        t7 = new JTextField(5);
        t8 = new JTextField(5);
        t9 = new JTextField(5);
        t10 = new JTextField(5);
        t11 = new JTextField(5);
        l9 = new JLabel("JOB TYPE");
        l10 = new JLabel("SPECIALIZATION");
        l11 = new JLabel("YEAR OF EXPERIENCE");
        l12 = new JLabel("ENTER USERNAME");
        l13 = new JLabel("ENTER PASSWORD");
        p1 = new JPasswordField(5);
        b1 = new JButton("REGISTER");

        //add components
        p.add(l1);
        p.add(l2);
        p.add(l3);
        p.add(l4);
        p.add(l5);
        p.add(l6);
        p.add(l7);
        p.add(l8);
        p.add(t1);
        p.add(t2);
        p.add(t3);
        p.add(t4);
        p.add(t5);
        p.add(t6);
        p.add(t7);
        p.add(t8);
        p.add(t9);
        p.add(t10);
        p.add(l9);
        p.add(l10);
        p.add(l11);
        p.add(b1);
        f2.add(p);
        
        l2.setBounds(370, 50, 400, 30);
        
        l1.setBounds(100, 140, 100, 30);
        l3.setBounds(100, 200, 100, 30);
        l4.setBounds(100, 260, 100, 30);
        l5.setBounds(100, 320, 100, 30);
        l6.setBounds(100, 380, 100, 30);

        
        l8.setBounds(550, 140, 200, 30);
        l9.setBounds(550, 200, 200, 30);
        l10.setBounds(550, 260, 300, 30);
        l11.setBounds(550, 320, 250, 30);
        l7.setBounds(550, 380, 200, 30);
        
        t1.setBounds(300, 140, 150, 30);
        t2.setBounds(300, 200, 150, 30);
        t3.setBounds(300, 260, 150, 30);
        t4.setBounds(300, 320, 150, 30);
        t5.setBounds(300, 380, 150, 30);
        
        
        t6.setBounds(800, 140, 150, 30);
        t8.setBounds(800, 200, 150, 30);
        t9.setBounds(800, 260, 150, 30);
        t10.setBounds(800,320, 150, 30); 
        t7.setBounds(800, 380, 150, 30);
        
        //l2.setFont(new Font("MV BOLI",Font.PLAIN,30));
        
        p.add(l12);
        p.add(l13);
        p.add(t11);
        p.add(p1);
        
        l12.setBounds(100, 460, 200, 30);
        t11.setBounds(300, 460, 150, 30);
        l13.setBounds(550, 460, 200, 30);
        p1.setBounds(800, 460, 150, 30);
        
        t11.setBackground(Color.BLACK);
        p1.setBackground(Color.BLACK);
        
        b1.setBounds(490, 550, 130, 35);
	    b1.setBackground(Color.WHITE);
	    b1.setForeground(Color.BLACK);
	    
	    l3.setFont(new Font("Times New Roman", Font.BOLD, 19));
	    l3.setForeground(Color.white);
	    l5.setFont(new Font("Times New Roman", Font.BOLD, 19));
	    l5.setForeground(Color.white);
	    l9.setFont(new Font("Times New Roman", Font.BOLD, 19));
	    l9.setForeground(Color.white);
	    l11.setFont(new Font("Times New Roman", Font.BOLD, 19));
	    l11.setForeground(Color.white);
	    
        
	    l12.setFont(new Font("Times New Roman", Font.BOLD, 19));
	    l12.setForeground(Color.white);
	    l13.setFont(new Font("Times New Roman", Font.BOLD, 19));
	    l13.setForeground(Color.white);
	    
	    l2.setFont(new Font("Times New Roman", Font.BOLD, 35));
	    l2.setForeground(Color.white);
        

        p.setSize(900,600);
        f2.setSize(1100, 690);
        p.setLayout(null);
        f2.setVisible(true);
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
		new register();

	}

}

