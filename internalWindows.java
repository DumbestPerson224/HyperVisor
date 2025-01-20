import javax.swing.JInternalFrame;
import javax.swing.JComponent;
import javax.swing.JMenuBar;
public class internalWindows{
    public JInternalFrame internalFrame = null;
    public internalWindows(){
        internalFrame = new JInternalFrame();
        internalFrame.setDefaultCloseOperation(JInternalFrame.DISPOSE_ON_CLOSE);
    }

    void setSize(int width, int height){
        internalFrame.setSize(width, height);
    }

    void setResizable(boolean resizable){
        internalFrame.setResizable(resizable);
    }

    void show(boolean show){
        internalFrame.setVisible(show);
    }
    void add(JComponent component){
        internalFrame.add(component);
    }

    void remove(JComponent component){
        internalFrame.remove(component);
    }

}