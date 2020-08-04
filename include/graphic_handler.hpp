#pragma once
#ifdef _WIN32
#include <SDL.h>
#include <SDL_image.h>
#else
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#endif

#include "animation.hpp"
#include <exception>
#include <iostream>
class GraphicHandler {
private:
  SDL_Renderer *renderer_;
  SDL_Window * main_window_;
  constexpr static int window_size_[2] = {1280, 720};

public:
  GraphicHandler();
  ~GraphicHandler();
  void Render(Animation & animation, std::pair<int,int> position);
  void UpdateScreen();
  void ClearRenderer();
  SDL_Renderer* GetRenderer();
};
