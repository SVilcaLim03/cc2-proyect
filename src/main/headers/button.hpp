#pragma once
#include <map>
#include <string>

// #include "u_i_object.hpp"

class Button {
 private:
  friend class SystemHandler;
  enum State { kNeutral, kHovered, kPressed };
  std::string image_path_;
  Button(std::string image_path);

  ~Button();
};
