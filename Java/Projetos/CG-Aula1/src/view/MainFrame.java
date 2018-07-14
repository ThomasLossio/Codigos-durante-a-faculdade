package view;

import java.awt.BorderLayout;

import javax.swing.JFrame;

import model.Point2d;

public class MainFrame extends JFrame {

	private static final long serialVersionUID = 1L;
	private Point2d plan2d;

        
	public static void main(String[] args) {

		int pixelSize = 20;
		Point2d resolution = new Point2d(40, 30);
		Point2d plan2d = resolution.getResolution(pixelSize);

		MainFrame mainFrame = new MainFrame("Plano Cartesiano", resolution.getResolution(pixelSize));
		CartesianPlanPainel cartesianPlanPainel = new CartesianPlanPainel(plan2d, pixelSize);
		mainFrame.getContentPane().add(cartesianPlanPainel);
	}

	public MainFrame(String titulo, Point2d point2d) {
		this.plan2d = point2d;
		initGui();
	}

	private void initGui() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		getContentPane().setLayout(new BorderLayout());
                
		setBounds(0, 0, plan2d.getX() + 20, plan2d.getY() + 40);
		setVisible(true);
	}

}
