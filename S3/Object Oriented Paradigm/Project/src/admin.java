package GUI;

import java.awt.Color;
import java.awt.Font;

import javax.swing.*;
import javax.swing.plaf.FontUIResource;

public class admin {
	JFrame f4;
	JPanel p4;
	JLabel l13;
	ButtonGroup bg1;
	JRadioButton r1;
	JRadioButton r2;
	JRadioButton r3;
	JRadioButton r4;
	
	JButton b3;
	JButton b4;
	JButton b5;
	JButton b6;
	JButton b7;
	JButton b8;
	
	//add awards 
	JLabel l1;
	JLabel l2;
	JLabel l3;
	JLabel l4;
	JLabel l5;
	JLabel l6;
	JTextField t1;
	JTextField t2;
	JTextField t3;
	JTextField t4;
	JTextField t5;
	JButton b1;
	
	JLabel l7;
	JLabel l8;
	JLabel l9;
	JLabel l10;
	JLabel l11;
	JLabel l12;
	JTextField t7;
	JTextField t8;
	JTextField t9;
	JTextField t10;
	JButton b2;
	JComboBox cb1;
	
	private void panelV(boolean t) {
		l7.setVisible(t);
		l8.setVisible(t);
		l9.setVisible(t);
		l10.setVisible(t);
		l11.setVisible(t);
		l12.setVisible(t);
		t7.setVisible(t);
		t8.setVisible(t);
		t9.setVisible(t);
		t10.setVisible(t);
		cb1.setVisible(t);
		b2.setVisible(t);
	}
	private void awardV(boolean t) {
		l1.setVisible(t);
		l2.setVisible(t);
		l3.setVisible(t);
		l4.setVisible(t);
		l5.setVisible(t);
		l6.setVisible(t);
		t1.setVisible(t);
		t2.setVisible(t);
		t3.setVisible(t);
		t4.setVisible(t);
		t5.setVisible(t);
		b1.setVisible(t);
	}
	
