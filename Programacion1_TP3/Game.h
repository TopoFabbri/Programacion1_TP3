#pragma once

#include "AwesomeLibrary.h"
#include "Author.h"
#include "Book.h"

class Game
{
private:
	bool isPlaying;

	Author* authors[2];
	Book* books[3];

public:
	Game();
	~Game();

	void loop();
	void play();

	void start();
	void update();
	void draw();
};
