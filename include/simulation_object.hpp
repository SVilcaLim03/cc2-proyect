#pragma once
#include "entity.hpp"
#include "scenario_object.hpp"

union SimulationObject {
  Entity * entity;
  ScenarioObject * scenario_obj;
};