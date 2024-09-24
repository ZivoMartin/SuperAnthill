#ifndef SAFE_GAMEENTITY
#define SAFE_GAMEENTITY

#include "../utils/Position.hpp"

class Game;

class GameEntity {

public:

	GameEntity(Game* g);
	GameEntity(Game* g, Position pos);

	Game* get_game() const;
	virtual void render();

	void set_pos(Position pos);
	void set_x(int x);
	void set_y(int y);

	Position get_pos() const;
	int x() const;
	int y() const;


	
private:
	Game* g;
	Position pos;
};

#endif
