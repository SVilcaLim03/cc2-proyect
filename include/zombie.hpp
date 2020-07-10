#pragma once

#include "entity.hpp"
class Zombie : public Entity {
 private:
  bool Attack(Entity& entity);
  // bool Move(Location location);
  bool Decide();
  bool Render();
  bool Convert(Entity& entity);

 public:
  Zombie();
  ~Zombie();
};
