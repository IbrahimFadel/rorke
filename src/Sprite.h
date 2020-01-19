#ifndef SPRITE_H
#define SPRITE_H

#include <iostream>
#include <SFML/Graphics.hpp>

#include "Texture.h"

typedef class Sprite
{
private:
  Texture texture;
  sf::Sprite sprite;

public:
  int x;
  int y;

  Sprite(int _x, int _y, Texture _texture) : texture(_texture.getPath())
  {
    x = _x;
    y = _y;
    texture = _texture;
  }

  void init()
  {
    sprite.setTexture(texture.getTexture());
  }

  void update()
  {
    updatePosition();
  }

  void updatePosition()
  {
    sprite.setPosition((float) x, (float) y);
  }

  void setX(int _x)
  {
    x = _x;
  }

  sf::Sprite &getSprite()
  {
    texture.getTexture().loadFromFile(texture.getPath());
    sprite.setTexture(texture.getTexture());
    return sprite;
  }

  Texture getTexture()
  {
    return texture;
  }

} Sprite;

#endif