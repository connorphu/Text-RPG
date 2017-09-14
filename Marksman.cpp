#include "Marksman.h"

Marksman::Marksman(string inputName) : Character(inputName)
{
	level = 1;
	exp = 0;
	hp = 45;
	str = 10;
	def = 5;
	intel = 5;
	dex = 25;
	luk = 5;
}

int Marksman::poisonArrow() {
	return 0;
}
