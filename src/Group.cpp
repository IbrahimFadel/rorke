#include "Group.h"

Group::Group() = default;

Sprite Group::create(int x, int y, Texture texture)
{
  Sprite sprite(x, y, texture);
  sprite.getSprite().setTexture(texture.getTexture());
  sprite.getSprite().move(sf::Vector2f(x, y));
  children.push_back(&sprite);

  return sprite;
}