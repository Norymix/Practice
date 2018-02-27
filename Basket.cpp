class Basket{
public:
	void DrawBasket(double X, double Y, double A){
		glBegin(GL_QUADS);
			glColor3f(0.0, 1.0, 0.0);
			glVertex2d(X + A - (A * 1.5), Y - A*2);
			glVertex2d(X + (A / 2), Y - A*2);
			glVertex2d(X + (A / 2), Y - A*2 - A / 2);
			glVertex2d(X + A - (A * 1.5), Y - A*2 - A / 2);
		glEnd();
	}
};