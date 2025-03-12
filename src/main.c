#include <stdio.h>
#include "SDL3/SDL.h"
#include "chip8.h"

int main(int argc, char** argv) {
	// create chip8 object
	struct chip8 chip8;

	// initialise SDL modules
	SDL_Init(SDL_INIT_VIDEO);

	// create SDL window
	SDL_Window* window = SDL_CreateWindow(EMULATOR_WINDOW_TITLE, 
		WINDOW_WIDTH, 
		WINDOW_HEIGHT, // height and width window);
		0); // 0 = no flags

	// create SDL renderer
	SDL_Renderer* renderer = SDL_CreateRenderer(window, NULL);

	int running = 1;
	SDL_Event e;

	while(running) {
		// check for events
		while(SDL_PollEvent(&e)) {
			// check if user closes window
			if (e.type == SDL_EVENT_QUIT) {
				running = 0;
			}
		}
		// set screen color
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0); // set color to black
		SDL_RenderClear(renderer); // color screen black

		// draw rectangle
		SDL_SetRenderDrawColor(renderer, 255, 255, 255, 0);
		SDL_FRect r;
		r.x = 0;
		r.y = 0;
		r.w = 10;
		r.h = 10;
		SDL_RenderFillRect(renderer, &r);

		SDL_RenderPresent(renderer);
	}

	// destroy SDL window
	SDL_DestroyWindow(window);

	return 0;
}