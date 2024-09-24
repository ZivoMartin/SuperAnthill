#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include "game/Game.hpp"

int main() {
	Game* g = new Game();
	g->start();
	delete g;
}
