#pragma once
#include "entity.hpp"

class CanConvert {
 protected:
  virtual bool Convert(Entity& entity) = 0;
};
