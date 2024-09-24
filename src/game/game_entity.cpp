#include "game_entity.hpp"


GameEntity::GameEntity(Game* g) {
	this->g = g;
}

Game* GameEntity::get_game() const {
	return this->g;
}
