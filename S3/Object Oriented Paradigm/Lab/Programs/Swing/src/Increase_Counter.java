import java.awt.BorderLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;   

class Act implements ActionListener
{
	
	JFrame f=null;    
	JLabel label =null;  
    JButton b = null;
    JTextField text =null;
    int i=0;
    
    Act()
    {
    	f=new JFrame("Counter Up"); 
    	
        label = new JLabel("Counter");            
        label.setBounds(20,9,50,50); 
        
        text = new JTextField();  
        text.setBounds(100,20,100,30); 
        
        b = new JButton("Count");  
        b.setBounds(100,65, 70,30);    

        f.add(label,BorderLayout.CENTER); 
        f.add(b,BorderLayout.CENTER); 
        f.add(text,BorderLayout.CENTER);
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
    }
}

public class Increase_Counter {

	public static void main(String[] args) {
		
			new Act();
			
	}

}
