#pragma once
#include "entity.hpp"

class CanAttack
{
protected:
  virtual bool Attack(Entity& entity) = 0;

};
