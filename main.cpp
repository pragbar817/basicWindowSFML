#include <iostream>

#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(800,600),"First game",sf::Style::Titlebar | sf::Style::Close);
	sf::Event ev;
	
	//game loop
	while(window.isOpen())
	{
		//event polling
		while(window.pollEvent(ev))
		{
			switch(ev.type)
			{
				case sf::Event::Closed:
					window.close();
					break;
				case sf::Event::KeyPressed:
					if(ev.key.code == sf::Keyboard::Escape)
					{
						window.close();
					}
					break;
			}
		}
		
		//update
		
		//render
		window.clear(sf::Color::Blue);
		
		//draw
		
		window.display();
	}
		
	
	return 0;
}
