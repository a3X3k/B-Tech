package GUI;

import java.awt.Color;
import java.awt.Font;

import javax.swing.*;
import javax.swing.plaf.FontUIResource;

public class inventor {
	
		JFrame f5;
		JPanel p5;
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
		JTextArea t5;
		JButton b1;
		JButton b2;
		JButton b3;
		JButton b4;
		JButton b5;
		JButton b6;
		
		inventor(){
			f5 = new JFrame("INVENTOR");
			p5 = new JPanel();
			f5.setDefaultCloseOperation (JFrame.EXIT_ON_CLOSE);
			
			l1 = new JLabel("INVENTION ID");
			l2 = new JLabel("INVENTION NAME");
			l3 = new JLabel("CATEGORY");
			l4 = new JLabel("YEAR OF INVENTION");
			l5 = new JLabel("STORY BEHIND");
			l6 = new JLabel("INVENTION DETAILS");
			t1 = new JTextField(10);
			t2 = new JTextField(10);
			t3 = new JTextField(10);
			t4 = new JTextField(10);
			t5 = new JTextArea(10,10);
			b1 = new JButton("ADD INVENTION");
			b2 = new JButton("VIEW INVENTIONS");
			b3 = new JButton("VIEW AWARDS");
			b4 = new JButton("VIEW NOMINATIONS");
			b5 = new JButton("VIEW RESULT");
			b6 = new JButton("LOGOUT");
			
			p5.add(l1);
	        p5.add(l2);
	        p5.add(l3);
	        p5.add(l4);
	        p5.add(l5);
	        p5.add(t1);
	        p5.add(t2);
	        p5.add(t3);
	        p5.add(t4);
	        p5.add(t5);
	        p5.add(b1);
	        p5.add(b2);
	        p5.add(l6);
	        f5.add(p5);
	        p5.add(b3);
	        p5.add(b4);
	        p5.add(b5);
	        p5.add(b6);

	        l1.setBounds(100, 150, 200, 30);
	        l2.setBounds(100, 210, 200, 30);
	        l3.setBounds(100, 270, 200, 30);
	        l4.setBounds(100, 330, 200, 30);
	        l5.setBounds(100, 390, 200, 30);
	        
	        l6.setBounds(290, 60, 420, 30);
		    l6.setFont(new Font("Times New Roman", Font.BOLD, 39));
		    l6.setForeground(Color.white);
	        
	        t1.setBounds(350, 150, 200, 35);
	        t2.setBounds(350, 210, 200, 35);
	        t3.setBounds(350, 270, 200, 35);
	        t4.setBounds(350, 330, 200, 35);
	        t5.setBounds(350, 390, 200, 50);
	        
	        b1.setBounds(620, 150, 180, 36);
		    b2.setBounds(620, 205, 180, 36);
		    b4.setBounds(620, 260, 180, 36);
		    
		    b3.setBounds(640, 315, 140, 36);
		    b5.setBounds(640, 370, 140, 36);
		    b6.setBounds(660, 430, 100, 36);
		    
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

		    l2.setForeground(Color.WHITE);
		    l4.setForeground(Color.WHITE);

	        p5.setLayout(null);
	        p5.setSize(900,600);
	        f5.setSize(950,600);
	        f5.setLayout(null);
	        f5.setVisible(true);
	        
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
			  UIManager.put("Button.font", new FontUIResource(new Font("Cambria", Font.PLAIN, 16)));
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

			
			new inventor();

		}

	}


