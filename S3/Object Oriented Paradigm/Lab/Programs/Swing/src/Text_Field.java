import javax.swing.*;

public class Text_Field{
	
  public static void main(String args[]) {
    
	  JFrame a = new JFrame("example");
      JTextField b = new JTextField("edureka");
      b.setBounds(50,100,200,30);
      a.add(b);
      a.setSize(300,300);
      a.setLayout(null);
      a.setVisible(true);
    
  }
}