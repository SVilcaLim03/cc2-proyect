#pragma once
#include "entity.hpp"
#include "mobile.hpp"
class Zombie : public Entity, public Mobile {
 private:
  void Attack();
  void Move();

 public:
  void Render();
  Zombie();
  ~Zombie();
};
