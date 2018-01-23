#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Character{
private:
	int HP, CP;
	string name;
public:
	void set(int hp, int  cp, string Name){
		HP = hp;
		CP = cp;
		name = Name;
	}

};

class Person: public Character{};
class Mob: public Character{};

class Attack{
public:
	void started(Person Per, Mob Mo){
		cout << "Attack start!\n";
	}
};

int main(){
	Person Per;
	Per.set(1000, 1000, "Norymix");
	Mob Mo;
	Mo.set(1000, 1000, "Kentavr");
	Attack start;
	start.started(Per, Mo);
	return 0;
}

