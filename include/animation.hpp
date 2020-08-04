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
  GameObject *game_object_;

public:
  Animation(GameObject &game_object, std::string sprite_path,
            std::map<int, std::pair<SDL_Rect, int>> sprite_map);
  SDL_Texture *GetCurrentFrame();

private:
  int GetObjectState();
};
