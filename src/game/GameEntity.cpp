#include "GameEntity.hpp"


GameEntity::GameEntity(Game* g) {
	this->g = g;
	set_pos(Position::create(0, 0));
}

GameEntity::GameEntity(Game* g, Position pos) {
	this->g = g;
	set_pos(pos);
}

Game* GameEntity::get_game() const {
	return this->g;	
}

void GameEntity::set_pos(Position pos) {
	this->pos = pos;
}

void GameEntity::set_x(int x) {
	this->pos.set_x(x);
}

void GameEntity::set_y(int y) {
	this->pos.set_y(y);
}

Position GameEntity::get_pos() const {
	return this->pos;
}

int GameEntity::x() const {
	return this->pos.x();
}

int GameEntity::y() const {
	return this->pos.y();
}

void GameEntity::render() {
	
}
