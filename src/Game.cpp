#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>

#include "Game.h"
#include "Sprite.h"

using std::string;
using std::vector;

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
    vector<Sprite *> sprites = getSprites();
    for (int i = 0; i < sprites.size(); i++)
    {
      Sprite *sprite = sprites[i];
      sprite->update();
      win.draw(sprite->getSprite());
    }

    win.display();
  }
};