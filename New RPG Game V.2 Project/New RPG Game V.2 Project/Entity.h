#pragma once
#include <iostream>
#include <string>
using namespace std;
class Entity
{
public:
	Entity(void);
	~Entity(void);

	int health;
	int mana;
	string name;
	int damage;   //damage this entity can cause
	int evasion;
	int defence;
	bool alive;

	void takeDamage(int incomingDamage);
	void takeFireball();
	void useFireball();
	void healing();
	void death();
	bool isDead();
};

