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


	Entity* player = new Entity();
	cin >> player->name;
	
	cout << "Ahh! You are " << player->name << "." << endl;
	cout << "What type of person are you are you?" <<endl;
	cout << "1. Orc" << endl;
	cout << "2. High Elf" << endl;
	cout << "3. Knight" << endl;
	cout << "4. Paladin" << endl;
	cout << "5. Fish Man" << endl;
	

	cin >> selections;
	if(selections == 1)
	{
		player->health = 150;
		player->damage = 40;
		player->defence = 15;
		player->mana = 0;
		player->evasion = 0;
		cout << "I can tell, you probably lift." << endl;
	}
	if(selections == 2)
	{
		player->health = 80;
		player->damage = 20;
		player->defence = 5;
		player->mana = 200;
		player->evasion = 30;
		cout << "High Elves aren't common around here, I hope you can stay safe from the dangers of the Human lands." <<endl;
	}
	if(selections == 3)
	{
		player->health = 100;
		player->damage = 30;
		player->defence = 20;
		player->mana = 0;
		player->evasion = 0;
		cout << "I am honored to see a Knight from the guards watch." << endl;
	}
	if(selections == 4)
	{
		player->health = 100;
		player->damage = 35;
		player->defence = 10;
		player->mana = 100;
		player->evasion = 10;
		cout<< "Oh, we have a Paladin from the silver wastes." << endl;
	}
	if(selections == 5)
	{
		player->health = 100;
		player->damage = 1;
		player->defence = 0;
		player->mana = 1000;
		player->evasion = 40;
		cout << "I see, you are a Fish Man of the Tin Islands." << endl;
	}


	cout << "You must leave this area at once. Around here, visitors aren't well liked." << endl << "You may take one item as a gift from me." << endl;
	cout << "1. A Redsteel forged sword." << endl;
	cout << "2. A fine piece of chainmail." << endl;
	cout << "3. A pair of enchanted shoes." << endl;

	cin >> selections;

	if(selections == 1)
	{
		player->damage += 10;
	}
	if(selections == 2)
	{
		player->defence += 5;
	}
	if(selections == 3)
	{
		player->evasion += 15;
	}
	cout << "Good choice, run through the back door and into the forest. Don't stop until you see the city of the North- Helmsguard." <<endl <<endl;
	cout << "The forest is dence with trees and shrubery. Suddenly you see a mutated squirrel attack." <<endl <<endl;
	
	Entity* monster = new Entity;
	monster->mhealth = 70;
	monster->mdamage = 30;
	monster->mdefence = 5;
	monster->mevasion = 15;
	monster->mmana = 0;
	monster->mname = "Squirrel";

	player->maxHealth = player->health;
	player->maxMana = player->mana;
	
	while(monster->mhealth> 1 && player->health > 1)
	{
		cout << "Your health is " << player->health << endl << "Your mana is " << player->mana << endl;
		cout << "Enemy's health is " << monster->mhealth << endl;
		cout << "1. Attack" << endl;
		cin >> selections;
		if(selections == 1)
		{
			monster->mtakeDamage(player->damage);
		}
		player->takeDamage(monster->mdamage);
	}
	if(monster->mhealth < 1)
	{
		cout << "You have killed " << monster->mname << endl;
		player->health = player->maxHealth;
		player->mana = player->maxMana;
		cout << "Your health and mana has been restored" << endl;
	}
	if(player->health < 1)
	{
		cout << "You have died!" << endl;
		system("pause");
		exit(0);
	}
	cout << "LEVEL 2" << endl << "Pick an attribute to increase!" << endl;
	cout << "1.Health" << endl;
	cout << "2.Damage" << endl;
	cout << "3.Defence" << endl;
	cout << "4.Evasion" << endl;

	cin >> selections;
	
	if(selections == 1)
	{
		player->health += 20;
	}
	if(selections == 2)
	{
		player->damage += 15;
	}
	if(selections == 3)
	{
		player->defence += 5;
	}
	if(selections == 4)
	{
		player->evasion += 5;
	}
	cout << "You continue to walk through the forest." << " You see Helmsguard in the distance." << " You decide to walk on the road so you don't get lost." << endl;
	cout << "Suddenly you are attacked by a robber!" <<endl;

	monster->mhealth = 100;
	monster->mname = "Robber";
	monster->mdamage = 30;
	monster->mevasion = 15;
	monster->mdefence = 0;
	
	player->maxHealth = player->health;
	player->maxMana = player->mana;

	while(monster->mhealth> 1 && player->health > 1)
	{
		cout << "Your health is " << player->health << endl << "Your mana is " << player->mana << endl;
		cout << "Enemy's health is " << monster->mhealth << endl;
		cout << "1. Attack" << endl;
		cin >> selections;
		if(selections == 1)
		{
			monster->mtakeDamage(player->damage);
		}
		player->takeDamage(monster->mdamage);
	}
	if(monster->mhealth < 1)
	{
		cout << "You have killed " << monster->mname << endl;
		player->health = player->maxHealth;
		player->mana = player->maxMana;
		cout << "Your health and mana has been restored" << endl;
	}
	if(player->health < 1)
	{
		cout << "You have died!" << endl;
		system("pause");
		exit(0);
	}
	cout << "The town wans't far away, it was giant and there were traders stands everywhere. You walk into town." << endl << endl;
	cout << "Hello, I am a friend, take these books" << endl << "You have aquired the book of fire!" << endl <<endl;
	cout << "You have learned the Spell Fireball!" << endl;
	cout << "You keep walking through the market, and see a wall postered with faces of outlaws." <<endl;
	cout << "You notice the largest poster in the middle, it is an outlaw that has killed many people." <<endl;
	cout << "The bounty is......" << endl << "................" << endl << "A place on the knights guard." <<endl;
	cout << "The knights guard is the most prestigous position for a warrior in all of the kingdom." << endl;
	cout << "The outlaw is far to the North in the icy mountains." <<endl;
	cout << "Before you leave, you should buy something from the shop." << endl;
	cout << "1.Sword Upgrade" << endl;
	cout << "2.Shield" << endl;
	cout << "3.Platemail" << endl;

	cin >> selections;

	if(selections == 1)
	{
		player->damage += 10;
	}
	if(selections == 2)
	{
		player->defence += 10;
	}
	if(selections == 3)
	{
		player->health += 30;
	}

	cout << "You leave the town, and move toward the mountains of the North." << endl;
	cout << "It is cold and dry in the North, there are many dangerous-" <<endl;
	cout << "A mad polar bear appears!" << endl;

	monster->mhealth = 80;
	monster->mdamage = 20;
	monster->mdefence = 20;
	monster->mevasion = 0;
	monster->mname = "Polar Bear";

	player->maxHealth = player->health;
	player->maxMana = player->mana;

	while(monster->mhealth> 1 && player->health > 1)
	{
		cout << "Your health is " << player->health << endl << "Your mana is " << player->mana << endl;
		cout << "Enemy's health is " << monster->mhealth << endl;
		cout << "1. Attack" << endl;
		cout << "2.Fireball:requires 50 mana"<<endl;
		cin >> selections;
		if(selections == 1)
		{
			monster->mtakeDamage(player->damage);
		}
		if(selections == 2)
		{
			monster->takeFireball();
			player->useFireball();
		}
		player->takeDamage(monster->mdamage);
	}
	if(monster->mhealth < 1)
	{
		cout << "You have killed " << monster->mname << endl;
		player->health = player->maxHealth;
		player->mana = player->maxMana;
		cout << "Your health and mana has been restored" << endl;
	}
	if(player->health < 1)
	{
		cout << "You have died!" << endl;
		system("pause");
		exit(0);
	}
