#include "entity.hpp"
#include "scenario.hpp"
#include <SDL2/SDL.h>
#include <exception>
#include <iostream>
union SimulationObject {
  Entity *entity;
  Scenario *scenario;
};

int main() {
  // create window
  try {
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
      throw std::runtime_error("cannot initialize sdl2");
    }
    SDL_Window *window = SDL_CreateWindow("Waifu Simulator", 100, 100, 640, 480,
                                          SDL_WINDOW_SHOWN);
    if (window == nullptr) {
      SDL_Quit();
      throw std::runtime_error("cannot create window");
    }
    SDL_Renderer *ren = SDL_CreateRenderer(
        window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (ren == nullptr) {
      SDL_DestroyWindow(window);
      SDL_Quit();
      throw std::runtime_error("cannot create renderer");
    }
  } catch (std::exception &e) {
    std::cerr << "error: " << e.what() << std::endl
              << "SDL_error: " << SDL_GetError() << std::endl;

    return 1;
  }
  while (true) {
  }
  return 0;
}
