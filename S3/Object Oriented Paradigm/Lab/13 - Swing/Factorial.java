import java.awt.BorderLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;   

class Fact implements ActionListener
{
	
	JFrame f=null;    
	JLabel label =null; 
	JLabel label1 =null; 
    JButton b = null;
    JTextField text =null;
    JTextField text1 =null;
    int i=0;
    
    Fact()
    {
    	f=new JFrame("Factorial"); 
    	
        label = new JLabel("N");            
        label.setBounds(20,9,50,50); 
        
        label1 = new JLabel("Factorial");            
        label1.setBounds(20,45,50,50); 
        
        text = new JTextField();  
        text.setBounds(150,20,100,30); 
        
        text1 = new JTextField();  
        text1.setBounds(150,60,100,30); 
        
        b = new JButton("Next");  
        b.setBounds(100,100, 70,30);    

        f.add(label,BorderLayout.CENTER); 
        f.add(label1,BorderLayout.CENTER); 
        f.add(b,BorderLayout.CENTER); 
        f.add(text,BorderLayout.CENTER);
        f.add(text1,BorderLayout.CENTER);
        f.setSize(300,200);    
        f.setLayout(null);    
        f.setVisible(true);  
        b.addActionListener(this);
        
    }
    
    public void actionPerformed(ActionEvent e) 
    {
        i=i+1;
        String s=String.valueOf(i);
        text.setText(s);
        
        int fact=1;
        for(int j=1;j<=i;j++)
        {
        	fact=fact*j;
        }
        
        String s1=String.valueOf(fact);
        
        text1.setText(s1);
    }
}

public class Factorial {

	public static void main(String[] args) {
		
			new Fact();
	}

}
