#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>

#include "Sprite.h"

using std::vector;
using std::string;

typedef class Game
{
  private:
    int width;
    int height;
    string title;
    vector<int> background_colours;

    vector<Sprite*> sprites;

    sf::RenderWindow win;
  public:
    Game(int _width, int _height, string _title, vector<int> _background_colours) : win(sf::VideoMode(_width, _height), _title)
    {
      background_colours = _background_colours;
    }

    void run();
    void loop();

    Sprite *createSprite(int x, int y, Texture texture)
    {
      Sprite *sprite = new Sprite(x, y, texture);
      sprite->getSprite().setTexture(texture.getTexture());
      sprite->getSprite().move(sf::Vector2f(x, y));
      sprites.push_back(sprite);

      return sprite;
    }

    vector<Sprite*> getSprites()
    {
      return sprites;
    }

    int getWidth()
    {
      return width;
    }

    int getHeight()
    {
      return height;
    }

    string getTitle()
    {
      return title;
    }

    vector<int> getBackgroundColours()
    {
      return background_colours;
    }

    sf::RenderWindow &getWindow()
    {
      return win;
    }
} Game;

#endif