cout << "LEVEL 2" << endl << "Pick an attribute to increase!" << endl;
	cout << "1.Health" << endl;
	cout << "2.Damage" << endl;
	cout << "3.Defence" << endl;
	cout << "4.Evasion" << endl << endl;

	cin >> selections;
	
	if(selections == 1)
	{
		player->health += 20;
	}
	if(selections == 2)
	{
		player->damage += 15;
	}
	if(selections == 3)
	{
		player->defence += 5;
	}
	if(selections == 4)
	{
		player->evasion += 5;
	}

	cout << "You learned healing" << endl << endl;

	cout << "You keep walking to the North in search of the unnamed man." <<endl <<endl;
	cout << "You are ambushed by a Wizard." << endl;
	
	monster->mhealth = 300;
	monster->mdefence = 0;
	monster->mdamage = 30;
	monster->mname = "Wizard";
	monster->mevasion = 10;

	player->maxHealth = player->health;
	player->maxMana = player->mana;

	while(monster->mhealth> 1 && player->health > 1)
	{
		cout << "Your health is " << player->health << endl << "Your mana is " << player->mana << endl;
		cout << "Enemy's health is " << monster->mhealth << endl;
		cout << "1. Attack" << endl;
		cout << "2.Fireball:requires 50 mana"<<endl;
		cin >> selections;
		if(selections == 1)
		{
			monster->mtakeDamage(player->damage);
		}
		if(selections == 2)
		{
			monster->takeFireball();
			player->useFireball();
		}
		player->takeDamage(monster->mdamage);
	}
	if(monster->mhealth < 1)
	{
		cout << "You have killed " << monster->mname << endl;
		player->health = player->maxHealth;
		player->mana = player->maxMana;
		cout << "Your health and mana has been restored" << endl;
	}
	if(player->health < 1)
	{
		cout << "You have died!" << endl;
		system("pause");
		exit(0);
	}

	system("pause");
}