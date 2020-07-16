#include <exception>

#include "graphic_handler.hpp"
#include "system_handler.hpp"

int main() {
  SystemHandler main_handler;

  try {
    main_handler.Run();
    return 0;
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}