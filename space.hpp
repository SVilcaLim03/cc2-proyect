#pragma once
#include <iostream>
#include <map>
#include "natural_number.hpp"
#include "entity.hpp"

class Space {
 private:
  using Identifier = NaturalNumber;
  using Location = std::pair<NaturalNumber, NaturalNumber>;
  std::map<Identifier, Location> entities_;
  std::pair<NaturalNumber, NaturalNumber> size_;

 public:
  Location GetLocation(Entity entity) const;
  bool CheckValidMove(Entity entity, Location location) const;
  Space();
  ~Space();
};