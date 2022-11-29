#include "Author.h"

Author::Author(std::string name, std::string nationality, int age)
{
	this->name = name;
	this->nationality = nationality;
	this->age = age;
}

Author::~Author()
{
	std::cout << "Deleted author";
}

void Author::printData()
{
	std::cout << "    Name: " << name << std::endl;
	std::cout << "    Nationality: " << nationality << std::endl;
	std::cout << "    Age: " << age << std::endl;
}