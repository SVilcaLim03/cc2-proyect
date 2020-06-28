#pragma once
#include <iostream>
#include <map>

#include "entity.hpp"
#include "natural_number.hpp"
class Space {
 private:
  using Identifier = NaturalNumber;
  using Location = std::pair<NaturalNumber, NaturalNumber>;
  std::map<Identifier, Location> entities_;
  std::pair<NaturalNumber, NaturalNumber> size_;

 public:
  Location GetLocation(Entity entity) const;
  //   bool CheckValidMove(entity : Entity, location : Location) const;
  Space();
  ~Space();
};