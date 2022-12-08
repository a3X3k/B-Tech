import javax.swing.*;

public class Label{
  public static void main(String args[])
  {
    JFrame a = new JFrame("example");
    JLabel b1;
    b1 = new JLabel("edureka");
    b1.setBounds(40,40,90,20);
    a.add(b1);
    a.setSize(400,400);
    a.setLayout(null);
    a.setVisible(true);
  }
}