#pragma once
#include "object.hpp"
class Entity : public Object {
 private:
  using Location = std::pair<int, int>;
  using Identifier = NaturalNumber;

 protected:
  virtual bool Move(Location location) = 0;
  virtual bool Decide() = 0;
  Identifier id_;
  void GenerateIdentifier();
};
