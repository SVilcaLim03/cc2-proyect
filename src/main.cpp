#include "entity.hpp"
#include "game_image.hpp"
#include "scenario.hpp"
#include <SDL2/SDL.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_stdinc.h>
#include <SDL2/SDL_video.h>
#include <exception>
#include <iostream>

int main() {
  try {
    union SimulationObject {
      Entity *entity;
      Scenario *scenario;
    };
    constexpr int window_size[] = {1280, 720};

    // init sdl
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
      throw std::runtime_error(SDL_GetError());
    }

    // create window and renderer
    SDL_Window *window = SDL_CreateWindow(
        "Waifu simulator", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
        window_size[0], window_size[1], SDL_WINDOW_SHOWN);
    if (window == nullptr) {
      SDL_Quit();
      throw std::runtime_error(SDL_GetError());
    }

    SDL_Renderer *renderer = SDL_CreateRenderer(
        window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (renderer == nullptr) {
      SDL_DestroyWindow(window);
      SDL_Quit();
      throw std::runtime_error(SDL_GetError());
    }
    // create main menu

    GameImage test = GameImage(renderer, "test.jpg", 1280, 720);
    SDL_RenderClear(renderer);
    test.Render();
    // SDL_RenderPresent(renderer);

    while (true) {
    }
    return 0;
  } catch (std::exception &e) {
    std::cerr << "error: " << e.what() << std::endl;
    return 1;
  }
}
