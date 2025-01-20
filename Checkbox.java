import javax.swing.JCheckBox;
public class Checkbox{
    public JCheckBox checkbox = null;
    public Checkbox(){
        checkbox = new JCheckBox();
    }

    public void setVisible(boolean visible){
        checkbox.setVisible(visible);
    }
}