#include "Sword.h"

Sword::Sword(std::string name, float damage)
{
	this->name = name;
	this->damage = damage;
}

Sword::~Sword()
{
}

std::string Sword::getName()
{
	return name;
}

float Sword::getDamage()
{
	return damage;
}