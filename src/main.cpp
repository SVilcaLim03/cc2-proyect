#include <exception>

union SimulationObject {
  Entity * entity;
  ScenarioObject * scenario_obj;
};

int main() {

  try {
    return 0;
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
