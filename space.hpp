#pragma once
#include <map>

#include "entity.hpp"
#include "natural_number.hpp"

class Space {
 public:
  using Location = std::pair<int, int>;
  using EntitiesMap = std::map<Entity &, Location>;
  using SpaceSize = std::pair<NaturalNumber, NaturalNumber>;
  friend class Handler;

 private:
  EntitiesMap entities_;
  SpaceSize size_;
  EntitiesMap &GetNearEntities(const Entity &entity);
  Space();
  ~Space();
};