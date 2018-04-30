#include <time.h>

class Bird{
public:
	double cordX = 0.9, cordY;
	double cord;
	void drawBird(){
		glColor3f(0.0, 0.0, 0.0);
		glBegin(GL_TRIANGLES); //left
			glVertex2d(cordX, cordY);
			glVertex2d(cordX+0.08, cordY+0.02);
			glVertex2d(cordX+0.08, cordY-0.02);
		glEnd();
	}

	void motionBird(){
		if (cordX<-1-0.08){
			cordX = 0.9;
			cordY = cord - 0.2;
		}
		else
			cordX-=0.003;
	}

	Bird(){ 
		drawBird();
	}
};