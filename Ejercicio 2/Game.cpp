#include "Game.h"

Game::Game()
{
	isPlaying = false;

	knights[0] = new Knight("Arthur", 100, 20, 10);
	knights[1] = new Knight("Lancelot", 120, 15, 15);
}

Game::~Game()
{
}

void Game::play()
{
	if (!isPlaying)
		start();

	update();
}

void Game::start()
{
	isPlaying = true;
	clearScreen();
	hideCursor();

	Sword* sword = new Sword("Sword 1", 40);
	Sword* sword2 = new Sword("Sword 2", 30);

	Shield* shieldnt = new Shield("No shield", 0);
	Shield* shield = new Shield("Shield", 20);

	knights[0]->setSword(sword);
	knights[1]->setSword(sword2);

	knights[0]->setShield(shieldnt);
	knights[1]->setShield(shield);
}

void Game::update()
{
	knights[0]->attack(knights[1]);
	knights[1]->attack(knights[0]);

	for (int i = 0; i < 2; i++)
	{
		if (!knights[i]->isAlive())
		{
			clearScreen();
			std::cout << knights[i]->getName() << " died, "
				<< knights[i == 0 ? 1 : 0]->getName() << " wins!\n\n";

			system("pause");
			clearScreen();

			isPlaying = false;
		}
	}
}

void Game::loop()
{
	do
	{
		play();
	} while (isPlaying);
}