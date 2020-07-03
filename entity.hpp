#pragma once
#include "natural_number.hpp"

class Entity {
 protected:
  using Identifier = NaturalNumber;
  
  Identifier id_;
  friend class Space;
  void GenerateIdentifier();
  Entity();
  virtual ~Entity()=0;
};
