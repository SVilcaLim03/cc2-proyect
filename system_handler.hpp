#pragma once
#include "space.hpp"
#include "time.hpp"

class SystemHandler {
 private:
  bool CreateEntities();
  bool GenerateDecitions();

 public:
  bool Run();
};
