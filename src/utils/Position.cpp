#include "Position.hpp"
#include <SDL2/SDL.h>

Position::Position() {
	set_pos(0, 0);
}

Position::Position(int x, int y) {
	set_pos(x, y);
}

Position::Position(int xy) {
	set_pos(xy, xy);
}

Position::Position(SDL_Point p) {
	set_pos(p.x, p.y);
}

Position Position::create() {
	return Position::create(0, 0);
}

Position Position::create(int x, int y) {
	Position pos;
	pos.set_pos(x, y);
	return pos;
}

Position Position::create(int xy) {
	return Position::create(xy, xy);
}

Position Position::create(SDL_Point p) {
	return Position::create(p.x, p.y);
}


int Position::x() const {
	return the_x;
}

int Position::y() const {
	return the_y;
}

void Position::set_x(int x) {
	the_x = x;
}

void Position::set_y(int y) {
	the_y = y;
}

void Position::set_pos(int x, int y) {
	set_x(x);
	set_y(y);
}

void Position::set_pos(Position p) {
	set_pos(p.x(), p.y());
}

Position Position::clone() {
	return Position(x(), y());
}

void Position::inc_y(int dy) {
	set_y(y()+dy);
}

void Position::inc_x(int dx) {
	set_x(x()+dx);
}


int Position::range_with(Position pos) const {
	return std::abs(x() - pos.x()) + std::abs(y() - pos.y());
}
