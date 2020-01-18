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
    Texture(string _path)
    {
      path = _path;
    }

    void load();

    sf::Texture &getTexture()
    {
      return texture;
    }

    string &getPath()
    {
      return path;
    }

    void smooth(bool smoothing)
    {
      texture.setSmooth(smoothing);
    }

    
} Texture;

#endif