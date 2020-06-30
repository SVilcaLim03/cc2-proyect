#pragma once
#include "natural_number.hpp"
class Entity {
 protected:
  using Identifier = NaturalNumber;
  Identifier id_;
  friend class Space;

 public:
  virtual void Render() = 0;
  virtual ~Entity() = 0;
};
