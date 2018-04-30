#include "Circle.cpp"
#include "Rope.cpp"
#include "Basket.cpp"

class Balloon: public Circle, public Rope, public Basket{
public:
	double ObjectCoordinatesX = 0.5;
	double ObjectCoordinatesY = 0;
	double a = 0.15; // радиус нашего шара
	void drawBalloon(){
		glColor3f( 7.0f, 7.0f, 7.0f ); //устанавливает цвет прорисовки
		DrawCircle(ObjectCoordinatesX, ObjectCoordinatesY, a);
		DrawRope(ObjectCoordinatesX, ObjectCoordinatesY, a);
		DrawBasket(ObjectCoordinatesX, ObjectCoordinatesY, a);
	}

	void motionRight(){
		ObjectCoordinatesX+=0.005;
		if (ObjectCoordinatesX>1-a) ObjectCoordinatesX-=0.01;
		drawBalloon();
	}

	void motionLeft(){
		ObjectCoordinatesX-=0.005;
		if (ObjectCoordinatesX<-1+a) ObjectCoordinatesX+=0.01;
		drawBalloon();
	}

	void motionUp(){
		ObjectCoordinatesY+=0.005;
		if (ObjectCoordinatesY>1-a) ObjectCoordinatesY-=0.01;
		drawBalloon();
	}

	void motionDown(){
		ObjectCoordinatesY-=0.005;
		if (ObjectCoordinatesY<-1+a/2+a*2) ObjectCoordinatesY+=0.01;
		drawBalloon();
	}

	Balloon(){
		drawBalloon();
	}
};