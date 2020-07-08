#pragma once
#include <map>

#include "object.hpp"
#include "space.hpp"
#include "time.hpp"
class SystemHandler {
 private:
  std::map<Object *, std::pair<int, int>> *created_objects_;

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
  bool Run();
  SystemHandler();
  ~SystemHandler();
};
