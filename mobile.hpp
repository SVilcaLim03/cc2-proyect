#include "entity.hpp"
#include "natural_number.hpp"

class Mobile {
 protected:
  using Location = std::pair<int, int>;
  virtual void Move(Location location) = 0;
  virtual void Attack(Entity& entity) = 0;
};