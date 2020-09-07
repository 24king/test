// Create an AWT-based application.
/*
don't need applet
*/
import java.awt.*;
import java.awt.event.*;
//import java.applet.*;
// Create a frame window.
public class Demo_03_AppWindow extends Frame {

        String keymsg = "";
        String mousemsg = "";
        int mouseX=30, mouseY=30;

        public Demo_03_AppWindow() {
                addKeyListener(new MyKeyAdapter(this));
                addMouseListener(new MyMouseAdapter(this));
                addWindowListener(new MyWindowAdapter());
          }
        public void paint(Graphics g) {
                g.drawString(keymsg, 10, 40);
                g.drawString(mousemsg, mouseX, mouseY);
          }
        // Create the window.
        public static void main(String args[]) {

                Demo_03_AppWindow appwin = new Demo_03_AppWindow();
                appwin.setSize(new Dimension(300, 200));
                appwin.setTitle("An AWT-Based Application");
                appwin.setVisible(true);
          }
}
class MyKeyAdapter extends KeyAdapter {

        Demo_03_AppWindow appWindow;
        public MyKeyAdapter(Demo_03_AppWindow appWindow) {
                this.appWindow = appWindow;
          }
        public void keyTyped(KeyEvent ke) {
                appWindow.keymsg += ke.getKeyChar();
                appWindow.repaint();
          }
}
class MyMouseAdapter extends MouseAdapter {

        Demo_03_AppWindow appWindow;
        public MyMouseAdapter(Demo_03_AppWindow appWindow) {
                this.appWindow = appWindow;
          }
        public void mousePressed(MouseEvent me) {
                appWindow.mouseX = me.getX();
                appWindow.mouseY = me.getY();
                appWindow.mousemsg = "Mouse pressed at " + appWindow.mouseX +
                                        ", " + appWindow.mouseY;
                appWindow.repaint();
          }
}
class MyWindowAdapter extends WindowAdapter {
        public void windowClosing(WindowEvent we) {
                System.exit(0);
          }
}
