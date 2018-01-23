#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Quadrilateral{
public:
	string name;
	int A, B, C, D;
	int Perimeter(){
		return A+B+C+D;
	}

	void set(){
		A = 1;
		B = 1;
		C = 1;
		D = 1;
	}
	
	//Quadrilateral(bool value){}

	Quadrilateral(){
		set();
		cout << "Perimetr = " << Perimeter() << endl;
		cout << "Parents class!" << endl;
	}
};

class Square: public Quadrilateral{
public:
	void set(){
		name = "Square";
		//cout << name << endl;
		Quadrilateral::set();
		cout << "Perimetr = " << Perimeter() << endl;
	}

	Square():Quadrilateral(){
		cout << "Not parents class!" << endl;
	}
};

int main(){
	//Quadrilateral QU;
	Square SQ;
	return 0;
}

