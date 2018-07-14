package model;

public class Point2d {
	private int x;
	private int y;

	public Point2d() {
	}

	public Point2d(int x, int y) {
		this.x = x;
		this.y = y;
	}

	public int getX() {
		return x;
	}

	public void setX(int x) {
		this.x = x;
	}

	public int getY() {
		return y;
	}

	public void setY(int y) {
		this.y = y;
	}

	public Point2d getResolution(int pixelSize) {
		int newX = this.getX() * pixelSize;
		int newY = this.getY() * pixelSize;
		return new Point2d(newX, newY);
	}
}
