#pragma once
#include "natural_number.hpp"

class Object {
 protected:
  friend class Space;
  Object();
  virtual bool Render() = 0;
  virtual ~Object() = 0;
};