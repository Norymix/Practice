class Rope{
public:
		void DrawRope(double X, double Y, double A){
		glColor3f(0.0, 0.0, 0.0);
		glBegin(GL_LINES); //left
			glVertex2d(X - A, Y);
			glVertex2d(X + A - (A * 1.5), Y - A*2);
		glEnd();

		glBegin(GL_LINES); //right 
			glVertex2d(X + A, Y);
			glVertex2d(X + (A / 2), Y - A *2);
		glEnd();
	} 
};