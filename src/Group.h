#ifndef GROUP_H
#define GROUP_H

#include <iostream>
#include <vector>

#include "Sprite.h"
#include "Texture.h"

using std::vector;

typedef class Group
{
private:
public:
  vector<Sprite *> children;
  Group();
  Sprite create(int x, int y, Texture texture);
} Group;

#endif