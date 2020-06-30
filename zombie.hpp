#pragma once
#include "entity.hpp"
#include "mobile.hpp"
class Zombie : public Entity, public Mobile {
 private:
 public:
  void Render();
  void Attack();
  void Move();
  Zombie();
  ~Zombie();
};
