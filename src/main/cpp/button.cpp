#include "button.hpp"

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include <string>

#include "utils.hpp"
Button::Button(const std::string image_path) {
  image_path_ = GetResourcePath(image_path);
  auto surfaces = new SDL_Surface *[3];
  auto textures= new SDL_Texture *[3];

  for (int i = 0; i < 3; i++) {
    *(surfaces + i) = IMG_Load((image_path_ + std::to_string(i)+"png").c_str());
    *(textures + i)=SDL_CreateTextureFromSurface(nullptr,*(surfaces + i));
    
  }

}
Button::~Button() {}
