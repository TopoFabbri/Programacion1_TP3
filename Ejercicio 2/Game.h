#pragma once

#include "AwesomeLibrary.h"
#include "Knight.h"

class Game
{
private:
	bool isPlaying;

	Knight* knights[2];

public:
	Game();
	~Game();

	void loop();
	void play();

	void start();
	void update();
};
