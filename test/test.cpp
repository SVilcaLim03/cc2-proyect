#include <SDL2/SDL.h>

#include <iostream>

int main() {
  if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
    std::cerr << "SDL_Init error: " << SDL_GetError() << std::endl;
    return 1;
  }

  return 0;
}