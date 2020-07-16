#include "system_handler.hpp"

#include <string>

#include "button.hpp"
#include "graphic_handler.hpp"
SystemHandler::SystemHandler() {}
SystemHandler::~SystemHandler() {}

void SystemHandler::Run() {
  // init main screen
  GraphicHandler graphic_handler{};
  Button button=Button("user_interface/button");
  // while (true) {
  // }

  // init simulation on start button press

  // while (true) {
  // PrepareObjects();
  // StartSimulation();
  // button press stop simulation and destroy objects created and start
  // simulation again
}

// bool SystemHandler::PrepareObjects() {}
// bool SystemHandler::StartSimulation() {}
