#include "game_image.hpp"
#include "utils.hpp"
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_surface.h>
#include <string>
GameImage::GameImage(SDL_Renderer *&renderer, const std::string image_path,
                     const int width, const int height,
                     const std::string audio_path)
    : width_(width), height_(height), renderer_(renderer) {
  // load image, example: main_menu/background.png
  // image must be on res folder
  SDL_Surface *image_tmp = IMG_Load((GetResourcePath() + image_path).c_str());
  if (not audio_path.empty()) {
    // load sound
  }
  image_ = SDL_CreateTextureFromSurface(renderer_, image_tmp);
  SDL_FreeSurface(image_tmp);
}

GameImage::~GameImage() { SDL_DestroyTexture(image_); }

SDL_Texture *& GameImage::GetTexture(){
  return image_;
}
void GameImage::Render() {
  SDL_RenderCopy(renderer_, image_, nullptr, nullptr);
}
