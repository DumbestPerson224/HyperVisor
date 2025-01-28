import javax.swing.*;
import java.awt.*;
public class Main{
    private static JFrame frame = null;
    private static JInternalFrame internalFrame = null;

    private static void setVisible(boolean visible){
        internalFrame.setVisible(visible);
    }

    private static void setFrameVisibility(boolean isVisible){
        frame.setVisible(isVisible);
    }

    private static void setFrameSize(int width, int height){
        frame.setSize(width, height);
    }

    private static void addToFrame(JComponent component){
        frame.add(component);
    }

    private static void removeFromFrame(JComponent component){
        frame.remove(component);
    }

    private static JFrame createFrame() {
        frame = new JFrame();
        return frame;
    }

    private static JInternalFrame createInternalFrame(){
        internalFrame = new JInternalFrame();
        return internalFrame;
    }

    private static JFrame setTitle(String title) {
        frame.setTitle(title);
        return frame;
    }

    public static void main(String[] args){
        createInternalFrame();
        createFrame();
        setFrameVisibility(true);
        setFrameSize(500, 500);
        setVisible(true);
        setTitle("Hyper Visor");
    }
}
