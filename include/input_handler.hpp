#pragma once
#include "mouse_input.hpp"
#include <SDL2/SDL.h>
class InputHandler {
private:
  MouseInput *mouse_input_;
  SDL_Event event_;
  bool *window_running_;

public:
  InputHandler(bool *window_running);
  ~InputHandler();
  void Listen();
  MouseInput *&GetMouseInput();
};
