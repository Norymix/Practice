#include "Bird.cpp"
#include "Balloon.cpp"

class actionField{
public:
	Bird bird;
	Balloon Bal;

	void drawField(){
		bird.cord = Bal.ObjectCoordinatesY;
		bird.drawBird();
		Bal.drawBalloon();
	}

	actionField(){
		drawField();
	}
};