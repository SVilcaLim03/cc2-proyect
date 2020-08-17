#pragma once
#include "animation.hpp"
#include "location.hpp"
#include "observable.hpp"
class GameObject {
public:
  Object *object_;

private:
  Animation *animation_;
  Location *location_;
  Observer *observer_;

public:
  GameObject(Object *&&object, int &&x = 0, int &&y = 0);
  GameObject() = delete;
  ~GameObject();
  void SetAnimation(std::string &&sprite_path,
                    std::map<int, std::pair<SDL_Rect, int>> &&sprite_map,
                    SDL_Renderer *&renderer);

  void SetObserver(Observer *&&observer, Observable *observable);
  Location *&GetLocation();
  Animation *&GetAnimation();
  Object *GetObject();
};
