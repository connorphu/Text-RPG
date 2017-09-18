#include "Character.h"

Character::Character() {
	name = "Default";
}

Character::Character(string inputName) {
	name = inputName;
}

string Character::getName() {
	return name;
}

void Character::setName(string inputName)
{
	name = inputName;
}

int Character::getLevel()
{
	return level;
}

void Character::setLevel(int inputLevel)
{
	level = inputLevel;
}

int Character::getExp()
{
	return exp;
}

void Character::setExp(int inputExp)
{
	exp = inputExp;
}

int Character::getHp()
{
	return hp;
}

void Character::setHp(int inputHp)
{
	hp = inputHp;
}

int Character::getStr()
{
	return str;
}

void Character::setStr(int inputStr)
{
	str = inputStr;
}

int Character::getDef()
{
	return def;
}

void Character::setDef(int inputDef)
{
	def = inputDef;
}

int Character::getIntel()
{
	return intel;
}

void Character::setIntel(int inputIntel)
{
	intel = inputIntel;
}

int Character::getDex()
{
	return dex;
}

void Character::setDex(int inputDex)
{
	dex = inputDex;
}

int Character::getLuk()
{
	return luk;
}

void Character::setLuk(int inputLuk)
{
	luk = inputLuk;
}

void Character::takeDamage(int dmg)
{
	this->hp -= dmg;
}
