#include "system_handler.hpp"

int main() {
  SystemHandler main_handler;
  if (main_handler.Run()) {
    return 0;
  } else {
    return -1;
  }
}