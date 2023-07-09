#include "Shield.h"

Shield::Shield(std::string name, float armor)
{
	this->name = name;
	this->armor = armor;
}

Shield::~Shield()
{
}

std::string Shield::getName()
{
	return name;
}

float Shield::getArmor()
{
	return armor;
}