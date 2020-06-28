#pragma once
#include <iostream>
#include <map>
<<<<<<< HEAD
#include "natural_number.hpp"

=======

#include "entity.hpp"
#include "natural_number.hpp"
>>>>>>> 87d78cb3157ff5f3e5a813123324035a2692f957
class Space {
 private:
  using Identifier = NaturalNumber;
  using Location = std::pair<NaturalNumber, NaturalNumber>;
  std::map<Identifier, Location> entities_;
  std::pair<NaturalNumber, NaturalNumber> size_;

 public:
  Location GetLocation(Entity entity) const;
<<<<<<< HEAD
  bool CheckValidMove(entity : Entity, location : Location) const;
=======
  //   bool CheckValidMove(entity : Entity, location : Location) const;
>>>>>>> 87d78cb3157ff5f3e5a813123324035a2692f957
  Space();
  ~Space();
};