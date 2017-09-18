#include "Gameplay.h"

void Gameplay::combat(Character& fighter1, Character& fighter2)
{
	cout << "You encounter " << fighter2.getName() << endl;
	while (fighter1.getHp() > 0 && fighter2.getHp() > 0) {
		int choice;
		cout << "You have " << fighter1.getHp() << endl;
		cout << fighter2.getName() << " has " << fighter2.getHp() << endl;
		cout << "1. attack" << endl;
		cout << "2. abilities" << endl;
		cout << "3. items" << endl;
		cout << "4. run" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "You dealt " << fighter1.getStr() - fighter2.getDef() << " damage." << endl;
			fighter2.takeDamage(fighter1.getStr() - fighter2.getDef());
			cout << fighter2.getName() << "'s HP is now " << fighter2.getHp() << "." << endl;
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		default:
			break;
		}
	}
	cout << fighter1.getHp() << endl;
	cout << fighter2.getHp() << endl;
}
