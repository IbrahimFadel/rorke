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
  Sprite(int _x, int _y, Texture _texture);
  void init();
  void update();
  void updatePosition();
  sf::Sprite &getSprite();
  Texture getTexture();
} Sprite;

#endif