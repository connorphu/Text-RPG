#include "Gameplay.h"

int main() {
	Marksman mark("Mark");
	Marksman mac("Mac");
	Gameplay::combat(mark, mac);
	cout << mark.hp << endl;
	cout << mac.hp << endl;
}