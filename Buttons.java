import javax.swing.JComponent;
import javax.swing.JButton;
public class Buttons{
    public  JButton button = null;
    public Buttons(){
        button = new JButton();
    }

    public  void show(boolean show){
        button.show(show);
    }

    public  void setText(String text){
        button.setText(text);
    }

    public  void remove(JComponent component){
        button.remove(component);
    }

    public  void add(JComponent component){
        button.remove(component);
    }
};