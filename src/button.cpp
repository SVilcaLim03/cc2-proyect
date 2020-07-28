#include "button.hpp"

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include <string>

#include "utils.hpp"
Button::Button(const std::string image_path) {
  image_path_ = GetResourcePath(image_path);

}
Button::~Button() {}
