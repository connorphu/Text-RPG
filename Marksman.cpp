#include "Marksman.h"

Marksman::Marksman(string inputName) : Character(inputName)
{
	this->setLevel(1);
	this->setExp(0);
	this->setHp(45);
	this->setStr(10);
	this->setDef(5);
	this->setIntel(5);
	this->setDex(25);
	this->setLuk(5);
}

int Marksman::poisonArrow() {
	return 0;
}
