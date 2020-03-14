#include "main.h"
#include <SFML/Graphics.hpp>
#include "Game.h"

int main()
{

	sf::RenderWindow window(sf::VideoMode(600, 600), "15");
	window.setFramerateLimit(60);

	sf::Font font;
	font.loadFromFile("calibri.ttf");



	Game game;
	game.setPosition(50.f, 50.f);

	sf::Event event;
	int move_counter = 0;

	
}