#include "Gameplay.h"

int main() {
	Marksman mark("Mark");
	Marksman mac("Mac");
	Gameplay::combat(mark, mac);
	cout << mark.getName() << endl;
	cout << mark.getHp() << endl;
	cout << mac.getName() << endl;
	cout << mac.getHp() << endl;
}