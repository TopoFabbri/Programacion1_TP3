#pragma once

#include "AwesomeLibrary.h";

class Sword
{
private:
	std::string name;
	float damage;

public:
	Sword(std::string name, float damage);
	~Sword();

	std::string getName();
	float getDamage();
};