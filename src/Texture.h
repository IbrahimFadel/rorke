#ifndef TEXTURE_H
#define TEXTURE_H

#include <iostream>
#include <SFML/Graphics.hpp>

using std::string;

typedef class Texture
{
private:
  string path;
  sf::Texture texture;

public:
  Texture(string _path);
  void load();
  sf::Texture &getTexture();
  string &getPath();
  void smooth(bool smoothing);
} Texture;

#endif