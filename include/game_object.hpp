#pragma once
#include "animation.hpp"
#include "location.hpp"
class GameObject {
public:
  Object *object_;

private:
  Animation *animation_;
  Location *location_;

public:
  GameObject(Object *&&object);
  GameObject() = delete;
  ~GameObject();
  void SetAnimation(std::string &&sprite_path,
                    std::map<int, std::pair<SDL_Rect, int>> &&sprite_map,
                    SDL_Renderer *&renderer);

  void SetLocation(int &&x = 0, int &&y = 0);
  Location &GetLocation() const;
  Animation &GetAnimation() const;
  Object *GetObject();
};
