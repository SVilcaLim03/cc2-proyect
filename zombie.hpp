#pragma once
#include "can_attack.hpp"
#include "can_convert.hpp"
#include "entity.hpp"
class Zombie : public Entity, public CanAttack, public CanConvert {
 private:
  bool Attack(Entity& entity);
  bool Move(Location location);
  bool Decide();
  bool Render();
  bool Convert(Entity& entity);

 public:
  Zombie();
  ~Zombie();
};
