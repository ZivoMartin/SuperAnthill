#include "game.hpp"
#include "stdio.h"
#include "game_entity.hpp"
#include <algorithm>

Game::Game() {}
Game::~Game() {}

void Game::start() {
	bool running = true;
	while (running) {
		render();
	}
}


void Game::render() {    
	std::for_each(entitys.begin(), entitys.end(),  [](GameEntity* e) { 
		e->render();
	});
}
