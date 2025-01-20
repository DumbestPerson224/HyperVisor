import javax.swing.JFrame;
import javax.swing.JComponent;
public class Window {
    public JFrame frame = null;
    Window(String title, int width, int height) {
        frame = new JFrame(title);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public void setSize(int width, int height){
        frame.setSize(width, height);
    }
    public void setVisible(boolean visible) {
        frame.setVisible(true);
    }

    public  void add(JComponent component){
        frame.add(component);
    }

    public void remove(JComponent component) {
        frame.remove(component);
    }

    public void setResizable(boolean resizable){
        frame.setResizable(resizable);
    }
}
