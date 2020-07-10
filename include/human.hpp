#pragma once
#include "entity.hpp"
class Human : public Entity {
 private:
  bool Decide();

 public:
  Human();
  ~Human();
};