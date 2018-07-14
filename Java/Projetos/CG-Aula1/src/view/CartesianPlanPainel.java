package view;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.text.DecimalFormat;
import java.util.ArrayList;

import javax.swing.JPanel;

import model.Point2d;

public class CartesianPlanPainel extends JPanel {
	private static final long serialVersionUID = 1L;
	private Point2d resolution;
	private int pixelSize;
        private ArrayList<Point2d> PontosPreenchidos = new ArrayList<>();
        private ArrayList<Point2d> PontosPreenchidosFlood = new ArrayList<>();
        private int xMin, xMax, yMin, yMax;

	public CartesianPlanPainel(Point2d resolution, int pixeSize) {
		this.pixelSize = pixeSize;
		this.resolution = resolution;
		this.setBounds(0, 0, resolution.getX(), resolution.getY());                
        }

	@Override
	public void paintComponent(Graphics g) {
		super.paintComponent(g);
		Graphics2D g2d = (Graphics2D) g;
		paintCartesianPlan(g2d);
                g2d.setColor(Color.red);
                paintQuadrado(g2d);
                paintPoint(g2d);
//                paintTriangulo(g2d);
//                g2d.setColor(Color.black);
//                floodFill(g2d, 4, 2);
//                PontosPreenchidosFlood.clear();
        }
        
        
        private void xMinxMax(){
            xMin = resolution.getX();
            xMax = 0;
            for (Point2d PontosPreenchido : PontosPreenchidos) {
                if (PontosPreenchido.getX() < xMin) xMin = PontosPreenchido.getX();               
                if (PontosPreenchido.getX() > xMax) xMax = PontosPreenchido.getX();
            }
            
        }
        
        private void yMinyMax(){
            yMin = resolution.getY();
            yMax = 0;
            for (Point2d PontosPreenchido : PontosPreenchidos) {
                if (PontosPreenchido.getY() < yMin) yMin = PontosPreenchido.getY();               
                if (PontosPreenchido.getY() > yMax) yMax = PontosPreenchido.getY();
            }
                        
        }
        
        private boolean verificaPonto(Point2d p){
            if(xMin <= p.getX() && p.getX() <= xMax && yMin <= p.getY() && p.getY() <= yMax) return true;
            else return false;
        
        }
        
        private void paintPoint(Graphics2D g2d){
            Point2d p1 = new Point2d();
            
            p1.setX(15);
            p1.setY(10);
            
            xMinxMax();
            yMinyMax();
            if(verificaPonto(p1)){
                g2d.setColor(Color.blue);
                g2d.fillRect((p1.getX() - 1) * pixelSize, resolution.getY() - p1.getY() * pixelSize, pixelSize, pixelSize);
            } else {
                g2d.setColor(Color.black);
                g2d.fillRect((p1.getX() - 1) * pixelSize, resolution.getY() - p1.getY() * pixelSize, pixelSize, pixelSize);                
            }

            p1.setX(2);
            p1.setY(1);
            
            xMinxMax();
            yMinyMax();
            if(verificaPonto(p1)){
                g2d.setColor(Color.blue);
                g2d.fillRect((p1.getX() - 1) * pixelSize, resolution.getY() - p1.getY() * pixelSize, pixelSize, pixelSize);
            } else {
                g2d.setColor(Color.black);
                g2d.fillRect((p1.getX() - 1) * pixelSize, resolution.getY() - p1.getY() * pixelSize, pixelSize, pixelSize);                
            }
            
        }
        
        
        
        private void paintTriangulo(Graphics2D g2d){
            Point2d p1 = new Point2d();
            Point2d p2 = new Point2d();            

            
//            p1.setX(1);
//            p1.setY(1);
//            p2.setX(20);
//            p2.setY(1);
//
//            paintLineDiagonal(g2d, p1, p2);
//            
            p1.setX(20);
            p1.setY(1);
            p2.setX(20);
            p2.setY(15);
            
            paintLineDiagonal(g2d, p1, p2);            

//            p1.setX(1);
//            p1.setY(1);
//            p2.setX(20);
//            p2.setY(15);
//            
//            paintLineDiagonal(g2d, p1, p2);            
        }
        
        private void paintQuadrado(Graphics2D g2d){
            Point2d p1 = new Point2d();
            Point2d p2 = new Point2d();            

            
            p1.setX(10);
            p1.setY(5);
            p2.setX(10);
            p2.setY(25);

            paintLineDiagonal(g2d, p1, p2);
            
            p1.setX(10);
            p1.setY(5);
            p2.setX(35);
            p2.setY(5);
            
            paintLineDiagonal(g2d, p1, p2);

            p1.setX(10);
            p1.setY(25);
            p2.setX(35);
            p2.setY(25);

            paintLineDiagonal(g2d, p1, p2);
            
            p1.setX(35);
            p1.setY(5);
            p2.setX(35);
            p2.setY(25);
            
            paintLineDiagonal(g2d, p1, p2);


        }      
        
