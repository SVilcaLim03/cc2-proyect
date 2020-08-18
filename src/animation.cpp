#ifdef _WIN32
#include <SDL_image.h>
#else
#include <SDL2/SDL_image.h>
#endif

#include "animation.hpp"
#include "utils.hpp"
Animation::Animation(Object *object, std::string &sprite_path,
                     std::map<int, std::pair<SDL_Rect, int>> &sprite_map,
                     SDL_Renderer *renderer)
    : object_(object), sprite_map_(sprite_map), current_frame_idx_(1) {
  SDL_Surface *tmp = IMG_Load((GetResourcePath() + sprite_path).c_str());
  sprite_ = SDL_CreateTextureFromSurface(renderer, tmp);
  SDL_FreeSurface(tmp);
}
Animation::~Animation() {}

std::pair<SDL_Texture *, SDL_Rect> Animation::GetCurrentFrame() {
  int state = object_->GetState();

  int state_rect_width = sprite_map_[state].first.w;
  int state_rect_height = sprite_map_[state].first.h;
  int state_rect_x = sprite_map_[state].first.x;
  int state_rect_y = sprite_map_[state].first.y;
  int number_of_frames = sprite_map_[state].second;

  ++current_frame_idx_;

  if (current_frame_idx_ >= number_of_frames) {
    current_frame_idx_ = 1;
  }
  state_rect_x += state_rect_width * current_frame_idx_;

  current_frame_rect_.x = state_rect_x;
  current_frame_rect_.y = state_rect_y;
  current_frame_rect_.w = state_rect_width;
  current_frame_rect_.h = state_rect_height;

  return std::make_pair(sprite_, current_frame_rect_);
}

std::pair<int, int> Animation::GetFrameSize() {
  int state = object_->GetState();
  frame_size_ =
      std::make_pair(sprite_map_[state].first.w, sprite_map_[state].first.h);

  return frame_size_;
}
