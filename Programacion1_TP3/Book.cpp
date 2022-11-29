#include "Book.h"

Book::Book(std::string name, Author* author, std::string isbn)
{
	this->name = name;
	this->author = author;
	this->isbn = isbn;
}

Book::~Book()
{
	delete author;
	std::cout << "Deleted Book";
}

void Book::printData()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Author:" << std::endl;
	author->printData();
	std::cout << "Isbn: " << isbn << std::endl << std::endl << std::endl;
}