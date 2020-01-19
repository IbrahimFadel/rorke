#include <iostream>
#include <SFML/Graphics.hpp>

#include "Texture.h"

Texture::Texture(string _path)
{
  path = _path;
  sf::Texture texture;
}

void Texture::load()
{
  if (!getTexture().loadFromFile(getPath()))
  {
    std::cerr << "Error loading texture!" << std::endl;
    return;
  }
}

sf::Texture &Texture::getTexture()
{
  return texture;
}

string &Texture::getPath()
{
  return path;
}

void Texture::smooth(bool smoothing)
{
  texture.setSmooth(smoothing);
}