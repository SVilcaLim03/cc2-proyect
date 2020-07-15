#include <exception>

#include "../headers/graphic_handler.hpp"
#include "../headers/system_handler.hpp"

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