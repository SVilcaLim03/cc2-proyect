#pragma once
#include "natural_number.hpp"
class Entity {
 protected:
  using ID = NaturalNumber;
  ID id_;
  friend class Space;
  Entity();
};
