#pragma once
#include "can_be_rendered.hpp"
#include "can_decide.hpp"
#include "entity.hpp"
#include "can_move.hpp"
class Zombie : public Entity,
               public CanMove,
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
