#include "renderable.hpp"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_render.h>
#include <string>
class GameImage : public Renderable {
private:
  SDL_Texture *image_;
  SDL_AudioStream *audio_;
  SDL_Renderer *renderer_;
  int width_;
  int height_;

public:
  GameImage(SDL_Renderer *&renderer, const std::string image_path,
            const int width, const int height,
            const std::string audio_path = "");
  ~GameImage();
  SDL_Texture *&GetTexture();
  void Render();
};
