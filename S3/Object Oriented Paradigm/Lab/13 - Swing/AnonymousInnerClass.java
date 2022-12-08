import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;

public class AnonymousInnerClass {

	private static int count = 0;
    public static void main(String[] args) {
        JFrame frame = new JFrame("Click  Counter");
        frame.setSize(400,250);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        JPanel panel = new JPanel();
        JButton button = new JButton("Click Here");
        final JLabel label = new JLabel("Click Count: 0");
        panel.add(button);
        panel.add(label);
        frame.add(panel);
        button.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent event) {
                count++;
                label.setText("Click Count: " + count);
            }
        }); 
        frame.setVisible(true);
    }
}