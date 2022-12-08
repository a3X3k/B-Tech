import java.awt.*;  
import java.awt.event.*;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class Key_List implements KeyListener{
	
	JFrame f=null;    
	JLabel label1 =null;  
	JLabel label2 =null;
    JTextField text1 =null;
    JTextField text2 =null;
    
    Key_List(){  
    	
    	f=new JFrame("Temperature"); 
    	
        label1 = new JLabel("Celcius");            
        label1.setBounds(20,10,50,70); 
        
        label2 = new JLabel("Fahrenheit");            
        label2.setBounds(20,67,70,50); 
        
        text1 = new JTextField();  
        text1.setBounds(100,30,100,30); 

        text2 = new JTextField();  
        text2.setBounds(100,80,100,30); 
        
        f.add(label1,BorderLayout.CENTER); 
        f.add(label2,BorderLayout.CENTER); 
        f.add(text1,BorderLayout.CENTER);
        f.add(text2,BorderLayout.CENTER);
        f.setSize(250,200);    
        f.setLayout(null);    
        f.setVisible(true); 
        
        text1.addKeyListener(this);
        text2.addKeyListener(this);
        
    }  
    
    @Override
	public void keyPressed(KeyEvent e) 
    {
    	try{
			JTextField textField = (JTextField) e.getSource();
	        if(textField==text1)
	        {
	        	float jml = Float.parseFloat(textField.getText());
	        	float f=(float) (jml*1.8+32);
	        	String s = String.format("%.1f", f);
	            text2.setText(s);
	        }
	        else
	        {
	        	float jml = Float.parseFloat(textField.getText());
	        	float f=(float) (jml-32)*5/9;
	        	String s = String.format("%.1f", f);
	            text1.setText(s);
	        }
		}
		catch(NumberFormatException e1)
		{
		   
		}
        
    }
	@Override
	public void keyReleased(KeyEvent e) 
	{
		try{
			JTextField textField = (JTextField) e.getSource();
	        if(textField==text1)
	        {
	        	float jml = Float.parseFloat(textField.getText());
	        	float f=(float) (jml*1.8+32);
	        	String s = String.format("%.1f", f);
	            text2.setText(s);
	        }
	        else
	        {
	        	float jml = Float.parseFloat(textField.getText());
	        	float f=(float) (jml-32)*5/9;
	        	String s = String.format("%.1f", f);
	            text1.setText(s);
	        }
		}
		catch(NumberFormatException e1)
		{
		   
		}
        
	}
	
	@Override
    public void keyTyped(KeyEvent e) 
    { 
		try{
			
			JTextField textField = (JTextField) e.getSource();
	        if(textField==text1)
	        {
	        	float jml = Float.parseFloat(textField.getText());
	        	float f=(float) (jml*1.8+32);
	        	String s = String.format("%.1f", f);
	            text2.setText(s);
	        }
	        else
	        {
	        	float jml = Float.parseFloat(textField.getText());
	        	float f=(float) (jml-32)*5/9;
	        	String s = String.format("%.1f", f);
	            text1.setText(s);
	        }
		}
		catch(NumberFormatException e1)
		{
		   
		}
        
    }  

	public static void main(String[] args) {
		
		new Key_List(); 

	}


}
