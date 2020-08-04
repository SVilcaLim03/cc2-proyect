#pragma once
#include "command.hpp"

class CommandStartSimulation : public Command {
public:
  CommandStartSimulation();
  ~CommandStartSimulation();
  void Execute();
};
