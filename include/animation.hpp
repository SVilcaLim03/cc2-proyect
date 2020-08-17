#pragma once
#ifdef _WIN32
#include <SDL.h>
#else
#include <SDL2/SDL.h>
#endif

#include "object.hpp"
#include <map>
#include <string>
#include <utility>

class Animation {
private:
  friend class GameObject;
  SDL_Texture *sprite_;
  std::map<int, std::pair<SDL_Rect, int>> sprite_map_;
  SDL_Rect current_frame_rect_;
  Object *object_;
  int current_frame_idx;
  Animation(Object *&object, std::string &sprite_path,
            std::map<int, std::pair<SDL_Rect, int>> &sprite_map,
            SDL_Renderer *&renderer);

public:
  ~Animation();
  std::pair<SDL_Texture *, SDL_Rect *> GetCurrentFrame();

};
