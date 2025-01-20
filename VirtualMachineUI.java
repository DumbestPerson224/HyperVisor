import javax.swing.JInternalFrame;
import javax.swing.JComponent;
import javax.swing.JMenuBar;
import javax.swing.JLabel;
public class VirtualMachineUI{
    public JInternalFrame internalFrame = null;
    public JLabel label = null;
    public internalWindows(){
        internalFrame = new JInternalFrame();
        label = new JLabel();
        internalFrame.setDefaultCloseOperation(JInternalFrame.DISPOSE_ON_CLOSE);
    }

    public void setSize(int width, int height){
        internalFrame.setSize(width, height);
    }

    public void setResizable(boolean resizable){
        internalFrame.setResizable(resizable);
    }

    public void show(boolean show){
        internalFrame.setVisible(show);
    }
    
    
    public void add(JComponent component){
        internalFrame.add(component);
    }

    
    public void remove(JComponent component){
        internalFrame.remove(component);
    }

    public void setText(String text){
        label.setText(text);
    }
}