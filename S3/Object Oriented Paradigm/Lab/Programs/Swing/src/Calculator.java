import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;  

public class Calculator implements ActionListener {

	JFrame f;  
	JTextField text;  
	
	JButton b1;
	JButton b2;
	JButton b3;
	JButton b4;
	JButton b5;
	JButton b6;
	JButton b7;
	JButton b8;
	JButton b9;
	JButton b10;
	JButton b11;
	JButton b12;
	JButton b13;
	JButton b14;
	JButton b15;
	JButton b16;
	
	Calculator(){
		
	    f=new JFrame();  
	    
	    f.setLayout(new BorderLayout());
	    JPanel p=new JPanel();
	    p.setLayout(new GridLayout(4,4));
	    
	    text=new JTextField(10);
	    
	    f.add(text,BorderLayout.NORTH);  
	    
        text.setBounds(20,20,200,60); 
        text.setPreferredSize(new Dimension(270, 35));
        text.addActionListener(this);
	      
	    b1=new JButton("7");  
	    b2=new JButton("8");  
	    b3=new JButton("9"); 
	    b4=new JButton("+");
	    b5=new JButton("4");  
	    b6=new JButton("5");  
	    b7=new JButton("6");
	    b8=new JButton("-");
	    b9=new JButton("1");  
	    b10=new JButton("2");  
	    b11=new JButton("3");  
	    b12=new JButton("*"); 
	    b13=new JButton("C"); 
	    b14=new JButton("0"); 
	    b15=new JButton("="); 
	    b16=new JButton("\\"); 
	    
	    
	    p.add(b1);
	    p.add(b2);
	    p.add(b3);
	    p.add(b4);
	    p.add(b5);  
	    p.add(b6);
	    p.add(b7);
	    p.add(b8);
	    p.add(b9);  
	    p.add(b10);
	    p.add(b11);
	    p.add(b12);
	    p.add(b13);
	    p.add(b14);
	    p.add(b15);
	    p.add(b16);
	  
	    b1.addActionListener(this);
	    b2.addActionListener(this);
	    b3.addActionListener(this);
	    b4.addActionListener(this);
	    b5.addActionListener(this);
	    b6.addActionListener(this);
	    b7.addActionListener(this);
	    b8.addActionListener(this);
	    b9.addActionListener(this);
	    b10.addActionListener(this);
	    b11.addActionListener(this);
	    b12.addActionListener(this);
	    b13.addActionListener(this);
	    b14.addActionListener(this);
	    b15.addActionListener(this);
	    b16.addActionListener(this);
	    
	    p.setLayout(new GridLayout(4,4));  
	    
	    f.add(p,BorderLayout.CENTER);
	  
	    f.setSize(400,400);  
	    f.setVisible(true); 
	    
	    f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}  
	
	@Override
	public void actionPerformed(ActionEvent e) {
		
		  String str = e.getActionCommand();
	      
		  if (str.charAt(0) == 'C') 
	      {                      
	         text.setText("");
	      }
	      else if (str.charAt(0) == '=') 
	      {                    
	         text.setText(compute(text.getText()));
	      }
	      else 
	      {                                
	         text.setText(text.getText() +" "+ str);
	      }
	}
	
	public static String compute(String expression) 
	{
	      char[] arr = expression.toCharArray();
	      
	      String left_op = "";
	      String right_op = "";
	      String operator = "";

	      int tot_value2 = 0;
	      
	      int c=0; 
	      
	      for (int i = 0; i < arr.length; i++) 
	      {
	         if (arr[i] >= '0' && arr[i] <= '9') 
	         {
	            if(operator.isEmpty())
	            {
	               left_op += arr[i];
	            }
	            else
	            {
	               right_op += arr[i];
	            }
	         }  
  
	         else if(arr[i] == '+' || arr[i] == '-' || arr[i] == '/' || arr[i] == '*') 
	         {
	            operator += arr[i];
	         }

	      }
	      
	    	  if (operator.equals("+"))
		      {
		    	  tot_value2 = (Integer.parseInt(left_op) + Integer.parseInt(right_op));
		      }
		         
		      else if (operator.equals("-"))
		      {
		    	 tot_value2 = (Integer.parseInt(left_op) - Integer.parseInt(right_op));
		      }
		         
		      else if (operator.equals("/"))
		      {
		    	  tot_value2 = (Integer.parseInt(left_op) / Integer.parseInt(right_op));
		      }
		         
		      else
		      {
		    	  tot_value2 = (Integer.parseInt(left_op) * Integer.parseInt(right_op)); 
		      }
		                  
		      return left_op + " " + operator + " " + right_op + " = " + tot_value2;
	  }
	
	public static void main(String[] args) 
	{
		new Calculator();
	}
	
}
