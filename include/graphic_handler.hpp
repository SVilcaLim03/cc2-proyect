#pragma once
#ifdef _WIN32
#include <SDL.h>
#else
#include <SDL2/SDL.h>
#endif

#include "animation.hpp"
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
  SDL_Renderer* GetRenderer() const;
};
