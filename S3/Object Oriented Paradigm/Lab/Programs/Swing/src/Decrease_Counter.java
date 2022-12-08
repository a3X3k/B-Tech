import java.awt.BorderLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;   

class Lis implements ActionListener
{
	
	JFrame f=null;    
	JLabel label =null;  
    JButton b = null;
    JTextField text =null;
    int i=88;
    
    Lis()
    {
    	f=new JFrame("Counter Down"); 
    	
        label = new JLabel("Counter");            
        label.setBounds(20,9,50,50); 
        
        text = new JTextField("88");  
        text.setBounds(100,20,100,30); 
        
        b = new JButton("Count Down");  
        b.setBounds(100,65, 130,30);    

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
        i=i-1;
        String s=String.valueOf(i);
        text.setText(s);
    }
}

public class Decrease_Counter {

	public static void main(String[] args) {
		
		new Lis();

	}

}
