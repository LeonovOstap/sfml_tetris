#include "Game.h"


/*Добавить чек по вертикали и горизонтали
array[i]-1 && aray[i]+ is colliding

vert-
array[i]-10? && array[i]-10? is colliding
*/

Game::Game()
{
	font.loadFromFile("calibri.cpp");
	Init();
}
void Game::Init()
{
}
//Вызвать функцию если нужно сместить символы
void Game::Move(Direction dir)
{
}
void Game::draw(sf::RenderTarget & target, sf::RenderStates states) const{
	states.transform *= getTransform();
	sf::Color color = sf::Color(200, 100, 200);
	//Рисую раму
	
	sf::RectangleShape shape(sf::Vector2f(FIELD_SIZE, FIELD_SIZE));
	shape.setOutlineThickness(2.f);
	shape.setOutlineColor(color);
	shape.setFillColor(sf::Color::Transparent);
	target.draw(shape, states);


	shape.setSize(sf::Vector2f(CELL_SIZE - 2, CELL_SIZE - 2));
	shape.setOutlineThickness(2.f);
	shape.setOutlineColor(color);
	shape.setFillColor(sf::Color::Transparent);

	sf::Text text("", font, 52);
	//Для каждой ячейки задаем параметры и спавним ее
	for (unsigned int i = 0; i < ARRAY_SIZE; i++)
	{
		if (elements[i] > 0)
		{
			
			sf::Vector2f position(i % CELL_SIZE * CELL_SIZE + 10.f, i / CELL_SIZE * CELL_SIZE + 10.f);
			shape.setPosition(position);
		
			text.setPosition(position.x + 30.f + (elements[i] < 10 ? 15.f : 0.f), position.y + 25.f);
	
			target.draw(shape, states);
	
			target.draw(text, states);
		}
	}
}
