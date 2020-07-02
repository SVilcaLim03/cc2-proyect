#pragma once
#include "entity.hpp"
class CanMove {
 protected:
  using Location = std::pair<int, int>;
  virtual bool Move(Location location) = 0;
};