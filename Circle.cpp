class Circle{
private:
	int n = 500;
public:
	void DrawCircle(double X, double Y, double A){
		glBegin(GL_LINE_LOOP);
			glColor3f(1.0, 0.0, 0.0);
			for (int i = 0; i<n; i++){
				double x = X + A * sin(2*M_PI*i/n);
				double y = Y + A * cos(2*M_PI*i/n);
				glVertex2d(x, y); 
				glBegin(GL_LINES); //left
					glVertex2d(X, Y);
					glVertex2d(x, y);
				glEnd();
			}
		glEnd();
	}
};