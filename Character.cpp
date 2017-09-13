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