#include "Game.h"

Game::Game()
{
	isPlaying = false;

	for (int i = 0; i < 2; i++)
	{
		std::string name;
		std::string nationality;
		int age;

		clearScreen();
		std::cout << "Author " << i + 1 << "\n\nName: ";
		std::cin >> name;

		clearScreen();
		std::cout << "Author " << i + 1 << "\n\nNationality: ";
		std::cin >> nationality;

		clearScreen();
		std::cout << "Author " << i + 1 << "\n\nAge: ";
		std::cin >> name;

		authors[i] = new Author(name, nationality, age);
	}

	for (int i = 0; i < 3; i++)
	{
		std::string name;
		std::string isbn;
		int authorInd;

		clearScreen();
		std::cout << "Book " << i + 1 << "\n\nName: ";
		std::cin >> name;

		clearScreen();
		do
		{
			goToCoordinates({ 0, 0 });
			std::cout << "Author " << i + 1 << "\n\n";
			for (int j = 0; j < 2; j++)
			{
				std::cout << j + 1 << ":\n";
				authors[j]->printData();
			}

			authorInd = getKey(true) - 49;
		}
		while (authorInd != 0 && authorInd != 1);

		clearScreen();
		std::cout << "Author " << i + 1 << "\n\nIsbn: ";
		std::cin >> isbn;

		books[i] = new Book(name, authors[authorInd], isbn);
	}
}

Game::~Game()
{
	for (int i = 0; i < 2; i++)
	{
		delete authors[i];
	}

	for (int i = 0; i < 2; i++)
	{
		delete books[i];
	}

	std::cout << "Deleted game";
}

void Game::play()
{
	if (!isPlaying)
		start();

	update();

	draw();
}

void Game::start()
{
	isPlaying = true;
	clearScreen();
	hideCursor();
}

void Game::update()
{
	int key = getKey(false);

	if (key == static_cast<int>(' '))
		isPlaying = false;
}

void Game::loop()
{
	do
	{
		play();
	} while (isPlaying);
}

void Game::draw()
{
	goToCoordinates({ 0, 0 });

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Book " << i + 1 << "\n\n";
		books[i]->printData();
	}
}