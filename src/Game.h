#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>

#include "Sprite.h"
#include "Group.h"

using std::string;
using std::vector;

typedef class Game
{
private:
  int width;
  int height;
  string title;
  vector<int> background_colours;
  vector<Sprite *> sprites;
  vector<Group *> groups;
  sf::RenderWindow win;

public:
  Game(int _width, int _height, string _title, vector<int> _background_colours);
  void run();
  void drawSprites(sf::RenderWindow &win);
  void drawGroups(sf::RenderWindow &win);
  void loop();
  Group createGroup();
  Sprite createSprite(int x, int y, Texture texture);
  vector<Sprite *> getSprites();
  int getWidth();
  int getHeight();
  string getTitle();
  vector<int> getBackgroundColours();
  sf::RenderWindow &getWindow();
  vector<Group *> getGroups();
} Game;

#endif