#pragma once
#include <string>

#include "Author.h"

class Book
{
private:
	std::string name;
	Author* author;
	std::string isbn;

public:
	Book(std::string name, Author* author, std::string isbn);
	~Book();

	void printData();
};