	admin(){
		f4 = new JFrame("ADMIN");
		p4 = new JPanel();
		l13 = new JLabel("ADMIN PAGE");
		f4.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		p4.setSize(900,600);
        p4.setLayout(null);
        
        b3 = new JButton("ADD JURY MEMBER");
        b4 = new JButton("VIEW AWARDS");
        b5 = new JButton("VIEW INVENTIONS");
        b6 = new JButton("DECLARE FINALISTS");
        b7 = new JButton("DECLARE RESULTS");
        b8 = new JButton("BACK");
		r1 = new JRadioButton("ADD AWARD");
		r2 = new JRadioButton("ADD PANEL");
		r3 = new JRadioButton("REMOVE AWARD");
		r4 = new JRadioButton("REMOVE JURY MEMBERS");
		bg1 = new ButtonGroup();
		
		bg1.add(r1);
		bg1.add(r2);
		bg1.add(r3);
		bg1.add(r4);
	    p4.add(r1);
	    p4.add(r2);
	    p4.add(r3);
	    p4.add(r4);
	    p4.add(l13);
	    p4.add(b3);
	    p4.add(b4);
	    p4.add(b5);
	    p4.add(b6);
	    p4.add(b7);
	    p4.add(b8);
	    
	    l13.setBounds(300, 30, 300, 30);
	    
	    //b6.setEnabled(false);
	    //b7.setEnabled(false);
		
		//add awards
		l1 = new JLabel("AWARD ID");
		l2 = new JLabel("AWARD NAME");
		l3 = new JLabel("AWARD CATEGORY");
		l4 = new JLabel("REWARD AMOUNT");
		l5 = new JLabel("SPONSERED BY");
		l6 = new JLabel("AWARD DETAILS");
		
		t1 = new JTextField(10);
		t2 = new JTextField(10);
		t3 = new JTextField(10);
		t4 = new JTextField(10);
		t5 = new JTextField(10);
		b1 = new JButton("ADD AWARD");
		
		p4.add(l1);
        p4.add(l2);
        p4.add(l3);
        p4.add(l4);
        p4.add(l5);
        p4.add(t1);
        p4.add(t2);
        p4.add(t3);
        p4.add(t4);
        p4.add(t5);
        p4.add(b1);
        p4.add(l6);
        
        l6.setBounds(550, 80, 100, 30);
        l1.setBounds(450, 130, 100, 30);
        l2.setBounds(450, 180, 100, 30);
        l3.setBounds(450, 230, 150, 30);
        l4.setBounds(450, 280, 150, 30);
        l5.setBounds(450, 330, 100, 30);

        b1.setBounds(550, 380, 150, 30);
        
        l13.setBounds(350, 70, 350, 30);
	    l13.setFont(new Font("Times New Roman", Font.BOLD, 39));
	    l13.setForeground(Color.white);
        
        //add panel
        l7 = new JLabel("PANEL ID");
		l8 = new JLabel("PANEL NAME");
		l9 = new JLabel("AWARD CATEGORY");
		l10 = new JLabel("NO. OF JURY MEMBERS");
		l11 = new JLabel("SELECT JURY MEMBERS");
		l12 = new JLabel("PANEL DETAILS");
		t7 = new JTextField(10);
		t8 = new JTextField(10);
		t9 = new JTextField(10);
		t10 = new JTextField(10);
		cb1 = new JComboBox();
		b2 = new JButton("ADD PANEL");
		
		p4.add(l7);
        p4.add(l8);
        p4.add(l9);
        p4.add(l10);
        p4.add(l11);
        p4.add(l12);
        p4.add(t7);
        p4.add(t8);
        p4.add(t9);
        p4.add(t10);
        p4.add(cb1);
        p4.add(b2);
        
	    r1.setBounds(60, 190, 250, 30);
	    r2.setBounds(60, 230, 250, 30);
	    r3.setBounds(60, 270, 250, 30);
	    r4.setBounds(60, 310, 300, 30);
	    
	    
	    b3.setBounds(60, 370, 200, 30);
	    b4.setBounds(60, 420, 200, 30);
	    b5.setBounds(60, 470, 200, 30);
	    
	    b2.setBounds(500, 490, 120, 35);
	    b8.setBounds(640, 490, 80, 35);
        
	    r1.setFont(new Font("Times New Roman", Font.PLAIN, 19));
	    r2.setFont(new Font("Times New Roman", Font.PLAIN, 19));
	    r3.setFont(new Font("Times New Roman", Font.PLAIN, 19));
	    r4.setFont(new Font("Times New Roman", Font.PLAIN, 19));

	    b1.setBackground(Color.BLACK);
	    b1.setForeground(Color.WHITE);
	    b2.setBackground(Color.BLACK);
	    b2.setForeground(Color.WHITE);
	    b3.setBackground(Color.BLACK);
	    b3.setForeground(Color.WHITE);
	    b4.setBackground(Color.BLACK);
	    b4.setForeground(Color.WHITE);
	    b5.setBackground(Color.BLACK);
	    b5.setForeground(Color.WHITE);
	    b6.setBackground(Color.BLACK);
	    b6.setForeground(Color.WHITE);
	    b7.setBackground(Color.BLACK);
	    b7.setForeground(Color.WHITE);
	    b8.setBackground(Color.BLACK);
	    b8.setForeground(Color.WHITE);
	    
	    b6.setBounds(400, 560, 190, 30);
	    b7.setBounds(670, 560, 180, 30);
        
        l12.setBounds(500, 150, 250, 30);
        l12.setFont(new Font("Times New Roman", Font.PLAIN, 27));
        
        l7.setBounds(400, 230, 100, 30);
        l8.setBounds(400, 280, 200, 30);
        l9.setBounds(400, 330, 200, 30);
        l10.setBounds(400, 380, 250, 30);
        l11.setBounds(400, 430, 250, 30);
        
        l7.setForeground(Color.WHITE);
        l8.setForeground(Color.WHITE);
        l9.setForeground(Color.WHITE);
        l10.setForeground(Color.WHITE);
        l11.setForeground(Color.WHITE);
        
        r1.setForeground(Color.WHITE);
        r2.setForeground(Color.WHITE);
        r3.setForeground(Color.WHITE);
        r4.setForeground(Color.WHITE);
        
        t1.setBounds(750, 220, 100, 30);
        t2.setBounds(750, 270, 100, 30);
        t3.setBounds(750, 330, 100, 30);
        t4.setBounds(750, 370, 100, 30);
        t5.setBounds(750, 420, 100, 30);
        
        t7.setBounds(700, 230, 150, 30);
        t8.setBounds(700, 280, 150, 30);
        t9.setBounds(700, 330, 150, 30);
        t10.setBounds(700, 380, 150, 30);
        
        cb1.setBounds(700, 430, 150, 30);

        awardV(false);
        panelV(true);
		f4.add(p4);
		f4.setLayout(null);
        f4.setSize(950,700);
        f4.setVisible(true);
        	
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
		  
		new admin();

	}

}
