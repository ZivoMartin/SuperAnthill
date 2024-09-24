class Game;

class GameEntity {

public:

	GameEntity(Game* g);
	Game* get_game() const;
	virtual void render();
	
private:
	Game* g;
	
};
