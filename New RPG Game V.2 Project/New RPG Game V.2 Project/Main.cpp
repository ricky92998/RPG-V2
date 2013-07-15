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

	Entity* Highwayman = new Entity();
	Highwayman->name = "Highwayman";
	Highwayman->health = 50;
	Highwayman->damage = 15;
	Highwayman->defence = 5;
	Highwayman->evasion = .05;
	Highwayman->mana = 0;

	Entity* Hero = new Entity();
	Hero->name = "Hero";
	Hero->health = 100;
	Hero->damage = 30;
	Hero->defence = -20;
	Hero->mana = 100;
	Hero->evasion = .1;

	cout << "Hello..." <<endl << "..." << endl << "Are you there?" << endl << "Good, you're awake, what is your name?" << endl;

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