#pragma once

#include "AwesomeLibrary.h"

class Shield
{
private:
	std::string name;
	float armor;

public:
	Shield(std::string name, float armor);
	~Shield();

	std::string getName();
	float getArmor();
};