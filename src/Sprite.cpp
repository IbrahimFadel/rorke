#include "Sprite.h"

Sprite::Sprite(int _x, int _y, Texture _texture) : texture(_texture.getPath())
{
  x = _x;
  y = _y;
  texture = _texture;
}

void Sprite::init()
{
  sprite.setTexture(texture.getTexture());
}

void Sprite::update()
{
  updatePosition();
}

void Sprite::updatePosition()
{
  sprite.setPosition((float)x, (float)y);
}

sf::Sprite &Sprite::getSprite()
{
  texture.getTexture().loadFromFile(texture.getPath());
  sprite.setTexture(texture.getTexture());
  return sprite;
}

Texture Sprite::getTexture()
{
  return texture;
}