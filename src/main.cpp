#include <iostream>

#include "Game.h"
#include "Texture.h"
#include "Sprite.h"

using std::string;

// Sprite *player;

int main()
{
	vector<int> bg_colours = { 200, 100, 50, 255 };
	Game game(500, 500, "Hello", bg_colours);

	Texture player_texture("assets/player.png");
	player_texture.load();
	player_texture.smooth(true);

	Sprite *player = game.createSprite(game.getWindow().getView().getSize().x / 2, game.getWindow().getView().getSize().y / 2, player_texture);
	// player = game.createSprite(game.getWindow().getView().getSize().x / 2, game.getWindow().getView().getSize().y / 2, player_texture);

	player->x = 200;

	game.run();

  return 0;
}

void Game::loop()
{
	// player->x += 1;
	// std::cout << player->x << std::endl;
}