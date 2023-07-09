#include "Knight.h"

Knight::Knight(std::string name, float maxHealth, float baseDamage, float baseArmor)
{
	this->name = name;
	this->maxHealth = maxHealth;
	curHealth = maxHealth;
	this->baseDamage = baseDamage;
	this->baseArmor = baseArmor;
}

Knight::~Knight()
{
	delete sword;
	delete shield;
}

void Knight::setSword(Sword* sword)
{
	this->sword = sword;
}

void Knight::setShield(Shield* shield)
{
	this->shield = shield;
}

void Knight::attack(Knight* enemy)
{
	enemy->receiveDamage(baseDamage + sword->getDamage());
}

void Knight::receiveDamage(float damage)
{
	clearScreen();

	damage -= (baseArmor + shield->getArmor());
	curHealth -= damage;
	std::cout << name << " recieved " << damage << " damage.\n";
	std::cout << "Health left: " << curHealth << std::endl;

	system("pause");
}

std::string Knight::getName()
{
	return name;
}

float Knight::getCurrentHealth()
{
	return curHealth;
}

bool Knight::isAlive()
{
	return curHealth > 0;
}