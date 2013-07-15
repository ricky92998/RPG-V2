#include "Entity.h"


Entity::Entity(void)
{
}


Entity::~Entity(void)
{
}

void Entity::takeDamage(int incomingDamage)
{
	int dmg = incomingDamage - defence;
	if(dmg < 0)
	{
		dmg = 0;
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
	mana = mana - 50;
	cout << "You have " << mana << " mana." << endl;
}
void Entity::healing()
{
	health += 50;
	mana = mana - 50;
	cout << "Your health is " << health << endl;
	cout << "Your mana is " << mana << endl;
}
void Entity::death()
{
	if(health < 1)
	{
		cout << "You are dead." << endl;
		system("pause");
	}
}
bool Entity::isDead()
{
	return(health < 1);
}