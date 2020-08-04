#pragma once
#include "game_object.hpp"
#include <SDL2/SDL.h>
#include <SDL2/SDL_render.h>
#include <map>
#include <string>
#include <utility>
class Animation {
private:
  SDL_Texture *sprite_;
  std::map<int, std::pair<SDL_Rect, int>> sprite_map_;
  SDL_Rect current_frame_rect_;
  GameObject *game_object_;
  int current_frame_idx;

public:
  Animation(GameObject &game_object, std::string sprite_path,
            std::map<int, std::pair<SDL_Rect, int>> sprite_map,
            SDL_Renderer *renderer);
  ~Animation();
  std::pair<SDL_Texture *, SDL_Rect> GetCurrentFrame();
};
