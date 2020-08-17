#include "input_handler.hpp"
InputHandler::InputHandler(bool *window_running)
    : mouse_input_(new MouseInput), window_running_(window_running) {}

InputHandler::~InputHandler() { delete mouse_input_; }

MouseInput *&InputHandler::GetMouseInput() { return mouse_input_; }

void InputHandler::Listen() {

  SDL_GetMouseState(&mouse_input_->event_.second.first,
                    &mouse_input_->event_.second.second);
  while (SDL_PollEvent(&event_)) {
    switch (event_.type) {
    case SDL_QUIT:
      *window_running_ = false;
    case SDL_MOUSEBUTTONDOWN:
      break;
    }
  }
}
