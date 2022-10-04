#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

#include "Game.hpp"
#include "RenderWindow.hpp"

int main(int argc, char* args[]){

	// INITIALIZE GAME -----------------------------------------------------
	Game* game = new Game();

	// MAIN GAME LOOP ------------------------------------------------------
	while(game->isRunning())
	{
		game->handleEvents();
		game->update();
		game->render();
	}

	// EXIT OUT SAFELY -----------------------------------------------------
	game->clean();
	SDL_Quit();
	return 0;
}