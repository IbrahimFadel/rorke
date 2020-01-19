#ifndef INPUT_H
#define INPUT_H

// #include <SFML/Graphics.hpp>

// using sf::Keyboard;
// typedef enum Keys
namespace Input
{
typedef enum keys
{
  A,
  B,
  C,
  D,
  E,
  F,
  G,
  H,
  I,
  J,
  K,
  L,
  M,
  N,
  O,
  P,
  Q,
  R,
  S,
  T,
  U,
  V,
  W,
  X,
  Y,
  Z
} keys;
};

bool keyPressed(int key);

#endif