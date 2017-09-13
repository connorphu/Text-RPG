#pragma once
#include <string>
#include <iostream>
#include <random>

using namespace std;

class Character {
public:
	Character();
	Character(string inputName);

	string name;
	int hp;
	int atk;
	int def;
	int intel;
	int dex;
	int luk;

	string getName();
};