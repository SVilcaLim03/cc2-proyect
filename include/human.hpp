#pragma once
#include "entity.hpp"
class Human : public Entity {
 private:
  bool Move(Location location);
  bool Decide();
  bool Render();

 public:
  Human();
  ~Human();
};