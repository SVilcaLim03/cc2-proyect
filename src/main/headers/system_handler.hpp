#pragma once
#include <map>

#include "simulation_object.hpp"
#include "space.hpp"
#include "time.hpp"
class SystemHandler {
 private:
  std::map<SimulationObject *, std::pair<int, int>> *created_objects_;

  // bool CreateEntities();   // zombie, humans, virus, etc
  // bool CreateScenario();   // scenario objects, rocks, ground, houses,etc
  // bool InitializeSpace();  // put all object created on an instance of space
  // bool InitializeClock();
  bool PrepareObjects();
  bool StartSimulation();

  // bool CallStateHandler();
  // bool CallGraphicRenderer();

  // bool CallAudioPlayer();

 public:
  void Run();
  SystemHandler();
  ~SystemHandler();
};
