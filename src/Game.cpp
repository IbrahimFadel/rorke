#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>

#include "Game.h"
#include "Sprite.h"

using std::vector;
using std::string;

void Game::run()
{
  sf::RenderWindow &win = getWindow();
  while (win.isOpen())
  {
    Game::loop();
    sf::Event event;
    while (win.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
      {
        win.close();        
      }
    }

    win.clear(sf::Color(getBackgroundColours()[0], getBackgroundColours()[1], getBackgroundColours()[2], getBackgroundColours()[3]));
    // for(int i = 0; i < getSprites().size(); i++)
    // {
    //   std::cout << getSprites()[i]->x << " " << getSprites()[i]->getSprite().getPosition().x << std::endl;
    //   getSprites()[i]->update();
    //   win.draw(getSprites()[i]->getSprite());
    // }
    win.display();
  }
};