        private boolean verificaPreenchido(int x, int y){
            for (int i = 0; i < PontosPreenchidos.size(); i++) {
                if (x == PontosPreenchidos.get(i).getX() && y == PontosPreenchidos.get(i).getY()) {
                    return true;
                }
            }
            
            for (int i = 0; i < PontosPreenchidosFlood.size(); i++) {
                if (x == PontosPreenchidosFlood.get(i).getX() && y == PontosPreenchidosFlood.get(i).getY()) {
                    return true;
                }
            }
            
            if ((x > resolution.getX() / pixelSize) || (y > resolution.getY() / pixelSize) || (x < 1) || (y < 1)){
                return true;
            }
            return false;
        }
        
        private void floodFill(Graphics2D g2d, int x, int y){
//            Point2d p = new Point2d(x, y);
            if (!verificaPreenchido(x, y)) {
                g2d.fillRect((x - 1) * pixelSize, resolution.getY() - y * pixelSize, pixelSize, pixelSize);
                PontosPreenchidosFlood.add(new Point2d(x, y));
                floodFill(g2d, x+1, y);
                floodFill(g2d, x, y+1);
                floodFill(g2d, x-1, y);
                floodFill(g2d, x, y-1);
            }
        }
        
        private void paintLineDiagonal(Graphics2D g2d, Point2d p1, Point2d p2){
            Point2d p = new Point2d();
            int dX, dY, h;
            double hreal, fiX, fiY;
            DecimalFormat df = new DecimalFormat("#");
            DecimalFormat df2 = new DecimalFormat("#.0");
            dX = (p2.getX() - p1.getX());
            dY = (p2.getY() - p1.getY());
            hreal = dX * dX + dY * dY;
            hreal = Double.parseDouble(df.format(Math.sqrt(hreal)));
            h = Integer.parseInt(df.format(hreal));
            fiX = Double.parseDouble(df2.format(dX/hreal).replace(",", "."));
            fiY = Double.parseDouble(df2.format(dY/hreal).replace(",", "."));
            ArrayList<Integer> listaX = new ArrayList<>();           
            ArrayList<Integer> listaY = new ArrayList<>();           
            
            double somaX = p1.getX(), somaY = p1.getY();
//            p.setX(p1.getX());
//            p.setY(p1.getY());
//            PontosPreenchidos.add(p);
            listaX.add(Integer.parseInt(df.format(somaX)));
            listaY.add(Integer.parseInt(df.format(somaY)));
            
            for(int i = 1; i <= h; i++){
                somaX += fiX;
                listaX.add(Integer.parseInt(df.format(somaX)));
                somaY += fiY;
                listaY.add(Integer.parseInt(df.format(somaY)));
            }
            
            for(int i = 0; i <= h; i++){
                Point2d P = new Point2d(listaX.get(i), listaY.get(i));
                PontosPreenchidos.add(P);            
                g2d.fillRect((listaX.get(i) - 1) * pixelSize, resolution.getY() - listaY.get(i) * pixelSize, pixelSize, pixelSize);
            }
            
        }
        
        private void paintLineVertical(Graphics2D g2d, Point2d p1, Point2d p2){
            for(int i = p1.getY(); i <= resolution.getY() / pixelSize - (resolution.getY() / pixelSize - p2.getY()); i++){
                g2d.fillRect((p1.getX() - 1) * pixelSize, resolution.getY() - i * pixelSize, pixelSize, pixelSize);
            }             
        }
        
        private void paintLineHorizontal(Graphics2D g2d, Point2d p1, Point2d p2){
            for(int i = p1.getX() - 1; i < resolution.getX() / pixelSize - (resolution.getX() / pixelSize - p2.getX()); i++){
                g2d.fillRect(i * pixelSize, resolution.getY() - p1.getY() * pixelSize, pixelSize, pixelSize);
            }
        }

	private void paintCartesianPlan(Graphics2D g2d) {
		paintAxisX(g2d);
		paintAxisY(g2d);
	}

	private void paintAxisX(Graphics2D g2d) {
		Point2d p1 = new Point2d();
		Point2d p2 = new Point2d();

		p1.setX(0);
		p2.setX(resolution.getX());

		for (int i = 0; i <= resolution.getY(); i += pixelSize) {
			p1.setY(i);
			p2.setY(i);
			paintLine(g2d, p1, p2);
		}

	}

	private void paintAxisY(Graphics2D g2d) {
		Point2d p1 = new Point2d();
		Point2d p2 = new Point2d();
		p1.setY(0);
		p2.setY(resolution.getY());
		
		for (int i = 0; i <= resolution.getX(); i += pixelSize) {
			p1.setX(i);
			p2.setX(i);
			paintLine(g2d, p1, p2);
		}
	}

	private void paintLine(Graphics2D g2d, Point2d p1, Point2d p2) {
		g2d.drawLine(p1.getX(), p1.getY(), p2.getX(), p2.getY());
	}

}
