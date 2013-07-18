#include "Entity.h"
#include <stdlib.h>
#include <time.h>


Entity::Entity(void)
{
}


Entity::~Entity(void)
{
}

void Entity::mtakeDamage(int incomingDamage)
{
	long secs = time(NULL);
	srand(secs);
	int speed = rand() % 100 + 1;
	int dmg = incomingDamage - mdefence;
	if(dmg < 0)
	{
		dmg = 0;
	}
	if(speed<mevasion)
	{
		dmg = 0;
		cout << "The attack has been evaded." << endl;
	}
	mhealth -= dmg;
	cout << mname << " took " << dmg << " damage." << endl;
}
void Entity::takeDamage(int incomingDamage)
{
	long secs = time(NULL);
	srand(secs);
	int speed = rand() % 100 + 1;
	int dmg = incomingDamage - defence;
	if(dmg < 0)
	{
		dmg = 0;
	}
	if(speed<evasion)
	{
		dmg = 0;
		cout << "The attack has been evaded." << endl;
	}
	health -= dmg;
	cout << name << " took " << dmg << " damage." << endl;
}

void Entity::takeFireball(Entity* player)
{
	if(player->mana > 49)
	{
		player->mana = player->mana - 50;
		mhealth=mhealth-50;
		cout << "Enemy has " << mhealth << " health." <<endl;
		cout << "You have " << player->mana << " mana." << endl;
		system("pause");
	}
	else
	{
		cout << "You don't have enough mana... scrub" <<endl;
	}
}
void Entity::healing()
{
	if(mana < 30)
	{
		system("pause");
	}
	health += 50;
	mana = mana - 50;
	cout << "Your health is " << health << endl;
	cout << "Your mana is " << mana << endl;
}