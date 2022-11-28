#pragma once
class Game
{
private:
	bool isPlaying;

public:
	Game();
	~Game();

	void play();

	void start();
	void loop();
	void draw();
};