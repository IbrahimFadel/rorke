#include <iostream>

#include "Game.h"
#include "Texture.h"
#include "Sprite.h"
#include "Input.h"

using std::string;

Sprite *player;

int main()
{
	vector<int> bg_colours = {200, 100, 50, 255};
	Game game(500, 500, "Hello", bg_colours);
	game.getWindow().setFramerateLimit(60);

	Texture player_texture("assets/player.png");
	player_texture.load();
	player_texture.smooth(true);

	Sprite _player = game.createSprite(0, 0, player_texture);
	player = &_player;

	game.run();

	return 0;
}

void handleMovement()
{
	if (keyPressed(Input::A))
	{
		player->x -= 2;
	}
	else if (keyPressed(Input::D))
	{
		player->x += 2;
	};

	if (keyPressed(Input::W))
	{
		player->y -= 2;
	}
	else if (keyPressed(Input::S))
	{
		player->y += 2;
	}
}

void Game::loop()
{
	handleMovement();
}
