import javax.swing.*;
class Menu{
JMenu menu;
  JMenuItem a1,a2;
  Menu()
  {
    JFrame a = new JFrame("Example");
    menu = new JMenu("options");
    JMenuBar m1 = new JMenuBar();
    a1 = new JMenuItem("example");
    a2 = new JMenuItem("example1");
    menu.add(a1);
    menu.add(a2);
    m1.add(menu);
    a.setJMenuBar(m1);
    a.setSize(400,400);
    a.setLayout(null);
    a.setVisible(true);
  }
  public static void main(String args[])
  {
     new Menu();
  }
}