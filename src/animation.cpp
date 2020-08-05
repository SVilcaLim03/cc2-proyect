#ifdef _WIN32
#include <SDL_image.h>
#else
#include <SDL2/SDL_image.h>
#endif

#include "animation.hpp"
#include "utils.hpp"
Animation::Animation(GameObject &game_object, std::string sprite_path,
                     std::map<int, std::pair<SDL_Rect, int>> &&sprite_map,
                     SDL_Renderer *renderer)
    : game_object_(&game_object), sprite_map_(sprite_map) {
  SDL_Surface *tmp = IMG_Load((GetResourcePath() + sprite_path).c_str());
  sprite_ = SDL_CreateTextureFromSurface(renderer, tmp);
  SDL_FreeSurface(tmp);
  current_frame_idx = 0;
}
Animation::~Animation(){}

std::pair<SDL_Texture *, SDL_Rect *> Animation::GetCurrentFrame() {
  int state = game_object_->GetState();
  int state_rect_x = sprite_map_[state].first.x;
  int state_rect_y = sprite_map_[state].first.y;
  int state_rect_width = sprite_map_[state].first.w;
  int state_rect_height = sprite_map_[state].first.h;
  int number_of_frames = sprite_map_[state].second;

  ++current_frame_idx;
  if (current_frame_idx >= number_of_frames) {
    current_frame_idx = 0;
  }
  state_rect_x += state_rect_x * current_frame_idx;

  current_frame_rect_.x = state_rect_x;
  current_frame_rect_.y = state_rect_y;
  current_frame_rect_.w = state_rect_width;
  current_frame_rect_.h = state_rect_height;

  return std::make_pair(sprite_, &current_frame_rect_);
}
