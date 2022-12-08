import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JTextField;
import java.awt.BorderLayout;

public class Two_Button_Counter {
	
	private static int count = 0;
	public static void main(String[] args) {

		JFrame frame = new JFrame("Click  Counter");
        frame.setSize(300,300);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        JPanel panel = new JPanel();
        frame.add(panel);
        
        JButton button1 = new JButton("Counter UP");
        button1.setBounds(170, 30, 100, 30);
        panel.add(button1);
        
        JButton button2 = new JButton("Counter Down");
        button2.setBounds(290, 30, 120, 30);
        panel.add(button2);
        
        JButton button3 = new JButton("Reset");
        button3.setBounds(425, 30, 120, 30);
        panel.add(button3);
        
        
        JTextField text = new JTextField();  
        text.setBounds(50,30,100,30);
        frame.add(text);
        
        button1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent event) {
                count++;
                String s=String.valueOf(count);
                text.setText(s);
            }
        }); 
        
        button2.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent event) {
                count--;
                String s=String.valueOf(count);
                text.setText(s);
            }
        }); 
        
        button3.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent event) {
                count = 0;
                String s=String.valueOf(count);
                text.setText(s);
            }
        }); 

        frame.add(button1,BorderLayout.CENTER); 
        frame.add(button2,BorderLayout.CENTER); 
        frame.add(button3,BorderLayout.CENTER); 
        frame.add(text,BorderLayout.CENTER);
        frame.setSize(600,130);    
        frame.setLayout(null);    
        frame.setVisible(true);  
        
	}

}

