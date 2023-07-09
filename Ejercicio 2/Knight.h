#pragma once

#include "Sword.h"
#include "Shield.h"

class Knight
{
private:
	Sword* sword;
	Shield* shield;
	std::string name;
	float maxHealth;
	float curHealth;
	float baseDamage;
	float baseArmor;

public:
	Knight(std::string name, float maxHealth, float baseDamage, float baseArmor);
	~Knight();

	void setSword(Sword* sword);
	void setShield(Shield* shield);
	void attack(Knight* enemy);
	void receiveDamage(float damage);
	std::string getName();
	float getCurrentHealth();
	bool isAlive();
};