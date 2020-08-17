#pragma once
#include "animation.hpp"
#include "button_observer.hpp"
#include "location.hpp"
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

  void SetObserver(Observer *&&observer,Observable *&observable);
  Location &GetLocation() const;
  Animation &GetAnimation() const;
  Object *GetObject();
};
