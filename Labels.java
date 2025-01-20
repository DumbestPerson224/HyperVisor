import javax.swing.JLabel;
public class Labels{
    public JLabel label = null;
    public Labels() {
        label = new JLabel();
    }

    public void show(boolean show){
        label.show(show);
    }

    public void setText(String text){
        label.setText(text);
    }
};