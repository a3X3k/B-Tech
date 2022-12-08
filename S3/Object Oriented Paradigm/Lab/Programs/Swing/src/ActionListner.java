import javax.swing.*;    
import java.awt.event.*;  

class demo1 implements ActionListener
{
        JFrame f=null;    
        JLabel label =null;            
        JPasswordField value = null;    
        JLabel l1=null;
        JLabel l2=null;  
        JButton b = null;
        JTextField text =null;  
        
        demo1(){
            f=new JFrame("Password Field Example");    
            label = new JLabel();            
            label.setBounds(20,150, 200,50);  
            value = new JPasswordField();   
            value.setBounds(100,75,100,30);   
            l1=new JLabel("Username:");    
            l1.setBounds(20,20, 80,30);    
            l2=new JLabel("Password:");    
            l2.setBounds(20,75, 80,30);    
            b = new JButton("Login");  
            b.setBounds(100,120, 80,30);    
            text = new JTextField();  
            text.setBounds(100,20, 100,30);    
            
            f.add(value); f.add(l1); f.add(label); f.add(l2); f.add(b); f.add(text);  
            f.setSize(300,300);    
            f.setLayout(null);    
            f.setVisible(true);  
            b.addActionListener(this);
        }

    @Override
    public void actionPerformed(ActionEvent e) {
        String data = "Username " + text.getText();  
        data += ", Password: "   
        + new String(value.getPassword());   
        label.setText(data);    
        
    }
}

public class ActionListner{
	
	public static void main(String args[])
	{
		new demo1();
	}

}
