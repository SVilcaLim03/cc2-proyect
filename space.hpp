#pragma once
#include <map>

#include "entity.hpp"
#include "natural_number.hpp"
#include "object.hpp"

class Space {
 private:
  using Location = std::pair<int, int>;
  using ObjectMap = std::map<Object &, Location>;
  using SpaceSize = std::pair<NaturalNumber, NaturalNumber>;
  friend class SystemHandler;

 private:
  ObjectMap *map_;
  SpaceSize size_;

  // ObjectMap &GetNearEntities(const Entity &entity);
  Space();
  ~Space();
};