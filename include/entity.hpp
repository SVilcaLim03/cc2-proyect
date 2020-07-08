#pragma once
#include "object.hpp"
#include "natural_number.hpp"
class Entity : public Object {
 protected:
  using Location = std::pair<int, int>;
  using Identifier = NaturalNumber;

 protected:
  Identifier id_;

  virtual bool Move(Location location) = 0;
  virtual bool Decide() = 0;
  void GenerateIdentifier();
};
