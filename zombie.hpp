#pragma once
#include "can_be_rendered.hpp"
#include "can_decide.hpp"
#include "entity.hpp"
#include "mobile.hpp"
class Zombie : public Entity,
               public Mobile,
               public CanBeRendered,
               public CanDecide {
 private:
  void Attack(Entity& entity);
  void Move(Location location);
  bool Decide();
  void Render();

 public:
  Zombie();
  ~Zombie();
};
