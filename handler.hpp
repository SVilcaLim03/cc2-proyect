#pragma once
#include "space.hpp"
#include "time.hpp"

class Handler {
 private:
  Space space_;
  Time time();

  bool CreateEntities();
  bool GenerateDecitions();

 public:
  Handler();
  ~Handler();
  bool Run();
};
