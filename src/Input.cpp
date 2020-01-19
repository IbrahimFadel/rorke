#include <SFML/Graphics.hpp>

#include "Input.h"

bool keyPressed(int key)
{
  return sf::Keyboard::isKeyPressed(static_cast<sf::Keyboard::Key>(key));
}