#pragma once
#include <string>
#include <iostream>
#include <random>

using namespace std;

class Character {
public:
	Character();
	Character(string inputName);

	static random_device rd;

	string getName();
	void setName(string);
	int getLevel();
	void setLevel(int);
	int getExp();
	void setExp(int);
	int getHp();
	void setHp(int);
	int getStr();
	void setStr(int);
	int getDef();
	void setDef(int);
	int getIntel();
	void setIntel(int);
	int getDex();
	void setDex(int);
	int getLuk();
	void setLuk(int);

	void takeDamage(int);


private:
	string name;
	int level;
	int exp;
	int hp;
	int str;
	int def;
	int intel;
	int dex;
	int luk;


};