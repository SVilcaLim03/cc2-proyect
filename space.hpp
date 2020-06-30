#pragma once
#include <iostream>
#include <map>

#include "entity.hpp"
#include "natural_number.hpp"

class Space {
 private:
  // using Identifier = NaturalNumber;
  using Location = std::pair<int, int>;
  std::map<Entity &, Location> entities_;
  std::pair<NaturalNumber, NaturalNumber> size_;

 public:
  bool CheckDecition(Entity &entity, Location location) const;
  std::map<Entity &, Location> GetNearEntities(Entity &entity);

  Space();
  ~Space();
};