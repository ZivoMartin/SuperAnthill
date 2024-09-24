#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <vector>

class GameEntity;

class Game {

public:	
	Game();
	~Game();
	void start();

private:
	void render();
	
	std::vector<GameEntity*> entitys;
	
};
