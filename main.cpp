#include <GL/freeglut.h>
#include <GL/gl.h>
#include <math.h>
#include "linker.h"

using namespace std;

actionField action;
void processSpecialKeys(int key, int x, int y);
void changeBird(int value);
void reDraw();
//точки координат находятся в центре окна

int main( int argc, char *argv[] ) { 
	
	glutInit( &argc, argv ); //инициализация окна
	setWindow();
	Draw();
	action.drawField();
	glutTimerFunc(20, changeBird, 0);
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
				action.Bal.motionLeft();
				break;
		case GLUT_KEY_RIGHT:
				action.Bal.motionRight();
				break;
		case GLUT_KEY_UP:
				action.Bal.motionUp();
				break;
		case GLUT_KEY_DOWN:
				action.Bal.motionDown();
				break;
	}
}

void changeBird(int value){
		action.bird.motionBird();
		action.drawField();
		Draw();
		glutTimerFunc(20, changeBird, 0); // Setup next time
}