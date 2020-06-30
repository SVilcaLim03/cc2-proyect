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
  // Location GetLocation(Entity &entity) const;
  // bool CheckValidMove(Entity &entity, Location location) const;
  Space();
  ~Space();
};