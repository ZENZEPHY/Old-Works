import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class traffic1 extends JPanel implements ActionListener
{
JRadioButton r1,r2,r3;
ButtonGroup bg=new ButtonGroup();
Color r,g,y;
public traffic1()
{
setBounds(0,0,600,480);
r1 = new JRadioButton("Red");
r2 = new JRadioButton("Yellow");
r3 = new JRadioButton("Green");
r1.addActionListener(this);
r2.addActionListener(this);
r3.addActionListener(this);
add(r1);
add(r2);
add(r3);
bg.add(r1);
bg.add(r2);
bg.add(r3);
r=getBackground();
g=getBackground();
y=getBackground();
r1.addActionListener(this);
r2.addActionListener(this);
r3.addActionListener(this);
repaint();
}
public void actionPerformed(ActionEvent e)
{
if(r1.isSelected()==true)
{
r=Color.red;
g=getBackground();
y=getBackground();
}
else if(r3.isSelected()==true)
{
r=getBackground();
g=Color.green;
y=getBackground();
}
else if(r2.isSelected()==true)
{
r=getBackground();
g=getBackground();
y=Color.yellow;
}
repaint();
}
public void paintComponent(Graphics G)
{
super.paintComponent(G);
G.drawOval(50,50,50,50);
G.drawOval(50,110,50,50);
G.drawOval(50,170,50,50);
G.setColor(r);
G.fillOval(50,50,50,50);
G.setColor(y);
G.fillOval(50,110,50,50);
G.setColor(g);
G.fillOval(50,170,50,50);
}
}
public class MyTraffic{
public static void main(String[]args)
{
JFrame f=new JFrame();
f.setSize(600,480);
traffic1 t=new traffic1();
f.add(t);
f.setVisible(true);
f.setLayout(null);
f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
}
}
