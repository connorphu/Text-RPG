#include "Gameplay.h"

void Gameplay::combat(Character& fighter1, Character& fighter2)
{
	while (fighter1.hp > 0 && fighter2.hp > 0) {
		int choice;
		cout << "1. attack" << endl;
		cout << "2. abilities" << endl;
		cout << "3. run" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << fighter1.name << " dealt " << fighter1.str - fighter2.def << " damage." << endl;
			fighter2.hp -= fighter1.str - fighter2.def;
			cout << fighter2.name << "'s HP is now " << fighter2.hp << "." << endl;
			break;
		default:
			break;
		}
	}
	cout << fighter1.hp << endl;
	cout << fighter2.hp << endl;
}
