#include "Game.h"

Game::Game()
{
	isPlaying = false;
}

Game::~Game()
{
}

void Game::play()
{
	if (!isPlaying)
		start();

	loop();

	draw();
}

void Game::start()
{
	isPlaying = true;
}

void Game::loop()
{
}

void Game::draw()
{

}