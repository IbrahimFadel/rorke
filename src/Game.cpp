#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>

#include "Game.h"
#include "Sprite.h"

using std::string;
using std::vector;

Game::Game(int _width, int _height, string _title, vector<int> _background_colours) : win(sf::VideoMode(_width, _height), _title)
{
  background_colours = _background_colours;
  width = _width;
  height = _height;
  title = _title;
  vector<Sprite *> sprites;
  vector<Group *> groups;
  sf::RenderWindow win;
}

void Game::run()
{
  sf::RenderWindow &win = getWindow();
  while (win.isOpen())
  {
    Game::loop();
    sf::Event event;
    while (win.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
      {
        win.close();
      }
    }

    win.clear(sf::Color(getBackgroundColours()[0], getBackgroundColours()[1], getBackgroundColours()[2], getBackgroundColours()[3]));

    drawSprites(win);
    drawGroups(win);

    win.display();
  }
};

void Game::drawSprites(sf::RenderWindow &win)
{
  vector<Sprite *> sprites = getSprites();
  for (int i = 0; i < sprites.size(); i++)
  {
    Sprite *sprite = sprites[i];
    sprite->update();
    win.draw(sprite->getSprite());
  }
}

void Game::drawGroups(sf::RenderWindow &win)
{
  vector<Group *> groups = getGroups();
  for (int i = 0; i < groups.size(); i++)
  {
    Group *group = groups[i];
    vector<Sprite *> children = group->children;
    for (int j = 0; j < children.size(); j++)
    {
      Sprite *sprite = children[j];
      sprite->update();
      win.draw(sprite->getSprite());
    }
  }
}

Group Game::createGroup()
{
  Group group;
  groups.push_back(&group);
  return group;
}

Sprite Game::createSprite(int x, int y, Texture texture)
{
  Sprite sprite(x, y, texture);
  sprite.getSprite().setTexture(texture.getTexture());
  sprite.getSprite().move(sf::Vector2f(x, y));
  sprites.push_back(&sprite);

  return sprite;
}

vector<Sprite *> Game::getSprites()
{
  return (sprites);
}

int Game::getWidth()
{
  return (width);
}

int Game::getHeight()
{
  return height;
}

string Game::getTitle()
{
  return title;
}

vector<int> Game::getBackgroundColours()
{
  return background_colours;
}

sf::RenderWindow &Game::getWindow()
{
  return win;
}

vector<Group *> Game::getGroups()
{
  return groups;
}