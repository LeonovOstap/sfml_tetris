#pragma once
#include <SFML/Graphics.hpp>
const int TABLE_SIZE = 10;
const int ARRAY_SIZE = TABLE_SIZE * TABLE_SIZE;

/*Initializing values for cell size in px*/
const int CELL_SIZE = 50;
const int FIELD_SIZE = TABLE_SIZE * CELL_SIZE;
//Енум для на правления в котором надо двигать символы
enum class Direction { Left = 0, Right = 1, Up = 2, Down = 3 };

class Game : public sf::Drawable, public sf::Transformable
{
protected:
	//ТУДУ Сделать отдельный array для каждого raw
	int elements[ARRAY_SIZE];
	sf::Font font;
public:
	//дефолтный конструктор
	Game();
	//инитиализация гама
	void Init();
	void Move(Direction dir);
public:
	//override из sf::drawable
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

