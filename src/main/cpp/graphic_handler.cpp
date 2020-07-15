#include "../headers/graphic_handler.hpp"

#include <SDL2/SDL.h>
GraphicHandler::GraphicHandler() {
  window_ =
      SDL_CreateWindow("La vaina de CC", SDL_WINDOWPOS_UNDEFINED,
                       SDL_WINDOWPOS_UNDEFINED, 800, 640, SDL_WINDOW_SHOWN);
  renderer_ = SDL_CreateRenderer(
      window_, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
}
GraphicHandler::~GraphicHandler() {}
SDL_Renderer* GraphicHandler::GetRenderer() { return renderer_; }
