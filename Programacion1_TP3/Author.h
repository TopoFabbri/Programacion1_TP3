#pragma once

#include <iostream>

class Author
{
private:
	std::string name;
	std::string nationality;
	int age;

public:
	Author(std::string name, std::string nationality, int age);
	~Author();

	void printData();
};