#pragma once
#include "button.hpp"
#include "button_state.hpp"
class ButtonHovered {
private:
  Button *button_;

public:
  ButtonHovered(Button &button);
  ~ButtonHovered();
  void OnHover();
  void OnClick();
  void HoverOut();
};
