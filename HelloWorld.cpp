#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class Character{
	private:
	int HP, CP;
	string Name;

	public:

	void State(){
		cout << "Your character when have name "<< Name <<" have " << HP << "HP and "<< CP << "CP" << endl;
	}

	bool Attack(int power){
		if ((CP <=0) && (HP<=0)) return false;
		else
		if (CP<=0) {HP = HP - power; State();}
		else
		if (CP>=0) {CP = CP - power; State();}
		else
		return true;
	}

	Character(int hp, int cp, string name){
		HP = hp;
		CP = cp;
		Name = name;
	}
};


int main(){
	Character Norymix(5000, 3000, "Norymix");
	int damage = 200;
	/*cout << "Your damage = ";
	cin >> damage;*/
	while (Norymix.Attack(damage));
	return 0;
}
