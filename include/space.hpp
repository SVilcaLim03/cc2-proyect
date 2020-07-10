#pragma once
#include <map>
#include "simulation_object.hpp"


class Space {
 private:
  using Location = std::pair<int, int>;
  using ObjectMap = std::map<SimulationObject &, Location>;
  using SpaceSize = std::pair<int, int>;
  friend class SystemHandler;

 private:
  ObjectMap *map_;
  SpaceSize size_;

  // ObjectMap &GetNearEntities(const Entity &entity);
  Space();
  ~Space();
};