#include "Entity.h"
#include <stdlib.h>
#include <time.h>


Entity::Entity(void)
{
}


Entity::~Entity(void)
{
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

void Entity::takeFireball()
{
	health=health-50;
	cout << "Enemy has " << health << " health." <<endl;
}
void Entity::useFireball()
{
	if(mana < 50)
	{
		system("pause");
	}
	mana = mana - 50;
	cout << "You have " << mana << " mana." << endl;
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
void Entity::death()
{
	if(alive = 0)
	{
		cout << "You are dead." << endl;
		system("pause");
	}
}
bool Entity::isDead()
{
	return(health < 1);
}