#include <exception>
#include "entity.hpp"
#include "scenario.hpp"
union SimulationObject {
  Entity * entity;
  Scenario * scenario;
};

int main() {

  // try {
  //   return 0;
  // } catch (const std::exception& e) {
  //   std::cerr << e.what() << '\n';
  //   return 1;
  // }
  return 0;
}
