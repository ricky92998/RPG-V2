#include "Entity.h"
#include <iostream>
#include <string>
using namespace std;
void main()
{

	cout << "RPG Hero V.1" << endl << endl << endl;
	cout << "1.Start Game" <<endl;
	
	int selections;
	cin >> selections;

	if(selections == 1)
	{
		cout << "Your adventure begins here..." <<endl;
	}
	cout << "Hello..." <<endl << "..." << endl << "Are you there?" << endl << "Good, you're awake, what is your name?" << endl;
	string heroName;
	cin >> heroName;

	cout << "Ahh! You are " << heroName << "." << endl;
	cout << "What type of person are you are you?" <<endl;
	cout << "1. Orc" << endl;
	cout << "2. High Elf" << endl;
	cout << "3. Knight" << endl;
	cout << "4. Paladin" << endl;
	cout << "5. Fish Man" << endl;
	

	cin >> selections;
	if(selections == 1)
	{
		Entity* Orc = new Entity();
		Orc->health = 150;
		Orc->damage = 40;
		Orc->defence = 15;
		Orc->mana = 0;
		Orc->evasion = 0;
		cout << "I can tell, you probably lift." << endl;
	}
	if(selections == 2)
	{
		Entity* High_Elf = new Entity();
		High_Elf->health = 80;
		High_Elf->damage = 20;
		High_Elf->defence = 5;
		High_Elf->mana = 200;
		High_Elf->evasion = 30;
		cout << "High Elves aren't common around here, I hope you can stay safe from the dangers of the Human lands." <<endl;
	}
	if(selections == 3)
	{
		Entity* Knight = new Entity();
		Knight->health = 100;
		Knight->damage = 30;
		Knight->defence = 20;
		Knight->mana = 0;
		Knight->evasion = 0;
		cout << "I am honored to see a Knight from the guards watch." << endl;
	}
	if(selections == 4)
	{
		Entity* Paladin = new Entity();
		Paladin->health = 100;
		Paladin->damage = 35;
		Paladin->defence = 10;
		Paladin->mana = 100;
		Paladin->evasion = 10;
		cout<< "Oh, we have a Paladin from the silver wastes." << endl;
	}
	if(selections == 5)
	{
		Entity* Fish_Man = new Entity();
		Fish_Man->health = 100;
		Fish_Man->damage = 1;
		Fish_Man->defence = 0;
		Fish_Man->mana = 1000;
		Fish_Man->evasion = 40;
		cout << "I see, you are a Fish Man of the Tin Islands." << endl;
	}


	cout << "You must leave this area at once. Around here, visitors aren't well liked." << endl << "You may take one item as a gift from me." << endl;
	cout << "1. A Redsteel forged sword." << endl;
	cout << "2. A fine piece of chainmail." << endl;
	cout << "3. A pair of enchanted shoes." << endl;

	cin >> selections;

	if(selections == 1)
	{
		Entity* damage = damage + 10;
	}
	if(selections == 2)
	{
		Entity* defence = defence + 5;
	}
	if(selections == 3)
	{
		Entity* Evasion = Evasion + 15;
	}

	//EXAMPLE OF FIGHT//
	//cout << "A highway man has came out of the wood and wants to fight." << endl;
	//cout << "Press 1 to Attack" <<endl;
	//cout << "Press 2 to Throw Fireball" << endl;
	//cout << "Press 3 to Heal" << endl;

	//cin >> selections;

	//if(selections == 1)
	//{
		//Highwayman->takeDamage(Hero->damage);
	//}
	//if(selections == 2)
	//{
		//Highwayman->takeFireball();
		//Hero->useFireball();
	//}
	//else
	//{
		//Hero->healing();
	//}
	system("pause");
}