#include "graphic_handler.hpp"
#include <exception>
#include <iostream>
GraphicHandler::GraphicHandler() {

  // init sdl
  if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
    throw std::runtime_error(SDL_GetError());
  }

  // create window
  main_window_ = SDL_CreateWindow("Waifu simulator", SDL_WINDOWPOS_UNDEFINED,
                                  SDL_WINDOWPOS_UNDEFINED, window_size_[0],
                                  window_size_[1], SDL_WINDOW_SHOWN);
  if (main_window_ == nullptr) {
    SDL_Quit();
    throw std::runtime_error(SDL_GetError());
  }

  // create render
  renderer_ = SDL_CreateRenderer(
      main_window_, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
  if (renderer_ == nullptr) {
    SDL_DestroyWindow(main_window_);
    SDL_Quit();
    throw std::runtime_error(SDL_GetError());
  }
}

GraphicHandler::~GraphicHandler() {
  SDL_DestroyWindow(main_window_);
  SDL_Quit();
  SDL_DestroyRenderer(renderer_);
}

SDL_Renderer *GraphicHandler::GetRenderer() const { return renderer_; }

void GraphicHandler::Render(Animation &animation,
                            std::pair<int, int> position) {
  SDL_Texture *sprite = animation.GetCurrentFrame().first;
  SDL_Rect *rect_frame = animation.GetCurrentFrame().second;
  SDL_Rect rect_dest;
  rect_dest.h = rect_frame->h;
  rect_dest.w = rect_frame->w;
  rect_dest.x = position.first;
  rect_dest.y = position.second;

  SDL_RenderCopy(renderer_, sprite, rect_frame, &rect_dest);
}

void GraphicHandler::UpdateScreen() { SDL_RenderPresent(renderer_); }
void GraphicHandler::ClearRenderer() { SDL_RenderClear(renderer_); }
