#include <GL/freeglut.h>
#include <GL/gl.h>
#include <math.h>
#include "linker.h"

using namespace std;

Balloon Ba;
void processSpecialKeys(int key, int x, int y);
//точки координат находятся в центре окна

int main( int argc, char *argv[] ) { 
	glutInit( &argc, argv ); //инициализация окна
	setWindow();
	Draw();
	Ba.drawBalloon();
	glutDisplayFunc( Draw ); // вызываем метод отрисовки изображения
	glutSpecialFunc(processSpecialKeys);
	glutMainLoop(); //включает цикл обработки событий
	return 0;
}
// g++ test.cpp -lGL -lGLU -lGLEW -lglut    для компила этого проэкта
//______________________________________________________________________

void processSpecialKeys(int key, int x, int y) {
	switch(key) {
		case GLUT_KEY_LEFT:
				Ba.motionLeft();
				Draw();
				break;
		case GLUT_KEY_RIGHT:
				Ba.motionRight();
				Draw();
				break;
		case GLUT_KEY_UP:
				Ba.motionUp();
				Draw();
				break;
		case GLUT_KEY_DOWN:
				Ba.motionDown();
				Draw();
				break;
	}
}