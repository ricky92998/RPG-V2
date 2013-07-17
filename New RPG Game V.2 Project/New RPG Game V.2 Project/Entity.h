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
	int maxMana;
	int maxHealth;

	int mhealth;
	int mmana;
	string mname;
	int mdamage;   //damage this entity can cause
	int mevasion;
	int mdefence;
	

	void mtakeDamage(int incomingDamage);
	void takeDamage(int incomingDamage);
	void takeFireball();
	void useFireball();
	void healing();
};

