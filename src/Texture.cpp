#include <iostream>
#include <SFML/Graphics.hpp>

#include "Texture.h"

void Texture::load()
{
  if(!getTexture().loadFromFile(getPath()))
  {
    std::cerr << "Error loading texture!" << std::endl;
    return;
  }
}