import javax.swing.JMenuBar;
import javax.swing.JComponent;
public class Menu{
    public JMenuBar menubar = null;
    Menu(){
        menubar = new JMenuBar();
    }
    public void setVisible(boolean visible){
        menubar.setVisible(visible);
    }

    public void add(JComponent component){
        menubar.add(component);
    }
}